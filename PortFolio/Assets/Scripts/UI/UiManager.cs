using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class UiManager : Singleton_DontDestroy<UiManager>
{
    StringBuilder m_dynamicSb = new StringBuilder();
    StringBuilder m_staticSb = new StringBuilder();
    [Header("Player")]
    [SerializeField]
    PlayerController m_player;
    [Header("")]
    [SerializeField]
    Canvas m_dynamicCanvas;
    [SerializeField]
    Canvas m_staticCanvas;
    [SerializeField]
    GameObject m_resultPanel;
    [Tooltip("UGUI Text for displaying text '완주 기록' or '신기록'")]
    [SerializeField]
    Text m_completeText;
    [Tooltip("UGUI Text for displaying current playing time")]
    [SerializeField]
    Text m_currTimeText;
    [Tooltip("UGUI Text for displaying player's booster count")]
    [SerializeField]
    Text m_boosterCntText;
    [Tooltip("UGUI Text for displaying player's best time")]
    [SerializeField]
    Text m_playerBestTimeText;
    [Tooltip("UGUI Text for displaying current map name")]
    [SerializeField]
    Text m_mapNameText;
    [Tooltip("UGUI Text for displaying crash count")]
    [SerializeField]
    Text m_crashCntText;
    [Tooltip("UGUI Text for displaying total drift distance")]
    [SerializeField]
    Text m_driftDistText;
    [Tooltip("UGUI Text for displaying average speed")]
    [SerializeField]
    Text m_averageSpeedText;
    [Tooltip("UGUI Text for displaying current speed")]
    [SerializeField]
    Text m_speedText;
    [Tooltip("UGUI Text for displaying timer")]
    [SerializeField]
    Text m_timerText;
    [Tooltip("UGUI Text for displaying lap time")]
    [SerializeField]
    Text m_lapTimeText;
    [Tooltip("UGUI Text for displaying current best time")]
    [SerializeField]
    Text m_bestTimeText;
    public void SetUIText(Text textUi, string text)
    {
        textUi.text = text;
    }
    public void SetUITextScale(Text text, float Xvalue, float Yvalue, float Zvalue)
    {
        text.transform.localScale = new Vector3(Xvalue, Yvalue, Zvalue);
    }
    public void SetUITextColor(Text text, float r, float g, float b, float alpha)
    {
        text.color = new Color(r, g, b, alpha);
    }
    public void SetCanvasEnabled(Canvas canvas, bool value)
    {
        canvas.enabled = value;
    }
    public void SetActiveAllCanvas(bool value)
    {
        m_dynamicCanvas.enabled = value;
        m_staticCanvas.enabled = value;
    }
    public void UpdateLapTimeText(int mapLapTime, int currLapTime)
    {
        m_staticSb.Clear();
        m_staticSb.AppendFormat("<color=yellow><size=150>{0}</size></color> /{1}", currLapTime, mapLapTime);
        m_lapTimeText.text = m_staticSb.ToString();
    }
    public void UpdateStaticCanvas(int mapLapTime, int currLapTime, float bestTime)
    {
        UpdateLapTimeText(mapLapTime, currLapTime);
        m_staticSb.Clear();
        GameSystemManager.Instance.ConvetTime(bestTime, out int minute, out int second, out int millisecond);
        m_staticSb.AppendFormat("<b>BEST</b>  /  {0:00}:{1:00}:{2:00}", minute, second, millisecond);
        m_bestTimeText.text = m_staticSb.ToString();
    }
    public void UpdateDynamicCanvas()
    {
        m_dynamicSb.Clear();
        float time = GameSystemManager.Instance.CurrentTime;
        GameSystemManager.Instance.ConvetTime(time, out int minute, out int second, out int millisecond);
        m_dynamicSb.AppendFormat("<b>TIME</b>  /  {0:00}:{1:00}:{2:00}", minute, second, millisecond);
        m_timerText.text = m_dynamicSb.ToString();
        m_dynamicSb.Clear();
        m_dynamicSb.AppendFormat("{0:0.0} km / h", m_player.CurrentSpeed);
        m_speedText.text = m_dynamicSb.ToString();
    }
    public void SetFinishUI(string completeText, float mapBestTime, float currTime)
    {
        int minute, second, millisecond;
        float averageSpeed = GameSystemManager.Instance.AverageSpeed;
        string mapName = DataManager.Instance.GetMapName(GameSystemManager.Instance.CurrMapIndex);
        m_dynamicCanvas.enabled = false;
        m_resultPanel.SetActive(true);

        m_completeText.text = completeText;
        m_mapNameText.text = mapName;
        GameSystemManager.Instance.ConvetTime(currTime, out minute, out second, out millisecond);
        m_currTimeText.text = string.Format("{0:00}:{1:00}:{2:00}", minute, second, millisecond);
        GameSystemManager.Instance.ConvetTime(mapBestTime, out minute, out second, out millisecond);
        m_playerBestTimeText.text = string.Format("주간 최고 기록  <color=yellow><b>{0:00}:{1:00}:{2:00}</b></color>", minute, second, millisecond);
        m_driftDistText.text = string.Format("드리프트 <color=yellow><b>{0}</b></color> m", Mathf.Round(m_player.TotalDriftDist) * 10);
        m_boosterCntText.text = string.Format("부스터 <color=yellow><b>{0}</b></color> 회", m_player.BoosterCnt);
        m_crashCntText.text = string.Format("충돌 횟수 <color=yellow><b>{0}</b></color> 회", m_player.CrashCnt);
        m_averageSpeedText.text = string.Format("평균 속도 <color=yellow><b>{0}</b></color> km/h", Mathf.Round(averageSpeed));
    }
    protected override void OnStart()
    {
        m_resultPanel.SetActive(false);
    }
}
