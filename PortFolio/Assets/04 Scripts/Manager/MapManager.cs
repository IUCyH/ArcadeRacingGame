using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManager : Singleton<MapManager>
{
    [Tooltip("Lap Time on this map")]
    [SerializeField]
    int m_lapTime;
    [SerializeField]
    GameObject[] m_maps;
    [SerializeField]
    Vector3 m_mapPosition;

    public int LapTime { get { return m_lapTime; } }
    void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag("Player")) return;

        GameSystemManager.Instance.OnThroughGate();
    }
    public void InitMap(MapInfo mapinfo)
    {
        var currMapIndex = DataManager.Instance.PlayerData.currMap;
        m_maps = Resources.LoadAll<GameObject>("Prefab/Maps");
        m_mapPosition = m_maps[currMapIndex].transform.position;
        m_lapTime = mapinfo.data.lapTime;
        InstantiateMap(currMapIndex);
    }
    void InstantiateMap(int mapIndex)
    {
        var obj = Instantiate(m_maps[mapIndex]);
        obj.transform.SetParent(this.transform);
        obj.transform.localPosition = m_mapPosition;
    }
}
