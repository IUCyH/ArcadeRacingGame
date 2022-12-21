using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GraphicSetting : MonoBehaviour, ISetting
{
    enum Settings
    {
        Resolution,
        ScreenMode,
        FrameRate,
        Texture,
        Shadow,
        Antialiasing,
        Vsync,
        AnisotropicFiltering,
        Max
    }

    [SerializeField]
    IGraphicSetting[] m_graphicSettings;
    [SerializeField]
    Scrollbar m_scrollbar;

    PopupFuncDel m_exitOkFunc;
    PopupFuncDel m_exitCancelFunc;

    const string SettingsAppliedSuccessfully = "그래픽 설정이 적용되었습니다.";

    public void OnPressApplyButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.ButtonClick);
        if (CheckGameSettingsChanged() == false)
        {
            return;
        }

        UpdateGraphicSettings();
        if(!CheckGameSettingsChanged())
        {
            PopupManager.Instance.CreatePopupOK("알림", SettingsAppliedSuccessfully);
        }
    }
    public void Exit()
    {
        if (CheckGameSettingsChanged() == true)
        {
            PopupManager.Instance.CreatePopupOkCancel("알림", "그래픽 설정이 변경되었습니다. 적용하시겠습니까?", m_exitOkFunc, m_exitCancelFunc, "예", "아니요");
        }
        else
        {
            InitScrollBarValue();
            GameSettingManager.Instance.CloseSettingPanel(gameObject);
        }
    }
    public void Open()
    {
        GameSettingManager.Instance.OpenSettingPanel(gameObject);
        SetGraphicSettings();
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }
    public void Init()
    {
        InitScrollBarValue();
        m_exitOkFunc = () => 
        {
            UpdateGraphicSettings();
            if(!CheckGameSettingsChanged())
            {
                PopupManager.Instance.ClosePopup();
                PopupManager.Instance.CreatePopupOK("알림", SettingsAppliedSuccessfully, () => 
                {
                    InitScrollBarValue();
                    PopupManager.Instance.ClosePopup();
                    GameSettingManager.Instance.CloseSettingPanel(gameObject);
                });
            }
        };
        m_exitCancelFunc = () =>
        {
            var length = m_graphicSettings.Length;
            for (int i = 0; i < length; i++)
            {
                if (m_graphicSettings[i].SettingChanged)
                {
                    m_graphicSettings[i].SettingChanged = false;
                }
            }
            InitScrollBarValue();
            PopupManager.Instance.ClosePopup();
            GameSettingManager.Instance.CloseSettingPanel(gameObject);
        };

        m_graphicSettings = GetComponentsInChildren<IGraphicSetting>(true);
        
        var length = m_graphicSettings.Length;
        for(int i = 0; i < length; i++)
        {
            m_graphicSettings[i].Init();
        }

        int width = DataManager.Instance.SettingData.graphicSettings.screenResolutionWidth;
        int height = DataManager.Instance.SettingData.graphicSettings.screenResolutionHeight;
        int screenMode = DataManager.Instance.SettingData.graphicSettings.screenMode;
        int frameRate = DataManager.Instance.SettingData.graphicSettings.frameRate;

        Screen.SetResolution(width, height, (FullScreenMode)screenMode, frameRate);
    }
    void InitScrollBarValue()
    {
        m_scrollbar.value = 1f;
    }
    void SetGraphicSettings()
    {
        int length = m_graphicSettings.Length;

        for (int i = 0; i < length; i++)
        {
            m_graphicSettings[i].SetGraphicSettingToCurrSettingData();
        }
    }
    void UpdateGraphicSettings()
    {
        int length = m_graphicSettings.Length;
        bool isChangedResolutionOrScreenModeOrFrameRate = false;
        for (int i = 0; i < length; i++)
        {
            if (m_graphicSettings[i].SettingChanged)
            {
                if (i == (int)Settings.Resolution || i == (int)Settings.ScreenMode || i == (int)Settings.FrameRate)
                {
                    isChangedResolutionOrScreenModeOrFrameRate = true;
                }
                m_graphicSettings[i].ApplyChangedSetting();
                m_graphicSettings[i].SettingChanged = false;
            }
        }

        if(isChangedResolutionOrScreenModeOrFrameRate)
        {
            var width = DataManager.Instance.SettingData.graphicSettings.screenResolutionWidth;
            var height = DataManager.Instance.SettingData.graphicSettings.screenResolutionHeight;
            var screenMode = (FullScreenMode)DataManager.Instance.SettingData.graphicSettings.screenMode;
            var frameRate = DataManager.Instance.SettingData.graphicSettings.frameRate;

            Screen.SetResolution(width, height, screenMode, frameRate);
        }
        DataManager.Instance.SaveSettingData();
    }
    bool CheckGameSettingsChanged()
    {
        var length = m_graphicSettings.Length;
        for(int i = 0; i < length; i++)
        {
            if(m_graphicSettings[i].SettingChanged)
            {
                return true;
            }
        }
        return false;
    }
}
