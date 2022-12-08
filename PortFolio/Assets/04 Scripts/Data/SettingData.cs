using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class DictionaryKeyAndKeycode : SerializeDictionary<Key, KeyCode> { }

[Serializable]
public class KeyData
{
    public DictionaryKeyAndKeycode keyDictionary = new DictionaryKeyAndKeycode();
}

[Serializable]
public class SettingData
{
    public KeyData keySettings;
}
