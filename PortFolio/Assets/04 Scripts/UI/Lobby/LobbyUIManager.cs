using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LobbyUIManager : Singleton<LobbyUIManager>
{
    [SerializeField]
    Button[] m_lobbyButtons;
    [SerializeField]
    GameObject m_lobbyMenu;
    [SerializeField]
    GameObject m_mainLobby;
    [SerializeField]
    ILobbyMenu[] m_lobbyMenus;
    void OnPressButton(Button button)
    {
        m_mainLobby.SetActive(false);
        var name = button.gameObject.name.Split('_');
        var index = int.Parse(name[0]);
        m_lobbyMenus[index].Show();
    }
    protected override void OnStart()
    {
        var length = m_lobbyButtons.Length;
        m_lobbyButtons = m_mainLobby.GetComponentsInChildren<Button>();
        m_lobbyMenus = m_lobbyMenu.GetComponentsInChildren<ILobbyMenu>(true);
        for(int i = 0; i < length; i++)
        {
            var button = m_lobbyButtons[i];
            m_lobbyButtons[i].onClick.AddListener(() => OnPressButton(button));
        }
    }
}
