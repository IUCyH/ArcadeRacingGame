using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public enum SceneState
{
    None = -1,
    Title,
    Lobby,
    Game,
    Max
}

public class LoadSceneManager : Singleton_DontDestroy<LoadSceneManager>
{    
    StringBuilder m_sb = new StringBuilder();
    AsyncOperation m_loadingInfo;
    [SerializeField]
    GameSettingPanelController m_settingPanel;
    SceneState m_loadState;

    [Header("Loading Window's UIs")]
    [SerializeField]
    GameObject m_loadingPanel;
    [SerializeField]
    Text m_loadingValueText;
    [SerializeField]
    Text m_loadingText; //"�ε���...."�� ǥ�����ִ� UI
    [SerializeField]
    Image m_loadingProgressBar;

    public SceneState CurrScene { get; set; }

    public void SetLoadState(SceneState state)
    {
        m_loadState = state;
    }
    public void LoadSceneAsync(SceneState sceneState)
    {
        if (m_loadState != SceneState.None) return;
        SetLoadState(sceneState);
        CurrScene = sceneState;
        ShowLoadingPanel();
        m_loadingInfo = SceneManager.LoadSceneAsync((int)sceneState);
    }
    void ShowLoadingPanel()
    {
        m_loadingPanel.SetActive(true);
    }
    void HideLoadingPanel()
    {
        m_loadingPanel.SetActive(false);
    }
    protected override void OnStart()
    {
        HideLoadingPanel();
        SetLoadState(SceneState.None);
        CurrScene = SceneState.Title;
        m_settingPanel.SetBackBtnText(SceneState.Title);
    }
    void Update()
    {
        if(m_loadingInfo != null && m_loadState != SceneState.None)
        {
            if (!m_loadingInfo.isDone)
            {
                m_sb.AppendFormat("{0}%", Mathf.CeilToInt(m_loadingInfo.progress * 100));
                m_loadingValueText.text = m_sb.ToString();
                m_loadingProgressBar.fillAmount = m_loadingInfo.progress;
            }
            else
            {
                m_loadingInfo = null;
                m_sb.Append("100%");
                m_loadingValueText.text = m_sb.ToString();
                m_loadingProgressBar.fillAmount = 1f;
                m_settingPanel.SetBackBtnText(m_loadState);
                SetLoadState(SceneState.None);
                HideLoadingPanel();
            }
        }
        m_sb.Clear();
    }
}
