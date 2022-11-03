using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReversePointManager : Singleton<ReversePointManager>
{
    [SerializeField]
    ReversePointController[] m_reversePoints;
    [SerializeField]
    int m_currReversePosIndex = 0;

    public ReversePointController CurrentReversePos { get { return m_reversePoints[m_currReversePosIndex]; } }

    protected override void OnStart()
    {
        m_reversePoints = GetComponentsInChildren<ReversePointController>();
        var length = m_reversePoints.Length;
        for(int i = 0; i < length; i++)
        {
            m_reversePoints[i].ReversePointNumber = i;
        }
    }
    public void ChangeCurrReversePoint(int reversePointNum)
    {
        m_currReversePosIndex = reversePointNum;
    }
}
