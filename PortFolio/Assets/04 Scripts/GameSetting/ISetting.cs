using System.Collections;
using System.Collections.Generic;
using UnityEngine;

interface ISetting
{
    public void Init();
    public void Open();
    public void OnExit();
    public void Hide();
}
