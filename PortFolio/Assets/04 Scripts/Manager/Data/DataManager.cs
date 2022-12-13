using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataManager : Singleton_DontDestroy<DataManager>
{

    [SerializeField]
    PlayerData m_playerData;
    [SerializeField]
    SettingData m_settingData;

    string m_playerJsonDataName = "PLAYER_DATA";
    string m_settingJsonDataName = "SETTING_DATA";
    string m_inputFieldName;
    int m_usingKart;

    public PlayerData PlayerData { get { return m_playerData; } }
    public SettingData SettingData { get { return m_settingData; } }
    public DictionaryOfKeyAndKeycode KeyDictionary { get { return m_settingData.keySettings.keyDictionary; } }

    public void UpdateGraphicSettings()
    {

    }
    public void UpdateKey(Key key, KeyCode keyCode)
    {
        KeyDictionary[key] = keyCode;
    }
    public void UpdatePlayerCurrentMap(int index)
    {
        m_playerData.currMap = index;
    }
    public void UpdatePlayerCurrentKart(int index)
    {
        m_playerData.currKart = index;
    }
    public void IncreaseGold(uint gold)
    {
        m_playerData.golds += gold;
    }    
    public void DecreaseGold(uint gold)
    {
        m_playerData.golds -= gold;
    }
    public uint GetPlayerGold()
    {
        return m_playerData.golds;
    }
    public void UpdateKartToPlayable(int index)
    {
        m_playerData.carsList[index].isPlayable = true;
    }
    public void ChangeUsingKart(int index)
    {
        Debug.Log(m_usingKart);
        m_playerData.carsList[m_usingKart].isUsing = false;
        m_playerData.carsList[index].isUsing = true;
        m_usingKart = index;
    }
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
    public void LoadSettingData()
    {
        var jsonData = PlayerPrefs.GetString(m_settingJsonDataName, string.Empty);
        if(string.IsNullOrEmpty(jsonData))
        {
            CreateNewSettingData();
            return;
        }
        m_settingData = JsonUtility.FromJson<SettingData>(jsonData);
        SaveSettingData();
    }
    public void LoadPlayerData()
    {
        var jsonData = PlayerPrefs.GetString(m_playerJsonDataName, string.Empty);
        if (string.IsNullOrEmpty(jsonData))
        {
            MakeUserDataCreatePopup();
            return;
        }
        m_playerData = JsonUtility.FromJson<PlayerData>(jsonData);
        m_usingKart = m_playerData.currKart;
        TitleManager.Instance.GoNextScene();
        SaveAll();
    }
    public void SaveSettingData()
    {
        var settingJsonData = JsonUtility.ToJson(m_settingData);
        PlayerPrefs.SetString(m_settingJsonDataName, settingJsonData);
        PlayerPrefs.Save();
    }
    public void SavePlayerData()
    {
        var playerJsonData = JsonUtility.ToJson(m_playerData);
        PlayerPrefs.SetString(m_playerJsonDataName, playerJsonData);
        PlayerPrefs.Save();
    }
    public void SaveAll()
    {
        var playerJsonData = JsonUtility.ToJson(m_playerData);
        var settingJsonData = JsonUtility.ToJson(m_settingData);
        PlayerPrefs.SetString(m_playerJsonDataName, playerJsonData);
        PlayerPrefs.SetString(m_settingJsonDataName, settingJsonData);
        PlayerPrefs.Save();
    }
    public void MakeUserDataCreatePopup()
    {
        PopupManager.Instance.CreatePopupInputField("알림", "회원정보가 없습니다. 닉네임을 입력해주세요.", () =>
        {
            m_inputFieldName = PopupManager.Instance.GetInputFieldText;
            if (string.IsNullOrEmpty(m_inputFieldName))
            {
                PopupManager.Instance.CreatePopupOK("알림", "닉네임을 입력해주세요.");
            }
            else
            {
                FuncDel okFuncDel = () =>
                {
                    CreateNewData(m_inputFieldName);
                    PopupManager.Instance.ClosePopup();
                    PopupManager.Instance.ClosePopup();
                    TitleManager.Instance.GoNextScene();
                };
                PopupManager.Instance.CreatePopupOkCancel("알림", "이 닉네임으로 하시겠습니까?", okFuncDel, null, "예", "아니요");
            }
        });
    }
    void CreateNewSettingData()
    {
        m_settingData = new SettingData();
        InputManager.InitToDefaultKey();
        SaveSettingData();
    }
    void CreateNewData(string name)
    {
        m_playerData = new PlayerData()
        {
            userName = name,
            golds = PlayerData.BasicGold,
            currKart = 0,
            currMap = 0
        };

        var dataLength = CarDataTable.Instance.m_carDatas.Length;
        for (int i = 0; i < dataLength; i++)
        {
            CarInfo carInfo = new CarInfo();
            InitCarInfo(carInfo, i);
            carInfo.data.kartPaintMat.color = carInfo.data.kartColor;
            carInfo.isPlayable = false;
            m_playerData.carsList.Add(carInfo);
        }

        var mapDatalength = MapDataTable.Instance.m_mapDataTable.Length;
        for (int i = 0; i < mapDatalength; i++)
        {
            MapInfo mapInfo = new MapInfo();
            InitMapInfo(mapInfo, i);
            mapInfo.bestTime = float.PositiveInfinity;
            mapInfo.recentPlaydate = 0;
            m_playerData.mapList.Add(mapInfo);
        }

        m_playerData.carsList[0].isPlayable = true;
        m_playerData.carsList[0].isUsing = true;
        m_usingKart = 0;

        SaveAll();
    }
    void InitCarInfo(CarInfo carInfo, int index)
    {
        carInfo.data = CarDataTable.Instance.m_carDatas[index];
    }
    void InitMapInfo(MapInfo mapInfo, int index)
    {
        mapInfo.data = MapDataTable.Instance.m_mapDataTable[index];
    }
    protected override void OnAwake()
    {
        //PlayerPrefs.DeleteAll();
        LoadSettingData();
    }
}
