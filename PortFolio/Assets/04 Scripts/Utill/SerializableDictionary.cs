using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SerializableDictionary<TKey, TValue> : Dictionary<TKey, TValue>, ISerializationCallbackReceiver
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
        if(keys.Count != values.Count)
        {
            throw new System.Exception("Make sure that both key and value types are serializable.");
        }

        this.Clear();

        int length = keys.Count;

        for(int i = 0; i < length; i++)
        {
            this.Add(keys[i], values[i]);
        }
    }
}
