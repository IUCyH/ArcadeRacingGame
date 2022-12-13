using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class GraphicSetting : MonoBehaviour, ISetting
{
    StringBuilder m_sb = new StringBuilder();
    [SerializeField]
    Dropdown m_resolutionDropdown;
    Resolution m_currDeviceResolution;

    [SerializeField]
    List<(int width, int height)> m_resolutions = new List<(int height, int width)>();
    int m_maxResolutionIndex;

    (int width, int height) m_screenResolution;
    int m_screenMode;
    int m_frameRate;
    int m_textureQuality;
    int m_shadowQuality;
    int m_antiAliasing;
    int m_vSync;
    int m_anisotropicFiltering;

    public bool IsGraphicSettingsChanged { get; set; }

    public void Exit()
    {
        if(IsGraphicSettingsChanged)
        {
            PopupManager.Instance.CreatePopupOkCancel("알림", "그래픽 설정이 변경되었습니다. 적용하시겠습니까?", null, null, "예", "아니요");
        }
        else
        {
            GameSettingManager.Instance.CloseSettingPanel(gameObject);
        }
    }
    public void Open()
    {
        GameSettingManager.Instance.OpenSettingPanel(gameObject);
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }
    public void Init()
    {
        m_currDeviceResolution = Screen.currentResolution;
        InitResolutionsList();
        m_maxResolutionIndex = m_resolutions.IndexOf((m_currDeviceResolution.width, m_currDeviceResolution.height));
        InitResolutionDropdownOptions();
    }
    public void OnPressScreenResolutionDropDown(int index)
    {
        var screenResolutionData = DataManager.Instance.SettingData.graphicSettings.screenResolution;
        var resolutionIndex = m_maxResolutionIndex + index;
        m_screenResolution.width = m_resolutions[resolutionIndex].width;
        m_screenResolution.height = m_resolutions[resolutionIndex].height;
        if(screenResolutionData != m_screenResolution)
        {
            IsGraphicSettingsChanged = true;
        }
    } 
    public void ApplySettings()
    {

    }
    void InitResolutionDropdownOptions()
    {
        var length = m_resolutions.Count;
        m_resolutionDropdown.options.Clear();

        for(int i = m_maxResolutionIndex; i < length; i++)
        {
            Dropdown.OptionData optionData = new Dropdown.OptionData();
            m_sb.Clear();
            m_sb.AppendFormat("{0} x {1}", m_resolutions[i].width, m_resolutions[i].height);
            optionData.text = m_sb.ToString();
            m_resolutionDropdown.options.Add(optionData);
        }
    }
    void InitResolutionsList()
    {
        m_resolutions.Add((7680, 4320));
        m_resolutions.Add((3840, 2160));
        m_resolutions.Add((2560, 1440));
        m_resolutions.Add((1920, 1080));
        m_resolutions.Add((1600, 900));
        m_resolutions.Add((1366, 768));
        m_resolutions.Add((1280, 720));
        m_resolutions.Add((960, 540));
    }
}
