using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleManager : Singleton<TitleManager>
{
    public void OnStartButtonPress()
    {
        SoundManager.Instance.PlaySFX(SFXClip.ButtonClick);
        DataManager.Instance.LoadPlayerData();
    }
    public void OnPressOptionsPanelOpenBtn()
    {
        GameSettingManager.Instance.OpenOptionsPanel();
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
    void Start()
    {
        SoundManager.Instance.PlayBGM(BGMClip.TitleBGM);
    }
    void Update()
    {
        if(InputManager.GetKeyDown(Key.Esc))
        {
            ToDoWhenEscKeyIsPressed();
        }
    }
}
