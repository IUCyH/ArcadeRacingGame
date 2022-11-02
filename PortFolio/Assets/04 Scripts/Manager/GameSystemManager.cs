using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class GameSystemManager : Singleton<GameSystemManager>
{
    public enum ReverseCheckPos //역주행 인식의 기준이 되는 좌표
    {
        None,
        X,
        Z,
        NegativeX,
        NegativeZ,
        Max
    }
    StringBuilder m_sb = new StringBuilder();
    Dictionary<string, ReverseCheckPos> m_reverseCheckPosDic = new Dictionary<string, ReverseCheckPos>();
    [Tooltip("Check Points array")]
    [SerializeField]
    CheckpointController[] m_checkPoints;
    [SerializeField]
    GameObject m_checkPointObj;
    [SerializeField]
    float m_twoCpsDist;
    [SerializeField]
    ReverseCheckPos m_reverseCheckPos;
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
    bool m_isStart;
    [Header("Player")]
    [SerializeField]
    PlayerController m_player;
    [Header("UI")]
    [SerializeField]
    AnimationCurve m_scaleCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
    [SerializeField]
    AnimationCurve m_alphaCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
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
    float m_duration = 0.5f;
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
    public int CurrMapIndex { get { return m_currMapIndex; } }
    public float AverageSpeed { get { return (m_twoCpsDist / m_timer) * 3.6f; } }
    public float CurrentTime { get { return m_timer; } }
    IEnumerator Coroutine_CountDown()
    {
        float time = 0f;
        int cnt = 3;
        UiManager.Instance.StartCoroutine(UiManager.Instance.Coroutine_TextScaleFadeIn(m_countText, m_scaleCurve, m_minScale, m_maxScale, 3));
        while (true)
        {
            m_sb.Clear();
            m_sb.Append(cnt);
            UiManager.Instance.SetUIText(m_countText, m_sb.ToString());
            time += Time.deltaTime;

            if (time > 1f)
            {
                cnt--;
                time = 0f;
            }
            if (cnt < 1)
            {
                UiManager.Instance.SetActiveAllCanvas(true);
                m_player.StartCoroutine(m_player.Coroutine_StartBoost());
                UiManager.Instance.StartCoroutine(UiManager.Instance.Coroutine_TextAlphaFadeout(m_countText, m_alphaCurve, m_alphaFrom, m_alphaTo, m_duration, () => m_countCanvas.enabled = false));
                m_player.IsStart = true;
                m_isStart = true;
                yield break;
            }
            yield return null;
        }
    }
    public void OnReverse(bool value)
    {
        m_warningImage.enabled = value;
    }
    public void SetReversePos(ReverseCheckPos pos)
    {
        m_reverseCheckPos = pos;
    }
    public void OnTroughCheckPoint(int checkNum, CheckpointController cpObj)
    {
        SetReversePos(m_reverseCheckPosDic[cpObj.tag]);
        if (checkNum == m_nextCheckPoint)
        {
            m_nextCheckPoint++;
            if (m_nextCheckPoint > m_checkPointsLength - 1)
            {
                m_nextCheckPoint = 0;
                m_finishLapCnt++;
            }
            //Debug.Log(m_nextCheckPoint);
        }
    }
    public void OnTroughGate()
    {
        if (m_finishLapCnt > 0)
        {
            m_lapTime++;
            CalculateBestTime();
            UiManager.Instance.UpdateStaticCanvas(m_mapLapTime, m_lapTime, m_bestTime);
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
        m_player.Break();
        UiManager.Instance.SetFinishUI(completeText, mapTime, m_timer); //변동 가능한 정보들만 매개변수로 넘겨줌, 변동 가능성이 없는 정보들은 UI Manager에서 처리
        DataManager.Instance.Save();
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
        if (m_reverseCheckPos == ReverseCheckPos.Z || m_reverseCheckPos == ReverseCheckPos.NegativeZ)
        {
            m_currPos = m_player.transform.position.z;
        }
        if(m_reverseCheckPos == ReverseCheckPos.X || m_reverseCheckPos == ReverseCheckPos.NegativeX)
        {
            m_currPos = m_player.transform.position.x;
        }
        switch (m_reverseCheckPos)
        {
            case ReverseCheckPos.Z:
            case ReverseCheckPos.NegativeX:
                if (m_currPos < m_prevPos)
                {
                    OnReverse(true);
                }
                else
                {
                    OnReverse(false);
                }
                break;
            case ReverseCheckPos.X:
            case ReverseCheckPos.NegativeZ:
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
    
    public void ConvetTime(float time, out int minute, out int second, out int millisecond)
    {
        minute = Mathf.FloorToInt(time / 60f);
        second = (int)time % 60;
        millisecond = (int)(time * 100) % 100;
    }
    protected override void OnAwake()
    {
        UiManager.Instance.SetActiveAllCanvas(false);
        m_warningImage.enabled = false;
        m_reverseCheckPosDic.Add("Reverse_X", ReverseCheckPos.X);
        m_reverseCheckPosDic.Add("Reverse_Z", ReverseCheckPos.Z);
        m_reverseCheckPosDic.Add("Reverse_NegativeX", ReverseCheckPos.NegativeX);
        m_reverseCheckPosDic.Add("Reverse_NegativeZ", ReverseCheckPos.NegativeZ);
        StartCoroutine(Coroutine_CountDown());
    }
    protected override void OnStart()
    {
        m_checkPoints = m_checkPointObj.GetComponentsInChildren<CheckpointController>();
        m_checkPointsLength = m_checkPoints.Length;
        //Debug.Log(m_checkPointList.Count);
        m_twoCpsDist = (m_checkPoints[m_checkPointsLength - 1].transform.position - m_checkPoints[0].transform.position).sqrMagnitude;
        m_mapLapTime = MapManager.Instance.LapTime;
        m_nextCheckPoint = 0;
        SetReversePos(ReverseCheckPos.Z);
        UiManager.Instance.UpdateLapTimeText(m_mapLapTime, m_lapTime);
    }
    // Update is called once per frame
    void Update()
    {
        if (m_isStart)
        {
            m_timer += Time.deltaTime;
            UiManager.Instance.UpdateDynamicCanvas();
            CheckReverse();
        }
    }
}
