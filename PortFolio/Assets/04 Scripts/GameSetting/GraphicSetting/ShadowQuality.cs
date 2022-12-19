using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShadowQuality : MonoBehaviour, IGraphicSetting
{
    enum Shadow
    {
        VeryHigh,
        High,
        low,
        VeryLow,
        Disable,
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
        m_shadowQuality--;
        m_shadowQuality = Mathf.Clamp(m_shadowQuality, 0, m_maxShadowQualityNamesIndex);

        SetShadowQualityText(m_shadowQuality);
        SetSettingChanged();
    }
    public void OnPressNextButton()
    {
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
        switch (m_shadowQuality)
        {
            case (int)Shadow.VeryHigh:
                QualitySettings.shadows = UnityEngine.ShadowQuality.All;
                QualitySettings.shadowResolution = ShadowResolution.VeryHigh;
                QualitySettings.shadowCascades = 4;
                break;

            case (int)Shadow.High:
                QualitySettings.shadows = UnityEngine.ShadowQuality.All;
                QualitySettings.shadowResolution = ShadowResolution.High;
                QualitySettings.shadowCascades = 4;
                break;

            case (int)Shadow.low:
                QualitySettings.shadows = UnityEngine.ShadowQuality.HardOnly;
                QualitySettings.shadowResolution = ShadowResolution.Medium;
                QualitySettings.shadowCascades = 2;
                break;

            case (int)Shadow.VeryLow:
                QualitySettings.shadows = UnityEngine.ShadowQuality.HardOnly;
                QualitySettings.shadowResolution = ShadowResolution.Low;
                QualitySettings.shadowCascades = 0;
                break;

            case (int)Shadow.Disable:
                QualitySettings.shadows = UnityEngine.ShadowQuality.Disable;
                break;
        }
    }
    void InitShadowQualityNamesList()
    {
        m_shadowQualityNames.Add("¸Å¿ì ³ôÀ½");
        m_shadowQualityNames.Add("³ôÀ½");
        m_shadowQualityNames.Add("³·À½");
        m_shadowQualityNames.Add("¸Å¿ì ³·À½");
        m_shadowQualityNames.Add("²ô±â");

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
        if (index > m_maxShadowQualityNamesIndex)
        {
            throw new System.Exception("The shadow quality index is larger than the maximum index in the shadow quality names list.");
        }
        m_shadowQualityText.text = m_shadowQualityNames[index];
    }
}
