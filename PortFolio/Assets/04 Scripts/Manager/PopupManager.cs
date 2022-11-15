using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public delegate void FuncDel();
public enum PopupName
{
    None = -1,
    InputField,
    Ok,
    OkCancle,
    Max
}
public class PopupManager : Singleton_DontDestroy<PopupManager>
{
    [SerializeField]
    GameObject[] m_popupPrefabs;
    Stack<GameObject> m_popupStack = new Stack<GameObject>();
    [SerializeField]
    List<GameObjectPool<GameObject>> m_popupPoolList;
    [SerializeField]
    Canvas m_popupCanvas;

    public void CreatePopupInputField(string titleText, string contentsText, FuncDel funcDel = null, string okText = "확인")
    {
        var obj = m_popupPoolList[(int)PopupName.InputField].Get();
        var popupInputField = obj.GetComponent<Popup_InputField>();
        popupInputField.SetPopup(titleText, contentsText, funcDel, okText);
        obj.SetActive(true);
        m_popupStack.Push(obj);
    }
    public void ClosePopup(PopupName name)
    {
        if (m_popupStack.Count > 0)
        {
            var obj = m_popupStack.Pop();
            m_popupPoolList[(int)name].Set(obj);
            obj.SetActive(false);
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
