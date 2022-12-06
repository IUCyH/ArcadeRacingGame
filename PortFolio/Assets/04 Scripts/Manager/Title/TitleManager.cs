using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleManager : Singleton<TitleManager>
{
    public void OnStartButtonPress()
    {
        if (GameSettingManager.Instance.IsSettingPanelOpen) return;

        DataManager.Instance.Load();
    }
    public void GoNextScene()
    {
        LoadSceneManager.Instance.LoadSceneAsync(SceneState.Lobby);
    }

    void ToDoWhenEscKeyIsPressed()
    {
        if (PopupManager.Instance.IsPopupOpen)
        {
            PopupManager.Instance.ClosePopup();
        }
        else
        {
            GameSettingManager.Instance.SetGameSettingPanelActive();
        }
    }
    void Update()
    {
        if(InputManager.Instance.EscKeyDown)
        {
            ToDoWhenEscKeyIsPressed();
        }
    }
}
