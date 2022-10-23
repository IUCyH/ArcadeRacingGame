using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapController : MonoBehaviour
{
    [Tooltip("Lap Time on this map")]
    [SerializeField]
    int m_lapTime = 1;

    public int LapTime { get { return m_lapTime; } }
    void Start()
    {
        m_lapTime = 1;
    }
    void OnTriggerEnter(Collider other)
    {
        if(GameSystemManager.Instance.IsEnd && other.CompareTag("Player"))
        {
            Debug.Log("End!");
        }
    }
}
