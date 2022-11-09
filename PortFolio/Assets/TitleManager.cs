using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleManager : Singleton<TitleManager>
{
    public void OnStartButtonPress()
    {
        GameSystemManager.Instance.SceneLoadAsync("Game");
    }
}
