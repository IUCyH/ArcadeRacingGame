using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Popup_OkCancel : MonoBehaviour
{
    [SerializeField]
    Text m_titleText;
    [SerializeField]
    Text m_contentsText;
    [SerializeField]
    Text m_okText;
    [SerializeField]
    Text m_cancelText;
    FuncDel m_okFuncDel;
    FuncDel m_cancelFuncDel;

    public void SetPopup(string titleText, string contentsText, FuncDel okFuncDel = null, FuncDel cancleFuncDel = null, string okText = "확인", string cancleText = "취소")
    {
        m_titleText.text = titleText;
        m_contentsText.text = contentsText;
        m_okText.text = okText;
        m_cancelText.text = cancleText;
        m_okFuncDel = okFuncDel;
        m_cancelFuncDel = cancleFuncDel;
    }
    public void OnPressOk()
    {
        if (m_okFuncDel != null)
        {
            m_okFuncDel();
        }
        else
            PopupManager.Instance.ClosePopupOkCancel();
    }
    public void OnPressCancle()
    {
        if(m_cancelFuncDel != null)
        {
            m_cancelFuncDel();
        }
        else
            PopupManager.Instance.ClosePopupOkCancel();
    }
}
