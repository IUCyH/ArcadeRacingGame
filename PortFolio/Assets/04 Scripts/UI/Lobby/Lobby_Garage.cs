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
    GameObject m_kartSelectPanel;
    [SerializeField]
    GameObject m_kartParentObj;
    [SerializeField]
    Camera m_camera;
    [SerializeField]
    float m_speed = 25f;
    bool m_isMouseDown;
    byte m_kartIndex;

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
    void SetDriveBtnText()
    {
        m_sb.Clear();
        bool isUsing = DataManager.Instance.PlayerData.carsList[m_kartIndex].isUsing;
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
    public void OnPressDriveBtn()
    {
        LobbyManager.Instance.SetMainLobbyKart();
        m_kartIndex = DataManager.Instance.PlayerData.currKart;
        DataManager.Instance.ChangeUsingKart(m_kartIndex);
        SetDriveBtnText();
    }
    public void OnPressKartInvenBtn()
    {
        m_kartSelectPanel.SetActive(true);
    }
    public void Show()
    {
        m_camera.gameObject.SetActive(true);
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        ResetKartRotation();
        m_kartSelectPanel.SetActive(false);
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
        m_kartSelectPanel.SetActive(false);
        Hide();
    }
    // Update is called once per frame
    void Update()
    {
        if (!m_kartSelectPanel.activeSelf)
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
