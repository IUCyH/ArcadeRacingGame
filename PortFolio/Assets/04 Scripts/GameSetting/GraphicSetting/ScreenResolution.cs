using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Text;

public class ScreenResolution : MonoBehaviour, IGraphicSetting
{
    StringBuilder m_sb = new StringBuilder();
    [SerializeField]
    GraphicSetting m_graphicSetting;
    [SerializeField]
    Dropdown m_resolutionDropdown;
    [SerializeField]
    List<(int width, int height)> m_resolutions = new List<(int height, int width)>();

    int m_maxResolutionIndex;
    (int width, int height) m_screenResolution;

    public bool SettingChanged { get; set; }

    public void ApplyChangedSetting()
    {
        DataManager.Instance.UpdateScreenResolution(m_screenResolution.width, m_screenResolution.height);
    }

    public void SetGraphicSettingToCurrSettingData()
    {
        var widthData = DataManager.Instance.SettingData.graphicSettings.screenResolutionWidth;
        var heightData = DataManager.Instance.SettingData.graphicSettings.screenResolutionHeight;
        Debug.Log("Width : " + widthData + "Height : " + heightData);
        int index = m_resolutions.IndexOf((widthData, heightData));

        m_resolutionDropdown.value = index - m_maxResolutionIndex;
    }

    public void OnPressScreenResolutionDropDown()
    {
        int index = m_resolutionDropdown.value;

        int widthData = DataManager.Instance.SettingData.graphicSettings.screenResolutionWidth;
        int heightData = DataManager.Instance.SettingData.graphicSettings.screenResolutionHeight;
        int resolutionIndex = m_maxResolutionIndex + index;

        m_screenResolution.width = m_resolutions[resolutionIndex].width;
        m_screenResolution.height = m_resolutions[resolutionIndex].height;

        if (widthData != m_screenResolution.width && heightData != m_screenResolution.height)
        {
            SettingChanged = true;
        }
        else
        {
            SettingChanged = false;
        }
    }

    public void Init()
    {
        InitResolutionsList();
        InitDropdown();
        SettingChanged = false;
    }
    void InitDropdown()
    {
        var length = m_resolutions.Count;
        m_resolutionDropdown.options.Clear();

        for (int i = m_maxResolutionIndex; i < length; i++)
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

        m_maxResolutionIndex = m_resolutions.IndexOf((m_graphicSetting.DeviceResolution.width, m_graphicSetting.DeviceResolution.height));
    }
}