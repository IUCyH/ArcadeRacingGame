using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class KeySetting : MonoBehaviour, ISetting
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
    Color m_selectedColor = new Color(0.3f, 0.3f, 0.3f, 1f);

    Key m_currChangingKey;
    KeyCode m_selectedKey;
    bool m_keyDownCheck;

    public void OnExit()
    {

    }
    public void Open()
    {
        GameSettingManager.Instance.OpenSettingPanel(gameObject);
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }
    public void Init()
    {
        m_keyButtons = m_keys.GetComponentsInChildren<Button>();
        m_keyTexts = m_keys.GetComponentsInChildren<Text>();

        var buttons = m_keyButtons.Length;
        var texts = m_keyTexts.Length;
        for (int i = 0; i < buttons; i++)
        {
            var key = (Key)i;
            m_keyButtons[i].onClick.AddListener(() => OnPressKeyButton(key));
        }
        for (int i = 0; i < texts; i++)
        {
            var key = (Key)i;
            var keyCode = DataManager.Instance.KeyDictionary[key];
            SetKeyButtonText(key, keyCode);
        }
    }
    public void OnPressKeyButton(Key key)
    {
        m_currChangingKey = key;
        m_keyDownCheck = true;
        SetButtonSelectedColorToGray();
    }
    void SetKeyButtonText(Key changingKey, KeyCode key)
    {
        m_sb.Clear();
        m_sb.Append(key);

        m_keyTexts[(int)changingKey].text = m_sb.ToString();
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

                        SetKeyButtonText(m_currChangingKey, m_selectedKey);
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
