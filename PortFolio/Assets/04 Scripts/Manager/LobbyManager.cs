using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LobbyManager : Singleton<LobbyManager>
{
    [SerializeField]
    Camera m_kartModelCam;
    [SerializeField]
    GameObject[] m_karts;
    [SerializeField]
    GameObject m_cameraArm;
    [SerializeField]
    Rigidbody m_cameraRb;
    Vector3 m_originCamPos;
    Quaternion m_originCamRot;

    int m_currKartIndex;
    float m_yAngle;
    float m_xAngle;
    [SerializeField]
    float m_maxAngleX = 359.2498f;
    [SerializeField]
    bool m_isMouseDown;
    
    public GameObject[] Karts { get { return m_karts; } }

    public void SetKartModelCamActive(bool value)
    {
        m_kartModelCam.gameObject.SetActive(value);
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
    protected override void OnStart()
    {
        SetKartModelCamActive(false);
        m_originCamPos = m_cameraArm.transform.position;
        m_originCamRot = m_cameraArm.transform.rotation;
        m_karts = GameObject.FindGameObjectsWithTag("Kart");
        var length = m_karts.Length;
        for(int i = 0; i < length; i++)
        {
            m_karts[i].SetActive(false);
        }
        SetMainLobbyKart();
    }
    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            m_isMouseDown = true;
        }
        else if(Input.GetMouseButtonUp(0))
        {
            m_cameraRb.AddTorque(30f * InputManager.Instance.MouseX * m_yAngle * Time.deltaTime * Vector3.up);
            m_isMouseDown = false;
        }
        if(m_isMouseDown)
        {
            RotateCamera();
        }
    }
}
