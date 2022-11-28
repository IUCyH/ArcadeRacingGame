using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Lobby_Shop : MonoBehaviour, ILobbyMenu
{
    [SerializeField]
    KartViewStageController m_kartViewStage;
    [SerializeField]
    Button[] m_selectButtons;
    [SerializeField]
    Button m_buyButton;
    [SerializeField]
    GameObject m_items;

    public void OnPressKartViewStageExitButton()
    {
        LobbyUIManager.Instance.SetExitButtonOnClickEventActiveTrue((int)ExitBtnOnClickEvent.MenuObjActiveFalse);
        LobbyUIManager.Instance.SetExitButtonOnClickEventActiveFalse((int)ExitBtnOnClickEvent.KartViewObjActiveFalse);
        m_kartViewStage.ResetKartRotation();
        m_kartViewStage.SetKartViewCameraActive(false);
        SetItemsObjActive(true);
        SetKartViewStageActive(false);
    }
    public void OnPressSelectButton(int index)
    {
        LobbyUIManager.Instance.SetExitButtonOnClickEventActiveTrue((int)ExitBtnOnClickEvent.KartViewObjActiveFalse);
        LobbyUIManager.Instance.SetExitButtonOnClickEventActiveFalse((int)ExitBtnOnClickEvent.MenuObjActiveFalse);
        LobbyUIManager.Instance.SetStatBarsFillAmount(index); 
        LobbyManager.Instance.SetMainLobbyKart(index);
        m_kartViewStage.SetKartViewCameraActive(true);
        SetItemsObjActive(false);
        SetKartViewStageActive(true);
    }
    public void Show()
    {
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }
    void SetKartViewStageActive(bool value)
    {
        m_kartViewStage.gameObject.SetActive(value);
    }
    void SetItemsObjActive(bool value)
    {
        m_items.SetActive(value);
    }

    void Awake()
    {
        m_selectButtons = m_items.GetComponentsInChildren<Button>();
        var length = m_selectButtons.Length;
        for(int i = 0; i < length; i++)
        {
            var index = i + 1;
            m_selectButtons[i].onClick.AddListener(() => OnPressSelectButton(index));
        }
    }
    // Update is called once per frame
    void Update()
    {
        m_kartViewStage.RotateKartIfMouseDown();
    }
}
