using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VSync : MonoBehaviour, IGraphicSetting
{
    [SerializeField]
    Toggle m_vSyncToggle;

    int m_vSync;
    bool m_dontPlaySFX;

    public bool SettingChanged { get; set; }

    public void OnToggleValueChanged()
    {
        if (m_dontPlaySFX) return;

        SoundManager.Instance.PlaySFX(SFXClip.Select);
        bool value = m_vSyncToggle.isOn;

        if(value == true)
        {
            m_vSync = 1;
        }
        else
        {
            m_vSync = 0;
        }
        SetSettingChanged();
    }
    public void ApplyChangedSetting()
    {
        DataManager.Instance.UpdateVSync(m_vSync);
        SetVSync();
    }
    public void Init()
    {
        int value = GetVSyncValueFromData();
        SetVSyncToggle(value == 0 ? false : true);
        
        m_vSync = value;
        m_vSyncToggle.onValueChanged.AddListener(delegate { OnToggleValueChanged(); });

        SettingChanged = false;

        SetVSync();
    }
    public void SetGraphicSettingToCurrSettingData()
    {
        m_dontPlaySFX = true;
        int value = GetVSyncValueFromData();
        SetVSyncToggle(value == 0 ? false : true);
        m_dontPlaySFX = false;

        m_vSync = value;
    }
    int GetVSyncValueFromData()
    {
        return DataManager.Instance.SettingData.graphicSettings.vSync;
    }
    void SetVSyncToggle(bool value)
    {
        m_vSyncToggle.isOn = value;
    }
    void SetVSync()
    {
        if(m_vSync > 1 || m_vSync < 0)
        {
            throw new System.Exception("The value is not 0 or 1. Please set the value to 0 or 1 only.");
        }
        QualitySettings.vSyncCount = m_vSync;
    }
    void SetSettingChanged()
    {
        if (CheckSettingChanged() == true)
        {
            SettingChanged = true;
        }
        else
        {
            SettingChanged = false;
        }
    }
    bool CheckSettingChanged()
    {
        var vSync = DataManager.Instance.SettingData.graphicSettings.vSync;

        if (m_vSync == vSync)
        {
            return false;
        }
        return true;
    }
}
