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

    ColorBlock m_colorBlock;
    Color m_normalColor = Color.white;
    Color m_selectedColor = Color.gray;

    Key m_currChangingKey;
    KeyCode m_selectedKey;
    bool m_keyDownCheck;

    public void OnPressKeyButton(Key key)
    {
        m_currChangingKey = key;
        m_keyDownCheck = true;
        SetButtonSelectedColorToGray();
    }
    void SetKeyButtonText()
    {
        m_sb.Clear();
        m_sb.Append(m_selectedKey);

        m_keyTexts[(int)m_currChangingKey].text = m_sb.ToString();
    }
    void SetButtonSelectedColorToWhite()
    {
        m_colorBlock = m_keyButtons[(int)m_currChangingKey].colors;
        m_colorBlock.selectedColor = m_normalColor;
        m_keyButtons[(int)m_currChangingKey].colors = m_colorBlock;
    }
    void SetButtonSelectedColorToGray()
    {
        m_colorBlock = m_keyButtons[(int)m_currChangingKey].colors;
        m_colorBlock.selectedColor = m_selectedColor;
        m_keyButtons[(int)m_currChangingKey].colors = m_colorBlock;
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
        if(m_keyDownCheck)
        {
            foreach (KeyCode key in System.Enum.GetValues(typeof(KeyCode)))
            {
                if (Input.GetKeyDown(key))
                {
                    if (!InputManager.IsKeyOverlap(key))
                    {
                        m_selectedKey = key;
                        m_keyDownCheck = false;

                        SetKeyButtonText();
                        SetButtonSelectedColorToWhite();

                        DataManager.Instance.UpdateKey(m_currChangingKey, m_selectedKey);
                        DataManager.Instance.SaveSettingData();
                        break;
                    }
                }
            }
        }
    }
}
