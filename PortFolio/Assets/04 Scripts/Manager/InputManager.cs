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

public static class InputManager
{
    static List<KeyCode> m_defaultKeys = new List<KeyCode>();
    static List<KeyCode> m_unavailableKeys = new List<KeyCode>()
    {
        KeyCode.Mouse0,
        KeyCode.Mouse1,
        KeyCode.Return,
        KeyCode.Delete,
        KeyCode.Home,
        KeyCode.End,
    };

    public static float MouseX { get { return Input.GetAxis("Mouse X"); } }
    public static float MouseY { get { return Input.GetAxis("Mouse Y"); } }
    public static bool MouseDown { get { return Input.GetMouseButtonDown(0); } }
    public static bool MouseUp { get { return Input.GetMouseButtonUp(0); } }

    public static bool IsKeyOverlap(KeyCode key)
    {
        foreach(KeyValuePair<Key, KeyCode> keyValuePair in DataManager.Instance.KeyDictionary)
        {
            if(keyValuePair.Value == key || m_unavailableKeys.Contains(key))
            {
                return true;
            }
        }
        return false;
    }
    public static void InitToDefaultKey()
    {
        InitDefaultKeyList();
        var length = m_defaultKeys.Count;

        for (int i = 0; i < length; i++)
        {
            DataManager.Instance.KeyDictionary.Add((Key)i, m_defaultKeys[i]);
        }
    }
    public static bool GetKeyDown(Key key)
    {
        var keycode = DataManager.Instance.KeyDictionary[key];
        
        return Input.GetKeyDown(keycode);
    }
    public static bool GetKeyUp(Key key)
    {
        var keycode = DataManager.Instance.KeyDictionary[key];
        
        return Input.GetKeyUp(keycode);
    }
    public static int Vertical()
    {
        var forwardKeycode = DataManager.Instance.KeyDictionary[Key.Forward];
        var backwardKeycode = DataManager.Instance.KeyDictionary[Key.Backward];
        if (Input.GetKey(forwardKeycode))
        {
            return 1;
        }
        else if(Input.GetKey(backwardKeycode))
        {
            return -1;
        }

        return 0;
    }
    public static int Horizontal()
    {
        var leftKeycode = DataManager.Instance.KeyDictionary[Key.Left];
        var rightKeycode = DataManager.Instance.KeyDictionary[Key.Right];
        if(Input.GetKey(rightKeycode))
        {
            return 1;
        }
        else if(Input.GetKey(leftKeycode))
        {
            return -1;
        }

        return 0;
    }

    static void InitDefaultKeyList()
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
}
