using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameSettings : Singleton_DontDestroy<GameSettings>
{
    void OnApplicationQuit()
    {
        DataManager.Instance.Save();    
    }
    // Start is called before the first frame update
    protected override void OnAwake()
    {
        Application.targetFrameRate = 500;
#if UNITY_EDITOR
        Debug.unityLogger.logEnabled = true;
#else
        Debug.unityLogger.logEnabled = false;
#endif
    }
}
