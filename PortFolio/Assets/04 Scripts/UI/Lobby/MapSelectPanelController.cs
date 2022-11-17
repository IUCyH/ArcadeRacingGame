using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MapSelectPanelController : MonoBehaviour
{
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
    Sprite[] m_mapSprties;
    byte m_currKartIndex;

    public void OnPressMapNextButton()
    {

    }
    public void OnPressMapPrevButton()
    {

    }
    public void OnPressKartNextButton()
    {
        var maxIndex = m_karts.Length - 1;
        if(m_currKartIndex < maxIndex)
        {
            ChangeKartActive(m_currKartIndex, false);
            m_currKartIndex++;
            ChangeKartActive(m_currKartIndex, true);
        }
        m_kartNameText.text = DataManager.Instance.PlayerData.carsList[m_currKartIndex].data.name;
    }
    public void OnPressKartPrevButton()
    {
        if(m_currKartIndex > 0)
        {
            ChangeKartActive(m_currKartIndex, false);
            m_currKartIndex--;
            ChangeKartActive(m_currKartIndex, true);
        }
        m_kartNameText.text = DataManager.Instance.PlayerData.carsList[m_currKartIndex].data.name;
    }
    public void OnPressStart()
    {
        UpdateKartIndex();
        DataManager.Instance.Save();
        LoadSceneManager.Instance.LoadSceneAsync(SceneState.Game);
    }
    public void OnPressExit()
    {
        UpdateKartIndex();
        DataManager.Instance.Save();
        LoadSceneManager.Instance.LoadSceneAsync(SceneState.Lobby, false);
    }
    void UpdateKartIndex()
    {
        DataManager.Instance.PlayerData.currKart = m_currKartIndex;
    }
    void ChangeKartActive(int index, bool value)
    {
        m_karts[index].SetActive(value);
    }
    // Start is called before the first frame update
    void Start()
    {
        m_karts = GameObject.FindGameObjectsWithTag("Kart");
        var length = m_karts.Length;
        for (int i = 0; i < length; i++)
            m_karts[i].SetActive(false);
        m_currKartIndex = DataManager.Instance.PlayerData.currKart;
        m_kartNameText.text = DataManager.Instance.PlayerData.carsList[m_currKartIndex].data.name;
        ChangeKartActive(m_currKartIndex, true);
    }
}
