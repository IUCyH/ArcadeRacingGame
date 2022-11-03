using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetPointManager : Singleton<ResetPointManager>
{
    [SerializeField]
    ResetPointController[] m_resetPoints;
    [SerializeField]
    int m_currResetPosIndex = 0;

    public ResetPointController CurrentResetPos { get { return m_resetPoints[m_currResetPosIndex]; } }

    protected override void OnStart()
    {
        m_resetPoints = GetComponentsInChildren<ResetPointController>();
        var length = m_resetPoints.Length;
        for(int i = 0; i < length; i++)
        {
            m_resetPoints[i].ResetPointNumber = i;
        }
    }
    public void ChangeCurrReversePoint(int reversePointNum)
    {
        m_currResetPosIndex = reversePointNum;
    }
}
