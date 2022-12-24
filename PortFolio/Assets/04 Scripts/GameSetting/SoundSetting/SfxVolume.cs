using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class SfxVolume : MonoBehaviour, ISoundSetting
{
    StringBuilder m_sb = new StringBuilder();
    [SerializeField]
    Slider m_volumeSlider;
    [SerializeField]
    InputField m_volumeInputField;

    public void OnInputFieldEndEdit()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        int volume = int.Parse(m_volumeInputField.text);
        if (volume < 0 || volume > 100)
        {
            volume = Mathf.Clamp(volume, 0, 100);
            m_sb.Clear();
            m_sb.Append(volume);
            m_volumeInputField.text = m_sb.ToString();
        }
        float result = volume * 0.01f;

        SetSlider(result);
        DataManager.Instance.UpdateSfxVolume(result);
        SoundManager.Instance.SetSfxVolume(result);
    }
    public void OnSliderPointerUp()
    {
        SoundManager.Instance.PlaySFX(SFXClip.MouseClick);
        float volume = m_volumeSlider.value;

        SetInputField(volume);
        DataManager.Instance.UpdateSfxVolume(volume);
        SoundManager.Instance.SetSfxVolume(volume);
    }
    public void OnSliderDrag()
    {
        float volume = m_volumeSlider.value;

        SetInputField(volume);
        SoundManager.Instance.SetSfxVolume(volume);
    }
    public void Init()
    {
        var volume = GetSfxVolumeFromData();
        SoundManager.Instance.SetSfxVolume(volume);

        SetInputField(volume);
        SetSlider(volume);
    }
    float GetSfxVolumeFromData()
    {
        return DataManager.Instance.SettingData.soundSettings.sfxVolume;
    }
    void SetInputField(float volume)
    {
        m_sb.Clear();
        m_sb.Append(Mathf.CeilToInt(volume * 100));
        m_volumeInputField.text = m_sb.ToString();
    }
    void SetSlider(float volume)
    {
        if (Mathf.Approximately(volume, 0))
        {
            m_volumeSlider.value = 0f;
        }
        else if (Mathf.Approximately(volume, 1))
        {
            m_volumeSlider.value = 1f;
        }
        else
            m_volumeSlider.value = volume;
    }
}
