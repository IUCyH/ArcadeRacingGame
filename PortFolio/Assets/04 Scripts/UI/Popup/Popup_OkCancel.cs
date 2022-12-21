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
    PopupFuncDel m_okFuncDel;
    PopupFuncDel m_cancelFuncDel;

    public void SetPopup(string titleText, string contentsText, PopupFuncDel okFuncDel = null, PopupFuncDel cancleFuncDel = null, string okText = "확인", string cancleText = "취소")
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
            SoundManager.Instance.PlaySFX(SFXClip.ButtonClick);
            m_okFuncDel();
        }
        else
            PopupManager.Instance.ClosePopup();
    }
    public void OnPressCancel()
    {
        if (m_cancelFuncDel != null)
        {
            SoundManager.Instance.PlaySFX(SFXClip.ButtonClick);
            m_cancelFuncDel();
        }
        else
            PopupManager.Instance.ClosePopup();
    }
}
