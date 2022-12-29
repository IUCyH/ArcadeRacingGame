using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Antialiasing : MonoBehaviour, IGraphicSetting
{
    [SerializeField]
    Text m_antialiasingText;
    List<string> m_antialiasingNames = new List<string>(5);
    int[] m_antialiasingOptions = new int[4] { 0, 2, 4, 8 };

    int m_maxAntialiasingNamesIndex;
    int m_antialiasing;

    public bool SettingChanged { get; set; }

    public void ApplyChangedSetting()
    {
        DataManager.Instance.UpdateAntialiasing(m_antialiasing);
        SetAntialiasing();
    }
    public void Init()
    {
        InitAntialiasingNamesList();

        int index = GetAntialiasingFromData();
        SetAntialiasingText(index);

        m_antialiasing = index;

        SettingChanged = false;

        SetAntialiasing();
    }
    public void SetGraphicSettingToCurrSettingData()
    {
        int index = GetAntialiasingFromData();
        SetAntialiasingText(index);

        m_antialiasing = index;
    }
    public void OnPressPrevButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        m_antialiasing--;
        m_antialiasing = Mathf.Clamp(m_antialiasing, 0, m_maxAntialiasingNamesIndex);

        SetAntialiasingText(m_antialiasing);
        SetSettingChanged();
    }
    public void OnPressNextButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        m_antialiasing++;
        m_antialiasing = Mathf.Clamp(m_antialiasing, 0, m_maxAntialiasingNamesIndex);

        SetAntialiasingText(m_antialiasing);
        SetSettingChanged();
    }
    int GetAntialiasingFromData()
    {
        return DataManager.Instance.SettingData.graphicSettings.antiAliasing;
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
        var antialiasing = DataManager.Instance.SettingData.graphicSettings.antiAliasing;

        if (m_antialiasing == antialiasing)
        {
            return false;
        }
        return true;
    }
    void SetAntialiasing()
    {
        QualitySettings.antiAliasing = m_antialiasingOptions[m_antialiasing];
    }
    void InitAntialiasingNamesList()
    {
        m_antialiasingNames.Add("끄기");
        m_antialiasingNames.Add("2X");
        m_antialiasingNames.Add("4X");
        m_antialiasingNames.Add("8X");

        m_maxAntialiasingNamesIndex = m_antialiasingNames.Count - 1;
    }
    void SetAntialiasingText(int index)
    {
        m_antialiasingText.text = m_antialiasingNames[index];
    }
}
