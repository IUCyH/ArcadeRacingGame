using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KartSelectPanelController : MonoBehaviour
{
    [SerializeField]
    Lobby_Garage m_garageMenu;
    [SerializeField]
    Button[] m_kartButtons;
    [SerializeField]
    Text[] m_kartNames;

    public void OnPressExit()
    {
        gameObject.SetActive(false);
    }
    public void OnPressKartButton(int index)
    {
        LobbyManager.Instance.SetMainLobbyKart(index);
        m_garageMenu.SetDriveBtnText(index);
    }
    // Start is called before the first frame update
    void Start()
    {
        m_kartButtons = GetComponentsInChildren<Button>();
        m_kartNames = GetComponentsInChildren<Text>();
        var buttonLength = m_kartButtons.Length - 1;
        var textLength = m_kartNames.Length;
        for(int i = 0; i < buttonLength; i++)
        {
            var index = i;
            m_kartButtons[i].onClick.AddListener(() => OnPressKartButton(index));
        }
        for(int i = 0; i < textLength; i++)
        {
            m_kartNames[i].text = DataManager.Instance.PlayerData.carsList[i].data.name;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
