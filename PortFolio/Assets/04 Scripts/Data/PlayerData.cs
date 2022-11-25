using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class CarData
{
    public Material kartPaintMat;
    public Color kartColor;
    public Vector3 pos;
    public string name;
    public float maxSpeed;
    public float maxBoosterSpeed;
    public float maxTurnPower;
    public float startSpeed;
    public int price;
    public int numberOfWheels;
}
[Serializable]
public class CarInfo
{
    public CarData data;
    public bool isUsing;
    public bool isPlayable;
}
[Serializable]
public class MapData
{
    public string name;
    public int lapTime;
}
[Serializable]
public class MapInfo
{
    public MapData data;
    public float bestTime;
    public int recentPlaydate;
}
[Serializable]
public class PlayerData
{
    public List<CarInfo> carsList = new List<CarInfo>();
    public List<MapInfo> mapList = new List<MapInfo>();
    public string userName;
    public byte currKart;
    public byte currMap;
}