using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextureQuality : MonoBehaviour, IGraphicSetting
{
    [SerializeField]
    Text m_textureQualityText;
    List<string> m_textureQualityNames = new List<string>(4);

    int m_maxTextureQualityNamesIndex;
    int m_textureQuality;

    public bool SettingChanged { get; set; }

    public void ApplyChangedSetting()
    {
        DataManager.Instance.UpdateTextureQuality(m_textureQuality);
        SetTextureQuality();
    }
    public void Init()
    {
        InitTextureQualityNamesList();

        int index = GetTextureQualityFromData();
        SetTextureQualityText(index);

        m_textureQuality = index;

        SettingChanged = false;

        SetTextureQuality();
    }
    public void SetGraphicSettingToCurrSettingData()
    {
        int index = GetTextureQualityFromData();
        SetTextureQualityText(index);

        m_textureQuality = index;
    }
    public void OnPressPrevButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        m_textureQuality--;
        m_textureQuality = Mathf.Clamp(m_textureQuality, 0, m_maxTextureQualityNamesIndex);

        SetTextureQualityText(m_textureQuality);
        SetSettingChanged();
    }
    public void OnPressNextButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        m_textureQuality++;
        m_textureQuality = Mathf.Clamp(m_textureQuality, 0, m_maxTextureQualityNamesIndex);

        SetTextureQualityText(m_textureQuality);
        SetSettingChanged();
    }
    int GetTextureQualityFromData()
    {
        return DataManager.Instance.SettingData.graphicSettings.textureQuality;
    }
    void SetTextureQuality()
    {
        QualitySettings.masterTextureLimit = m_maxTextureQualityNamesIndex - m_textureQuality;
    }
    void InitTextureQualityNamesList()
    {
        m_textureQualityNames.Add("매우 낮음");
        m_textureQualityNames.Add("낮음");
        m_textureQualityNames.Add("높음");
        m_textureQualityNames.Add("매우 높음");

        m_maxTextureQualityNamesIndex = m_textureQualityNames.Count - 1;
    }
    void SetSettingChanged()
    {
        if(CheckSettingChanged() == true)
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
        var textureQuality = DataManager.Instance.SettingData.graphicSettings.textureQuality;

        if (m_textureQuality == textureQuality)
        {
            return false;
        }
        return true;
    }
    void SetTextureQualityText(int index)
    {
        m_textureQualityText.text = m_textureQualityNames[index];
    }
}
