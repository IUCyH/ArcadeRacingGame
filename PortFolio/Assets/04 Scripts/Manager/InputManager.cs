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

    public static float MouseX { get { return Input.GetAxis("Mouse X"); } }
    public static float MouseY { get { return Input.GetAxis("Mouse Y"); } }
    public static bool MouseDown { get { return Input.GetMouseButtonDown(0); } }
    public static bool MouseUp { get { return Input.GetMouseButtonUp(0); } }

    public static bool IsKeyOverlap(Key currChangingKey, KeyCode key)
    {
        foreach(KeyValuePair<Key, KeyCode> keyValuePair in DataManager.Instance.SettingData.keySettings.keyDictionary)
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
    public static void InitToDefaultKey()
    {
        InitDefaultKeyList();
        var length = m_defaultKeys.Count;

        for (int i = 0; i < length; i++)
        {
            DataManager.Instance.SettingData.keySettings.keyDictionary.Add((Key)i, m_defaultKeys[i]);
        }
    }
    public static bool GetKeyDown(Key key)
    {
        var keycode = DataManager.Instance.SettingData.keySettings.keyDictionary[key];
        
        return Input.GetKeyDown(keycode);
    }
    public static bool GetKeyUp(Key key)
    {
        var keycode = DataManager.Instance.SettingData.keySettings.keyDictionary[key];
        
        return Input.GetKeyUp(keycode);
    }
    public static int Vertical()
    {
        var forwardKeycode = DataManager.Instance.SettingData.keySettings.keyDictionary[Key.Forward];
        var backwardKeycode = DataManager.Instance.SettingData.keySettings.keyDictionary[Key.Backward];
        if (Input.GetKeyDown(forwardKeycode))
        {
            return 1;
        }
        else if(Input.GetKeyDown(backwardKeycode))
        {
            return -1;
        }

        return 0;
    }
    public static int Horizontal()
    {
        var leftKeycode = DataManager.Instance.SettingData.keySettings.keyDictionary[Key.Left];
        var rightKeycode = DataManager.Instance.SettingData.keySettings.keyDictionary[Key.Right];
        if(Input.GetKeyDown(rightKeycode))
        {
            return 1;
        }
        else if(Input.GetKeyDown(leftKeycode))
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
