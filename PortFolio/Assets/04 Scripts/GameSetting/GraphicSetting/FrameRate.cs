using System;
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
        if (!m_frameRates.Contains(frameRate))
        {
            frameRate = GetNearestFrameRateInList(frameRate);
            DataManager.Instance.UpdateFrameRate(frameRate);
            DataManager.Instance.SaveSettingData();
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
            int refreshRate = Screen.resolutions[i].refreshRate;
            
            if (!m_frameRates.Contains(refreshRate))
            {
                m_frameRates.Add(refreshRate);
            }
        }

        m_frameRates.Sort();
        SetFrameRateNames();
        m_maxFrameRateNamesIndex = m_frameRateNames.Count - 1;
    }

    void SetFrameRateNames()
    {
        int length = m_frameRates.Count;
        
        for (int i = 0; i < length; i++)
        {
            int refreshRate = m_frameRates[i];
            m_sb.Clear();
            m_sb.AppendFormat("{0}Hz", refreshRate);
            
            m_frameRateNames.Add(m_sb.ToString());
        }
    }

    void SetFrameRateText(int index)
    {
        m_frameRateText.text = m_frameRateNames[index];
    }

    int GetNearestFrameRateInList(int criterion)
    {
        int length = m_frameRates.Count;
        int nearestNum = 9999;
        
        for (int i = 0; i < length; i++)
        {
            if (criterion >= m_frameRates[i])
            {
                int minusResult = criterion - m_frameRates[i];
                if (minusResult < nearestNum)
                {
                    nearestNum = m_frameRates[i];
                }
            }
        }

        return nearestNum;
    }
}
