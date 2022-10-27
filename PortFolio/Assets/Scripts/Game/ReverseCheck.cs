using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReverseCheck : MonoBehaviour
{
    public bool IsNotEnter { get; set; }
    // Start is called before the first frame update
    void Start()
    {
        IsNotEnter = true;   
    }
    void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Player"))
        {
            if (!IsNotEnter)
            {
                GameSystemManager.Instance.OnReverse(true);
                IsNotEnter = true;
            }
            else
            {
                GameSystemManager.Instance.OnReverse(false);
                IsNotEnter = false;
            }
        }
    }
    public void InitReverse()
    {
        IsNotEnter = true;
    }
}
