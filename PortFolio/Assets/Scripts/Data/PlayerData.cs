using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class CarData
{
    public string name;
    public float maxSpeed;
    public float maxBoosterSpeed;
    public float maxTurnPower;
    public float startSpeed;
    public int price;
    public Vector3 pos;
}
[Serializable]
public class CarInfo
{
    public CarData data;
    public bool isPlayable;
}
[Serializable]
public class PlayerData
{
    public List<CarInfo> carsList = new List<CarInfo>();
    public List<MapInfo> mapList = new List<MapInfo>();
}
[Serializable]
public class MapData
{
    public string name;
}
[Serializable]
public class MapInfo
{
    public MapData data;
    public float bestTime;
    public int recentPlaydate;
}
