using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetPointController : MonoBehaviour
{
    public int ResetPointNumber { get; set; }

    void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Player"))
            ResetPointManager.Instance.ChangeCurrReversePoint(ResetPointNumber);
    }
}
