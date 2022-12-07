using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;


public class LobbyManager : Singleton<LobbyManager>
{
    [SerializeField]
    StringBuilder m_sb = new StringBuilder();
    [SerializeField]
    Text m_goldText;
    [SerializeField]
    GameObject m_kartParentObj;
    [SerializeField]
    GameObject[] m_kartPrefabs;
    [SerializeField]
    List<GameObject> m_karts;
    [SerializeField]
    GameObject m_cameraArm;
    [SerializeField]
    Rigidbody m_cameraRb;
    EventSystem m_eventSys;
    Vector3 m_originCamPos;
    Quaternion m_originCamRot;

    int m_currKartIndex;
    [SerializeField]
    float m_speed = 30f;
    float m_yAngle;
    float m_xAngle;
    [SerializeField]
    float m_maxAngleX = 359.2498f;
    [SerializeField]
    bool m_isMouseDown;
    
    public List<GameObject> Karts { get { return m_karts; } }

    public void InitMainLobby()
    {
        SetMainLobbyKart();
        ResetCamPos();
        ResetCamRotation();
        UpdateMainLobbyGoldAmount();
        m_isMouseDown = false;
    }
    public void ResetCamPos()
    {
        m_cameraArm.transform.position = m_originCamPos;
    }
    public void ResetCamRotation()
    {
        m_cameraArm.transform.rotation = m_originCamRot;
    }
    public void SetMainLobbyKart()
    {
        m_karts[m_currKartIndex].SetActive(false);
        var index = DataManager.Instance.PlayerData.currKart;
        m_karts[index].SetActive(true);
        m_currKartIndex = index;
    }
    public void SetMainLobbyKart(int index)
    {
        m_karts[m_currKartIndex].SetActive(false);
        m_karts[index].SetActive(true);
        m_currKartIndex = index;
    }
    public void UpdateMainLobbyGoldAmount()
    {
        m_sb.Append(DataManager.Instance.GetPlayerGold());
        m_goldText.text = m_sb.ToString();
        m_sb.Clear();
    }
    public void UpdatePlayerGoldAmount(Text goldText)
    {
        m_sb.Append(DataManager.Instance.GetPlayerGold());
        goldText.text = m_sb.ToString();
        m_sb.Clear();
    }
    void RotateCamera()
    {
        var mouseDelta = new Vector2(InputManager.Instance.MouseX, InputManager.Instance.MouseY);
        var camAngle = m_cameraArm.transform.eulerAngles;
        m_xAngle = camAngle.x - mouseDelta.y;
        m_yAngle = camAngle.y + mouseDelta.x;

        m_xAngle = AngleClamp(m_xAngle, m_maxAngleX);
        m_cameraArm.transform.rotation = Quaternion.Euler(m_xAngle, m_yAngle, camAngle.z);
    }
    float AngleClamp(float angle, float maxAngle)
    {
        if (angle < maxAngle)
        {
            return Mathf.Clamp(angle, 0f, 25f);
        }
        else
        {
            return Mathf.Clamp(angle, 355f, 359f);
        }
    }
    void GetKartPrefabs()
    {
        var length = DataManager.Instance.PlayerData.carsList.Count;
        m_kartPrefabs = new GameObject[length];

        for (int i = 0; i < length; i++)
        {
            string name = DataManager.Instance.PlayerData.carsList[i].data.name;
            string path = string.Format("Prefab/Karts/{0}", name);
            m_kartPrefabs[i] = Resources.Load<GameObject>(path);
        }
    }
    void InstantiateKarts()
    {
        int length = DataManager.Instance.PlayerData.carsList.Count;

        for (int i = 0; i < length; i++)
        {
            GameObject kart = m_kartPrefabs[i];
            GameObject obj = Instantiate(kart);

            obj.transform.SetParent(m_kartParentObj.transform);
            obj.transform.localPosition = Vector3.zero;
            obj.transform.localScale = Vector3.one;
            obj.transform.localRotation = Quaternion.identity;

            var children = obj.GetComponentsInChildren<Transform>();
            foreach(Transform child in children)
            {
                child.gameObject.layer = 7;
            }
            obj.SetActive(false);
            m_karts.Add(obj);
        }
    }
    void ToDoWhenEscKeyIsPressed()
    {
        if (PopupManager.Instance.IsPopupOpen)
        {
            PopupManager.Instance.ClosePopup();
        }
        else if (LobbyUIManager.Instance.IsMenuOpen)
        {
            LobbyUIManager.Instance.CloseMenu();
        }
        else
        {
            GameSettingManager.Instance.SetSettingPanelsActive();
        }
    }
    protected override void OnAwake()
    {
        m_karts = new List<GameObject>();
        GetKartPrefabs();
        InstantiateKarts();
    }
    
    protected override void OnStart()
    {
        m_originCamPos = m_cameraArm.transform.position;
        m_originCamRot = m_cameraArm.transform.rotation;
        m_eventSys = EventSystem.current;
        SetMainLobbyKart();
        UpdateMainLobbyGoldAmount();
    }
    // Update is called once per frame
    void Update()
    {
        if(InputManager.Instance.EscKeyDown)
        {
            ToDoWhenEscKeyIsPressed();
        }
        
        if (!m_eventSys.IsPointerOverGameObject())
        {
            if (InputManager.Instance.MouseDown)
            {
                m_isMouseDown = true;
            }
            if (InputManager.Instance.MouseUp)
            {
                m_cameraRb.AddTorque(m_speed * InputManager.Instance.MouseX * m_yAngle * Time.deltaTime * Vector3.up);
                m_isMouseDown = false;
            }
            if (m_isMouseDown)
            {
                RotateCamera();
            }
        }
    }
}
