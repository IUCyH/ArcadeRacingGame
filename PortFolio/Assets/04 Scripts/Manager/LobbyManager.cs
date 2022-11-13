using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LobbyManager : Singleton<LobbyManager>
{
    [SerializeField]
    GameObject m_targetPlayer;
    [SerializeField]
    Camera m_camera;
    [SerializeField]
    Vector3 m_currMousePos;
    [SerializeField]
    float m_distOfCamera = 1.5f;
    [SerializeField]
    bool m_isMouseDown;

    Vector3? GetMousePostion()
    {
        Ray ray = m_camera.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, 1000f))
        {
            return hit.point;
        }
        return null;
    }
    protected override void OnStart()
    {
        m_camera = Camera.main;
    }
    // Update is called once per frame
    void Update()
    {
        if(m_isMouseDown)
        {
            

        }
        if (Input.GetKeyDown(KeyCode.Mouse0))
        {
            m_isMouseDown = true;
            m_currMousePos = Input.mousePosition;
        }
        m_camera.transform.LookAt(m_targetPlayer.transform);
    }
}
