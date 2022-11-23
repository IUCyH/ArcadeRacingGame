using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class MapSelectPanelController : MonoBehaviour
{
    StringBuilder m_sb = new StringBuilder();
    [SerializeField]
    Image m_mapImage;
    [SerializeField]
    Text m_mapNameText;
    [SerializeField]
    Text m_kartNameText;
    [SerializeField]
    Text m_mapBestRecordText;
    [SerializeField]
    GameObject[] m_karts;
    [SerializeField]
    Sprite[] m_mapSprites;
    byte m_currKartIndex;
    byte m_currMapIndex;

    public void OnPressMapNextButton()
    {
        var maxIndex = m_mapSprites.Length - 1;
        if(m_currMapIndex < maxIndex)
        {
            m_currMapIndex++;
            ChangeMapImage();
            SetMapName();
            SetMapBestTime();
        }
    }
    public void OnPressMapPrevButton()
    {
        if(m_currMapIndex > 0)
        {
            m_currMapIndex--;
            ChangeMapImage();
            SetMapName();
            SetMapBestTime();
        }
    }
    public void OnPressKartNextButton()
    {
        var maxIndex = m_karts.Length - 1;
        if(m_currKartIndex < maxIndex)
        {
            ChangeKartActive(m_currKartIndex, false);
            m_currKartIndex++;
            ChangeKartActive(m_currKartIndex, true);
            SetKartName();
        }
    }
    public void OnPressKartPrevButton()
    {
        if(m_currKartIndex > 0)
        {
            ChangeKartActive(m_currKartIndex, false);
            m_currKartIndex--;
            ChangeKartActive(m_currKartIndex, true);
            SetKartName();
        }
    }
    public void OnPressStart()
    {
        UpdateKartIndex();
        UpdateMapIndex();
        DataManager.Instance.Save();
        LoadSceneManager.Instance.LoadSceneAsync(SceneState.Game);
    }
    public void OnPressExit()
    {
        LobbyManager.Instance.SetKartModelCamActive(false);
        UpdateKartIndex();
        UpdateMapIndex();
        DataManager.Instance.Save();
        gameObject.SetActive(false);
    }
    void ChangeMapImage()
    {
        m_mapImage.sprite = m_mapSprites[m_currMapIndex];
    }
    void SetMapBestTime()
    {
        Utill.ConvetTime(DataManager.Instance.PlayerData.mapList[m_currMapIndex].bestTime, out int minute, out int second, out int millisecond);
        m_sb.Clear();
        m_sb.AppendFormat("최고기록 : {0:00}:{1:00}:{2:00}", minute, second, millisecond); ;
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
        DataManager.Instance.PlayerData.currKart = m_currKartIndex;
    }
    void UpdateMapIndex()
    {
        DataManager.Instance.PlayerData.currMap = m_currMapIndex;
    }
    void ChangeKartActive(int index, bool value)
    {
        m_karts[index].SetActive(value);
    }
    // Start is called before the first frame update
    void Start()
    {
        m_karts = (GameObject[])LobbyManager.Instance.Karts.Clone();
        m_mapSprites = Resources.LoadAll<Sprite>("MapImages");
        m_currKartIndex = DataManager.Instance.PlayerData.currKart;
        m_currMapIndex = DataManager.Instance.PlayerData.currMap;
        ChangeMapImage();
        SetKartName();
        SetMapName();
        SetMapBestTime();
        gameObject.SetActive(false);
    }
}
