using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MiniMapController : MonoBehaviour
{
    [SerializeField]
    GameObject m_targetPlayer;
    // Update is called once per frame
    void Update()
    {
        var playerPos = m_targetPlayer.transform.position;
    }
}
