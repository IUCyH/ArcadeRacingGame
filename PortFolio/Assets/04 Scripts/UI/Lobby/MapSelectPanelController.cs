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

    public void OnPressMapNextButton()
    {

    }
    public void OnPressMapPrevButton()
    {

    }
    public void OnPressKartNextButton()
    {

    }
    public void OnPressKartPrevButton()
    {

    }
    // Start is called before the first frame update
    void Start()
    {
        gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
