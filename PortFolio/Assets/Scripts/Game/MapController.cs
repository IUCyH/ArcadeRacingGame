using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapController : MonoBehaviour
{
    [Tooltip("Lap Time on this map")]
    [SerializeField]
    int m_lapTime;

    public int LapTime { get { return m_lapTime; } }
    void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag("Player")) return;

        if(GameSystemManager.Instance.IsEnd)
        {
            Debug.Log("End!");
        }
        else if(GameSystemManager.Instance.IsCompleteLap)
        {
            GameSystemManager.Instance.IncreaseLapTime();
            GameSystemManager.Instance.SetLastCheckPointValue(false);
        }
    }
}
