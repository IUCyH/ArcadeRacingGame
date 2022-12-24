using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SfxMute : MonoBehaviour, ISoundSetting
{
    [SerializeField]
    Toggle m_muteToggle;

    public void OnToggleClicked()
    {
        SoundManager.Instance.PlaySFX(SFXClip.Select);
        bool isMute = m_muteToggle.isOn;

        SoundManager.Instance.MuteSFX(isMute);
        DataManager.Instance.UpdateSfxMute(isMute);
    }
    public void Init()
    {
        bool isMute = GetSfxMuteData();

        SetToggle(isMute);
        SoundManager.Instance.MuteSFX(isMute);
    }
    bool GetSfxMuteData()
    {
        return DataManager.Instance.SettingData.soundSettings.muteSFX;
    }
    void SetToggle(bool value)
    {
        m_muteToggle.isOn = value;
    }
}
