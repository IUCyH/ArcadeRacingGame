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

    int m_maxScreenModeNamesIndex;
    int m_screenModeNamesIndex;    

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
        m_screenModeNamesIndex = screenMode;

        SettingChanged = false;
    }
    public void SetGraphicSettingToCurrSettingData()
    {
        var screenMode = GetScreenModeIndexFromData();

        SetScreenModeText(screenMode);
        m_screenModeNamesIndex = screenMode;
    }
    public void OnPressPrevButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        m_screenModeNamesIndex--;
        m_screenModeNamesIndex = Mathf.Clamp(m_screenModeNamesIndex, 0, m_maxScreenModeNamesIndex);

        SetSettingChanged();
        SetScreenModeText(m_screenModeNamesIndex);
        SetScreenMode();
    }
    public void OnPressNextButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        m_screenModeNamesIndex++;
        m_screenModeNamesIndex = Mathf.Clamp(m_screenModeNamesIndex, 0, m_maxScreenModeNamesIndex);

        SetSettingChanged();
        SetScreenModeText(m_screenModeNamesIndex);
        SetScreenMode();
    }
    void InitScreenModeNamesList()
    {
        m_screenModeNames.Add("전체화면");
        m_screenModeNames.Add("전체 창모드");
        m_screenModeNames.Add("창모드");

        m_maxScreenModeNamesIndex = m_screenModeNames.Count - 1;
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
        int index = m_screenModeNamesIndex;
        index = CalibrateScreenModeIndex(index);

        if (index == screenModeData)
        {
            return false;
        }
        return true;
    }
    void SetScreenMode()
    {
        int index = m_screenModeNamesIndex;
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
        if(index > m_maxScreenModeNamesIndex)
        {
            throw new System.Exception("The screen mode index is larger than the maximum index in the screen mode names list.");
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
