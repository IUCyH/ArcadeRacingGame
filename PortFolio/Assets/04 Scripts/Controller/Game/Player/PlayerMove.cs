using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    const PlayerController.State BoosterState = PlayerController.State.Booster;
    [Header("Player")]
    [SerializeField]
    PlayerController m_player;
    
    [Header("Move")]
    [SerializeField]
    float m_speed;
    [SerializeField]
    float m_forwardSpeed;
    [SerializeField]
    float m_backwardSpeed;
    [SerializeField]
    int m_prevDir;
    
    [Header("Drift")]
    [SerializeField]
    float m_slipRate = 1.0f;
    [SerializeField]
    float m_slipRateDownValue;
    [SerializeField]
    float m_slipRateUpFastValue;
    [SerializeField]
    float m_slipRateUpSlowValue;
    
    public void SetForwardSpeed(float speed)
    {
        m_forwardSpeed = speed;
    }

    public void SetBackwardSpeed(float speed)
    {
        m_backwardSpeed = speed;
    }

    public void Move(PlayerController.State state)
    {
        var dir = InputManager.Vertical();

        if (dir > 0)
        {
            if (m_prevDir != dir) m_speed = 0f;
            
            if(state != BoosterState)
                m_speed = Mathf.Lerp(m_speed, m_forwardSpeed, 0.009f);
            m_player.SetBackLightColor(Color.white);
        }
        else if (dir < 0)
        {
            if (m_prevDir != dir) m_speed = 0f;
            
            if(state != BoosterState)
                m_speed = Mathf.Lerp(m_speed, m_backwardSpeed, 0.009f);
            m_player.SetBackLightColor(Color.red);
        }
        else
        {
            m_speed = Mathf.Lerp(m_speed, m_player.CurrentSpeed, 0.05f);
            m_player.SetBackLightColor(Color.white);
        }
        
        m_prevDir = dir;
        m_player.CarMove(m_speed, dir);
    }

    public void Turn()
    {
        var dir = InputManager.Horizontal();
        var currTurnPower = m_player.CalculateTurnPower();
        
        if (m_player.CurrentSpeed > 0f)
        {
            m_player.CarTurn(currTurnPower, dir);
        }
    }

    public void OnDriftKeyDown()
    {
        m_slipRate -= m_slipRateDownValue;
        
        if (m_slipRate < 0.1f) m_slipRate = 0.1f;
        m_player.CarDriftControl(m_slipRate);
    }

    public void OnDriftKeyUp(int dir)
    {
        if (m_slipRate >= 1f) return;
        
        if (InputManager.Horizontal() == dir)
        {
            m_slipRate += m_slipRateUpSlowValue;
        }
        else
            m_slipRate += m_slipRateUpFastValue;

        if (m_slipRate > 1f) m_slipRate = 1f;
        m_player.CarDriftControl(m_slipRate);
    }
}
