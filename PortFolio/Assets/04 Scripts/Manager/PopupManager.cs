using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public delegate void FuncDel();
public class PopupManager : Singleton_DontDestroy<PopupManager>
{
    enum PopupName
    {
        None = -1,
        InputField,
        Ok,
        OkCancel,
        Max
    }
    [SerializeField]
    GameObject[] m_popupPrefabs;
    Stack<GameObject> m_popupOkStack = new Stack<GameObject>();
    Stack<GameObject> m_popupOkCancelStack = new Stack<GameObject>();
    Stack<GameObject> m_popupInputFieldStack = new Stack<GameObject>();
    [SerializeField]
    List<GameObjectPool<GameObject>> m_popupPoolList;
    [SerializeField]
    Canvas m_popupCanvas;
    [SerializeField]
    InputField m_currInputField;

    public string GetInputFieldText { get { return m_currInputField.text; } }
    public bool IsPopupOpen { get; set; }

    public void CreatePopupInputField(string titleText, string contentsText, FuncDel funcDel = null, string okText = "확인")
    {
        var obj = m_popupPoolList[(int)PopupName.InputField].Get();
        m_currInputField = obj.GetComponentInChildren<InputField>();
        var popupInputField = obj.GetComponent<Popup_InputField>();
        popupInputField.SetPopup(titleText, contentsText, funcDel, okText);
        obj.SetActive(true);
        m_popupInputFieldStack.Push(obj);

        IsPopupOpen = true;
    }
    public void CreatePopupOK(string titleText, string contentsText, FuncDel funcDel = null, string okText = "확인")
    {
        var obj = m_popupPoolList[(int)PopupName.Ok].Get();
        var popupOk = obj.GetComponent<Popup_OK>();
        popupOk.SetPopup(titleText, contentsText, funcDel, okText);
        obj.SetActive(true);
        m_popupOkStack.Push(obj);

        IsPopupOpen = true;
    }
    public void CreatePopupOkCancel(string titleText, string contentsText, FuncDel okFuncDel = null, FuncDel cancelFuncDel = null, string okText = "확인", string cancelText = "취소")
    {
        var obj = m_popupPoolList[(int)PopupName.OkCancel].Get();
        var popupOkCancel = obj.GetComponent<Popup_OkCancel>();
        popupOkCancel.SetPopup(titleText, contentsText, okFuncDel, cancelFuncDel, okText, cancelText);
        obj.SetActive(true);
        m_popupOkCancelStack.Push(obj);

        IsPopupOpen = true;
    }
    public void ClosePopupOk()
    {
        if (m_popupOkStack.Count > 0)
        {
            var obj = m_popupOkStack.Pop();
            m_popupPoolList[(int)PopupName.Ok].Set(obj);
            obj.SetActive(false);
        }
        if (m_popupOkStack.Count <= 0)
        {
            IsPopupOpen = false;
        }
    }
    public void ClosePopupOkCancel()
    {
        if (m_popupOkCancelStack.Count > 0)
        {
            var obj = m_popupOkCancelStack.Pop();
            m_popupPoolList[(int)PopupName.OkCancel].Set(obj);
            obj.SetActive(false);
        }
        if (m_popupOkCancelStack.Count <= 0)
        {
            IsPopupOpen = false;
        }
    }
    public void ClosePopupInputField()
    {
        if (m_popupInputFieldStack.Count > 0)
        {
            var obj = m_popupInputFieldStack.Pop();
            m_popupPoolList[(int)PopupName.InputField].Set(obj);
            obj.SetActive(false);
        }
        if (m_popupInputFieldStack.Count <= 0)
        {
            IsPopupOpen = false;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        m_popupPrefabs = Resources.LoadAll<GameObject>("Prefab/Popup");
        m_popupPoolList = new List<GameObjectPool<GameObject>>();
        var length = m_popupPrefabs.Length;
        for (int i = 0; i < length; i++)
        {
            var popupObj = m_popupPrefabs[i];
            m_popupPoolList.Add(new GameObjectPool<GameObject>(5, () =>
            {
                var obj = Instantiate(popupObj);
                obj.transform.SetParent(m_popupCanvas.transform);
                obj.transform.localPosition = Vector3.zero;
                obj.transform.localScale = Vector3.one;
                obj.SetActive(false);
                return obj;
            }));
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
            CreatePopupInputField("알림", "내용내용");
    }
}
