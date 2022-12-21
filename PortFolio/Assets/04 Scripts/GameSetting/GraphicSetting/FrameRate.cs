using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class FrameRate : MonoBehaviour, IGraphicSetting
{
    StringBuilder m_sb = new StringBuilder();
    [SerializeField]
    Text m_frameRateText;
    List<string> m_frameRateNames = new List<string>();
    List<int> m_frameRates = new List<int>();

    int m_frameRate;

    int m_maxFrameRateNamesIndex;
    int m_frameRateNamesIndex;

    public bool SettingChanged { get; set; }

    public void ApplyChangedSetting() 
    {
        DataManager.Instance.UpdateFrameRate(m_frameRate);
    }
    public void Init()
    {
        InitFrameRateNamesAndFrameRates();

        int frameRate = GetFrameRateFromData();
        if(!m_frameRates.Contains(frameRate))
        {
            m_sb.Clear();
            m_sb.AppendFormat("{0}Hz", frameRate);
            m_frameRates.Add(frameRate);
            m_frameRateNames.Add(m_sb.ToString());

            m_maxFrameRateNamesIndex = m_frameRateNames.Count - 1;
        }
        int index = m_frameRates.IndexOf(frameRate);

        SetFrameRateText(index);

        m_frameRate = frameRate;
        m_frameRateNamesIndex = index;

        SettingChanged = false;
    }
    public void SetGraphicSettingToCurrSettingData()
    {
        int frameRate = GetFrameRateFromData();
        int index = m_frameRates.IndexOf(frameRate);

        SetFrameRateText(index);

        m_frameRate = frameRate;
        m_frameRateNamesIndex = index;
    }
    public void OnPressPrevButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        m_frameRateNamesIndex--;
        m_frameRateNamesIndex = Mathf.Clamp(m_frameRateNamesIndex, 0, m_maxFrameRateNamesIndex);

        SetFrameRate();
        SetSettingChanged();
        SetFrameRateText(m_frameRateNamesIndex);
    }
    public void OnPressNextButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        m_frameRateNamesIndex++;
        m_frameRateNamesIndex = Mathf.Clamp(m_frameRateNamesIndex, 0, m_maxFrameRateNamesIndex);

        SetFrameRate();
        SetSettingChanged();
        SetFrameRateText(m_frameRateNamesIndex);
    }
    int GetFrameRateFromData()
    {
        return DataManager.Instance.SettingData.graphicSettings.frameRate;
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
        var frameRate = DataManager.Instance.SettingData.graphicSettings.frameRate;

        if (m_frameRate == frameRate)
        {
            return false;
        }
        return true;
    }
    void SetFrameRate()
    {
        m_frameRate = m_frameRates[m_frameRateNamesIndex];
    }
    void InitFrameRateNamesAndFrameRates()
    {
        int length = Screen.resolutions.Length;

        for (int i = 0; i < length; i++)
        {
            m_sb.Clear();
            int refreshRate = Screen.resolutions[i].refreshRate;
            m_sb.AppendFormat("{0}Hz", refreshRate);
            if (m_frameRateNames.Contains(m_sb.ToString()) || refreshRate < 50)
            {
                continue;
            }

            m_frameRateNames.Add(m_sb.ToString());
            m_frameRates.Add(refreshRate);
        }
        m_maxFrameRateNamesIndex = m_frameRateNames.Count - 1;
    }
    void SetFrameRateText(int index)
    {
        if (index > m_maxFrameRateNamesIndex)
        {
            throw new System.Exception("The frame rate index is larger than the maximum index in the frame rate names list.");
        }
        m_frameRateText.text = m_frameRateNames[index];
    }
}
