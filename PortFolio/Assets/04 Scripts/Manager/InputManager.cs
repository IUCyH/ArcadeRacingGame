using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : Singleton<InputManager>
{
    public float Horizontal { get; set; }
    public float Vertical { get; set; }
    public float MouseX { get; set; }
    public float MouseY { get; set; }
    public bool HandBreakKeyDown { get; set; }
    public bool HandBreakKeyUp { get; set; }
    public bool ResetKeyDown { get; set; }
    public bool BoosterKeyDown { get; set; }
    // Update is called once per frame
    void Update()
    {
        Horizontal = Input.GetAxis("Horizontal");
        Vertical = Input.GetAxis("Vertical");
        HandBreakKeyDown = Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift);
        HandBreakKeyUp = Input.GetKeyUp(KeyCode.LeftShift) || Input.GetKeyUp(KeyCode.RightShift);
        ResetKeyDown = Input.GetKeyDown(KeyCode.R);
        BoosterKeyDown = Input.GetKeyDown(KeyCode.LeftControl) || Input.GetKeyDown(KeyCode.RightControl);
        MouseX = Input.GetAxis("Mouse X");
        MouseY = Input.GetAxis("Mouse Y");
        Debug.Log(MouseX);
    }
}
