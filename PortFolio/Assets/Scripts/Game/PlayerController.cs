using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    enum State
    {
        Defult,
        Booster,
        Max
    }
    Dictionary<string, GameSystemManager.ReverseCheckPos> m_reversePosDic = new Dictionary<string, GameSystemManager.ReverseCheckPos>();
    StringBuilder m_sb = new StringBuilder();
    State m_state;
    [SerializeField]
    Transform m_center;
    [Header("Player")]
    [SerializeField]
    Rigidbody m_playerRb; //플레이어 리지드바디
    [Header("Wheel Mesh")]
    [SerializeField]
    GameObject[] m_wheels = new GameObject[4]; //바퀴매쉬 배열
    [Header("Wheel Collider")]
    [SerializeField]
    WheelCollider[] m_wheelCollider = new WheelCollider[4];
    [SerializeField]
    WheelController[] m_wheelColliderCtr = new WheelController[4]; //휠 콜라이더 배열
    [SerializeField]
    WheelFrictionCurve m_fFricBackLeftWheel; //뒷바퀴중 왼쪽 바퀴의 forward friction의 값을 바꾸기 위한 변수
    [SerializeField]
    WheelFrictionCurve m_sFricBackLeftWheel; //뒷바퀴중 왼쪽 바퀴의 sideways friction의 값을 바꾸기 위한 변수
    [SerializeField]
    WheelFrictionCurve m_fFricBackRightWheel; //뒷바퀴중 오른쪽 바퀴의 forward friction의 값을 바꾸기 위한 변수
    [SerializeField]
    WheelFrictionCurve m_sFricBackRightWheel; //뒷바퀴중 오른쪽 바퀴의 sideways friction의 값을 바꾸기 위한 변수
    Vector3 m_wheelColliderPos; //휠 콜라이더의 위치를 받아올 변수
    Quaternion m_wheelColliderRotation; //휠 콜라이더의 회전값을 받아올 변수
    [Header("Move Values")]
    [SerializeField]
    float m_antiRollVal = 5000f;
    [SerializeField]
    float m_travelL = 1f;
    [SerializeField]
    float m_travelR = 1f;
    [SerializeField]
    bool m_isGroundL;
    [SerializeField]
    bool m_isGroundR;
    [SerializeField]
    float m_startBoostTime = 0.5f;
    [SerializeField]
    float m_startBoostSpeed = 5f;
    [SerializeField]
    float m_forceValue; //차량을 아래로 누르는 힘
    [SerializeField]
    float m_maxSpeed;
    [SerializeField]
    float m_normalMaxSpeed = 150f; //자동차의 전진 최대속도
    [SerializeField]
    float m_normalMaxReSpeed = 15f; //자동차의 후진 최고속도
    [SerializeField]
    float m_boosterMaxSpeed;
    [SerializeField]
    float m_currSpeed = 0f; //자동차의 현재 속도
    [SerializeField]
    float m_turnPower = 3f; //자동차의 회전속도
    [SerializeField]
    float m_slipRate = 1.0f; //평상시 마찰계수
    [SerializeField]
    float m_driftSlipRate = 0.3f; //드리프트 시 마찰계수
    [SerializeField]
    float m_speedUpVal = 3f;
    [SerializeField]
    float m_speedDownVal = 1f;
    [SerializeField]
    bool m_isDrift; //드리프트를 하고있는지를 나타내는 boolean 변수
    bool m_isStart; //시작했는지 알려주는 boolean 변수
    [Header("UI")]
    [SerializeField]
    Text m_speedText;
    [SerializeField]
    Slider m_boosterBar;
    [SerializeField]
    Image[] m_boosterIcons = new Image[2];
    bool m_isBooster;
    [SerializeField]
    float m_defultChargingValue = 0.0001f;
    [SerializeField]
    float m_boostChargingValue = 0.005f;
    [SerializeField]
    float m_time = 0f;
    [SerializeField]
    float m_boosterTime = 2f;
    [SerializeField]
    int m_boosterMaxCnt = 2;
    [SerializeField]
    int m_boosterCnt = 0;

    public bool IsStart { get { return m_isStart; } set { m_isStart = value; } }
    IEnumerator Coroutine_StartBoost()
    {
        float time = 0f;
        WaitForFixedUpdate waitForFixedUpdate = new WaitForFixedUpdate();
        while(true)
        {
            if(Input.GetAxis("Vertical") > 0)
            {
                yield return waitForFixedUpdate;
                m_playerRb.AddForce(transform.forward * m_startBoostSpeed, ForceMode.VelocityChange);
                yield break;
            }
            if (time > m_startBoostTime)
                yield break;
            yield return null;
        }
    }
    public void CorutineStart(string name)
    {
        StartCoroutine(name);
    }
    void SetState(State state)
    {
        m_state = state;
    }
    //휠 매쉬와 휠 콜라이더 동기화
    void InitWheelPos()
    {
        int wLength = m_wheelCollider.Length;
        for (int i = 0; i < wLength; i++)
        {
            m_wheelCollider[i].GetWorldPose(out m_wheelColliderPos, out m_wheelColliderRotation);
            m_wheelColliderCtr[i].UpdatePos(m_wheels[i].transform, m_wheelColliderPos, m_wheelColliderRotation);
        }
    }
    void Booster()
    {
        if (!m_isDrift && m_boosterBar.value == 1f)
        {
            m_boosterBar.value = 0f;
            if (m_boosterCnt < m_boosterMaxCnt - 1)
            {
                m_boosterCnt++;
            }
            m_boosterIcons[m_boosterCnt].enabled = true;
        }
        if(Input.GetKeyDown(KeyCode.LeftControl) && !m_isBooster && m_boosterCnt >= 0)
        {
            SetState(State.Booster);
            m_boosterIcons[m_boosterCnt].enabled = false;
            m_boosterCnt--;
            m_isBooster = true;
        }
        if (m_isDrift && Input.GetAxis("Horizontal") != 0)
            m_boosterBar.value += m_boostChargingValue;
        if(!m_isBooster)
            m_boosterBar.value += m_defultChargingValue;
    }
    //이동 함수
    void Move()
    {
        var dir = Input.GetAxis("Vertical");
        var currTurnPower = Mathf.Abs(m_turnPower - m_playerRb.velocity.magnitude);
        //Debug.Log("Turn Power : " + currTurnPower);
        if (dir >= 0)
        {
            dir = 1;
            foreach (WheelController w in m_wheelColliderCtr)
            {
                w.Move(m_currSpeed, dir);
            }
            if(m_currSpeed < m_maxSpeed)
                m_currSpeed += m_speedUpVal;
            if (m_currSpeed > m_maxSpeed)
                m_currSpeed -= m_speedDownVal;
        }
        else if(dir < 0)
        {
            foreach(WheelController w in m_wheelColliderCtr)
            {
                w.Move(m_currSpeed, dir);
            }
            if (m_currSpeed < m_normalMaxReSpeed)
                m_currSpeed += m_speedUpVal;
            if (m_currSpeed > m_normalMaxReSpeed)
                m_currSpeed -= m_speedDownVal;
        }
        
        for (int i = 0; i < 2; i++)
        {
            m_wheelColliderCtr[i].Turn(currTurnPower, Input.GetAxis("Horizontal"));  
        }
        if(m_isDrift)
        {
            m_fFricBackLeftWheel.stiffness = m_driftSlipRate;
            m_sFricBackLeftWheel.stiffness = m_driftSlipRate;
            m_fFricBackRightWheel.stiffness = m_driftSlipRate;
            m_sFricBackRightWheel.stiffness = m_driftSlipRate;
        }
        else
        {
            m_fFricBackLeftWheel.stiffness = m_slipRate;
            m_sFricBackLeftWheel.stiffness = m_slipRate;
            m_fFricBackRightWheel.stiffness = m_slipRate;
            m_sFricBackRightWheel.stiffness = m_slipRate;
        }
        m_wheelColliderCtr[2].Drift(m_fFricBackLeftWheel, m_sFricBackLeftWheel);
        m_wheelColliderCtr[3].Drift(m_fFricBackRightWheel, m_sFricBackRightWheel);
    }
    void StabilizerBar()
    {
        WheelHit hit;
        m_isGroundL = m_wheelCollider[2].GetGroundHit(out hit);
        if(m_isGroundL)
        {
            m_travelL = (-m_wheelCollider[2].transform.InverseTransformPoint(hit.point).y - m_wheelCollider[2].radius) / m_wheelCollider[2].suspensionDistance;
        }
        m_isGroundR = m_wheelCollider[3].GetGroundHit(out hit);
        if(m_isGroundR)
        {
            m_travelR = (-m_wheelCollider[3].transform.InverseTransformPoint(hit.point).y - m_wheelCollider[3].radius) / m_wheelCollider[3].suspensionDistance;
        }
        var force = (m_travelL - m_travelR) * m_antiRollVal;
        if(m_isGroundL)
        {
            m_playerRb.AddForceAtPosition(-m_wheelCollider[2].transform.up * force, m_wheelCollider[2].transform.position);
        }
        if(m_isGroundR)
        {
            m_playerRb.AddForceAtPosition(m_wheelCollider[3].transform.up * force, m_wheelCollider[3].transform.position);
        }
    }
    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Map")) return;
        GameSystemManager.Instance.SetReversePos(m_reversePosDic[other.tag]);
    }
    void Awake()
    {
        m_reversePosDic.Add("Reverse_X", GameSystemManager.ReverseCheckPos.X);
        m_reversePosDic.Add("Reverse_Z", GameSystemManager.ReverseCheckPos.Z);
        m_reversePosDic.Add("Reverse_NegativeX", GameSystemManager.ReverseCheckPos.NegativeX);
        m_reversePosDic.Add("Reverse_NegativeZ", GameSystemManager.ReverseCheckPos.NegativeZ);
    }
    void Start()
    {
        m_playerRb.centerOfMass = m_center.localPosition;
        m_wheelColliderCtr = GetComponentsInChildren<WheelController>();
        for (int i = 0; i < m_wheelColliderCtr.Length; i++)
            m_wheelCollider[i] = m_wheelColliderCtr[i].gameObject.GetComponent<WheelCollider>();
        m_fFricBackLeftWheel = m_wheelColliderCtr[2].ForwardFriction;
        m_sFricBackLeftWheel = m_wheelColliderCtr[2].SideWayFriction;
        m_fFricBackRightWheel = m_wheelColliderCtr[3].ForwardFriction;
        m_sFricBackRightWheel = m_wheelColliderCtr[3].SideWayFriction;
        m_boosterIcons[0].enabled = m_boosterIcons[1].enabled = false;
        m_state = State.Defult;
        m_wheelCollider[2].brakeTorque = m_wheelCollider[3].brakeTorque = 0f;
        InitWheelPos();
    }

    void Update()
    {
        //Debug.Log("State : " + m_state);
        var speed = (m_playerRb.velocity.magnitude * 3.6f) * 5.5f;
        m_sb.Clear();
        m_sb.AppendFormat("{0:0.0} km / h", speed);
        m_speedText.text = m_sb.ToString();
        switch(m_state)
        {
            case State.Defult:
                m_maxSpeed = m_normalMaxSpeed;
                break;
            case State.Booster:
                m_maxSpeed = m_boosterMaxSpeed;
                m_time += Time.deltaTime;
                if(m_time > m_boosterTime)
                {
                    SetState(State.Defult);
                    m_isBooster = false;
                    m_time = 0f;
                }
                break;
        }
        //Debug.Log("State : " + m_state);
        if (Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift))
        {
            m_isDrift = true;
        }
        if(Input.GetKeyUp(KeyCode.LeftShift) || Input.GetKeyUp(KeyCode.RightShift))
        {
            m_isDrift = false;
        }
        //Debug.Log(transform.forward);
    }
    void FixedUpdate()
    {
        m_playerRb.AddForce(Vector3.down * m_forceValue * m_playerRb.velocity.magnitude);
        if (m_isStart)
        {
            Move();
            Booster();
            InitWheelPos();
            StabilizerBar();
        }
    }
}
