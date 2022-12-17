using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GraphicSetting : MonoBehaviour, ISetting
{
    Resolution m_currDeviceResolution;

    [SerializeField]
    IGraphicSetting[] m_graphicSettings;

    PopupFuncDel m_exitOkFunc;
    PopupFuncDel m_exitCancelFunc;

    const string SettingsAppliedSuccessfully = "�׷��� ������ ����Ǿ����ϴ�.";

    public Resolution DeviceResolution { get { return m_currDeviceResolution; } }

    public void OnPressApplyButton()
    {
        if(CheckGameSettingsChanged() == false)
        {
            return;
        }

        UpdateGraphicSettings();
        if(!CheckGameSettingsChanged())
        {
            PopupManager.Instance.CreatePopupOK("�˸�", SettingsAppliedSuccessfully);
        }
    }
    public void Exit()
    {
        if(CheckGameSettingsChanged() == true)
        {
            PopupManager.Instance.CreatePopupOkCancel("�˸�", "�׷��� ������ ����Ǿ����ϴ�. �����Ͻðڽ��ϱ�?", m_exitOkFunc, m_exitCancelFunc, "��", "�ƴϿ�");
        }
        else
        {
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
        m_exitOkFunc = () => 
        {
            UpdateGraphicSettings();
            if(!CheckGameSettingsChanged())
            {
                PopupManager.Instance.ClosePopup();
                PopupManager.Instance.CreatePopupOK("�˸�", SettingsAppliedSuccessfully, () => 
                {
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
            PopupManager.Instance.ClosePopup();
            GameSettingManager.Instance.CloseSettingPanel(gameObject);
        };

        m_graphicSettings = GetComponentsInChildren<IGraphicSetting>(true);
        m_currDeviceResolution = Screen.currentResolution;
        var length = m_graphicSettings.Length;

        for(int i = 0; i < length; i++)
        {
            m_graphicSettings[i].Init();
        }

        int width = DataManager.Instance.SettingData.graphicSettings.screenResolutionWidth;
        int height = DataManager.Instance.SettingData.graphicSettings.screenResolutionHeight;
        int screenMode = DataManager.Instance.SettingData.graphicSettings.screenMode;

        Screen.SetResolution(width, height, (FullScreenMode)screenMode);
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
        for (int i = 0; i < length; i++)
        {
            if (m_graphicSettings[i].SettingChanged)
            {
                m_graphicSettings[i].ApplyChangedSetting();
                m_graphicSettings[i].SettingChanged = false;
            }
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
