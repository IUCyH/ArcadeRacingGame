using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class GameSystemManager : Singleton_DontDestroy<GameSystemManager>
{
    public enum ReverseCheckPos //������ �ν��� ������ �Ǵ� ��ǥ
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
    float m_resetCooldown;
    [SerializeField]
    float m_resetTimer; //���� ��ư�� ���� �� �ٽ� ���� �� �ִ� �ð��� ��� ����
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
    [SerializeField]
    int m_currKartIndex;

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
    public bool IsReverse { get { return m_isReverse; } }
    public int CurrMapIndex { get { return m_currMapIndex; } }
    public float AverageSpeed { get { return (m_twoCpsDist / m_timer) * 3.6f; } }
    public float CurrentTime { get { return m_timer; } }
    public float ResetCoolDown { get { return m_resetCooldown; } }
    IEnumerator Coroutine_CountDown()
    {
        float time = 0f;
        int cnt = 3;
        UiManager.Instance.StartCoroutine(UiManager.Instance.Coroutine_TextScaleFadeIn(m_countText, m_scaleCurve, m_minScale, m_maxScale, 4));
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
                float[] colors = new float[3] { 1f, 1f, 1f };
                UiManager.Instance.SetUIText(m_countText, "����");
                UiManager.Instance.SetActiveAllCanvas(true);
                m_player.StartCoroutine(m_player.Coroutine_StartBoost());
                UiManager.Instance.StartCoroutine(UiManager.Instance.Coroutine_TextAlphaFadeout(m_countText, m_alphaCurve, m_alphaFrom, m_alphaTo, m_duration, colors, () => m_countCanvas.enabled = false));
                m_player.IsStart = true;
                m_isStart = true;
                m_isCanReset = true;
                yield break;
            }
            yield return null;
        }
    }
    public void SetReverse(bool value)
    {
        m_warningImage.enabled = value;
        m_isReverse = value;
    }
    public void SetReverseCheckPos(ReverseCheckPos pos)
    {
        m_reverseCheckPos = pos;
    }
    public void OnThroughCheckPoint(int checkNum, CheckpointController cpObj)
    {
        SetReverseCheckPos(m_reverseCheckPosDic[cpObj.tag]);
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
            m_lapTime++;
            CalculateBestTime();
            UiManager.Instance.UpdateStaticCanvas(m_mapLapTime, m_lapTime, m_bestTime, m_lapTime == m_mapLapTime);
            if (IsEnd)
            {
                OnFinish();
            }
        }
    }
    public void ConvetTime(float time, out int minute, out int second, out int millisecond)
    {
        minute = Mathf.FloorToInt(time / 60f);
        second = (int)time % 60;
        millisecond = (int)(time * 100) % 100;
    }
    void OnFinish()
    {
        string completeText = "���� ���";
        float mapTime = DataManager.Instance.GetMapBestTime(m_currMapIndex);
        if(mapTime > m_timer)
        {
            mapTime = m_timer;
            completeText = "�ű��";
            DataManager.Instance.UpdateMapBestTime(mapTime, m_currMapIndex);
        }
        m_player.IsStart = false;
        m_isStart = false;
        m_player.Break(1000f);
        UiManager.Instance.SetFinishUI(completeText, mapTime, m_timer); //���� ������ �����鸸 �Ű������� �Ѱ���, ���� ���ɼ��� ���� �������� UI Manager���� ó��
        DataManager.Instance.Save();
    }
    public void ResetPlayerPosition()
    {
        if (m_isCanReset)
        {
            var length = ResetPointManager.Instance.ResetPoints.Length;
            Vector3 nearesetPos = Vector3.zero;
            Quaternion resetPointRotation = Quaternion.identity;
            float nearestDist = 9999f;
            float dist = 0f;

            for(int i = 1; i < length; i++)
            {
                var pos = ResetPointManager.Instance.ResetPoints[i].position;
                resetPointRotation = ResetPointManager.Instance.ResetPoints[i].localRotation;
                var dir = (pos - m_player.transform.position);
                var dot = Vector3.Dot(m_player.transform.forward, dir.normalized);
                Debug.Log("Forward : " + resetPointRotation);
                Debug.Log("resetPoint position : " + pos.normalized);
                Debug.Log("Player Forward : " + m_player.transform.forward);
                Debug.Log("index : " + i + " : " + dot);
                if (dot > 0) continue;
                dist = dir.sqrMagnitude;
                if (dist < nearestDist)
                {
                    nearesetPos = pos;
                    nearestDist = dist;
                }
            }
            Debug.Log(nearesetPos);
            m_player.transform.position = nearesetPos;
            m_player.transform.rotation = resetPointRotation;
            m_player.SetState(PlayerController.State.Reset);
            m_isReset = true;
            m_isCanReset = false;
        }
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
                    SetReverse(true);
                }
                else 
                { 
                    SetReverse(false);
                }
                break;
            case ReverseCheckPos.X:
            case ReverseCheckPos.NegativeZ:
                if (m_currPos > m_prevPos)
                {
                    SetReverse(true);
                }
                else
                {
                    SetReverse(false);
                }
                break;
        }
        m_prevPos = m_currPos;
    }
    void LoadPlayerData()
    {
        var carInfo = DataManager.Instance.PlayerData.carsList[m_currKartIndex];
        m_player.InitKartStats(carInfo);
    }
    protected override void OnAwake()
    {
        LoadPlayerData();
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
        var checkPoints = CheckPointManager.Instance.CheckPoints;
        m_checkPointsLength = checkPoints.Length;
        m_twoCpsDist = (checkPoints[m_checkPointsLength - 1].transform.position - checkPoints[0].transform.position).sqrMagnitude;
        m_mapLapTime = MapManager.Instance.LapTime;
        m_nextCheckPoint = 0;
        SetReverseCheckPos(ReverseCheckPos.Z);
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
