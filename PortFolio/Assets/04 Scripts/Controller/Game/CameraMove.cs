using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMove : MonoBehaviour
{
    [SerializeField]
    float m_speed;
    [SerializeField]
    float m_startYRotation;
    [SerializeField]
    float m_endYRotation;

    [SerializeField]
    float m_valueT;
    
    public bool IsMoveDone { get; set; }
    
    IEnumerator Coroutine_CameraMoving(bool loop)
    {
        bool isReverse = false;
        
        SetCameraRotationToStartRot();
        m_valueT = 0f;

        while (true)
        {
            var yRotation = transform.eulerAngles.y;
            if (yRotation > 180f)
            {
                yRotation -= 360f;
            }
            
            if (Mathf.Approximately(yRotation, m_endYRotation))
            {
                m_valueT = 0f;
                isReverse = true;
                
                if (!loop)
                {
                    IsMoveDone = true;
                    SetCameraRotationToStartRot();
                    TurnOffCamera();
                    yield break;
                }
            }
            if (Mathf.Approximately(yRotation, m_startYRotation))
            {
                m_valueT = 0f;
                isReverse = false;
            }

            if (isReverse)
            {
                MoveReverse();
            }
            else
            {
                Move();
            }

            yield return null;
        }
    }
    
    void TurnOnCamera()
    {
        gameObject.SetActive(true);
    }

    void TurnOffCamera()
    {
        gameObject.SetActive(false);
    }
    
    public void StartMoving(bool loop = false)
    {
        IsMoveDone = false;
        TurnOnCamera();
        StartCoroutine(Coroutine_CameraMoving(loop));
    }

    void SetCameraRotationToStartRot()
    {
        transform.rotation = Quaternion.Euler(0f, m_startYRotation, 0f);
    }

    void Move()
    {
        m_valueT += m_speed * Time.deltaTime;

        float result = Mathf.Lerp(m_startYRotation, m_endYRotation, m_valueT);
        
        transform.rotation = Quaternion.Euler(0f, result, 0f);
    }

    void MoveReverse()
    {
        m_valueT += m_speed * Time.deltaTime;

        float result = Mathf.Lerp(m_endYRotation, m_startYRotation, m_valueT);
        
        transform.rotation = Quaternion.Euler(0f, result, 0f);
    }
}
