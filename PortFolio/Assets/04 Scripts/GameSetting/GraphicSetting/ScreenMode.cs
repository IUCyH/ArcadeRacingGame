using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScreenMode : MonoBehaviour, IGraphicSetting
{
    [SerializeField]
    Text m_screenModeText;
    List<string> m_screenModeNames = new List<string>(3);
    FullScreenMode m_screenMode;

    int m_maxScreenModeNameIndex;
    int m_screenModeNameIndex;    

    public bool SettingChanged { get; set; }

    public void ApplyChangedSetting()
    {
        DataManager.Instance.UpdateScreenMode(m_screenMode);
    }
    public void Init()
    {
        int screenMode = GetScreenModeIndexFromData();

        InitScreenModeNamesList();
        SetScreenModeText(screenMode);
        m_screenModeNameIndex = screenMode;

        SettingChanged = false;
    }
    public void SetGraphicSettingToCurrSettingData()
    {
        var screenMode = GetScreenModeIndexFromData();

        SetScreenModeText(screenMode);
        m_screenModeNameIndex = screenMode;
    }
    public void OnPressPrevButton()
    {
        m_screenModeNameIndex--;
        m_screenModeNameIndex = Mathf.Clamp(m_screenModeNameIndex, 0, m_maxScreenModeNameIndex);

        SetSettingChanged();
        SetScreenModeText(m_screenModeNameIndex);
        SetScreenMode();
    }
    public void OnPressNextButton()
    {
        m_screenModeNameIndex++;
        m_screenModeNameIndex = Mathf.Clamp(m_screenModeNameIndex, 0, m_maxScreenModeNameIndex);

        SetSettingChanged();
        SetScreenModeText(m_screenModeNameIndex);
        SetScreenMode();
    }
    void InitScreenModeNamesList()
    {
        m_screenModeNames.Add("전체화면");
        m_screenModeNames.Add("전체 창모드");
        m_screenModeNames.Add("창모드");

        m_maxScreenModeNameIndex = m_screenModeNames.Count - 1;
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
        var screenModeData = DataManager.Instance.SettingData.graphicSettings.screenMode;
        int index = m_screenModeNameIndex;
        index = CalibrateScreenModeIndex(index);

        if (index == screenModeData)
        {
            return false;
        }
        return true;
    }
    void SetScreenMode()
    {
        int index = m_screenModeNameIndex;
        index = CalibrateScreenModeIndex(index);

        m_screenMode = (FullScreenMode)index;
    }
    int CalibrateScreenModeIndex(int index)
    {
        if (index == 2)
        {
            index = 3;
        }
        return index;
    }
    void SetScreenModeText(int index)
    {
        if(index > m_maxScreenModeNameIndex)
        {
            throw new System.Exception("The screen mode index is larger than the maximum index in the screen mode text list.");
        }
        m_screenModeText.text = m_screenModeNames[index];
    }
    int GetScreenModeIndexFromData()
    {
        int screenMode = DataManager.Instance.SettingData.graphicSettings.screenMode;
        if(screenMode == 3)
        {
            screenMode = 2;
        }

        return screenMode;
    }
}
