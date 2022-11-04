using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetPointManager : Singleton<ResetPointManager>
{
    [SerializeField]
    List<Vector3> m_resetPosList = new List<Vector3>();
    [SerializeField]
    GameObject m_resetPoint;
    [SerializeField]
    int currResetPointIndex = 0;

    public Vector3 ResetPoint { get { return m_resetPoint.transform.position; } }

    void OnTriggerExit(Collider other)
    {
        Debug.Log("Exit");
        if (!other.CompareTag("Player")) return;

        if (!GameSystemManager.Instance.IsReverse)
        {
            currResetPointIndex++;
            if (currResetPointIndex > m_resetPosList.Count - 1)
                currResetPointIndex = 0;
            m_resetPoint.transform.localPosition = m_resetPosList[currResetPointIndex];
        }
    }
}
