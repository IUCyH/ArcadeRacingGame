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
    Stack<GameObject> m_popupStack = new Stack<GameObject>();
    [SerializeField]
    Dictionary<string, GameObjectPool<GameObject>> m_popupPoolDic;
    [SerializeField]
    Canvas m_popupCanvas;
    [SerializeField]
    InputField m_currInputField;
    [SerializeField]
    List<string> m_popupNames;

    public string GetInputFieldText { get { return m_currInputField.text; } }
    public bool IsPopupOpen { get { return m_popupStack.Count > 0; } }

    public void CreatePopupInputField(string titleText, string contentsText, FuncDel funcDel = null, string okText = "확인")
    {
        SetCanvasEnabled(true);
        var obj = m_popupPoolDic[m_popupNames[(int)PopupName.InputField]].Get();

        m_currInputField = obj.GetComponentInChildren<InputField>();
        m_currInputField.text = string.Empty;

        var popupInputField = obj.GetComponent<Popup_InputField>();
        popupInputField.SetPopup(titleText, contentsText, funcDel, okText);

        obj.SetActive(true);
        m_popupStack.Push(obj);
    }
    public void CreatePopupOK(string titleText, string contentsText, FuncDel funcDel = null, string okText = "확인")
    {
        SetCanvasEnabled(true);
        var obj = m_popupPoolDic[m_popupNames[(int)PopupName.Ok]].Get();
        var popupOk = obj.GetComponent<Popup_OK>();

        popupOk.SetPopup(titleText, contentsText, funcDel, okText);

        obj.SetActive(true);
        m_popupStack.Push(obj);
    }
    public void CreatePopupOkCancel(string titleText, string contentsText, FuncDel okFuncDel = null, FuncDel cancelFuncDel = null, string okText = "확인", string cancelText = "취소")
    {
        SetCanvasEnabled(true);
        var obj = m_popupPoolDic[m_popupNames[(int)PopupName.OkCancel]].Get();
        var popupOkCancel = obj.GetComponent<Popup_OkCancel>();

        popupOkCancel.SetPopup(titleText, contentsText, okFuncDel, cancelFuncDel, okText, cancelText);
        
        obj.SetActive(true);
        m_popupStack.Push(obj);
    }
    public void ClosePopup()
    {
        if (m_popupStack.Count > 0)
        {
            var obj = m_popupStack.Pop();
            m_popupPoolDic[obj.name].Set(obj); //obj.name 캐싱할 예정
            obj.SetActive(false);
        }
        if(m_popupStack.Count <= 0)
        {
            SetCanvasEnabled(false);
        }
    }
    void SetCanvasEnabled(bool value)
    {
        if(m_popupCanvas.enabled == value)
        {
            return;
        }
        m_popupCanvas.enabled = value;
    }
    // Start is called before the first frame update
    protected override void OnAwake()
    {
        m_popupPrefabs = Resources.LoadAll<GameObject>("Prefab/Popup");
        m_popupPoolDic = new Dictionary<string, GameObjectPool<GameObject>>();
    }
    protected override void OnStart()
    {
        SetCanvasEnabled(false);
        var length = m_popupPrefabs.Length;
        for (int i = 0; i < length; i++)
        {
            var popupObj = m_popupPrefabs[i];
            var name = string.Format("{0}(Clone)", popupObj.name);
            m_popupNames.Add(name);
            m_popupPoolDic.Add(name, new GameObjectPool<GameObject>(5, () =>
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
