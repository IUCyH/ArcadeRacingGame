using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AnisotropicFiltering : MonoBehaviour, IGraphicSetting
{
    [SerializeField]
    Toggle m_AFToggle;

    int m_AF;
    bool m_dontPlaySFX;

    public bool SettingChanged { get; set; }

    public void OnToggleValueChanged()
    {
        if (m_dontPlaySFX) return;

        SoundManager.Instance.PlaySFX(SFXClip.Select);
        bool value = m_AFToggle.isOn;

        if(value == true)
        {
            m_AF = 2;
        }
        else
        {
            m_AF = 0;
        }
        SetSettingChanged();
    }
    public void ApplyChangedSetting()
    {
        DataManager.Instance.UpdateAnisotropicFiltering(m_AF);
        SetAnisotropicFiltering();
    }
    public void Init()
    {
        int value = GetAnisotropicFilteringFromData();
        SetAnisotropicFilteringToggle(value == 0 ? false : true);

        m_AF = value;
        m_AFToggle.onValueChanged.AddListener(delegate { OnToggleValueChanged(); });

        SettingChanged = false;

        SetAnisotropicFiltering();
    }
    public void SetGraphicSettingToCurrSettingData()
    {
        m_dontPlaySFX = true;
        int value = GetAnisotropicFilteringFromData();
        SetAnisotropicFilteringToggle(value == 0 ? false : true);
        m_dontPlaySFX = false;

        m_AF = value;
    }
    int GetAnisotropicFilteringFromData()
    {
        return DataManager.Instance.SettingData.graphicSettings.anisotropicFiltering;
    }
    void SetAnisotropicFiltering()
    {
        if (m_AF > 2 || m_AF < 0 || m_AF == 1)
        {
            throw new System.Exception("The value is not 0 or 2. Please set the value to 0 or 2 only.");
        }
        QualitySettings.anisotropicFiltering = (UnityEngine.AnisotropicFiltering)m_AF;
    }
    void SetAnisotropicFilteringToggle(bool value)
    {
        m_AFToggle.isOn = value;
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
        var AF = DataManager.Instance.SettingData.graphicSettings.anisotropicFiltering;

        if (m_AF == AF)
        {
            return false;
        }
        return true;
    }
}
