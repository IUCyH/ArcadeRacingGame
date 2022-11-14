using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LobbyManager : Singleton<LobbyManager>
{
    [SerializeField]
    GameObject m_targetPlayer;
    [SerializeField]
    Camera m_camera;
    Vector3 m_point;
    Vector3 m_originCamPos;
    Quaternion m_originCamRot;

    [Range(0f, 10f)]
    [SerializeField]
    float m_maxCamPosX;

    [Range(-10f, 5f)]
    [SerializeField]
    float m_minCamPosX;

    [Range(0f, 5f)]
    [SerializeField]
    float m_maxCamPosY = 2.313914f;

    [Range(-10f, 4f)]
    [SerializeField]
    float m_minCamPosY = 0f;

    [Range(-10f, 10f)]
    [SerializeField]
    float m_maxCamPosZ;

    [Range(-10f, 5f)]
    [SerializeField]
    float m_minCamPosZ;

    [SerializeField]
    float m_maxCamRotX;
    [SerializeField]
    float m_minCamRotX;
    [SerializeField]
    float m_maxCamRotY;
    [SerializeField]
    float m_minCamRotY;
    [SerializeField]
    float m_rotationX;
    [SerializeField]
    float m_rotationY;
    [SerializeField]
    float m_speed;
    [SerializeField]
    bool m_isMouseDown;

    public void ResetCamPos()
    {
        m_camera.transform.position = m_originCamPos;
    }
    public void ResetCamRotation()
    {
        m_camera.transform.rotation = m_originCamRot;
    }
    void RotateCamera()
    {
        m_rotationX = InputManager.Instance.MouseX * Time.deltaTime * m_speed;
        m_rotationY = InputManager.Instance.MouseY * Time.deltaTime * m_speed;
        m_camera.transform.RotateAround(m_point, Vector3.right, -m_rotationY);
        m_camera.transform.RotateAround(m_point, Vector3.up, m_rotationX);
        LimitCameraPos();
        m_camera.transform.LookAt(m_targetPlayer.transform);
    }
    void LimitCameraPos()
    {
        var posClampX = Mathf.Clamp(m_camera.transform.position.x, m_minCamPosX, m_maxCamPosX);
        var posClampY = Mathf.Clamp(m_camera.transform.position.y, m_minCamPosY, m_maxCamPosY);
        var posClampZ = Mathf.Clamp(m_camera.transform.position.z, m_minCamPosZ, m_maxCamPosZ);
        m_camera.transform.position = new Vector3(posClampX, posClampY, posClampZ);
    }
    protected override void OnStart()
    {
        m_camera = Camera.main;
        m_point = m_targetPlayer.transform.position;
        RotateCamera();
        m_originCamPos = m_camera.transform.position;
        m_originCamRot = m_camera.transform.rotation;
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
            m_isMouseDown = false;
        }
        if(m_isMouseDown)
        {
            RotateCamera();
        }
    }
}
