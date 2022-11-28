using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class KartViewStageController : MonoBehaviour
{
    [SerializeField]
    Camera m_camera;

    [SerializeField]
    Canvas m_LobbyCanvas;
    [SerializeField]
    GraphicRaycaster m_graphicRaycaster;
    [SerializeField]
    PointerEventData m_pointEventData;
    [SerializeField]
    List<RaycastResult> m_rayCastResults = new List<RaycastResult>();

    [SerializeField]
    GameObject m_kartParentObj;
    [SerializeField]
    Camera m_kartViewCam;

    [SerializeField]
    float m_speed = 25f;
    [SerializeField]
    bool m_isMouseDown;

    public void SetKartViewCameraActive(bool value)
    {
        m_kartViewCam.gameObject.SetActive(value);
    }
    public void ResetKartRotation()
    {
        m_kartParentObj.transform.localRotation = Quaternion.identity;
    }
    public void RotateKartIfMouseDown()
    {
        if (gameObject.activeSelf && CheckIfLayerIsBackGround())
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
    void RotateKart()
    {
        float yAngle = m_kartParentObj.transform.eulerAngles.y - InputManager.Instance.MouseX * Time.deltaTime * m_speed;
        Vector3 rotation = new Vector3(0f, yAngle, 0f);
        m_kartParentObj.transform.rotation = Quaternion.Euler(rotation);
    }
    bool CheckIfLayerIsBackGround()
    {
        m_pointEventData.position = Input.mousePosition;
        m_graphicRaycaster.Raycast(m_pointEventData, m_rayCastResults);

        if(m_rayCastResults.Count > 0)
        {
            if (m_rayCastResults[0].gameObject.CompareTag("Background"))
            {
                //Debug.Log(m_rayCastResults[0].gameObject.layer);
                return true;
            }
        }
        return false;
    }
    void OnDisable()
    {
        m_isMouseDown = false;
    }
    void Awake()
    {
        m_camera = Camera.main;
        SetKartViewCameraActive(false);
        m_graphicRaycaster = m_LobbyCanvas.GetComponent<GraphicRaycaster>();
        m_pointEventData = new PointerEventData(null);
        gameObject.SetActive(false);
    }
}
