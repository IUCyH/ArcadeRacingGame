using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class Lobby_Shop : MonoBehaviour, ILobbyMenu
{
    enum BuyBtnOnClickEvent
    {
        Buy,
        Select,
        Max
    }
    [SerializeField]
    StringBuilder m_sb = new StringBuilder();
    [SerializeField]
    KartViewStageController m_kartViewStage;

    [SerializeField]
    Button[] m_selectButtons;
    [SerializeField]
    Button m_buyButton;
    [SerializeField]
    List<Text> m_priceTexts;
    [SerializeField]
    Text m_goldText;
    [SerializeField]
    Text m_buyText;
    [SerializeField]
    List<Image> m_goldImages;

    [SerializeField]
    GameObject m_items;
    string m_textBuy = "구매하기";
    string m_textSelect = "즉시 사용";
    string m_textFinishBuy = "구매완료";
    [SerializeField]
    int m_currSelectedKart;

    public void OnPressKartViewStageExitButton()
    {
        if (PopupManager.Instance.IsPopupOpen) return;

        //LobbyUIManager.Instance.SetExitButtonOnClickEventActiveTrue((int)ExitBtnOnClickEvent.MenuObjActiveFalse);
        //LobbyUIManager.Instance.SetExitButtonOnClickEventActiveFalse((int)ExitBtnOnClickEvent.KartViewObjActiveFalse);
        
        m_kartViewStage.ResetKartRotation();

        m_kartViewStage.SetKartViewCameraActive(false);
        SetItemsObjActive(true);
        SetKartViewStageActive(false);

        SetPriceTexts();
    }
    public void OnPressSelectButton(int index)
    {
        bool isPlayable = DataManager.Instance.PlayerData.carsList[index].isPlayable;
        int price = DataManager.Instance.PlayerData.carsList[index].data.price;
        uint playerGold = DataManager.Instance.PlayerData.golds;

        if(isPlayable || PopupManager.Instance.IsPopupOpen)
        {
            return;
        }
        if(price > playerGold)
        {
            PopupManager.Instance.CreatePopupOK("구매알림", "골드가 부족합니다.");
            return;
        }

        m_buyText.text = m_textBuy;
        BuyButtonOnClickEventActiveToTrue((int)BuyBtnOnClickEvent.Buy);
        BuyButtonOnClickEventActiveToFalse((int)BuyBtnOnClickEvent.Select);

        LobbyUIManager.Instance.SetExitButtonOnClickEventActiveTrue((int)ExitBtnOnClickEvent.KartViewObjActiveFalse);
        LobbyUIManager.Instance.SetExitButtonOnClickEventActiveFalse((int)ExitBtnOnClickEvent.MenuObjActiveFalse);
        
        LobbyUIManager.Instance.SetStatBarsFillAmount(index);

        LobbyManager.Instance.SetMainLobbyKart(index);

        m_kartViewStage.SetKartViewCameraActive(true);
        SetItemsObjActive(false);
        SetKartViewStageActive(true);

        m_currSelectedKart = index;
    }
    public void OnPressBuyButton()
    {
        if (PopupManager.Instance.IsPopupOpen) return;

        var playerGold = DataManager.Instance.PlayerData.golds;

        FuncDel okFunc = () =>
        {
            m_buyText.text = m_textSelect;

            BuyButtonOnClickEventActiveToTrue((int)BuyBtnOnClickEvent.Select);
            BuyButtonOnClickEventActiveToFalse((int)BuyBtnOnClickEvent.Buy);

            DataManager.Instance.DecreaseGold(playerGold);
            DataManager.Instance.UpdateKartToPlayable(m_currSelectedKart);
            LobbyManager.Instance.UpdatePlayerGoldAmount(m_goldText);

            PopupManager.Instance.ClosePopup();
            PopupManager.Instance.CreatePopupOK("구매알림", "구매 완료");
        };
        PopupManager.Instance.CreatePopupOkCancel("구매알림", "이 카트를 구매하시겠습니까?", okFunc, null, "예", "아니요");
    }    
    public void SelectKart()
    {
        DataManager.Instance.PlayerData.currKart = m_currSelectedKart;
        DataManager.Instance.ChangeUsingKart(m_currSelectedKart);
    }
    public void Show()
    {
        LobbyManager.Instance.UpdatePlayerGoldAmount(m_goldText);
        SetPriceTexts();
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }
    void BuyButtonOnClickEventActiveToTrue(int index)
    {
        m_buyButton.onClick.SetPersistentListenerState(index, UnityEngine.Events.UnityEventCallState.RuntimeOnly);
    }
    void BuyButtonOnClickEventActiveToFalse(int index)
    {
        m_buyButton.onClick.SetPersistentListenerState(index, UnityEngine.Events.UnityEventCallState.Off);
    }
    void SetKartViewStageActive(bool value)
    {
        m_kartViewStage.gameObject.SetActive(value);
    }
    void SetItemsObjActive(bool value)
    {
        m_items.SetActive(value);
    }
    void SetPriceTexts()
    {
        var length = m_priceTexts.Count;
        
        for (int i = 0; i < length; i++)
        {
            m_sb.Clear();
            int index = i + 1;
            var playable = DataManager.Instance.PlayerData.carsList[index].isPlayable;

            if (playable)
            {
                m_priceTexts[i].text = m_textFinishBuy;
                m_priceTexts[i].alignment = TextAnchor.MiddleLeft;
                m_goldImages[i].enabled = false;
            }
            else
            {
                var price = DataManager.Instance.PlayerData.carsList[index].data.price;
                m_sb.Append(price);
                m_priceTexts[i].text = m_sb.ToString();
                m_priceTexts[i].alignment = TextAnchor.MiddleCenter;
                m_goldImages[i].enabled = true;
            }
        }
    }

    void Awake()
    {
        m_selectButtons = m_items.GetComponentsInChildren<Button>();
        var length = m_selectButtons.Length;
        for (int i = 0; i < length; i++)
        {
            var index = i + 1;
            m_selectButtons[i].onClick.AddListener(() => OnPressSelectButton(index));
            var priceText = m_selectButtons[i].GetComponentInChildren<Text>();
            var goldImage = m_selectButtons[i].transform.GetChild(1).GetComponent<Image>();
            if (priceText != null)
            {
                m_priceTexts.Add(priceText);
            }
            if(goldImage != null)
            {
                m_goldImages.Add(goldImage);
            }
        }
        SetPriceTexts();
    }
    // Update is called once per frame
    void Update()
    {
        m_kartViewStage.RotateKartIfMouseDown();
    }
}
