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
    Resolution m_currResolution;

    [SerializeField]
    List<(int width, int height)> m_resolutions = new List<(int height, int width)>();
    int m_maxResolutionIndex;
    
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
        m_currResolution = Screen.currentResolution;
        InitResolutionsList();
        m_maxResolutionIndex = m_resolutions.IndexOf((m_currResolution.width, m_currResolution.height));
        InitResolutionDropdownOptions();
    }
    public void OnPressScreenResolutionDropDown(int index)
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
