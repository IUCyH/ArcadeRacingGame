using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameSettingManager : Singleton_DontDestroy<GameSettingManager>
{
    enum Setting
    {
        KeySetting,
        GraphicSetting,
        SoundSetting,
        Max
    }

    [SerializeField]
    Text m_backBtnText;
    [SerializeField]
    GameObject m_gameSettingsPanel;
    GameObject m_currOpenSettingPanel;
    [SerializeField]
    List<string> m_backTexts;

    [SerializeField]
    List<GameObject> m_settingPanels;
    [SerializeField]
    Stack<GameObject> m_settingPanelStack = new Stack<GameObject>();

    [SerializeField]
    float m_animPlaySpeed;
    [SerializeField]
    float m_time;
    [SerializeField]
    float m_scaleFrom = 0f;
    [SerializeField]
    float m_scaleTo = 1f;
    bool m_playSettingPanelAnim;
    bool m_playSettingPanelReverseAnim;
    bool m_isPlayingAnim;
    float time;

    public bool IsSettingPanelOpen { get { return m_settingPanelStack.Count > 0; } }

    public void OnPressKeySettingButton()
    {
        if(m_isPlayingAnim)
        {
            return;
        }
        m_isPlayingAnim = true;
        InitAnimation();

        OpenSettingPanel(m_settingPanels[(int)Setting.KeySetting]);
    }
    public void OnPressBackButton()
    {
        switch (LoadSceneManager.Instance.CurrScene)
        {
            case SceneState.Title:
#if UNITY_EDITOR
                UnityEditor.EditorApplication.isPlaying = false;
#else
                Application.Quit();
#endif
                break;
            case SceneState.Lobby:
                DataManager.Instance.Save();
                LoadSceneManager.Instance.LoadSceneAsync(SceneState.Title);
                break;
            case SceneState.Game:
                LoadSceneManager.Instance.LoadSceneAsync(SceneState.Lobby);
                break;
            case SceneState.Max:
                break;
        }
        m_gameSettingsPanel.SetActive(false);
        m_settingPanelStack.Clear();
    }
    public void SetBackBtnText(SceneState sceneState)
    {
        m_backBtnText.text = m_backTexts[(int)sceneState];
    }
    public void OnExitSettingPanel()
    {
        CloseSettingPanel();
    }
    public void SetSettingPanelsActive()
    {
        if(m_isPlayingAnim)
        {
            return;
        }

        InitAnimation();
        m_isPlayingAnim = true;

        if (IsSettingPanelOpen)
        {
            CloseSettingPanel();
        }
        else
        {
            OpenSettingPanel(m_gameSettingsPanel);
        }
    }
    void InitAnimation()
    {
        m_time = 0f;
        m_playSettingPanelReverseAnim = false;
        m_playSettingPanelAnim = false;
    }
    void CloseSettingPanel()
    {
        m_currOpenSettingPanel = m_settingPanelStack.Pop();
        m_playSettingPanelReverseAnim = true;
    }
    void OpenSettingPanel(GameObject settingPanel)
    {
        m_currOpenSettingPanel = settingPanel;
        m_settingPanelStack.Push(settingPanel);

        settingPanel.SetActive(true);
        m_playSettingPanelAnim = true;
    }
    void InitBackTextsList()
    {
        m_backTexts.Add("게임 종료");
        m_backTexts.Add("시작화면으로 돌아가기");
        m_backTexts.Add("메인메뉴로 돌아가기");
    }
    void PlayGameSettingPanelAnimation(GameObject settingPanel)
    {
        float scale = GetScaleValue(m_scaleFrom, m_scaleTo);
        settingPanel.transform.localScale = new Vector3(scale, scale, scale);

        m_time += Time.deltaTime / m_animPlaySpeed;
        time += Time.deltaTime;
        Debug.Log(time);
        if(m_time > 1f)
        {
            m_time = 0f;
            m_isPlayingAnim = false;
            settingPanel.transform.localScale = Vector3.one;
            m_playSettingPanelAnim = false;
        }
    }
    void PlayGameSettingPanelAnimation_Reverse(GameObject settingPanel)
    {
        float scale = GetScaleValue(m_scaleTo, m_scaleFrom);
        settingPanel.transform.localScale = new Vector3(scale, scale, scale);

        m_time += Time.deltaTime / m_animPlaySpeed;
        if (m_time > 1f)
        {
            m_time = 0f;
            m_isPlayingAnim = false;
            settingPanel.SetActive(false);
            m_playSettingPanelReverseAnim = false;
        }
    }
    float GetScaleValue(float from, float to)
    {
        float value = from * (1f - m_time) + to * m_time;
        return value;
    }
    void InitSettingPanels()
    {
        var length = m_settingPanels.Count;
        for(int i = 0; i < length; i++)
        {
            m_settingPanels[i].SetActive(false);
        }
    }
    void OnApplicationQuit()
    {
        //DataManager.Instance.Save();    
    }
    // Start is called before the first frame update
    protected override void OnAwake()
    {
        Application.targetFrameRate = 500;
#if UNITY_EDITOR
        Debug.unityLogger.logEnabled = true;
#else
        Debug.unityLogger.logEnabled = false;
#endif
        m_backTexts = new List<string>();
        InitBackTextsList();
        InitSettingPanels();
        m_gameSettingsPanel.SetActive(false);
    }
    void Update()
    {
        if(m_playSettingPanelAnim)
        {
            PlayGameSettingPanelAnimation(m_currOpenSettingPanel);
        }
        else if(m_playSettingPanelReverseAnim)
        {
            PlayGameSettingPanelAnimation_Reverse(m_currOpenSettingPanel);
        }
    }
}
