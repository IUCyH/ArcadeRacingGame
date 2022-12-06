using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManager : Singleton<MapManager>
{
    [Tooltip("Lap Time on this map")]
    [SerializeField]
    int m_lapTime;
    [SerializeField]
    GameObject m_mapPrefab;
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
        m_lapTime = mapinfo.data.lapTime;
        InstantiateMap();
    }
    void InstantiateMap()
    {
        var obj = Instantiate(m_mapPrefab);
        obj.transform.SetParent(this.transform);
        obj.transform.localPosition = m_mapPosition;
    }
    protected override void OnAwake()
    {
        int index = DataManager.Instance.PlayerData.currMap;
        string mapName = DataManager.Instance.PlayerData.mapList[index].data.name;
        string path = string.Format("Prefab/Maps/{0}", mapName);
        m_mapPrefab = Resources.Load<GameObject>(path);
        m_mapPosition = m_mapPrefab.transform.position;
    }
}
