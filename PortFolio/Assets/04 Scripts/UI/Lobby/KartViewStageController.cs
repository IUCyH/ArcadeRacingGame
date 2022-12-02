using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class KartViewStageController : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, ILobbySubMenu
{

    [SerializeField]
    GameObject m_kartParentObj;
    [SerializeField]
    Camera m_kartViewCam;

    [SerializeField]
    float m_speed = 25f;
    [SerializeField]
    bool m_isMouseDown;

    public void Show()
    {
        SetKartViewCameraActive(true);
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        ResetKartRotation();
        SetKartViewCameraActive(false);
        gameObject.SetActive(false);
    }
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
        if (m_isMouseDown)
        {
            RotateKart();
        }
    }
    public void OnPointerDown(PointerEventData eventData)
    {
        m_isMouseDown = true;
        Debug.Log("Clicked");
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        m_isMouseDown = false;
        Debug.Log("Click Up");
    }
    void RotateKart()
    {
        float yAngle = m_kartParentObj.transform.eulerAngles.y - InputManager.Instance.MouseX * Time.deltaTime * m_speed;
        Vector3 rotation = new Vector3(0f, yAngle, 0f);
        m_kartParentObj.transform.rotation = Quaternion.Euler(rotation);
    }

    void Awake()
    {
        SetKartViewCameraActive(false);
        gameObject.SetActive(false);
    }
}
