using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Text;

public class Lobby_Garage : MonoBehaviour, ILobbyMenu
{
    [SerializeField]
    StringBuilder m_sb = new StringBuilder();
    [SerializeField]
    Text m_driveText;
    [SerializeField]
    KartSelectPanelController m_kartSelectPanel;
    [SerializeField]
    KartViewStageController m_kartViewStage;
    bool m_isMouseDown;
    int m_kartIndex;

    public void SetDriveBtnText(int index)
    {
        m_sb.Clear();
        bool isUsing = DataManager.Instance.PlayerData.carsList[index].isUsing;
        if (isUsing)
        {
            m_sb.Append("사용중");
        }
        else
        {
            m_sb.Append("드라이빙");
        }
        m_driveText.text = m_sb.ToString();
    }
    void SetDriveBtnTextToUse()
    {
        m_sb.Clear();
        m_sb.Append("사용중");
        m_driveText.text = m_sb.ToString();
    }
    public void OnPressDriveBtn()
    {
        m_kartIndex = m_kartSelectPanel.CurrKartIndex;
        SetDriveBtnTextToUse();
        DataManager.Instance.PlayerData.currKart = (byte)m_kartIndex;
        DataManager.Instance.ChangeUsingKart(m_kartIndex);
        LobbyManager.Instance.SetMainLobbyKart();
    }
    public void OnPressKartInvenBtn()
    {
        m_kartSelectPanel.gameObject.SetActive(true);
    }
    public void Show()
    {
        SetDriveBtnTextToUse();
        m_kartSelectPanel.CurrKartIndex = DataManager.Instance.PlayerData.currKart;
        m_kartIndex = DataManager.Instance.PlayerData.currKart;
        m_kartViewStage.SetKartViewCameraActive(true);
        SetKartViewStageActive(true);
        gameObject.SetActive(true);
        LobbyUIManager.Instance.SetStatBarsFillAmount(m_kartIndex);
    }
    public void Hide()
    {
        ResetKartRotation();
        m_kartSelectPanel.CurrKartIndex = DataManager.Instance.PlayerData.currKart;
        m_kartSelectPanel.gameObject.SetActive(false);
        SetKartViewStageActive(false);
        m_kartViewStage.SetKartViewCameraActive(false);
        m_isMouseDown = false;
        gameObject.SetActive(false);
    }
    public void ResetKartRotation()
    {
        m_kartViewStage.ResetKartRotation();
    }
    void SetKartViewStageActive(bool value)
    {
        m_kartViewStage.gameObject.SetActive(value);
    }
    void Awake()
    {
        m_kartIndex = DataManager.Instance.PlayerData.currKart;
        m_kartSelectPanel.gameObject.SetActive(false);
        //Hide();
    }
    // Update is called once per frame
    void Update()
    {
        if (!m_kartSelectPanel.gameObject.activeSelf)
        {
            m_kartViewStage.RotateKartIfMouseDown();
        }
    }
}
