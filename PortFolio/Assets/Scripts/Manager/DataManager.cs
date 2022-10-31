using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataManager : Singleton_DontDestroy<DataManager>
{
    [SerializeField]
    PlayerData m_playerData;

    public PlayerData PlayerData { get { return m_playerData; } }

    public void UpdateMapBestTime(float time, int mapIndex)
    {
        m_playerData.mapList[mapIndex].bestTime = time;
    }
    public float GetMapBestTime(int mapIndex)
    {
        return m_playerData.mapList[mapIndex].bestTime;
    }
    public string GetMapName(int mapIndex)
    {
        return m_playerData.mapList[mapIndex].data.name;
    }
    public PlayerData Load()
    {
        var jsonData = PlayerPrefs.GetString("PLAYER_DATA", string.Empty);
        if (string.IsNullOrEmpty(jsonData))
            return null;
        return JsonUtility.FromJson<PlayerData>(jsonData);
    }
    public void Save()
    {
        var playerJsonData = JsonUtility.ToJson(m_playerData);
        //Debug.Log(jsonData);
        PlayerPrefs.SetString("PLAYER_DATA", playerJsonData);
        PlayerPrefs.Save();
    }
    protected override void OnStart()
    {
        m_playerData = Load();
        if (m_playerData == null)
        {
            m_playerData = new PlayerData();
            var dataLength = CarDataTable.Instance.m_carDatas.Length;
            for (int i = 0; i < dataLength; i++)
            {
                CarInfo carInfo = new CarInfo();
                carInfo.data = CarDataTable.Instance.m_carDatas[i];
                carInfo.isPlayable = false;
                m_playerData.carsList.Add(carInfo);
            }
            var mapDatalength = MapDataTable.Instance.m_mapDataTable.Length;
            for (int i = 0; i < mapDatalength; i++)
            {
                MapInfo mapInfo = new MapInfo();
                mapInfo.data = MapDataTable.Instance.m_mapDataTable[i];
                mapInfo.bestTime = 9999f;
                mapInfo.recentPlaydate = 0;
                m_playerData.mapList.Add(mapInfo);
            }
            m_playerData.carsList[0].isPlayable = true;
        }
        Save();
    }
}