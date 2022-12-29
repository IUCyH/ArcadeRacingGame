using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShadowQuality : MonoBehaviour, IGraphicSetting
{
    enum Shadow
    {
        Disable,
        VeryLow,
        low,
        High,
        VeryHigh,
        Max
    }

    [SerializeField]
    Text m_shadowQualityText;
    List<string> m_shadowQualityNames = new List<string>(5);

    int m_maxShadowQualityNamesIndex;
    int m_shadowQuality;

    public bool SettingChanged { get; set; }

    public void ApplyChangedSetting()
    {
        DataManager.Instance.UpdateShadowQuality(m_shadowQuality);
        SetShadowQuality();
    }
    public void Init()
    {
        InitShadowQualityNamesList();

        int index = GetShadowQualityFromData();
        SetShadowQualityText(index);

        m_shadowQuality = index;

        SettingChanged = false;

        SetShadowQuality();
    }
    public void SetGraphicSettingToCurrSettingData()
    {
        int index = GetShadowQualityFromData();
        SetShadowQualityText(index);

        m_shadowQuality = index;
    }
    public void OnPressPrevButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        m_shadowQuality--;
        m_shadowQuality = Mathf.Clamp(m_shadowQuality, 0, m_maxShadowQualityNamesIndex);

        SetShadowQualityText(m_shadowQuality);
        SetSettingChanged();
    }
    public void OnPressNextButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        m_shadowQuality++;
        m_shadowQuality = Mathf.Clamp(m_shadowQuality, 0, m_maxShadowQualityNamesIndex);

        SetShadowQualityText(m_shadowQuality);
        SetSettingChanged();
    }
    int GetShadowQualityFromData()
    {
        return DataManager.Instance.SettingData.graphicSettings.shadowQuality;
    }
    void SetShadowQuality()
    {
        if(m_shadowQuality == (int)Shadow.Disable)
        {
            QualitySettings.shadows = UnityEngine.ShadowQuality.Disable;
            return;
        }

        switch (m_shadowQuality)
        {
            case (int)Shadow.VeryHigh:
            case (int)Shadow.High:
                QualitySettings.shadows = UnityEngine.ShadowQuality.All;
                QualitySettings.shadowCascades = 4;
                break;

            case (int)Shadow.low:
                QualitySettings.shadows = UnityEngine.ShadowQuality.All;
                QualitySettings.shadowCascades = 2;
                break;

            case (int)Shadow.VeryLow:
                QualitySettings.shadows = UnityEngine.ShadowQuality.HardOnly;
                QualitySettings.shadowCascades = 2;
                break;
        }
        QualitySettings.shadowResolution = (ShadowResolution)m_shadowQuality - 1;
    }
    void InitShadowQualityNamesList()
    {
        m_shadowQualityNames.Add("끄기");
        m_shadowQualityNames.Add("매우 낮음");
        m_shadowQualityNames.Add("낮음");
        m_shadowQualityNames.Add("높음");
        m_shadowQualityNames.Add("매우 높음");

        m_maxShadowQualityNamesIndex = m_shadowQualityNames.Count - 1;
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
        var shadowQuality = DataManager.Instance.SettingData.graphicSettings.shadowQuality;

        if (m_shadowQuality == shadowQuality)
        {
            return false;
        }
        return true;
    }
    void SetShadowQualityText(int index)
    {
        m_shadowQualityText.text = m_shadowQualityNames[index];
    }
}
