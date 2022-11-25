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
    GameObject m_kartParentObj;
    [SerializeField]
    Camera m_camera;
    [SerializeField]
    float m_speed = 25f;
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
        DataManager.Instance.PlayerData.currKart = (byte)m_kartIndex;
        DataManager.Instance.ChangeUsingKart(m_kartIndex);
        SetDriveBtnTextToUse();
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
        m_camera.gameObject.SetActive(true);
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        ResetKartRotation();
        m_kartSelectPanel.CurrKartIndex = DataManager.Instance.PlayerData.currKart;
        m_kartSelectPanel.gameObject.SetActive(false);
        m_camera.gameObject.SetActive(false);
        m_isMouseDown = false;
        gameObject.SetActive(false);
    }
    void RotateKart()
    {
        float yAngle = m_kartParentObj.transform.eulerAngles.y - InputManager.Instance.MouseX * Time.deltaTime * m_speed;
        Vector3 rotation = new Vector3(0f, yAngle, 0f);
        m_kartParentObj.transform.rotation = Quaternion.Euler(rotation);
    }
    void ResetKartRotation()
    {
        m_kartParentObj.transform.localRotation = Quaternion.identity;
    }
    void Start()
    {
        m_kartIndex = DataManager.Instance.PlayerData.currKart;
        m_kartSelectPanel.gameObject.SetActive(false);
        Hide();
    }
    // Update is called once per frame
    void Update()
    {
        if (!m_kartSelectPanel.gameObject.activeSelf)
        {
            if (InputManager.Instance.MouseDown)
            {
                m_isMouseDown = true;
            }
            if (InputManager.Instance.MouseUp)
            {
                m_isMouseDown = false;
            }
            if (m_isMouseDown)
            {
                RotateKart();
            }
        }
    }
}
