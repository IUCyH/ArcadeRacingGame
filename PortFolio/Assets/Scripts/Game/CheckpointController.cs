using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckpointController : MonoBehaviour
{
    [Tooltip("order of this checkpoint")]
    [SerializeField]
    int m_checkNumber;
    void Start()
    {
        var name = transform.name.Split('_');
        m_checkNumber = int.Parse(name[1]);
    }
    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            GameSystemManager.Instance.OnTroughCheckPoint(m_checkNumber);
            //Debug.Log(GameSystemManager.Instance.IsEnd);
        }
    }
}
