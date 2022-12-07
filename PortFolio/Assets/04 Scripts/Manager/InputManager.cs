using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Key
{
    Forward,
    Backward,
    Right,
    Left,
    HandBreak,
    Booster,
    Reset,
    Esc,
    Max
}

public class InputManager : Singleton_DontDestroy<InputManager>
{
    Dictionary<Key, KeyCode> m_keyDictionary = new Dictionary<Key, KeyCode>();
    List<KeyCode> m_defaultKeys = new List<KeyCode>();

    public float Horizontal { get; set; }
    public float Vertical { get; set; }
    public float MouseX { get; set; }
    public float MouseY { get; set; }
    public bool HandBreakKeyDown { get; set; }
    public bool HandBreakKeyUp { get; set; }
    public bool ResetKeyDown { get; set; }
    public bool BoosterKeyDown { get; set; }
    public bool MouseDown { get; set; }
    public bool MouseUp { get; set; }
    public bool EscKeyDown { get; set; }

    public bool IsKeyOverlap(Key currChangingKey, KeyCode key)
    {
        foreach(KeyValuePair<Key, KeyCode> keyValuePair in DataManager.Instance.PlayerData.keyDictionary)
        {
            if(keyValuePair.Key == currChangingKey)
            {
                continue;
            }
            if(keyValuePair.Value == key || key == KeyCode.Mouse0)
            {
                return true;
            }
        }
        return false;
    }
    public void InitToDefaultKey()
    {
        InitDefaultKeyList();
        var length = m_defaultKeys.Count;

        for (int i = 0; i < length; i++)
        {
            DataManager.Instance.PlayerData.keyDictionary.Add((Key)i, m_defaultKeys[i]);
        }
    }
    void InitDefaultKeyList()
    {
        m_defaultKeys.Add(KeyCode.UpArrow);
        m_defaultKeys.Add(KeyCode.DownArrow);
        m_defaultKeys.Add(KeyCode.RightArrow);
        m_defaultKeys.Add(KeyCode.LeftArrow);
        m_defaultKeys.Add(KeyCode.LeftShift);
        m_defaultKeys.Add(KeyCode.LeftControl);
        m_defaultKeys.Add(KeyCode.R);
        m_defaultKeys.Add(KeyCode.Escape);
    }
    // Update is called once per frame
    void Update()
    {
        Horizontal = Input.GetAxis("Horizontal");
        Vertical = Input.GetAxis("Vertical");
        HandBreakKeyDown = Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift);
        HandBreakKeyUp = Input.GetKeyUp(KeyCode.LeftShift) || Input.GetKeyUp(KeyCode.RightShift);
        ResetKeyDown = Input.GetKeyDown(KeyCode.R);
        BoosterKeyDown = Input.GetKeyDown(KeyCode.LeftControl) || Input.GetKeyDown(KeyCode.RightControl);
        MouseX = Input.GetAxis("Mouse X");
        MouseY = Input.GetAxis("Mouse Y");
        MouseDown = Input.GetMouseButtonDown(0);
        MouseUp = Input.GetMouseButtonUp(0);
        EscKeyDown = Input.GetKeyDown(KeyCode.Escape);
    }
}
