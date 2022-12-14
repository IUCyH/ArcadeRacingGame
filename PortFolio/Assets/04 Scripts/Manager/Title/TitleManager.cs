using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleManager : Singleton<TitleManager>
{
    public void OnStartButtonPress()
    {
        DataManager.Instance.LoadPlayerData();
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
            GameSettingManager.Instance.SetSettingPanelsActive();
        }
    }
    void Update()
    {
        if(InputManager.GetKeyDown(Key.Esc))
        {
            ToDoWhenEscKeyIsPressed();
        }
    }
}
