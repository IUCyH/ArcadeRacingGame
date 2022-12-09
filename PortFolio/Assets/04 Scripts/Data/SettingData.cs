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
public class SettingData
{
    public KeyData keySettings = new KeyData();
}
