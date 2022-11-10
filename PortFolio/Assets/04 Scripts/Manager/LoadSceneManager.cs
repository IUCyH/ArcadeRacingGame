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
    SceneState m_sceneState;

    [Header("Loading Window's UIs")]
    [SerializeField]
    GameObject m_loadingPanel;
    [SerializeField]
    Text m_loadingValueText;
    [SerializeField]
    Text m_loadingText; //"로딩중...."을 표시해주는 UI
    [SerializeField]
    Image m_loadingProgressBar;

    public void LoadSceneAsync(SceneState sceneState)
    {
        if (m_sceneState != SceneState.None) return;
        m_loadingInfo = SceneManager.LoadSceneAsync((int)sceneState);
        m_sceneState = sceneState;
        ShowLoadingPanel();
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
    }
    void Update()
    {
        if(m_loadingInfo != null && m_sceneState != SceneState.None)
        {
            m_sb.AppendFormat("{0}%", Mathf.CeilToInt(m_loadingInfo.progress * 100));
            m_loadingValueText.text = m_sb.ToString();
            m_loadingProgressBar.fillAmount = m_loadingInfo.progress;
        }
        else
        {
            m_sb.Append("100%");
            m_loadingValueText.text = m_sb.ToString();
            m_loadingProgressBar.fillAmount = 1f;
            m_loadingInfo = null;
            m_sceneState = SceneState.None;
            Invoke("HideLoadingPanel", 2f);
        }
        m_sb.Clear();
    }
}
