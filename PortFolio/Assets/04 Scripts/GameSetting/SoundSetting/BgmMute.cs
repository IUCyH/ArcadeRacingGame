using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BgmMute : MonoBehaviour, ISoundSetting
{
    [SerializeField]
    Toggle m_muteToggle;

    public void OnToggleClicked()
    {
        SoundManager.Instance.PlaySFX(SFXClip.Select);
        bool isMute = m_muteToggle.isOn;

        SoundManager.Instance.MuteBGM(isMute);
        DataManager.Instance.UpdateBgmMute(isMute);
    }
    public void Init()
    {
        bool isMute = GetBgmMuteData();

        SetToggle(isMute);
        SoundManager.Instance.MuteBGM(isMute);
    }
    bool GetBgmMuteData()
    {
        return DataManager.Instance.SettingData.soundSettings.muteBGM;
    }
    void SetToggle(bool value)
    {
        m_muteToggle.isOn = value;
    }
}
