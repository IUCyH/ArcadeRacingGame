using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GraphicSetting : MonoBehaviour, ISetting
{
    Resolution m_currDeviceResolution;

    [SerializeField]
    Text m_screenModeText;

    List<string> m_screenModes = new List<string>(3);
    
    int m_maxScreenModeIndex;

    [SerializeField]
    IGraphicSetting[] m_graphicSettings;

    public Resolution DeviceResolution { get { return m_currDeviceResolution; } }

    public void Exit()
    {
        if(CheckGameSettingsChanged() == true)
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
        m_graphicSettings = GetComponentsInChildren<IGraphicSetting>(true);
        m_currDeviceResolution = Screen.currentResolution;
        var length = m_graphicSettings.Length;

        for(int i = 0; i < length; i++)
        {
            m_graphicSettings[i].Init();
        }
    }
    void InitScreenModesList()
    {
        m_screenModes.Add("전체화면");
        m_screenModes.Add("테두리 없는 창모드");
        m_screenModes.Add("창모드");

        m_maxScreenModeIndex = m_screenModes.Count;
    }
    void UpdateGraphicSettings()
    {
        int length = m_graphicSettings.Length;
        for(int i = 0; i < length; i++)
        {
            if (m_graphicSettings[i].SettingChanged)
            {
                m_graphicSettings[i].ApplyChangedSetting();
            }
        }
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
