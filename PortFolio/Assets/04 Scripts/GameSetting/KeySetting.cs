using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class KeySetting : MonoBehaviour
{
    [SerializeField]
    StringBuilder m_sb = new StringBuilder();
    [SerializeField]
    GameObject m_keys;
    [SerializeField]
    Button[] m_keyButtons;
    [SerializeField]
    Text[] m_keyTexts;
    Key m_currChangingKey;
    KeyCode m_selectedKey;
    bool m_checkKeyDown;

    public void OnPressKeyButton(Key key)
    {
        m_currChangingKey = key;
        m_checkKeyDown = true;
    }
    void SetKeyButtonText()
    {
        m_sb.Clear();
        m_sb.Append(m_selectedKey);

        m_keyTexts[(int)m_currChangingKey].text = m_sb.ToString();
    }
    void Start()
    {
        m_keyButtons = m_keys.GetComponentsInChildren<Button>();
        m_keyTexts = m_keys.GetComponentsInChildren<Text>();

        var length = m_keyButtons.Length;
        for(int i = 0; i < length; i++)
        {
            var key = (Key)i;
            m_keyButtons[i].onClick.AddListener(() => OnPressKeyButton(key));
        }
    }
    void Update()
    {
        if(m_checkKeyDown)
        {
            foreach (KeyCode key in System.Enum.GetValues(typeof(KeyCode)))
            {
                if (Input.GetKeyDown(key))
                {
                    if (!InputManager.IsKeyOverlap(m_currChangingKey, key))
                    {
                        m_selectedKey = key;
                        m_checkKeyDown = false;
                        SetKeyButtonText();
                        break;
                    }
                }
            }
        }
    }
}
