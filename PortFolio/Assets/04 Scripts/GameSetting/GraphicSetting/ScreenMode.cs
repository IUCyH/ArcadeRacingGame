using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScreenMode : MonoBehaviour, IGraphicSetting
{
    [SerializeField]
    Text m_screenModeText;
    List<string> m_screenModes = new List<string>(3);
    FullScreenMode m_screenMode;

    int m_maxScreenModeIndex;
    int m_screenModeIndex;    

    public bool SettingChanged { get; set; }

    public void ApplyChangedSetting()
    {
        DataManager.Instance.UpdateScreenMode(m_screenMode);
    }
    public void Init()
    {
        int screenMode = GetScreenModeIndexFromData();
        InitScreenModesList();
        SetScreenModeText(screenMode);
        m_screenModeIndex = screenMode;

        SettingChanged = false;
    }
    public void SetGraphicSettingToCurrSettingData()
    {
        var screenMode = GetScreenModeIndexFromData();

        SetScreenModeText(screenMode);
    }
    public void OnPressPrevButton()
    {
        m_screenModeIndex--;
        m_screenModeIndex = Mathf.Clamp(m_screenModeIndex, 0, m_maxScreenModeIndex);

        SetSettingChanged();
        SetScreenModeText(m_screenModeIndex);
        SetScreenMode();
    }
    public void OnPressNextButton()
    {
        m_screenModeIndex++;
        m_screenModeIndex = Mathf.Clamp(m_screenModeIndex, 0, m_maxScreenModeIndex);

        SetSettingChanged();
        SetScreenModeText(m_screenModeIndex);
        SetScreenMode();
    }
    void InitScreenModesList()
    {
        m_screenModes.Add("전체화면");
        m_screenModes.Add("전체 창모드");
        m_screenModes.Add("창모드");

        m_maxScreenModeIndex = m_screenModes.Count - 1;
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
        int index = m_screenModeIndex;
        CalibrateScreenModeIndex(index);

        if (index == screenModeData)
        {
            return false;
        }
        return true;
    }
    void SetScreenMode()
    {
        int index = m_screenModeIndex;
        CalibrateScreenModeIndex(index);

        m_screenMode = (FullScreenMode)index;
    }
    void CalibrateScreenModeIndex(int index)
    {
        if (index == 2)
        {
            index = 3;
        }
    }
    void SetScreenModeText(int screenMode)
    {
        if(screenMode > m_maxScreenModeIndex)
        {
            throw new System.Exception("The screen mode index is larger than the maximum index in the screen mode text list.");
        }
        m_screenModeText.text = m_screenModes[screenMode];
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
