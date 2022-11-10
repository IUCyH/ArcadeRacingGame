using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleController : MonoBehaviour
{
    public void OnStartButtonPress()
    {
        LoadSceneManager.Instance.LoadSceneAsync(SceneState.Game);
    }
}
