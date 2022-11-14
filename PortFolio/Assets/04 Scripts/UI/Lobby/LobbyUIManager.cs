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
    [SerializeField]
    int m_menuIndex;
    void OnPressButton(Button button)
    {
        SetGameObjectActive(m_mainLobby, false);
        SetGameObjectActive(m_lobbyMenu, true);
        var name = button.gameObject.name.Split('_');
        m_menuIndex = int.Parse(name[0]);
        m_lobbyMenus[m_menuIndex].Show();
    }
    public void OnPressExitButton()
    {
        m_lobbyMenus[m_menuIndex].Hide();
        LobbyManager.Instance.ResetCamPos();
        LobbyManager.Instance.ResetCamRotation();
        SetGameObjectActive(m_lobbyMenu, false);
        SetGameObjectActive(m_mainLobby, true);
    }
    void SetGameObjectActive(GameObject obj, bool value)
    {
        obj.SetActive(value);
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
        SetGameObjectActive(m_lobbyMenu, false);
    }
}
