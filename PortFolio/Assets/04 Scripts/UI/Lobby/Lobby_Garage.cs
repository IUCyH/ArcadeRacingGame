using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lobby_Garage : MonoBehaviour, ILobbyMenu
{
    public void Show()
    {
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}