using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetPointManager : Singleton<ResetPointManager>
{
    [SerializeField]
    Transform[] m_resetPoints;

    public Transform[] ResetPoints { get { return m_resetPoints; } }
    protected override void OnStart()
    {
        m_resetPoints = GetComponentsInChildren<Transform>();
    }
}
