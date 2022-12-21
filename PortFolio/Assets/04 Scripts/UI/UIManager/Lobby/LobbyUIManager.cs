using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public enum Menu
{
    ModeSelect,
    Garage,
    Shop,
    Max
}
public enum ExitBtnOnClickEvent
{
    MenuObjActiveFalse,
    KartViewObjActiveFalse,
    Max
}
public class LobbyUIManager : Singleton<LobbyUIManager>
{
    enum KartStat
    {
        Speed,
        TurnPower,
        BoosterTime,
        ChargingSpeed,
        Max
    }

    [SerializeField]
    Button m_exitButton;
    [SerializeField]
    Button[] m_lobbyButtons;
    [SerializeField]
    GameObject m_lobbyMenu;
    [SerializeField]
    GameObject m_mainLobby;
    [SerializeField]
    Image[] m_Garage_statBars;
    ILobbyMenu[] m_lobbyMenus;
    [SerializeField]
    Stack<ILobbySubMenu> m_subMenuStack;
    [SerializeField]
    float m_time;
    [SerializeField]
    float m_speed;

    float m_speedFillAmount;
    float m_turnPowerFillAmount;
    float m_boosterTimeFillAmount;
    float m_chargingSpeedFillAmount;

    [SerializeField]
    int m_menuIndex;
    int m_kartIndex;
    bool m_setStatBars;

    public bool IsMenuOpen { get; set; }

    public void SetExitButtonActive(bool value)
    {
        m_exitButton.gameObject.SetActive(value);
    }
    public void PushSubMenuStack(ILobbySubMenu subMenu)
    {
        m_subMenuStack.Push(subMenu);
    }
    public void SetStatBarsFillAmount(int kartIndex)
    {
        m_kartIndex = kartIndex;
        var carData = DataManager.Instance.PlayerData.carsList[m_kartIndex].data;

        m_speedFillAmount = carData.maxBoosterSpeed;
        m_turnPowerFillAmount = carData.maxTurnPower;
        m_boosterTimeFillAmount = carData.boosterTime;
        m_chargingSpeedFillAmount = carData.driftBoosterChargingValue;

        m_time = 0f;
        m_setStatBars = true;
    }
    public void OnPressSubMenuExitButton()
    {
        //if (PopupManager.Instance.IsPopupOpen) return;

        SoundManager.Instance.PlaySFX(SFXClip.Close);
        var subMenu = m_subMenuStack.Pop();
        subMenu.Hide();
    }
    public void OnPressExitButton()
    {
        SoundManager.Instance.PlaySFX(SFXClip.Close);
        if (m_subMenuStack.Count > 0) return;

        m_lobbyMenus[m_menuIndex].Hide();
        IsMenuOpen = false;
        InitMainLobby();
        DataManager.Instance.SavePlayerData();
    }
    public void CloseMenu()
    {
        if (m_subMenuStack.Count > 0)
        {
            OnPressSubMenuExitButton();
        }
        else
        {
            OnPressExitButton();
        }
    }
    public void InitMainLobby()
    {
        LobbyManager.Instance.InitMainLobby();
        m_subMenuStack.Clear();

        SetGameObjectActive(m_lobbyMenu, false);
        SetGameObjectActive(m_mainLobby, true);
    }
    void SetStatBarsFillAmount()
    {
        m_Garage_statBars[(int)KartStat.Speed].fillAmount = GetFillAmountValue(0f, m_speedFillAmount);
        m_Garage_statBars[(int)KartStat.TurnPower].fillAmount = GetFillAmountValue(0f, m_turnPowerFillAmount);
        m_Garage_statBars[(int)KartStat.BoosterTime].fillAmount = GetFillAmountValue(0f, m_boosterTimeFillAmount);
        m_Garage_statBars[(int)KartStat.ChargingSpeed].fillAmount = GetFillAmountValue(0f, m_chargingSpeedFillAmount);
        
        m_time += Time.deltaTime / m_speed;
        if (m_time > 1f)
        {
            m_time = 0f;
            m_setStatBars = false;
        }
    }
    float GetFillAmountValue(float from, float to)
    {
        float value = from * (1f - m_time) + to * m_time;
        return value;
    }
    void OnPressButton(Button button)
    {
        var name = button.gameObject.name.Split('_');
        m_menuIndex = int.Parse(name[0]);
        m_lobbyMenus[m_menuIndex].Show();
        IsMenuOpen = true;
        SetGameObjectActive(m_mainLobby, false);
        SetGameObjectActive(m_lobbyMenu, true);
        SoundManager.Instance.PlaySFX(SFXClip.Open);
    }
    void SetGameObjectActive(GameObject obj, bool value)
    {
        obj.SetActive(value);
    }
    protected override void OnStart()
    {
        m_lobbyButtons = m_mainLobby.GetComponentsInChildren<Button>();
        m_lobbyMenus = m_lobbyMenu.GetComponentsInChildren<ILobbyMenu>(true);

        var length = m_lobbyButtons.Length;
        for (int i = 0; i < length; i++)
        {
            var button = m_lobbyButtons[i];
            m_lobbyButtons[i].onClick.AddListener(() => OnPressButton(button));
            m_lobbyMenus[i].Hide();
        }
        SetGameObjectActive(m_lobbyMenu, false);
        m_subMenuStack = new Stack<ILobbySubMenu>();
    }
    void Update()
    {
        if (m_setStatBars)
        {
            SetStatBarsFillAmount();
        }
    }
}
