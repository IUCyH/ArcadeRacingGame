using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundSetting : MonoBehaviour, ISetting
{
    ISoundSetting[] m_soundSettings;

    public void Init()
    {
        m_soundSettings = GetComponentsInChildren<ISoundSetting>(true);

        int length = m_soundSettings.Length;
        for (int i = 0; i < length; i++)
        {
            m_soundSettings[i].Init();
        }
    }
    public void Open()
    {
        GameSettingManager.Instance.OpenSettingPanel(gameObject);
    }
    public void Exit()
    {
        DataManager.Instance.SaveSettingData();
        GameSettingManager.Instance.CloseSettingPanel(gameObject);
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }
}
