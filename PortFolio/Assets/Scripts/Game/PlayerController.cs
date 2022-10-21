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
    StringBuilder m_sb = new StringBuilder();
    State m_state;
    [SerializeField]
    Transform m_center;
    [Header("Player")]
    [SerializeField]
    Rigidbody m_playerRb; //�÷��̾� ������ٵ�
    [Header("Wheel Mesh")]
    [SerializeField]
    GameObject[] m_wheels = new GameObject[4]; //�����Ž� �迭
    [Header("Wheel Collider")]
    [SerializeField]
    WheelCollider[] m_wheelCollider = new WheelCollider[4];
    [SerializeField]
    WheelController[] m_wheelColliderCtr = new WheelController[4]; //�� �ݶ��̴� �迭
    [SerializeField]
    WheelFrictionCurve m_fFricBackLeftWheel; //�޹����� ���� ������ forward friction�� ���� �ٲٱ� ���� ����
    [SerializeField]
    WheelFrictionCurve m_sFricBackLeftWheel; //�޹����� ���� ������ sideways friction�� ���� �ٲٱ� ���� ����
    [SerializeField]
    WheelFrictionCurve m_fFricBackRightWheel; //�޹����� ������ ������ forward friction�� ���� �ٲٱ� ���� ����
    [SerializeField]
    WheelFrictionCurve m_sFricBackRightWheel; //�޹����� ������ ������ sideways friction�� ���� �ٲٱ� ���� ����
    Vector3 m_wheelColliderPos; //�� �ݶ��̴��� ��ġ�� �޾ƿ� ����
    Quaternion m_wheelColliderRotation; //�� �ݶ��̴��� ȸ������ �޾ƿ� ����
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
    float m_forceValue; //������ �Ʒ��� ������ ��
    [SerializeField]
    float m_maxSpeed;
    [SerializeField]
    float m_normalMaxSpeed = 150f; //�ڵ����� ���� �ִ�ӵ�
    [SerializeField]
    float m_normalMaxReSpeed = 15f; //�ڵ����� ���� �ְ��ӵ�
    [SerializeField]
    float m_boosterMaxSpeed;
    [SerializeField]
    float m_currSpeed = 0f; //�ڵ����� ���� �ӵ�
    [SerializeField]
    float m_turnPower = 3f; //�ڵ����� ȸ���ӵ�
    [SerializeField]
    float m_slipRate = 1.0f; //���� �������
    [SerializeField]
    float m_driftSlipRate = 0.3f; //�帮��Ʈ �� �������
    [SerializeField]
    float m_speedUpVal = 3f;
    [SerializeField]
    float m_speedDownVal = 1f;
    [SerializeField]
    bool m_isDrift; //�帮��Ʈ�� �ϰ��ִ����� ��Ÿ���� boolean ����
    bool m_isStart; //�����ߴ��� �˷��ִ� boolean ����
    [Header("UI")]
    [SerializeField]
    AnimationCurve m_scaleCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
    [SerializeField]
    AnimationCurve m_alphaCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
    [SerializeField]
    Canvas m_countCanvas;
    [SerializeField]
    Text m_countText;
    [SerializeField]
    Text m_speedText;
    [SerializeField]
    Text m_timerText;
    [SerializeField]
    Slider m_boosterBar;
    [SerializeField]
    Canvas m_dashBoardCanvas;
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
    float m_duration = 0.5f;
    [SerializeField]
    float m_timer = 0f;
    [SerializeField]
    int m_boosterMaxCnt = 2;
    [SerializeField]
    int m_boosterCnt = 0;
    float m_maxScale = 1f;
    float m_minScale = 0.5f;
    float m_alphaFrom = 1f;
    float m_alphaTo = 0f;

    IEnumerator Coroutine_CountDown()
    {
        float time = 0f;
        int cnt = 3;
        while(true)
        {
            var scaleValue = m_scaleCurve.Evaluate(time);
            var scale = m_minScale * (1f - scaleValue) + m_maxScale * scaleValue;
            m_countText.text = cnt.ToString();
            m_countText.transform.localScale = new Vector3(scale, scale, scale);
            time += Time.deltaTime;

            if(time > 1f)
            {
                cnt--;
                time = 0f;
            }
            if(cnt < 1)
            {
                m_timer -= 3f;
                m_isStart = true;
                m_dashBoardCanvas.enabled = true;
                StartCoroutine(Coroutine_StartBoost());
                StartCoroutine(Coroutine_Fadeout());
                yield break;
            }
            yield return null;
        }
    }
    IEnumerator Coroutine_Fadeout()
    {
        float time = 0f;
        while (true)
        {
            var alphaValue = m_alphaCurve.Evaluate(time);
            var alpha = m_alphaFrom * (1f - alphaValue) + m_alphaTo * alphaValue;
            m_countText.color = new Color(1f, 1f, 1f, alpha);
            time += Time.deltaTime / m_duration;
            if (time > 1f)
            {
                m_countCanvas.enabled = false;
                yield break;
            }
            yield return null;
        }
    }
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
    void SetState(State state)
    {
        m_state = state;
    }
    //�� �Ž��� �� �ݶ��̴� ����ȭ
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
    //�̵� �Լ�
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
    void Timer()
    {
        m_sb.Clear();
        m_timer += Time.deltaTime;
        int minute = Mathf.FloorToInt(m_timer / 60f);
        int second = (int)m_timer % 60;
        int millisecond = (int)(m_timer * 100) % 100;
        m_sb.AppendFormat("<b>TIME</b>  /  {0:00}:{1:00}:{2:00}", minute, second, millisecond);
        m_timerText.text = m_sb.ToString();
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
        m_dashBoardCanvas.enabled = false;
        m_boosterIcons[0].enabled = m_boosterIcons[1].enabled = false;
        m_state = State.Defult;
        StartCoroutine(Coroutine_CountDown());
        InitWheelPos();
    }

    void Update()
    {
        Timer();
        Debug.Log("State : " + m_state);
        var speed = m_playerRb.velocity.magnitude * 3.6f;
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