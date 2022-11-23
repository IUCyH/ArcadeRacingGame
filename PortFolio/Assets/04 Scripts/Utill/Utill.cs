using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Utill
{
    public static void ConvetTime(float time, out int minute, out int second, out int millisecond)
    {
        minute = Mathf.FloorToInt(time / 60f);
        second = (int)time % 60;
        millisecond = (int)(time * 100) % 100;
    }
}
