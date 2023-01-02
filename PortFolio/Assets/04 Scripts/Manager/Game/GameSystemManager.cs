using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameSystemManager : Singleton<GameSystemManager>
{
    public enum ReverseDirection //역주행 인식의 기준이 되는 좌표
    {
        None,
        X,
        Z,
        NegativeX,
        NegativeZ,
        Max
    }
    StringBuilder m_sb = new StringBuilder();
    Dictionary<string, ReverseDirection> m_reverseDirDic = new Dictionary<string, ReverseDirection>();
    [SerializeField]
    float m_twoCpsDist;
    [SerializeField]
    ReverseDirection m_currReverseDir;
    [SerializeField]
    int m_finishLapCnt = 0;
    [SerializeField]
    int m_checkPointsLength;
    [SerializeField]
    int m_lapTime = 0;
    [SerializeField]
    int m_mapLapTime;
    [SerializeField]
    int m_nextCheckPoint;
    [SerializeField]
    int m_currMapIndex;
    [SerializeField]
    float m_currPos;
    [SerializeField]
    float m_prevPos;
    [SerializeField]
    float m_resetCooldown;
    [SerializeField]
    float m_resetTimer; //리셋 버튼을 누른 후 다시 누를 수 있는 시간을 재는 변수
    [SerializeField]
    bool m_isStart;
    [SerializeField]
    bool m_isReverse;
    [SerializeField]
    bool m_isReset;
    [SerializeField]
    bool m_isCanReset;

    [Header("Player")]
    [SerializeField]
    PlayerController m_player;

    [Header("UI")]
    [SerializeField]
    AnimationCurve m_scaleCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
    [SerializeField]
    Canvas m_countCanvas;
    [Tooltip("UGUI Text for displaying count value")]
    [SerializeField]
    Text m_countText;
    [Tooltip("UGUI Image for displaying warning icon")]
    [SerializeField]
    Image m_warningImage;
    [Tooltip("float type variable for count text's fade out duration")]
    [SerializeField]
    float m_cntTextAlphaFadeOutduration = 0.5f;
    [Tooltip("float type variable for calculate the time")]
    [SerializeField]
    float m_timer;
    [SerializeField]
    float m_prevTime;
    [SerializeField]
    float m_bestTime;
    float m_maxScale = 1f; //target scale value
    float m_minScale = 0.5f; //start scale value
    float m_alphaFrom = 1f; //start alpha value
    float m_alphaTo = 0f; //target alpha value
   

    public bool IsEnd { get { return m_finishLapCnt == m_mapLapTime; } }
    public bool IsReverse { get { return m_isReverse; } }
    public int CurrMapIndex { get { return m_currMapIndex; } }
    public float AverageSpeed { get { return (m_twoCpsDist / m_timer) * 3.6f; } }
    public float CurrentTime { get { return m_timer; } }
    public float ResetCoolDown { get { return m_resetCooldown; } }

    IEnumerator Coroutine_CountDown()
    {
        float time = 0f;
        int cnt = 3;
        InGameUiManager.Instance.StartCoroutine(InGameUiManager.Instance.Coroutine_TextScaleFadeIn(m_countText, m_scaleCurve, m_minScale, m_maxScale, 4));
        
        while (true)
        {
            m_sb.Clear();
            m_sb.Append(cnt);
            m_countText.text = m_sb.ToString();
            time += Time.deltaTime;

            if (time > 1f)
            {
                cnt--;
                time = 0f;
            }
            if (cnt < 1)
            {
                m_countText.text = "시작";

                InGameUiManager.Instance.SetActiveAllCanvas(true);
                InGameUiManager.Instance.StartCoroutine(InGameUiManager.Instance.Coroutine_TextAlphaFadeout(m_countText, m_cntTextAlphaFadeOutduration, () => m_countCanvas.enabled = false));
                
                m_player.OnGameStart();
                m_isStart = true;
                m_isCanReset = true;
                yield break;
            }
            yield return null;
        }
    }
    void OnReverse(bool isReverse)
    {
        m_warningImage.enabled = isReverse;
        m_isReverse = isReverse;
    }
    void SetReverseDirection(ReverseDirection pos)
    {
        m_currReverseDir = pos;
    }
    public void OnThroughCheckPoint(int checkNum, string checkPointTag)
    {
        SetReverseDirection(m_reverseDirDic[checkPointTag]);
        if (checkNum == m_nextCheckPoint)
        {
            m_nextCheckPoint++;
            if (m_nextCheckPoint > m_checkPointsLength - 1)
            {
                m_nextCheckPoint = 0;
                m_finishLapCnt++;
            }
        }
    }
    public void OnThroughGate()
    {
        if (m_finishLapCnt > 0)
        {
            bool isLastLap;

            m_lapTime++;
            if (m_lapTime == m_mapLapTime) isLastLap = true;
            else isLastLap = false;

            CalculateBestTime();
            InGameUiManager.Instance.UpdateStaticCanvas(m_mapLapTime, m_lapTime, m_bestTime, isLastLap);
            if (IsEnd)
            {
                OnFinish();
            }
        }
    }
    void OnFinish()
    {
        string completeText = "완주 기록";
        float mapTime = DataManager.Instance.GetMapBestTime(m_currMapIndex);

        if(mapTime > m_timer)
        {
            mapTime = m_timer;
            completeText = "신기록";
            DataManager.Instance.UpdateMapBestTime(mapTime, m_currMapIndex);
        }
        m_player.IsStart = false;
        m_isStart = false;
        m_player.Break(1000f);
        InGameUiManager.Instance.SetFinishUI(completeText, mapTime, m_timer); //변동 가능한 정보들만 매개변수로 넘겨줌, 변동 가능성이 없는 정보들은 UI Manager에서 처리
        DataManager.Instance.SaveAll();
    }
    public void ResetPlayerPosition()
    {
        if (m_isCanReset)
        {
            var nearestPoint = FindNearestResetPoint();
            
            nearestPoint.y = m_player.transform.position.y;
            SetPlayerPosition(nearestPoint);
            SetPlayerForward();
            m_player.SetState(PlayerController.State.Reset);
            
            m_isReset = true;
            m_isCanReset = false;
            Debug.Log($"player forward : {m_player.transform.forward}");
        }
    }

    Vector3 FindNearestResetPoint()
    {
        int length = ResetPointManager.Instance.ResetPoints.Length;
        
        Vector3 nearestPoint = Vector3.zero;
        float nearestDist = float.PositiveInfinity;

        for(int i = 1; i < length; i++) //배열의 첫번째 오브젝트는 리셋 포인트들의 부모 오브젝트이기 때문에 제외
        {
            var pos = ResetPointManager.Instance.ResetPoints[i].position;
            var dir = pos - m_player.transform.position;
            var dotResult = Vector3.Dot(m_player.transform.forward, dir.normalized);
            if (dotResult > 0) continue; //리셋 포인트의 위치가 플레이어의 위치보다 앞에 있다면 제외

            var dist = dir.sqrMagnitude;
            if (dist < nearestDist)
            {
                nearestPoint = pos;
                nearestDist = dist;
            }
        }

        return nearestPoint;
    }

    void SetPlayerForward()
    {
        switch (m_currReverseDir)
        {
            case ReverseDirection.Z:
            case ReverseDirection.X:
                m_player.transform.forward = Vector3.forward;
                break;
            case ReverseDirection.NegativeZ:
            case ReverseDirection.NegativeX:
                m_player.transform.forward = Vector3.back;
                break;
        }
    }

    void SetPlayerPosition(Vector3 pos)
    {
        m_player.transform.position = pos;
    }
    void CalculateBestTime()
    {
        if (m_bestTime > m_timer - m_prevTime)
        {
            m_bestTime = m_timer - m_prevTime;
        }
        m_prevTime = m_timer;
    }
    void CheckReverse()
    {
        if (m_currReverseDir == ReverseDirection.Z || m_currReverseDir == ReverseDirection.NegativeZ)
        {
            m_currPos = m_player.transform.position.z;
        }
        if(m_currReverseDir == ReverseDirection.X || m_currReverseDir == ReverseDirection.NegativeX)
        {
            m_currPos = m_player.transform.position.x;
        }
        switch (m_currReverseDir)
        {
            case ReverseDirection.Z:
            case ReverseDirection.NegativeX:
                if (m_currPos < m_prevPos)
                {
                    OnReverse(true);
                }
                else 
                {
                    OnReverse(false);
                }
                break;
            case ReverseDirection.X:
            case ReverseDirection.NegativeZ:
                if (m_currPos > m_prevPos)
                {
                    OnReverse(true);
                }
                else
                {
                    OnReverse(false);
                }
                break;
        }
        m_prevPos = m_currPos;
    }
    void LoadData()
    {
        var playerData = DataManager.Instance.PlayerData;
        var mapInfo = DataManager.Instance.PlayerData.mapList[m_currMapIndex];
        m_player.InitPlayer(playerData);
        MapManager.Instance.InitMap(mapInfo);
    }
    protected override void OnAwake()
    {
        m_currMapIndex = DataManager.Instance.PlayerData.currMap;
        LoadData();
        InGameUiManager.Instance.SetActiveAllCanvas(false);
        m_warningImage.enabled = false;

        m_reverseDirDic.Add("Reverse_X", ReverseDirection.X);
        m_reverseDirDic.Add("Reverse_Z", ReverseDirection.Z);
        m_reverseDirDic.Add("Reverse_NegativeX", ReverseDirection.NegativeX);
        m_reverseDirDic.Add("Reverse_NegativeZ", ReverseDirection.NegativeZ);

        StartCoroutine(Coroutine_CountDown());
    }
    protected override void OnStart()
    {
        var checkPoints = CheckPointManager.Instance.CheckPoints;
        m_checkPointsLength = checkPoints.Length;
        m_twoCpsDist = (checkPoints[m_checkPointsLength - 1].transform.position - checkPoints[0].transform.position).sqrMagnitude;
        m_mapLapTime = MapManager.Instance.LapTime;
        m_nextCheckPoint = 0;
        SetReverseDirection(ReverseDirection.Z);
        InGameUiManager.Instance.UpdateLapTimeText(m_mapLapTime, m_lapTime);
        InGameUiManager.Instance.SetUserProfile();
    }
    // Update is called once per frame
    void Update()
    {
        if (m_isStart)
        {
            m_timer += Time.deltaTime;
            InGameUiManager.Instance.UpdateDynamicCanvas();
            CheckReverse();
        }
        if (m_isReset)
        {
            m_resetTimer += Time.deltaTime;
            if (m_resetTimer > m_resetCooldown)
            {
                m_isCanReset = true;
                m_isReset = false;
                m_resetTimer = 0f;
            }
        }
    }
}
