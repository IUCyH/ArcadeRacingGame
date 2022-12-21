using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum Setting
{
    None = -1,
    KeySetting,
    GraphicSetting,
    SoundSetting,
    Max
}

public class GameSettingManager : Singleton_DontDestroy<GameSettingManager>
{
    ISetting[] m_settingPanels;
    Setting m_currOpenSettingPanel;
    [SerializeField]
    Button[] m_settingButtons;
    [SerializeField]
    Text m_backBtnText;
    [SerializeField]
    Canvas m_settingCanvas;
    [SerializeField]
    List<string> m_backTexts;
    [SerializeField]
    GameObject m_optionsPanel;
    GameObject m_settingPanel;

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

    public bool IsGameOptionsPanelOpen { get { return m_optionsPanel.activeSelf; } }

    public void OpenOptionsPanel()
    {
        OpenSettingPanel(m_optionsPanel);
    }
    void OnPressSettingButton(Setting settingPanel)
    {
        m_currOpenSettingPanel = settingPanel;
        m_settingPanels[(int)m_currOpenSettingPanel].Open();
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
                DataManager.Instance.SaveAll();
                LoadSceneManager.Instance.LoadSceneAsync(SceneState.Title);
                break;
            case SceneState.Game:
                LoadSceneManager.Instance.LoadSceneAsync(SceneState.Lobby);
                break;
        }
        SetCanvasEnabled(false);
        m_optionsPanel.SetActive(false);
    }
    public void SetBackBtnText(SceneState sceneState)
    {
        m_backBtnText.text = m_backTexts[(int)sceneState];
    }
    public void OnExitSettingPanel()
    {
        if(m_currOpenSettingPanel != Setting.None)
        {
            ExitSettingPanel();
        }
    }
    public void OnExitGameSettingsPanel()
    {
        if (m_currOpenSettingPanel == Setting.None)
        {
            CloseSettingPanel(m_optionsPanel);
        }
    }
    public void SetSettingPanelsActive()
    {
        if(m_currOpenSettingPanel != Setting.None)
        {
            ExitSettingPanel();
        }
        else if(IsGameOptionsPanelOpen)
        {
            CloseSettingPanel(m_optionsPanel);
        }
        else
        {
            OpenSettingPanel(m_optionsPanel);
        }    
    }
    public void OpenSettingPanel(GameObject settingPanel)
    {
        if (m_isPlayingAnim)
        {
            return;
        }
        InitAnimation();
        SetCanvasEnabled(true);

        m_settingPanel = settingPanel;

        settingPanel.SetActive(true);
        m_playSettingPanelAnim = true;
        m_isPlayingAnim = true;
        SoundManager.Instance.PlaySFX(SFXClip.ButtonClick);
    }
    public void CloseSettingPanel(GameObject settingPanel)
    {
        if (m_isPlayingAnim)
        {
            return;
        }
        InitAnimation();
        m_currOpenSettingPanel = Setting.None;

        m_settingPanel = settingPanel;
        m_playSettingPanelReverseAnim = true;
        m_isPlayingAnim = true;
        SoundManager.Instance.PlaySFX(SFXClip.Close);
    }
    void ExitSettingPanel()
    {
        m_settingPanels[(int)m_currOpenSettingPanel].Exit();
    }
    void InitAnimation()
    {
        m_time = 0f;
        m_playSettingPanelReverseAnim = false;
        m_playSettingPanelAnim = false;
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
        if(m_time > 1f)
        {
            m_time = 0f;
            settingPanel.transform.localScale = Vector3.one;
            m_playSettingPanelAnim = false;
            m_isPlayingAnim = false;
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
            settingPanel.SetActive(false);
            m_playSettingPanelReverseAnim = false;
            m_isPlayingAnim = false;

            if(!IsGameOptionsPanelOpen)
                SetCanvasEnabled(false);
        }
    }
    float GetScaleValue(float from, float to)
    {
        float value = from * (1f - m_time) + to * m_time;
        return value;
    }
    void HideSettingPanels()
    {
        var length = m_settingPanels.Length;
        for(int i = 0; i < length; i++)
        {
            m_settingPanels[i].Hide();
        }
    }
    void SetCanvasEnabled(bool value)
    {
        if(m_settingCanvas.enabled == value)
        {
            return;
        }
        m_settingCanvas.enabled = value;
    }
    void OnApplicationQuit()
    {
        //DataManager.Instance.Save();    
    }
    // Start is called before the first frame update
    protected override void OnAwake()
    {
#if UNITY_EDITOR
        Debug.unityLogger.logEnabled = true;
#else
        Debug.unityLogger.logEnabled = false;
#endif
        m_backTexts = new List<string>();
        InitBackTextsList();
    }
    protected override void OnStart()
    {
        SetCanvasEnabled(false);
        m_currOpenSettingPanel = Setting.None;
        m_settingPanels = GetComponentsInChildren<ISetting>(true);
        m_settingButtons = m_optionsPanel.GetComponentsInChildren<Button>();

        var settingPanels = m_settingPanels.Length;
        for(int i = 0; i < settingPanels; i++)
        {
            m_settingPanels[i].Init();
        }

        var buttons = m_settingButtons.Length - 2; //back 버튼과 exit 버튼을 제외시키기 위해
        for(int i = 0; i < buttons; i++)
        {
            var setting = (Setting)i;
            m_settingButtons[i].onClick.AddListener(() => OnPressSettingButton(setting));
        }
        HideSettingPanels();
        m_optionsPanel.SetActive(false);
    }

    void Update()
    {
        if(m_playSettingPanelAnim)
        {
            PlayGameSettingPanelAnimation(m_settingPanel);
        }
        else if(m_playSettingPanelReverseAnim)
        {
            PlayGameSettingPanelAnimation_Reverse(m_settingPanel);
        }
    }
}
