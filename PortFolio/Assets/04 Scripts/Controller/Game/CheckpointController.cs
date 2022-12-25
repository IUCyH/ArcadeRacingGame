using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckpointController : MonoBehaviour
{
    [Tooltip("order of this checkpoint")]
    [SerializeField]
    int m_checkNumber;

    public int CheckNumber { set { m_checkNumber = value; } }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            GameSystemManager.Instance.OnThroughCheckPoint(m_checkNumber, this.tag);
            //Debug.Log(GameSystemManager.Instance.IsEnd);
        }
    }
}
