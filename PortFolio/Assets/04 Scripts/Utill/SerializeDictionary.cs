using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SerializeDictionary<TKey, TValue> : Dictionary<TKey, TValue>, ISerializationCallbackReceiver
{
    [SerializeField]
    List<TKey> keys = new List<TKey>();
    [SerializeField]
    List<TValue> values = new List<TValue>();

    public void OnBeforeSerialize()
    {
        keys.Clear();
        values.Clear();

        foreach(KeyValuePair<TKey, TValue> keyValuePair in this)
        {
            keys.Add(keyValuePair.Key);
            values.Add(keyValuePair.Value);
        }
    }
    public void OnAfterDeserialize()
    {
        this.Clear();

        int length = keys.Count;

        for(int i = 0; i < length; i++)
        {
            this.Add(keys[i], values[i]);
        }
    }
}
