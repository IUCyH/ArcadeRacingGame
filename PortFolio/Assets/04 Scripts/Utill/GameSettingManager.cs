using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameSettingManager : Singleton_DontDestroy<GameSettingManager>
{
    [SerializeField]
    GameObject m_gameSettingPanel;
    [SerializeField]
    Animator m_animator;
    [SerializeField]
    float m_animPlaySpeed;
    bool m_isReverseAnimPlaying;
    string m_speedParameterName = "speed";
    string m_settingPopupAnimName = "SettingPopupBounsAnim";

    public bool IsSettingPanelOpen { get { return m_gameSettingPanel.activeSelf; } }

    public void SetGameSettingPanelActive()
    {
        if (m_gameSettingPanel.activeSelf)
        {
            m_animator.SetFloat(m_speedParameterName, -m_animPlaySpeed);
            m_animator.Play(m_settingPopupAnimName, 0, 1f);
            m_isReverseAnimPlaying = true;
        }
        else
        {
            m_animator.SetFloat(m_speedParameterName, m_animPlaySpeed);
            m_animator.Play(m_settingPopupAnimName, 0, 0f);
            m_gameSettingPanel.SetActive(true);
        }
    }
    bool CheckAnimationStateName(string name)
    {
        if (m_animator.GetCurrentAnimatorStateInfo(0).IsName(name))
        {
            return true;
        }
        return false;
    }
    bool IsReverseAnimationDone()
    {
        if (m_animator.GetCurrentAnimatorStateInfo(0).normalizedTime <= 0f)
        {
            return true;
        }
        return false;
    }
    void OnApplicationQuit()
    {
        //DataManager.Instance.Save();    
    }
    // Start is called before the first frame update
    protected override void OnAwake()
    {
        Application.targetFrameRate = 500;
#if UNITY_EDITOR
        Debug.unityLogger.logEnabled = true;
#else
        Debug.unityLogger.logEnabled = false;
#endif
        m_gameSettingPanel.SetActive(false);
    }
    void Update()
    {
        if(m_isReverseAnimPlaying && CheckAnimationStateName(m_settingPopupAnimName))
        {
            if(IsReverseAnimationDone())
            {
                m_isReverseAnimPlaying = false;
                m_gameSettingPanel.SetActive(false);
            }
        }
    }
}
