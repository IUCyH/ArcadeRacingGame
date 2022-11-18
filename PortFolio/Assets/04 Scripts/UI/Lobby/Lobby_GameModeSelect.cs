using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Lobby_GameModeSelect : MonoBehaviour, ILobbyMenu
{
    [SerializeField]
    Button[] m_buttons;
    [SerializeField]
    GameObject m_mapSelectPanel;

    void OnPressTimeAttackButton(bool isShadow)
    {
        m_mapSelectPanel.SetActive(true);
    }
    public void Show()
    {
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }
    void Start()
    {
        m_buttons = GetComponentsInChildren<Button>();
        m_buttons[0].onClick.AddListener(() => OnPressTimeAttackButton(false));
        m_buttons[1].onClick.AddListener(() => OnPressTimeAttackButton(true));
        Hide();
    }
}
