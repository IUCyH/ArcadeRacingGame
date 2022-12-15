using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Popup_OK : MonoBehaviour
{
    [SerializeField]
    Text m_titleText;
    [SerializeField]
    Text m_contentsText;
    [SerializeField]
    Text m_okText;
    PopupFuncDel m_funcDel;

    public void SetPopup(string titleText, string contentsText, PopupFuncDel funcDel = null, string okText = "»Æ¿Œ")
    {
        m_titleText.text = titleText;
        m_contentsText.text = contentsText;
        m_okText.text = okText;
        m_funcDel = funcDel;
    }
    public void OnPressOk()
    {
        if (m_funcDel != null)
        {
            m_funcDel();
        }
        else
        {
            PopupManager.Instance.ClosePopup();
        }
    }
}
