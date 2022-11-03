using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReversePointController : MonoBehaviour
{
    public int ReversePointNumber { get; set; }

    void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Player"))
            ReversePointManager.Instance.ChangeCurrReversePoint(ReversePointNumber);
    }
}
