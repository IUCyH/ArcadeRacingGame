using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleManager : Singleton<TitleManager>
{
    public void OnStartButtonPress()
    {
        DataManager.Instance.Load();
    }
    public void GoNextScene()
    {
        LoadSceneManager.Instance.LoadSceneAsync(SceneState.Lobby);
    }
}
