using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class DictionaryOfKeyAndKeycode : SerializableDictionary<Key, KeyCode> { }

[Serializable]
public class KeyData
{
    public DictionaryOfKeyAndKeycode keyDictionary = new DictionaryOfKeyAndKeycode();
}
[Serializable]
public class GraphicData
{
    public (int width, int height) screenResolution;
    public int screenMode;
    public int frameRate;
    public int textureQuality;
    public int shadowQuality;
    public int antiAliasing;
    public int vSync;
    public int anisotropicFiltering;
}

[Serializable]
public class SettingData
{
    public KeyData keySettings = new KeyData();
    public GraphicData graphicSettings = new GraphicData();
}
