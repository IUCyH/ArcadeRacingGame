using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    public enum State
    {
        Defult,
        Booster,
        Reset,
        Max
    }
    State m_state;
    [SerializeField]
    Transform m_center;

    [Header("Player")]
    [SerializeField]
    Rigidbody m_playerRb; //플레이어 리지드바디
    [SerializeField]
    string m_playerName;

    [Header("Kart Datas")]
    [SerializeField]
    Color m_kartColor;
    [SerializeField]
    Material m_backLightMat;
    [SerializeField]
    GameObject m_kartPrefab;
    float m_kartPosY = -0.161f;

    [Header("Wheel Mesh")]
    [SerializeField]
    GameObject[] m_wheels = new GameObject[4]; //바퀴매쉬 배열

    [Header("Wheel Collider")]
    [SerializeField]
    WheelCollider[] m_wheelCollider = new WheelCollider[4];
    [SerializeField]
    WheelController[] m_wheelCtrs = new WheelController[4]; //휠 콜라이더 배열
    [SerializeField]
    WheelFrictionCurve m_fowardFricBackWheel; //뒷바퀴중 왼쪽 바퀴의 forward friction의 값을 바꾸기 위한 변수
    [SerializeField]
    WheelFrictionCurve m_sidewayFricBackWheel; //뒷바퀴중 왼쪽 바퀴의 sideways friction의 값을 바꾸기 위한 변수
    [SerializeField]
    Vector3 m_startDriftPosSum;
    [SerializeField]
    Vector3 m_endDriftPosSum;
    Vector3 m_wheelColliderPos; //휠 콜라이더의 위치를 받아올 변수
    Quaternion m_wheelColliderRotation; //휠 콜라이더의 회전값을 받아올 변수

    [Header("Move Values")] 
    [SerializeField]
    PlayerMove m_playerMoveCtr;
    [SerializeField]
    float m_playerVelocity;
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
    float m_maxReSpeed = 15f; //자동차의 후진 최고속도
    [SerializeField]
    float m_boosterMaxSpeed;
    [SerializeField]
    float m_currSpeed = 0f; //자동차의 현재 속도
    [SerializeField]
    float m_turnPower = 3f; //자동차의 회전속도
    [SerializeField]
    float m_slipRate = 1.0f; //평상시 마찰계수
    [SerializeField]
    float m_slipRateDownForce;
    [SerializeField]
    float m_slipRateUpForce;
    [SerializeField]
    float m_speed;
    [SerializeField]
    int m_dirX;
    [SerializeField]
    int m_prevDir;
    [SerializeField]
    bool m_isDrift; //드리프트를 하고있는지를 나타내는 boolean 변수
    bool m_isStart; //시작했는지 알려주는 boolean 변수

    [Header("UI")]
    [SerializeField]
    Image m_boosterBar;
    [SerializeField]
    Image[] m_boosterIcons = new Image[2];
    bool m_isBooster;
    [SerializeField]
    int m_boosterUseCnt;
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

    [Header("Sounds")]
    [SerializeField]
    AudioClip m_defaultSoundClip;
    [SerializeField]
    AudioClip m_boosterSoundClip;

    public Color KartColor { get { return m_kartColor; } }
    public bool IsStart { get { return m_isStart; } set { m_isStart = value; } }
    public int BoosterCnt { get { return m_boosterUseCnt; } }
    public int CrashCnt { get; set; }
    public float TotalDriftDist { get { return (m_startDriftPosSum - m_endDriftPosSum).sqrMagnitude; } }
    public float CurrentSpeed { get { return m_speed; } }
    public string UserName { get { return m_playerName; } }

    public IEnumerator Coroutine_StartBoost()
    {
        float time = 0f;
        WaitForFixedUpdate waitForFixedUpdate = new WaitForFixedUpdate();
        while(true)
        {
            if(InputManager.Vertical() > 0)
            {
                yield return waitForFixedUpdate;
                m_playerRb.velocity = Vector3.zero;
                m_playerRb.AddForce(transform.forward * m_startBoostSpeed, ForceMode.VelocityChange);
                yield break;
            }

            time += Time.deltaTime;
            if (time > m_startBoostTime)
            {
                yield break;
            }
            yield return null;
        }
    }

    IEnumerator Coroutine_CalculateSpeed()
    {
        WaitForEndOfFrame waitForEndOfFrame = new WaitForEndOfFrame();

        while (true)
        {
            var prevPos = transform.position;
            yield return waitForEndOfFrame;
            m_playerVelocity = (transform.position - prevPos).magnitude / Time.deltaTime;
            //Debug.Log($"current speed : {m_playerVelocity}");
        }
    }
    public void OnGameStart()
    {
        StartCoroutine(Coroutine_StartBoost());
        m_isStart = true;
    }
    public void InitPlayer(PlayerData playerData)
    {
        var currKartIndex = playerData.currKart;
        var carInfo = playerData.carsList[currKartIndex];
        m_kartColor = carInfo.data.kartColor;
        transform.position = carInfo.data.pos;
        m_startBoostSpeed = carInfo.data.startSpeed;
        m_playerMoveCtr.SetForwardSpeed(carInfo.data.forwardSpeed * 10000f);
        m_playerMoveCtr.SetBackwardSpeed(carInfo.data.backwardSpeed * 10000f);
        m_boosterMaxSpeed = carInfo.data.maxBoosterSpeed * 10000f;
        m_turnPower = carInfo.data.maxTurnPower * 100f;
        m_defultChargingValue = carInfo.data.defultBoosterChargingValue;
        m_boostChargingValue = carInfo.data.driftBoosterChargingValue * 0.1f;
        m_boosterTime = carInfo.data.boosterTime * 10f;
        m_playerName = playerData.userName;
        InstantiateKart();
        InitWheelObjsAndWheelColliders(currKartIndex);
    }
    public void Break(float breakForce)
    {
        foreach(WheelCollider w in m_wheelCollider)
        {
            w.brakeTorque = breakForce;
        }
    }
    public void SetState(State state)
    {
        m_state = state;
    }

    public void CarMove(float speed, int dir)
    {
        foreach (WheelController w in m_wheelCtrs)
        {
            w.Move(speed, dir);
        }
    }

    public void CarTurn(float turnPower, int dir)
    {
        int numberOfFWheels = 2;
        
        for (int i = 0; i < numberOfFWheels; i++)
        {
            m_wheelCtrs[i].Turn(turnPower, dir);
        }
    }

    public float CalculateTurnPower()
    {
        return Mathf.Abs(m_turnPower - m_playerVelocity);
    }

    void InstantiateKart()
    {
        var obj = Instantiate(m_kartPrefab);
        obj.transform.SetParent(this.transform);
        obj.transform.localPosition = new Vector3(0f, m_kartPosY, 0f);
    }
    void InitWheelObjsAndWheelColliders(int index)
    {
        var numberOfWheels = DataManager.Instance.PlayerData.carsList[index].data.numberOfWheels;
        var wheelParent = GameObject.FindGameObjectWithTag("Wheel");
        
        for (int i = 0; i < numberOfWheels; i++)
        {
            m_wheels[i] = wheelParent.transform.GetChild(i + 1).gameObject;
        }
        m_wheelCtrs = GetComponentsInChildren<WheelController>();
        m_wheelCollider = GetComponentsInChildren<WheelCollider>();
    }
    //휠 매쉬와 휠 콜라이더 동기화
    void InitWheelPos()
    {
        int wLength = m_wheelCollider.Length;
        for (int i = 0; i < wLength; i++)
        {
            m_wheelCollider[i].GetWorldPose(out m_wheelColliderPos, out m_wheelColliderRotation);
            m_wheelCtrs[i].UpdatePos(m_wheels[i].transform, m_wheelColliderPos, m_wheelColliderRotation);
        }
    }
    void OnBooster()
    {
        SetState(State.Booster);
        m_boosterIcons[m_boosterCnt].enabled = false;
        m_boosterCnt--;
        m_isBooster = true;
    }
    void BoosterControl()
    {
        if (!m_isBooster)
        {
            if(InputManager.GetKeyDown(Key.Booster) && m_boosterCnt >= 0)
            {
                OnBooster();
            }
            m_boosterBar.fillAmount += m_defultChargingValue;
        }

        if (m_isDrift && InputManager.Horizontal() != 0)
        {
            m_boosterBar.fillAmount += m_boostChargingValue;
        }
        else if (!m_isDrift && m_boosterBar.fillAmount >= 1f)
        {
            m_boosterBar.fillAmount = 0f;
            if (m_boosterCnt < m_boosterMaxCnt - 1)
            {
                m_boosterCnt++;
            }
            m_boosterIcons[m_boosterCnt].enabled = true;
        }       
    }
    public void SetBackLightColor(Color color)
    {
        m_backLightMat.color = color;
    }
    //이동 함수
    void Move()
    {
        m_playerMoveCtr.Move(m_state);
        m_playerMoveCtr.Turn();
    }
    public void CarDrift(float slipRate)
    {
        int numOfFirstRearWheel = 2;
        int numOfLastRearWheel = 4;
        for (int i = numOfFirstRearWheel; i < numOfLastRearWheel; i++)
        {
            m_fowardFricBackWheel = m_wheelCollider[i].forwardFriction;
            m_sidewayFricBackWheel = m_wheelCollider[i].sidewaysFriction;
            
            m_fowardFricBackWheel.stiffness = slipRate;
            m_sidewayFricBackWheel.stiffness = slipRate;

            m_wheelCtrs[i].Drift(m_fowardFricBackWheel, m_sidewayFricBackWheel);
        }
    }
    void WheelStabilizerBar() //두개의 뒷바퀴에 동일한 힘을 주기 위한 함수
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
    void PlayEngineSound()
    {

    }
    void OnCollisionEnter(Collision collision)
    {
        CrashCnt++;
    }
    void Awake()
    {
        StartCoroutine(Coroutine_CalculateSpeed());
        int index = DataManager.Instance.PlayerData.currKart;
        string kartName = DataManager.Instance.PlayerData.carsList[index].data.name;
        string path = string.Format("Prefab/Karts/{0}", kartName);
        m_kartPrefab = Resources.Load<GameObject>(path);
    }
    void Start()
    {
        m_playerRb.centerOfMass = m_center.localPosition;
        m_boosterIcons[0].enabled = m_boosterIcons[1].enabled = false;
        m_state = State.Defult;
        m_wheelCollider[2].brakeTorque = m_wheelCollider[3].brakeTorque = 0f;
        m_boosterBar.fillAmount = 0f;
        m_backLightMat.color = Color.white;
        InitWheelPos();
    }

    void Update()
    {
        //Debug.Log("State : " + m_state);
        m_speed = (m_playerVelocity * 3.6f) * 5.5f;

        switch (m_state)
        {
            case State.Booster:
                m_maxSpeed = Mathf.Lerp(m_maxSpeed, m_boosterMaxSpeed, 0.009f);
                m_time += Time.deltaTime;
                if(m_time > m_boosterTime)
                {
                    SetState(State.Defult);
                    m_boosterUseCnt++;
                    m_isBooster = false;
                    m_time = 0f;
                }
                break;
            case State.Reset:
                Break(10000f);
                m_currSpeed = 0f;
                m_time += Time.deltaTime;
                if (m_time > GameSystemManager.Instance.ResetCoolDown)
                {
                    Break(0f);
                    SetState(State.Defult);
                    m_time = 0f;
                }
                break;
        }
        if (InputManager.GetKeyDown(Key.HandBreak))
        {
            var dir = InputManager.Horizontal();
            if (dir != 0)
            {
                Debug.Log($"Hand Break Key Down , dir -> {dir}");
                m_isDrift = true;
                m_startDriftPosSum += transform.position;
                m_dirX = dir;
            }
        }
        if(InputManager.GetKeyUp(Key.HandBreak))
        {
            if (m_isDrift == true)
            {
                Debug.Log("Drift Key Up");
                m_isDrift = false;
                m_endDriftPosSum += transform.position;
            }
        }
        if(InputManager.GetKeyDown(Key.Reset))
        {
            GameSystemManager.Instance.ResetPlayerPosition();
        }

        if (m_isDrift)
        {
            m_playerMoveCtr.OnDriftKeyDown();
        }
        else
        {
            m_playerMoveCtr.OnDriftKeyUp(m_dirX);
        }
        //Debug.Log(transform.forward);
    }
    void FixedUpdate()
    {
        m_playerRb.AddForce(m_forceValue * m_playerRb.velocity.magnitude * Vector3.down);
        if (m_isStart)
        {
            Move();
            BoosterControl();
            InitWheelPos();
            WheelStabilizerBar();
        }
    }
}
