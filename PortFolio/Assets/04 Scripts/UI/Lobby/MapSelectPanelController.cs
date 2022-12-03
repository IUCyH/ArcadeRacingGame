using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class MapSelectPanelController : MonoBehaviour, ILobbySubMenu
{
    StringBuilder m_sb = new StringBuilder();
    [SerializeField]
    Camera m_kartModelCam;
    [SerializeField]
    Image m_mapImage;
    [SerializeField]
    Text m_mapNameText;
    [SerializeField]
    Text m_kartNameText;
    [SerializeField]
    Text m_mapBestRecordText;
    [SerializeField]
    Button m_exitButton;
    [SerializeField]
    Sprite[] m_mapSprites;
    int m_maxKartIndex;
    int m_maxMapIndex;
    int m_currKartIndex;
    int m_currMapIndex;

    public void Show()
    {
        SetKartModelCamActive(true);
        UpdateKartIndex();
        UpdateMapIndex();
        ChangeMapImage();

        SetKartName();
        SetMapName();
        SetMapBestTime();

        LobbyUIManager.Instance.SetExitButtonActive(false);
        SetExitButtonActive(true);

        gameObject.SetActive(true);
    }
    public void Hide()
    {
        SetKartModelCamActive(false);

        DataManager.Instance.ChangeUsingKart(m_currKartIndex);
        UpdatePlayerDataKartIndex();
        UpdatePlayerDataMapIndex();

        LobbyUIManager.Instance.SetExitButtonActive(true);
        SetExitButtonActive(false);

        gameObject.SetActive(false);
    }
    public void SetKartModelCamActive(bool value)
    {
        m_kartModelCam.gameObject.SetActive(value);
    }
    public void OnPressMapNextButton()
    {
        m_currMapIndex++;
        if (m_currMapIndex > m_maxMapIndex)
        {
            m_currMapIndex = 0;
        }

        ChangeMapImage();
        SetMapName();
        SetMapBestTime();
    }
    public void OnPressMapPrevButton()
    {
        m_currMapIndex--;
        if (m_currMapIndex < 0)
        {
            m_currMapIndex = m_maxMapIndex;
        }

        ChangeMapImage();
        SetMapName();
        SetMapBestTime();
    }
    public void OnPressKartNextButton()
    {
        bool isPlayableKart;
        do
        {
            isPlayableKart = false;

            m_currKartIndex++;
            if (m_currKartIndex > m_maxKartIndex)
            {
                m_currKartIndex = 0;
            }

            var isPlayable = DataManager.Instance.PlayerData.carsList[m_currKartIndex].isPlayable;
            if (isPlayable)
            {
                isPlayableKart = true;
            }

        } while (!isPlayableKart);

        LobbyManager.Instance.SetMainLobbyKart(m_currKartIndex);
        SetKartName();
    }
    public void OnPressKartPrevButton()
    {
        bool isPlayableKart;
        do
        {
            isPlayableKart = false;

            m_currKartIndex--;
            if (m_currKartIndex < 0)
            {
                m_currKartIndex = m_maxKartIndex;
            }

            var isPlayable = DataManager.Instance.PlayerData.carsList[m_currKartIndex].isPlayable;
            if (isPlayable)
            {
                isPlayableKart = true;
            }

        } while (!isPlayableKart);

        LobbyManager.Instance.SetMainLobbyKart(m_currKartIndex);
        SetKartName();
    }
    public void OnPressStart()
    {
        DataManager.Instance.ChangeUsingKart(m_currKartIndex);

        UpdatePlayerDataKartIndex();
        UpdatePlayerDataMapIndex();

        DataManager.Instance.Save();
        LoadSceneManager.Instance.LoadSceneAsync(SceneState.Game);
    }
    void SetExitButtonActive(bool value)
    {
        m_exitButton.gameObject.SetActive(value);
    }
    void UpdatePlayerDataKartIndex()
    {
        DataManager.Instance.PlayerData.currKart = m_currKartIndex;
    }
    void UpdatePlayerDataMapIndex()
    {
        DataManager.Instance.PlayerData.currMap = m_currMapIndex;
    }
    void ChangeMapImage()
    {
        m_mapImage.sprite = m_mapSprites[m_currMapIndex];
    }
    void SetMapBestTime()
    {
        m_sb.Clear();
        var time = DataManager.Instance.PlayerData.mapList[m_currMapIndex].bestTime;
        if (time == float.PositiveInfinity)
        {
            m_sb.Append("최고기록 : --:--:--");
            m_mapBestRecordText.text = m_sb.ToString();
            return;
        }    
        Utill.ConvetTime(time, out int minute, out int second, out int millisecond);
        m_sb.AppendFormat("최고기록 : {0:00}:{1:00}:{2:00}", minute, second, millisecond);
        m_mapBestRecordText.text = m_sb.ToString();
    }
    void SetMapName()
    {
        m_mapNameText.text = DataManager.Instance.PlayerData.mapList[m_currMapIndex].data.name;
    }
    void SetKartName()
    {
        m_kartNameText.text = DataManager.Instance.PlayerData.carsList[m_currKartIndex].data.name;
    }
    void UpdateKartIndex()
    {
        m_currKartIndex = DataManager.Instance.PlayerData.currKart;
    }
    void UpdateMapIndex()
    {
        m_currMapIndex = DataManager.Instance.PlayerData.currMap;
    }
    // Start is called before the first frame update
    void Start()
    {
        m_maxKartIndex = LobbyManager.Instance.Karts.Count - 1;
        m_mapSprites = Resources.LoadAll<Sprite>("MapImages");
        m_maxMapIndex = m_mapSprites.Length - 1;
        UpdateKartIndex();
        UpdateMapIndex();

        gameObject.SetActive(false);
    }
}
