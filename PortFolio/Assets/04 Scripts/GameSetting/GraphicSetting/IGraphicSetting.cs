using System.Collections;
using System.Collections.Generic;
using UnityEngine;

interface IGraphicSetting
{
    public bool SettingChanged { get; set; }
    public void ApplyChangedSetting();
    public void Init();
    public void SetGraphicSettingToCurrSettingData();
}
