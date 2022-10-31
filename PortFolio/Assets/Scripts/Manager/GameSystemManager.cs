using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class GameSystemManager : Singleton<GameSystemManager>
{
    public enum ReverseCheckPos
    {
        None,
        X,
        Z,
        NegativeX,
        NegativeZ,
        Max
    }
    [SerializeField]
    StringBuilder m_sb = new StringBuilder();
    [Tooltip("Check Points List")]
    [SerializeField]
    CheckpointController[] m_checkPoints;
    [SerializeField]
    GameObject m_checkPointObj;
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
    GameObject m_resultPanel;
    [SerializeField]
    Canvas m_countCanvas;
    [SerializeField]
    Canvas m_dynamicCanvas;
    [SerializeField]
    Canvas m_staticCanvas;
    [Tooltip("UGUI Text for displaying count value")]
    [SerializeField]
    Text m_countText;
    [Tooltip("UGUI Text for displaying best time")]
    [SerializeField]
    Text m_bestTimeText;
    [Tooltip("UGUI Text for displaying lap time")]
    [SerializeField]
    Text m_lapTimeText;
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
    int m_minute;
    int m_second;
    int m_millisecond;

    public bool IsEnd { get { return m_finishLapCnt == m_mapLapTime; } }
    public int CurrMapIndex { get { return m_currMapIndex; } }
    IEnumerator Coroutine_CountDown()
    {
        float time = 0f;
        int cnt = 3;
        while (true)
        {
            var scaleValue = m_scaleCurve.Evaluate(time);
            var scale = m_minScale * (1f - scaleValue) + m_maxScale * scaleValue;
            UiManager.Instance.SetUIText(m_countText, cnt.ToString());
            UiManager.Instance.SetUITextScale(m_countText, scale, scale, scale);
            time += Time.deltaTime;

            if (time > 1f)
            {
                cnt--;
                time = 0f;
            }
            if (cnt < 1)
            {
                UiManager.Instance.SetCanvasEnabled(m_dynamicCanvas, true);
                UiManager.Instance.SetCanvasEnabled(m_staticCanvas, true);
                m_player.IsStart = true;
                m_isStart = true;
                m_player.CorutineStart("Coroutine_StartBoost");
                StartCoroutine(Coroutine_Fadeout());
                yield break;
            }
            yield return null;
        }
    }
    IEnumerator Coroutine_Fadeout()
    {
        float time = 0f;
        while (true)
        {
            var alphaValue = m_alphaCurve.Evaluate(time);
            var alpha = m_alphaFrom * (1f - alphaValue) + m_alphaTo * alphaValue;
            UiManager.Instance.SetUITextColor(m_countText, 1f, 1f, 1f, alpha);
            time += Time.deltaTime / m_duration;
            if (time > 1f)
            {
                UiManager.Instance.SetCanvasEnabled(m_countCanvas, false);
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
    public void OnTroughCheckPoint(int checkNum)
    {
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
            UpdateBestTime();
            UpdateLapTime();
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
    void Timer()
    {
        m_sb.Clear();
        m_timer += Time.deltaTime;
        ConvetTime(m_timer, out m_minute, out m_second, out m_millisecond);
        m_sb.AppendFormat("<b>TIME</b>  /  {0:00}:{1:00}:{2:00}", m_minute, m_second, m_millisecond);
        UiManager.Instance.UpdateTimerUI(m_sb);
    }
    void UpdateBestTime()
    {
        if (m_bestTime > m_timer - m_prevTime)
        {
            m_sb.Clear();
            m_bestTime = m_timer - m_prevTime;
            ConvetTime(m_bestTime, out int minute, out int second, out int millisecond);
            m_sb.AppendFormat("<b>BEST</b>  /  {0:00}:{1:00}:{2:00}", minute, second, millisecond);
            UiManager.Instance.SetUIText(m_bestTimeText, m_sb.ToString());
        }
        m_prevTime = m_timer;
    }
    void UpdateLapTime()
    {
        UiManager.Instance.SetUIText(m_lapTimeText, string.Format("<color=yellow><size=150>{0}</size></color> /{1}", m_lapTime, m_mapLapTime));
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
        UiManager.Instance.SetCanvasEnabled(m_dynamicCanvas, false);
        UiManager.Instance.SetCanvasEnabled(m_staticCanvas, false);
        m_warningImage.enabled = false;
        StartCoroutine(Coroutine_CountDown());
    }
    protected override void OnStart()
    {
        m_checkPoints = m_checkPointObj.GetComponentsInChildren<CheckpointController>();
        m_checkPointsLength = m_checkPoints.Length;
        //Debug.Log(m_checkPointList.Count);
        m_mapLapTime = MapManager.Instance.LapTime;
        m_nextCheckPoint = 0;
        m_resultPanel.SetActive(false);
        SetReversePos(ReverseCheckPos.Z);
        UpdateLapTime();
    }
    // Update is called once per frame
    void Update()
    {
        if (m_isStart)
        {
            Timer();
            CheckReverse();
        }
    }
}
