using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class GameSystemManager : Singleton<GameSystemManager>
{
    [SerializeField]
    StringBuilder m_sb = new StringBuilder();
    [Tooltip("Check Points List")]
    [SerializeField]
    CheckpointController[] m_checkPoints;
    [SerializeField]
    GameObject m_checkPointObj;
    [SerializeField]
    MapController m_map;
    [SerializeField]
    List<bool> m_checkPointList;
    [SerializeField]
    int m_checkPointsLength;
    [SerializeField]
    int m_lapTime = 0;
    [SerializeField]
    int m_mapLapTime;
    [SerializeField]
    int m_nextCheckPoint;
    [SerializeField]
    float m_prevDist;
    [SerializeField]
    float m_currDist;
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
    [SerializeField]
    Canvas m_dashBoardCanvas;
    [Tooltip("UGUI Text for displaying count value")]
    [SerializeField]
    Text m_countText;
    [Tooltip("UGUI Text for displaying timer")]
    [SerializeField]
    Text m_timerText;
    [Tooltip("UGUI Text for displaying lap time")]
    [SerializeField]
    Text m_lapTimeText;
    [Tooltip("float type variable for count text's fade out duration")]
    [SerializeField]
    float m_duration = 0.5f;
    [Tooltip("float type variable for calculate the time")]
    [SerializeField]
    float m_timer;
    float m_maxScale = 1f; //target scale value
    float m_minScale = 0.5f; //start scale value
    float m_alphaFrom = 1f; //start alpha value
    float m_alphaTo = 0f; //target alpha value

    public bool IsEnd { get { return m_lapTime == m_mapLapTime && IsCompleteLap; } }
    public bool IsCompleteLap { get { return m_checkPointList[m_checkPointsLength - 1] == true; } }
    IEnumerator Coroutine_CountDown()
    {
        float time = 0f;
        int cnt = 3;
        while (true)
        {
            var scaleValue = m_scaleCurve.Evaluate(time);
            var scale = m_minScale * (1f - scaleValue) + m_maxScale * scaleValue;
            m_countText.text = cnt.ToString();
            m_countText.transform.localScale = new Vector3(scale, scale, scale);
            time += Time.deltaTime;

            if (time > 1f)
            {
                cnt--;
                time = 0f;
            }
            if (cnt < 1)
            {
                m_dashBoardCanvas.enabled = true;
                m_player.IsStart = true;
                m_timer = 0f;
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
            m_countText.color = new Color(1f, 1f, 1f, alpha);
            time += Time.deltaTime / m_duration;
            if (time > 1f)
            {
                m_countCanvas.enabled = false;
                yield break;
            }
            yield return null;
        }
    }
    void Timer()
    {
        m_sb.Clear();
        m_timer += Time.deltaTime;
        int minute = Mathf.FloorToInt(m_timer / 60f);
        int second = (int)m_timer % 60;
        int millisecond = (int)(m_timer * 100) % 100;
        m_sb.AppendFormat("<b>TIME</b>  /  {0:00}:{1:00}:{2:00}", minute, second, millisecond);
        m_timerText.text = m_sb.ToString();
    }
    public void OnTroughCheckPoint(int checkNum)
    {
        if(checkNum == m_nextCheckPoint)
        {
            m_nextCheckPoint = (m_nextCheckPoint + 1) % m_checkPointsLength;
            m_checkPointList[checkNum] = true;
        }
    }
    void CheckReverse()
    {
        m_currDist = GetDistance(m_player.gameObject.transform, m_checkPoints[m_nextCheckPoint].transform);
        //Debug.Log("curr : " + m_currDist);
        //Debug.Log("prev : " + m_prevDist);
        if (m_prevDist < m_currDist)
        {
            //Debug.Log("Reverse!");
        }
        else
            //Debug.Log("Correct!");
        m_prevDist = m_currDist;
    }
    float GetDistance(Transform player, Transform target)
    {
        return (target.position - player.position).sqrMagnitude;
    }
    public void IncreaseLapTime()
    {
        m_lapTime++;
        UpdateLapTime();
    }
    public void SetLastCheckPointValue(bool value)
    {
        m_checkPointList[m_checkPointsLength - 1] = value;
    }
    void UpdateLapTime()
    {
        m_lapTimeText.text = string.Format("<color=yellow><size=150>{0}</size></color> /{1}", m_lapTime, m_mapLapTime);
    }
    protected override void OnAwake()
    {
        m_dashBoardCanvas.enabled = false;
        StartCoroutine(Coroutine_CountDown());
    }
    protected override void OnStart()
    {
        m_checkPoints = m_checkPointObj.GetComponentsInChildren<CheckpointController>();
        m_checkPointsLength = m_checkPoints.Length;
        for(int i = 0; i < m_checkPointsLength; i++)
        {
            bool check = false;
            m_checkPointList.Add(check);
        }
        Debug.Log(m_checkPointList.Count);
        m_mapLapTime = m_map.LapTime;
        m_nextCheckPoint = 0;
        m_prevDist = GetDistance(m_player.transform, m_checkPoints[m_nextCheckPoint].transform);
        UpdateLapTime();
    }
    // Update is called once per frame
    void Update()
    {
        Timer();
        CheckReverse();
    }
}
