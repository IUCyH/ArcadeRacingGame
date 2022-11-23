using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lobby_Garage : MonoBehaviour, ILobbyMenu
{
    [SerializeField]
    GameObject m_cameraArm;
    [SerializeField]
    Rigidbody m_cameraRb;
    Vector3 m_originCamPos;
    Quaternion m_originCamRot;
    [SerializeField]
    float m_speed = 30f;
    float m_yAngle;
    float m_xAngle;
    [SerializeField]
    float m_maxAngleX = 359.2498f;
    [SerializeField]
    bool m_isMouseDown;

    public void Show()
    {
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        ResetCamPosAndRotation();
        gameObject.SetActive(false);
    }
    void ResetCamPosAndRotation()
    {
        m_cameraArm.transform.position = m_originCamPos;
        m_cameraArm.transform.rotation = m_originCamRot;
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
    void Start()
    {
        m_originCamPos = m_cameraArm.transform.position;
        m_originCamRot = m_cameraArm.transform.rotation;
    }
    // Update is called once per frame
    void Update()
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
