using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MapSelectPanelController : MonoBehaviour
{
    [SerializeField]
    Image m_mapImage;
    [SerializeField]
    Image m_kartImage;
    [SerializeField]
    Text m_mapNameText;
    [SerializeField]
    Text m_kartNameText;
    [SerializeField]
    Text m_mapBestRecordText;
    [SerializeField]
    Sprite[] m_kartSprites;
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
        var maxIndex = m_kartSprites.Length - 1;
        if(m_currKartIndex < maxIndex)
        {
            m_currKartIndex++;
            m_kartImage.sprite = m_kartSprites[m_currKartIndex];
        }
        m_kartNameText.text = DataManager.Instance.PlayerData.carsList[m_currKartIndex].data.name;
    }
    public void OnPressKartPrevButton()
    {
        if(m_currKartIndex > 0)
        {
            m_currKartIndex--;
            m_kartImage.sprite = m_kartSprites[m_currKartIndex];
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
        gameObject.SetActive(false);
    }
    void UpdateKartIndex()
    {
        DataManager.Instance.PlayerData.currKart = m_currKartIndex;
    }
    // Start is called before the first frame update
    void Start()
    {
        m_kartSprites = Resources.LoadAll<Sprite>("KartSprites");
        m_currKartIndex = DataManager.Instance.PlayerData.currKart;
        m_kartImage.sprite = m_kartSprites[m_currKartIndex];
        m_kartNameText.text = DataManager.Instance.PlayerData.carsList[m_currKartIndex].data.name;
        gameObject.SetActive(false);
    }
}
