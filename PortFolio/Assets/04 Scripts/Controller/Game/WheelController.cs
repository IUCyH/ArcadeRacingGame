using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WheelController : MonoBehaviour
{
    [SerializeField]
    WheelCollider m_wheelCollider;

    public WheelFrictionCurve ForwardFriction { get { return m_wheelCollider.forwardFriction; } }
    public WheelFrictionCurve SideWayFriction { get { return m_wheelCollider.sidewaysFriction; } }
    public void Move(float speed, int dir)
    {
        m_wheelCollider.motorTorque = speed * dir * Time.fixedDeltaTime;
    }
    public void Turn(float speed, int dir)
    {
        m_wheelCollider.steerAngle = speed * dir * 10f * Time.fixedDeltaTime;
    }
    public void Drift(WheelFrictionCurve forwardWheelFric, WheelFrictionCurve sidewayWheelFric)
    {
        m_wheelCollider.forwardFriction = forwardWheelFric;
        m_wheelCollider.sidewaysFriction = sidewayWheelFric;
    }
    public void UpdatePos(Transform wheel, Vector3 pos, Quaternion rotation)
    {
        wheel.position = pos;
        wheel.rotation = rotation;
    }
}
