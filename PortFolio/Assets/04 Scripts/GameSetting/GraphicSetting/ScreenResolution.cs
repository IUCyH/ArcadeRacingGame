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

        int index = m_resolutions.IndexOf((widthData, heightData));

        m_resolutionDropdown.value = index;
    }

    public void OnPressScreenResolutionDropDown()
    {
        //Debug.Log("Dropdown Clicked");
        SoundManager.Instance.PlaySFX(SFXClip.ButtonClick);

        int index = m_resolutionDropdown.value;

        int widthData = DataManager.Instance.SettingData.graphicSettings.screenResolutionWidth;
        int heightData = DataManager.Instance.SettingData.graphicSettings.screenResolutionHeight;

        m_screenResolution.width = m_resolutions[index].width;
        m_screenResolution.height = m_resolutions[index].height;

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
        m_resolutionDropdown.options.Clear();

        foreach((int width, int height) resolution in m_resolutions)
        {
            Dropdown.OptionData optionData = new Dropdown.OptionData();
            m_sb.Clear();
            m_sb.AppendFormat("{0} x {1}", resolution.width, resolution.height);
            optionData.text = m_sb.ToString();
            m_resolutionDropdown.options.Add(optionData);
        }
        m_resolutionDropdown.RefreshShownValue();
    }
    void InitResolutionsList()
    {
        int length = Screen.resolutions.Length - 1;
        for (int i = length; i >= 0; i--)
        {
            if(m_resolutions.Contains((Screen.resolutions[i].width, Screen.resolutions[i].height)))
            {
                continue;
            }
            m_resolutions.Add((Screen.resolutions[i].width, Screen.resolutions[i].height));
        }
    }
}