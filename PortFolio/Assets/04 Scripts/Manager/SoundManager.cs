using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AudioType
{
    BGM,
    SFX,
    Max
}
public enum BGMClip
{
    TitleBGM,
    LobbyBGM,
    Max
}
public enum SFXClip
{
    ButtonClick,
    MouseClick,
    Select,
    Open,
    Close,
    Max
}

public class SoundManager : Singleton_DontDestroy<SoundManager>
{
    AudioSource[] m_audios;
    [SerializeField]
    AudioClip[] m_bgmClips;
    [SerializeField]
    AudioClip[] m_sfxClips;

    const int MAXPLAYCOUNT = 3;

    Dictionary<SFXClip, int> m_sfxPlayCnts = new Dictionary<SFXClip, int>();

    IEnumerator Coroutine_CheckSFX(AudioClip audioClip, SFXClip sfx)
    {
        WaitForSeconds waitForSeconds = new WaitForSeconds(audioClip.length);

        yield return waitForSeconds;

        if (m_sfxPlayCnts[sfx] > 0)
        {
            m_sfxPlayCnts[sfx]--;
        }
        else
        {
            m_sfxPlayCnts.Remove(sfx);
        }
    }
    public void PlayBGM(BGMClip clip)
    {
        m_audios[(int)AudioType.BGM].clip = m_bgmClips[(int)clip];
        m_audios[(int)AudioType.BGM].Play();
    }
    public void PlaySFX(SFXClip clip)
    {
        if(m_sfxPlayCnts.ContainsKey(clip))
        {
            if (m_sfxPlayCnts[clip] > MAXPLAYCOUNT)
            {
                return;
            }
            else
                m_sfxPlayCnts[clip]++;
        }
        else
        {
            m_sfxPlayCnts.Add(clip, 1);
        }
        AudioClip sfxClip = m_sfxClips[(int)clip];
        m_audios[(int)AudioType.SFX].PlayOneShot(sfxClip);
        StartCoroutine(Coroutine_CheckSFX(sfxClip, clip));
    }
    public void SetMuteBGM(bool isMute)
    {
        m_audios[(int)AudioType.BGM].mute = isMute;
    }
    public void SetMuteSFX(bool isMute)
    {
        m_audios[(int)AudioType.SFX].mute = isMute;
    }
    void InitAudioSources()
    {
        m_audios = new AudioSource[(int)AudioType.Max];
        m_audios[(int)AudioType.BGM] = gameObject.AddComponent<AudioSource>();
        m_audios[(int)AudioType.BGM].loop = true;
        m_audios[(int)AudioType.BGM].playOnAwake = false;
        m_audios[(int)AudioType.BGM].rolloffMode = AudioRolloffMode.Linear;

        m_audios[(int)AudioType.SFX] = gameObject.AddComponent<AudioSource>();
        m_audios[(int)AudioType.SFX].loop = false;
        m_audios[(int)AudioType.SFX].playOnAwake = false;
        m_audios[(int)AudioType.SFX].rolloffMode = AudioRolloffMode.Linear;
    }
    protected override void OnAwake()
    {
        InitAudioSources();
        m_bgmClips = Resources.LoadAll<AudioClip>("Sound/BGM");
        m_sfxClips = Resources.LoadAll<AudioClip>("Sound/SFX");
    }
}
