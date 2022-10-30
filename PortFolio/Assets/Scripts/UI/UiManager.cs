using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UiManager : Singleton<UiManager>
{
    public void SetUIText(Text textUi, string text)
    {
        textUi.text = text;
    }
    public void SetUITextScale(Text text, float Xvalue, float Yvalue, float Zvalue)
    {
        text.transform.localScale = new Vector3(Xvalue, Yvalue, Zvalue);
    }
    public void SetUITextColor(Text text, float r, float g, float b, float alpha)
    {
        text.color = new Color(r, g, b, alpha);
    }
    public void SetCanvasEnabled(Canvas canvas, bool value)
    {
        canvas.enabled = value;
    }
}
