using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameSettingPanelController : MonoBehaviour
{
    [SerializeField]
    Text m_backBtnText;
    [SerializeField]
    List<string> m_backTexts;

    public void OnPressBackButton()
    {
        DataManager.Instance.Save();
        switch (LoadSceneManager.Instance.CurrScene)
        {
            case SceneState.Title:
#if UNITY_EDITOR
                UnityEditor.EditorApplication.isPlaying = false;
#else
                Application.Quit();
#endif
                break;
            case SceneState.Lobby:
                LoadSceneManager.Instance.LoadSceneAsync(SceneState.Title);
                break;
            case SceneState.Game:
                LoadSceneManager.Instance.LoadSceneAsync(SceneState.Lobby);
                break;
            case SceneState.Max:
                break;
        }
        gameObject.SetActive(false);
    }
    public void SetBackBtnText(SceneState sceneState)
    {
        m_backBtnText.text = m_backTexts[(int)sceneState];
    }
    public void OnExit()
    {
        GameSettingManager.Instance.SetGameSettingPanelActive();
    }
    void InitBackTextsList()
    {
        m_backTexts.Add("게임 종료");
        m_backTexts.Add("시작화면으로 돌아가기");
        m_backTexts.Add("메인메뉴로 돌아가기");
    }
    // Start is called before the first frame update
    void Awake()
    {
        m_backTexts = new List<string>();
        InitBackTextsList();
    }
}
