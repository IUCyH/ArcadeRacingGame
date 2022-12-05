using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameSettingManager : Singleton_DontDestroy<GameSettingManager>
{
    [SerializeField]
    GameObject m_gameSettingPanel;
    [SerializeField]
    float m_animPlaySpeed;
    [SerializeField]
    float m_time;
    [SerializeField]
    float m_scaleFrom = 0f;
    [SerializeField]
    float m_scaleTo = 1f;
    bool m_playSettingPanelAnim;
    bool m_playSettingPanelReverseAnim;

    public bool IsSettingPanelOpen { get { return m_gameSettingPanel.activeSelf; } }

    public void SetGameSettingPanelActive()
    {
        m_time = 0f;
        m_playSettingPanelReverseAnim = false;
        m_playSettingPanelAnim = false;

        if (IsSettingPanelOpen)
        {
            m_playSettingPanelReverseAnim = true;
        }
        else
        {
            m_gameSettingPanel.SetActive(true);
            m_playSettingPanelAnim = true;
        }
    }
    void PlayGameSettingPanelAnimation()
    {
        float scale = GetScaleValue(m_scaleFrom, m_scaleTo);
        m_gameSettingPanel.transform.localScale = new Vector3(scale, scale, scale);

        m_time += Time.deltaTime / m_animPlaySpeed;
        if(m_time > 1f)
        {
            m_time = 0f;
            m_playSettingPanelAnim = false;
        }
    }
    void PlayGameSettingPanelAnimation_Reverse()
    {
        float scale = GetScaleValue(m_scaleTo, m_scaleFrom);
        m_gameSettingPanel.transform.localScale = new Vector3(scale, scale, scale);

        m_time += Time.deltaTime / m_animPlaySpeed;
        if (m_time > 1f)
        {
            m_time = 0f;
            m_gameSettingPanel.SetActive(false);
            m_playSettingPanelReverseAnim = false;
        }
    }
    float GetScaleValue(float from, float to)
    {
        float value = from * (1f - m_time) + to * m_time;
        return value;
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
        if(m_playSettingPanelAnim)
        {
            PlayGameSettingPanelAnimation();
        }
        else if(m_playSettingPanelReverseAnim)
        {
            PlayGameSettingPanelAnimation_Reverse();
        }
    }
}
