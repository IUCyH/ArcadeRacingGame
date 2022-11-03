using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckPointManager : Singleton<CheckPointManager>
{
    [SerializeField]
    CheckpointController[] m_checkPoints;

    public CheckpointController[] CheckPoints { get { return m_checkPoints; } }
    protected override void OnStart()
    {
        m_checkPoints = GetComponentsInChildren<CheckpointController>();
        var length = m_checkPoints.Length;

        for(int i = 0; i < length; i++)
        {
            m_checkPoints[i].CheckNumber = i;
        }
    }
}
