using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class UiManager : Singleton_DontDestroy<UiManager>
{
    [Header("Player")]
    [SerializeField]
    PlayerController m_player;
    [Header("")]
    [SerializeField]
    Canvas m_dynamicCanvas;
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
    [Tooltip("UGUI Text for displaying timer")]
    [SerializeField]
    Text m_timerText;
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
    public void UpdateTimerUI(StringBuilder time)
    {
        m_timerText.text = time.ToString();
    }
    public void SetFinishUI(string completeText, float mapBestTime, float currTime)
    {
        int minute, second, millisecond;
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
    }
}
