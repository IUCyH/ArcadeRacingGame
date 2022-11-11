#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229;
// System.Collections.Generic.Dictionary`2<System.String,GameSystemManager/ReverseCheckPos>
struct Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GameSystemManager/ReverseCheckPos>
struct KeyCollection_t9D9D93B8E9A2F5EDC493EED40C987D426EBA27DE;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<CarInfo>
struct List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<MapInfo>
struct List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// Singleton_DontDestroy`1<CarDataTable>
struct Singleton_DontDestroy_1_t0F170216A8E5918ECCDE511697B5C99EECA73DF6;
// Singleton_DontDestroy`1<DataManager>
struct Singleton_DontDestroy_1_t476369C486C70CE5CD3D245CFA49CFAAA2EE8347;
// Singleton_DontDestroy`1<GameSettings>
struct Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657;
// Singleton_DontDestroy`1<GameSystemManager>
struct Singleton_DontDestroy_1_tD8089C6807FBAD2976D80847FD26C8203400ED64;
// Singleton_DontDestroy`1<LoadSceneManager>
struct Singleton_DontDestroy_1_tCA8209B6BA7D4380107625411082ABF8BD46E54D;
// Singleton_DontDestroy`1<MapDataTable>
struct Singleton_DontDestroy_1_t12442F5DBE70FBAB401F36F35DA9FCE15FD42D98;
// Singleton_DontDestroy`1<System.Object>
struct Singleton_DontDestroy_1_tE48FC4FE1D10644E7CF14F91ED91590D669A3C7A;
// Singleton`1<CheckPointManager>
struct Singleton_1_t1F8828BD641426F8396821F507A5C47943DE1DAA;
// Singleton`1<InGameUiManager>
struct Singleton_1_tFBCCED212AA497E22CD601CE70A71F53A2E9F161;
// Singleton`1<InputManager>
struct Singleton_1_t50C5E5A121B3204A4D5965AE75F43860605ED7B3;
// Singleton`1<LobbyUIManager>
struct Singleton_1_t37F22396911BC0AFFCC353D1908B2E03E6CF10C4;
// Singleton`1<MapManager>
struct Singleton_1_tB25C842AECF7533644545E81E9762A79176990C2;
// Singleton`1<System.Object>
struct Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3;
// Singleton`1<ResetPointManager>
struct Singleton_1_tEB096B8237A899316B43C8E4D8A52048850E4BEB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GameSystemManager/ReverseCheckPos>
struct ValueCollection_t9966F132AB88CAA5E168F0AC9F27D3581D4441F5;
// System.Collections.Generic.Dictionary`2/Entry<System.String,GameSystemManager/ReverseCheckPos>[]
struct EntryU5BU5D_t90C9D742AE4616AD79402FF33FA7A59297287C23;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// CarData[]
struct CarDataU5BU5D_t0688CEAF46D508A83CFA3A8F4307E35DEA5ED566;
// CarInfo[]
struct CarInfoU5BU5D_t33DEB45039D0D37E36070F9E4B51B19B7D5F7908;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// CheckpointController[]
struct CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// ILobbyMenu[]
struct ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// MapData[]
struct MapDataU5BU5D_t88BEB0BB3AA596F06D030B2EE5023E241D7DE340;
// MapInfo[]
struct MapInfoU5BU5D_tBFA7EC166F830F69C76A5E02F125B93CE106B1B1;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6;
// WheelController[]
struct WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CarData
struct CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D;
// CarDataTable
struct CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A;
// CarInfo
struct CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C;
// CheckPointManager
struct CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4;
// CheckpointController
struct CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DataManager
struct DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameSettings
struct GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4;
// GameSystemManager
struct GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// ILobbyMenu
struct ILobbyMenu_tB0467DF96D08B2902E9EE64A066BF958BE7B9B18;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InGameUiManager
struct InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF;
// InputManager
struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// LoadSceneManager
struct LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A;
// LobbyUIManager
struct LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53;
// Lobby_GameStart
struct Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84;
// Lobby_Garage
struct Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5;
// MapData
struct MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8;
// MapDataTable
struct MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB;
// MapInfo
struct MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3;
// MapManager
struct MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.Outline
struct Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// PlayerData
struct PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// ResetPointManager
struct ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Shadow
struct Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TitleController
struct TitleController_tCF91AD75A5ECCDFD621B67FBC7012A0007965D8F;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// UnityEngine.WheelCollider
struct WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779;
// WheelController
struct WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// GameSystemManager/<Coroutine_CountDown>d__48
struct U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE;
// InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28
struct U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC;
// InGameUiManager/<Coroutine_TextAlphaFadeout>d__27
struct U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9;
// InGameUiManager/<Coroutine_TextScaleFadeIn>d__29
struct U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D;
// InGameUiManager/FuncDel
struct FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54;
// LobbyUIManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerController/<Coroutine_StartBoost>d__68
struct U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C;

IL2CPP_EXTERN_C RuntimeClass* CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILobbyMenu_tB0467DF96D08B2902E9EE64A066BF958BE7B9B18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03A2B194F1456E87F9587B9E4AB3D9B3CC3C4B43;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral1975AC104F214C808CE7580A79C17D8AC1141A3A;
IL2CPP_EXTERN_C String_t* _stringLiteral23B3B44C42CF754D535B83D1925A20E297F10F04;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral27D60A12D6822F2279196258CD85BE267A20958F;
IL2CPP_EXTERN_C String_t* _stringLiteral383594196FA50B548FBFC6ABFCF8EF8F5A31A66F;
IL2CPP_EXTERN_C String_t* _stringLiteral3C134A4AA231A13401AB350AF7FD6CB585BC50EA;
IL2CPP_EXTERN_C String_t* _stringLiteral517C1E9240257ADB3B22BB9D500C1A9DA0CF2A66;
IL2CPP_EXTERN_C String_t* _stringLiteral52D62C819863738A590C17DF61AD3BA6443FEFEF;
IL2CPP_EXTERN_C String_t* _stringLiteral7A099DDAB9C54AF52CD3FB1793F707B097A16A9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8A95E6D62AA1F0995E99CEF7025A29B59622AF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral8D5A4730B7DD6D0A7F69964933E6C49EFF1B39BD;
IL2CPP_EXTERN_C String_t* _stringLiteral932549B56F93B5D5FA036D903946293A2525FA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9A9915B8AA9E73B0828407BFD932F2FCA84292B6;
IL2CPP_EXTERN_C String_t* _stringLiteralA8239D7D184C3B9CB62A6BDF5686BE90EB8CF240;
IL2CPP_EXTERN_C String_t* _stringLiteralB53039B802B4AD3E93BA03948255B227786E12B3;
IL2CPP_EXTERN_C String_t* _stringLiteralB9CF7D29C7B8D2BF1E98016A0F980CDD85741253;
IL2CPP_EXTERN_C String_t* _stringLiteralBD33E1D1E19768AF1C9219F8CEAB79FF6905D318;
IL2CPP_EXTERN_C String_t* _stringLiteralBEF77A1C26EEAC2E2055D66E78756654DC9D0A4F;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCD5DE54798BD9884BC611C55995CCDE28DA4E5EA;
IL2CPP_EXTERN_C String_t* _stringLiteralD3847DA66D7FB9B75485D8454A98DF0E2CFFB9CE;
IL2CPP_EXTERN_C String_t* _stringLiteralDE584B6826F35FA897EB8E3F13C12F9EB50D9FB1;
IL2CPP_EXTERN_C String_t* _stringLiteralECBCAB4D0B142B5A92A89606D5ABA69A26112C74;
IL2CPP_EXTERN_C String_t* _stringLiteralEE4EACF6D5D4092E6A48C09BCCB97238EA068EB3;
IL2CPP_EXTERN_C String_t* _stringLiteralF3B712485B4BAEAED2D090DD0EA72E3124901069;
IL2CPP_EXTERN_C String_t* _stringLiteralF8EB61CB0D400CA4743BBD9C47AD12E87CF0E392;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m5045215CA864069866D1F0E99E242A4EEB8CE508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA_m75B3255B5CFDEC76AF04D425B615C4337BC9E735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisWheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_m17413F9808DE4439423E099650601D9332D77756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBF13816DD89AFE7A5FEE6AE16CA7E8DD08DB62AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m2796BA4A4BA944D0D56474980415A526E15F33E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779_mA24D5DC9C60C0CEF50D9E3B3BE1966D8610EA617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mF3139839C2BC3D5EF7908957E3571DA98A2E8D80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisILobbyMenu_tB0467DF96D08B2902E9EE64A066BF958BE7B9B18_m82019BFFCD6129A09F7F07FD7B97266CE16919EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameSystemManager_U3CCoroutine_CountDownU3Eb__48_0_m9F234F2E7C1D244B6764D3F8FD9804C15DCE0568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InGameUiManager_U3CUpdateStaticCanvasU3Eb__33_0_m55B965A4B76DA3C525CBB94957CDF0A4A3184414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_m1BC0A217D6A8FFBE81E040268CC950AEC4BECDD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m019F0C56BDA1D57FD8B1B7C7EDF1205031C1AB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE58075DCA2DD492591EE826F55B64888CAE37419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0EDE7105BBC326084DA2BAFCD153E386F5228776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m211FFA81B3AB1306FEFFCF1ACAE09CF596EC8081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1B9E7EBC2D36456DFD010A4AE30231AD08EAFB9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lobby_GameStart_U3CStartU3Eb__4_0_mA4E44B9FE3BB1286CAD6BD3AFA4FDA0FC2537BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lobby_GameStart_U3CStartU3Eb__4_1_m2B6D68178194C066452BF698F753F3F41E4579F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m29478D063D801FB0A7F41CD80CB94A3AB392E913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m503166E44D89D1E6C9FFBCA12A58A0557B8DF9E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m87F1DF44033454E90854C38EF11BDE3E9DA6568E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m8AE824D08625930D68DF7DBDDA540777003EB473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mE2FE84704684CB0B914BA446A79B1DDC8555E4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mF8DE3D3BE959789F20595EB234412F45922CA43A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m28056174581FE9682DDBB2D4323C27D8E7F0D281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m51871C9785657A4252A3CFA65DFF568D3B78FA84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mC846049DA7CB63D29B540DFA4AE468318A51516F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1__ctor_m46C839FE5DB299BE3801D23908C96372AD1ECBE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1__ctor_m4F8D135D6284D1BF2269F115B8AFC2622A9FEF41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1__ctor_m604193DC57C1DEEC26EE50B1C81D2A8E4F3B416B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1__ctor_m6176AF940683CEDA527E07B16229747C10A5792C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1__ctor_m89B891EB53DE373F5A677AC2CB00AC19463D76CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1__ctor_m8C15519BEA644C759C8915FEA98097675E2E65E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1_get_Instance_m0F7FEFE4C28410D4A8700CF512F22A3403E38542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1_get_Instance_m48013895EE6E21395EF2E3747418C7FB8FE41662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1_get_Instance_mDA4E9233BC020115A3780F03671BB403CC56615E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CountDownU3Ed__48_System_Collections_IEnumerator_Reset_m07B4BBE2ED4223E8E2EF1E54343AFB800DCE1362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_System_Collections_IEnumerator_Reset_mCEF65B4FCF880D613C4562045D9849897316C9C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_Reset_m97C4078E7D63C2E9C6CD0E7314B8AA7250BE7A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_Reset_m5867E593122FC329808AA1C9161B79E3FBBB0270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextScaleFadeInU3Ed__29_System_Collections_IEnumerator_Reset_m60F628644A9CC1E586227A889C7FFB2FE16B9884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnStartU3Eb__0_mDCA9165C477BFF588AADFE36ED5091C9387CC04B_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
struct CarDataU5BU5D_t0688CEAF46D508A83CFA3A8F4307E35DEA5ED566;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct MapDataU5BU5D_t88BEB0BB3AA596F06D030B2EE5023E241D7DE340;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6;
struct WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,GameSystemManager/ReverseCheckPos>
struct Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t90C9D742AE4616AD79402FF33FA7A59297287C23* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9D9D93B8E9A2F5EDC493EED40C987D426EBA27DE * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9966F132AB88CAA5E168F0AC9F27D3581D4441F5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02, ___entries_1)); }
	inline EntryU5BU5D_t90C9D742AE4616AD79402FF33FA7A59297287C23* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t90C9D742AE4616AD79402FF33FA7A59297287C23** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t90C9D742AE4616AD79402FF33FA7A59297287C23* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02, ___keys_7)); }
	inline KeyCollection_t9D9D93B8E9A2F5EDC493EED40C987D426EBA27DE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9D9D93B8E9A2F5EDC493EED40C987D426EBA27DE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9D9D93B8E9A2F5EDC493EED40C987D426EBA27DE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02, ___values_8)); }
	inline ValueCollection_t9966F132AB88CAA5E168F0AC9F27D3581D4441F5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9966F132AB88CAA5E168F0AC9F27D3581D4441F5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9966F132AB88CAA5E168F0AC9F27D3581D4441F5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<CarInfo>
struct List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CarInfoU5BU5D_t33DEB45039D0D37E36070F9E4B51B19B7D5F7908* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3, ____items_1)); }
	inline CarInfoU5BU5D_t33DEB45039D0D37E36070F9E4B51B19B7D5F7908* get__items_1() const { return ____items_1; }
	inline CarInfoU5BU5D_t33DEB45039D0D37E36070F9E4B51B19B7D5F7908** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CarInfoU5BU5D_t33DEB45039D0D37E36070F9E4B51B19B7D5F7908* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CarInfoU5BU5D_t33DEB45039D0D37E36070F9E4B51B19B7D5F7908* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3_StaticFields, ____emptyArray_5)); }
	inline CarInfoU5BU5D_t33DEB45039D0D37E36070F9E4B51B19B7D5F7908* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CarInfoU5BU5D_t33DEB45039D0D37E36070F9E4B51B19B7D5F7908** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CarInfoU5BU5D_t33DEB45039D0D37E36070F9E4B51B19B7D5F7908* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MapInfo>
struct List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MapInfoU5BU5D_tBFA7EC166F830F69C76A5E02F125B93CE106B1B1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21, ____items_1)); }
	inline MapInfoU5BU5D_tBFA7EC166F830F69C76A5E02F125B93CE106B1B1* get__items_1() const { return ____items_1; }
	inline MapInfoU5BU5D_tBFA7EC166F830F69C76A5E02F125B93CE106B1B1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MapInfoU5BU5D_tBFA7EC166F830F69C76A5E02F125B93CE106B1B1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MapInfoU5BU5D_tBFA7EC166F830F69C76A5E02F125B93CE106B1B1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21_StaticFields, ____emptyArray_5)); }
	inline MapInfoU5BU5D_tBFA7EC166F830F69C76A5E02F125B93CE106B1B1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MapInfoU5BU5D_tBFA7EC166F830F69C76A5E02F125B93CE106B1B1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MapInfoU5BU5D_tBFA7EC166F830F69C76A5E02F125B93CE106B1B1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// CarInfo
struct CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C  : public RuntimeObject
{
public:
	// CarData CarInfo::data
	CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * ___data_0;
	// System.Boolean CarInfo::isPlayable
	bool ___isPlayable_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C, ___data_0)); }
	inline CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * get_data_0() const { return ___data_0; }
	inline CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_isPlayable_1() { return static_cast<int32_t>(offsetof(CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C, ___isPlayable_1)); }
	inline bool get_isPlayable_1() const { return ___isPlayable_1; }
	inline bool* get_address_of_isPlayable_1() { return &___isPlayable_1; }
	inline void set_isPlayable_1(bool value)
	{
		___isPlayable_1 = value;
	}
};


// UnityEngine.Debug
struct Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B  : public RuntimeObject
{
public:

public:
};

struct Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;

public:
	inline static int32_t get_offset_of_s_DefaultLogger_0() { return static_cast<int32_t>(offsetof(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields, ___s_DefaultLogger_0)); }
	inline RuntimeObject* get_s_DefaultLogger_0() const { return ___s_DefaultLogger_0; }
	inline RuntimeObject** get_address_of_s_DefaultLogger_0() { return &___s_DefaultLogger_0; }
	inline void set_s_DefaultLogger_0(RuntimeObject* value)
	{
		___s_DefaultLogger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultLogger_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Logger_1() { return static_cast<int32_t>(offsetof(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields, ___s_Logger_1)); }
	inline RuntimeObject* get_s_Logger_1() const { return ___s_Logger_1; }
	inline RuntimeObject** get_address_of_s_Logger_1() { return &___s_Logger_1; }
	inline void set_s_Logger_1(RuntimeObject* value)
	{
		___s_Logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Logger_1), (void*)value);
	}
};


// MapData
struct MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8  : public RuntimeObject
{
public:
	// System.String MapData::name
	String_t* ___name_0;
	// System.Int32 MapData::lapTime
	int32_t ___lapTime_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_lapTime_1() { return static_cast<int32_t>(offsetof(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8, ___lapTime_1)); }
	inline int32_t get_lapTime_1() const { return ___lapTime_1; }
	inline int32_t* get_address_of_lapTime_1() { return &___lapTime_1; }
	inline void set_lapTime_1(int32_t value)
	{
		___lapTime_1 = value;
	}
};


// MapInfo
struct MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3  : public RuntimeObject
{
public:
	// MapData MapInfo::data
	MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * ___data_0;
	// System.Single MapInfo::bestTime
	float ___bestTime_1;
	// System.Int32 MapInfo::recentPlaydate
	int32_t ___recentPlaydate_2;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3, ___data_0)); }
	inline MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * get_data_0() const { return ___data_0; }
	inline MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_bestTime_1() { return static_cast<int32_t>(offsetof(MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3, ___bestTime_1)); }
	inline float get_bestTime_1() const { return ___bestTime_1; }
	inline float* get_address_of_bestTime_1() { return &___bestTime_1; }
	inline void set_bestTime_1(float value)
	{
		___bestTime_1 = value;
	}

	inline static int32_t get_offset_of_recentPlaydate_2() { return static_cast<int32_t>(offsetof(MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3, ___recentPlaydate_2)); }
	inline int32_t get_recentPlaydate_2() const { return ___recentPlaydate_2; }
	inline int32_t* get_address_of_recentPlaydate_2() { return &___recentPlaydate_2; }
	inline void set_recentPlaydate_2(int32_t value)
	{
		___recentPlaydate_2 = value;
	}
};


// PlayerData
struct PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<CarInfo> PlayerData::carsList
	List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 * ___carsList_0;
	// System.Collections.Generic.List`1<MapInfo> PlayerData::mapList
	List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * ___mapList_1;
	// System.String PlayerData::userName
	String_t* ___userName_2;

public:
	inline static int32_t get_offset_of_carsList_0() { return static_cast<int32_t>(offsetof(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5, ___carsList_0)); }
	inline List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 * get_carsList_0() const { return ___carsList_0; }
	inline List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 ** get_address_of_carsList_0() { return &___carsList_0; }
	inline void set_carsList_0(List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 * value)
	{
		___carsList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___carsList_0), (void*)value);
	}

	inline static int32_t get_offset_of_mapList_1() { return static_cast<int32_t>(offsetof(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5, ___mapList_1)); }
	inline List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * get_mapList_1() const { return ___mapList_1; }
	inline List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 ** get_address_of_mapList_1() { return &___mapList_1; }
	inline void set_mapList_1(List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * value)
	{
		___mapList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapList_1), (void*)value);
	}

	inline static int32_t get_offset_of_userName_2() { return static_cast<int32_t>(offsetof(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5, ___userName_2)); }
	inline String_t* get_userName_2() const { return ___userName_2; }
	inline String_t** get_address_of_userName_2() { return &___userName_2; }
	inline void set_userName_2(String_t* value)
	{
		___userName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userName_2), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GameSystemManager/<Coroutine_CountDown>d__48
struct U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE  : public RuntimeObject
{
public:
	// System.Int32 GameSystemManager/<Coroutine_CountDown>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameSystemManager/<Coroutine_CountDown>d__48::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameSystemManager GameSystemManager/<Coroutine_CountDown>d__48::<>4__this
	GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * ___U3CU3E4__this_2;
	// System.Single GameSystemManager/<Coroutine_CountDown>d__48::<time>5__2
	float ___U3CtimeU3E5__2_3;
	// System.Int32 GameSystemManager/<Coroutine_CountDown>d__48::<cnt>5__3
	int32_t ___U3CcntU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE, ___U3CU3E4__this_2)); }
	inline GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE, ___U3CtimeU3E5__2_3)); }
	inline float get_U3CtimeU3E5__2_3() const { return ___U3CtimeU3E5__2_3; }
	inline float* get_address_of_U3CtimeU3E5__2_3() { return &___U3CtimeU3E5__2_3; }
	inline void set_U3CtimeU3E5__2_3(float value)
	{
		___U3CtimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CcntU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE, ___U3CcntU3E5__3_4)); }
	inline int32_t get_U3CcntU3E5__3_4() const { return ___U3CcntU3E5__3_4; }
	inline int32_t* get_address_of_U3CcntU3E5__3_4() { return &___U3CcntU3E5__3_4; }
	inline void set_U3CcntU3E5__3_4(int32_t value)
	{
		___U3CcntU3E5__3_4 = value;
	}
};


// InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28
struct U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC  : public RuntimeObject
{
public:
	// System.Int32 InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.AnimationCurve InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve_2;
	// System.Single InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::from
	float ___from_3;
	// System.Single InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::to
	float ___to_4;
	// UnityEngine.UI.Text InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_5;
	// System.Single[] InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::rgbColors
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rgbColors_6;
	// UnityEngine.UI.Outline InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::outline
	Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * ___outline_7;
	// System.Single InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::duration
	float ___duration_8;
	// InGameUiManager/FuncDel InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::funcDel
	FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * ___funcDel_9;
	// System.Single InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::<time>5__2
	float ___U3CtimeU3E5__2_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_curve_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___curve_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_curve_2() const { return ___curve_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_curve_2() { return &___curve_2; }
	inline void set_curve_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___curve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curve_2), (void*)value);
	}

	inline static int32_t get_offset_of_from_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___from_3)); }
	inline float get_from_3() const { return ___from_3; }
	inline float* get_address_of_from_3() { return &___from_3; }
	inline void set_from_3(float value)
	{
		___from_3 = value;
	}

	inline static int32_t get_offset_of_to_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___to_4)); }
	inline float get_to_4() const { return ___to_4; }
	inline float* get_address_of_to_4() { return &___to_4; }
	inline void set_to_4(float value)
	{
		___to_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_5() const { return ___text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_rgbColors_6() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___rgbColors_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_rgbColors_6() const { return ___rgbColors_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_rgbColors_6() { return &___rgbColors_6; }
	inline void set_rgbColors_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___rgbColors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rgbColors_6), (void*)value);
	}

	inline static int32_t get_offset_of_outline_7() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___outline_7)); }
	inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * get_outline_7() const { return ___outline_7; }
	inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 ** get_address_of_outline_7() { return &___outline_7; }
	inline void set_outline_7(Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * value)
	{
		___outline_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outline_7), (void*)value);
	}

	inline static int32_t get_offset_of_duration_8() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___duration_8)); }
	inline float get_duration_8() const { return ___duration_8; }
	inline float* get_address_of_duration_8() { return &___duration_8; }
	inline void set_duration_8(float value)
	{
		___duration_8 = value;
	}

	inline static int32_t get_offset_of_funcDel_9() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___funcDel_9)); }
	inline FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * get_funcDel_9() const { return ___funcDel_9; }
	inline FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 ** get_address_of_funcDel_9() { return &___funcDel_9; }
	inline void set_funcDel_9(FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * value)
	{
		___funcDel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___funcDel_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__2_10() { return static_cast<int32_t>(offsetof(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC, ___U3CtimeU3E5__2_10)); }
	inline float get_U3CtimeU3E5__2_10() const { return ___U3CtimeU3E5__2_10; }
	inline float* get_address_of_U3CtimeU3E5__2_10() { return &___U3CtimeU3E5__2_10; }
	inline void set_U3CtimeU3E5__2_10(float value)
	{
		___U3CtimeU3E5__2_10 = value;
	}
};


// InGameUiManager/<Coroutine_TextAlphaFadeout>d__27
struct U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9  : public RuntimeObject
{
public:
	// System.Int32 InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.AnimationCurve InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve_2;
	// System.Single InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::from
	float ___from_3;
	// System.Single InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::to
	float ___to_4;
	// UnityEngine.UI.Text InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_5;
	// System.Single[] InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::rgbColors
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rgbColors_6;
	// System.Single InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::duration
	float ___duration_7;
	// InGameUiManager/FuncDel InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::funcDel
	FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * ___funcDel_8;
	// System.Single InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::<time>5__2
	float ___U3CtimeU3E5__2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_curve_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___curve_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_curve_2() const { return ___curve_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_curve_2() { return &___curve_2; }
	inline void set_curve_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___curve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curve_2), (void*)value);
	}

	inline static int32_t get_offset_of_from_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___from_3)); }
	inline float get_from_3() const { return ___from_3; }
	inline float* get_address_of_from_3() { return &___from_3; }
	inline void set_from_3(float value)
	{
		___from_3 = value;
	}

	inline static int32_t get_offset_of_to_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___to_4)); }
	inline float get_to_4() const { return ___to_4; }
	inline float* get_address_of_to_4() { return &___to_4; }
	inline void set_to_4(float value)
	{
		___to_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_5() const { return ___text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_rgbColors_6() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___rgbColors_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_rgbColors_6() const { return ___rgbColors_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_rgbColors_6() { return &___rgbColors_6; }
	inline void set_rgbColors_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___rgbColors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rgbColors_6), (void*)value);
	}

	inline static int32_t get_offset_of_duration_7() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___duration_7)); }
	inline float get_duration_7() const { return ___duration_7; }
	inline float* get_address_of_duration_7() { return &___duration_7; }
	inline void set_duration_7(float value)
	{
		___duration_7 = value;
	}

	inline static int32_t get_offset_of_funcDel_8() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___funcDel_8)); }
	inline FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * get_funcDel_8() const { return ___funcDel_8; }
	inline FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 ** get_address_of_funcDel_8() { return &___funcDel_8; }
	inline void set_funcDel_8(FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * value)
	{
		___funcDel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___funcDel_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___U3CtimeU3E5__2_9)); }
	inline float get_U3CtimeU3E5__2_9() const { return ___U3CtimeU3E5__2_9; }
	inline float* get_address_of_U3CtimeU3E5__2_9() { return &___U3CtimeU3E5__2_9; }
	inline void set_U3CtimeU3E5__2_9(float value)
	{
		___U3CtimeU3E5__2_9 = value;
	}
};


// InGameUiManager/<Coroutine_TextScaleFadeIn>d__29
struct U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D  : public RuntimeObject
{
public:
	// System.Int32 InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.AnimationCurve InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve_2;
	// System.Single InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::from
	float ___from_3;
	// System.Single InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::to
	float ___to_4;
	// UnityEngine.UI.Text InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_5;
	// System.Int32 InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::repeatCnt
	int32_t ___repeatCnt_6;
	// System.Single InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::<time>5__2
	float ___U3CtimeU3E5__2_7;
	// System.Int32 InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::<cnt>5__3
	int32_t ___U3CcntU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_curve_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D, ___curve_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_curve_2() const { return ___curve_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_curve_2() { return &___curve_2; }
	inline void set_curve_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___curve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curve_2), (void*)value);
	}

	inline static int32_t get_offset_of_from_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D, ___from_3)); }
	inline float get_from_3() const { return ___from_3; }
	inline float* get_address_of_from_3() { return &___from_3; }
	inline void set_from_3(float value)
	{
		___from_3 = value;
	}

	inline static int32_t get_offset_of_to_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D, ___to_4)); }
	inline float get_to_4() const { return ___to_4; }
	inline float* get_address_of_to_4() { return &___to_4; }
	inline void set_to_4(float value)
	{
		___to_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D, ___text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_5() const { return ___text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_repeatCnt_6() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D, ___repeatCnt_6)); }
	inline int32_t get_repeatCnt_6() const { return ___repeatCnt_6; }
	inline int32_t* get_address_of_repeatCnt_6() { return &___repeatCnt_6; }
	inline void set_repeatCnt_6(int32_t value)
	{
		___repeatCnt_6 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D, ___U3CtimeU3E5__2_7)); }
	inline float get_U3CtimeU3E5__2_7() const { return ___U3CtimeU3E5__2_7; }
	inline float* get_address_of_U3CtimeU3E5__2_7() { return &___U3CtimeU3E5__2_7; }
	inline void set_U3CtimeU3E5__2_7(float value)
	{
		___U3CtimeU3E5__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CcntU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D, ___U3CcntU3E5__3_8)); }
	inline int32_t get_U3CcntU3E5__3_8() const { return ___U3CcntU3E5__3_8; }
	inline int32_t* get_address_of_U3CcntU3E5__3_8() { return &___U3CcntU3E5__3_8; }
	inline void set_U3CcntU3E5__3_8(int32_t value)
	{
		___U3CcntU3E5__3_8 = value;
	}
};


// LobbyUIManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B  : public RuntimeObject
{
public:
	// UnityEngine.UI.Button LobbyUIManager/<>c__DisplayClass5_0::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_0;
	// LobbyUIManager LobbyUIManager/<>c__DisplayClass5_0::<>4__this
	LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_button_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B, ___button_0)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_0() const { return ___button_0; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_0() { return &___button_0; }
	inline void set_button_0(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B, ___U3CU3E4__this_1)); }
	inline LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// PlayerController/<Coroutine_StartBoost>d__68
struct U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C  : public RuntimeObject
{
public:
	// System.Int32 PlayerController/<Coroutine_StartBoost>d__68::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Coroutine_StartBoost>d__68::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Coroutine_StartBoost>d__68::<>4__this
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___U3CU3E4__this_2;
	// System.Single PlayerController/<Coroutine_StartBoost>d__68::<time>5__2
	float ___U3CtimeU3E5__2_3;
	// UnityEngine.WaitForFixedUpdate PlayerController/<Coroutine_StartBoost>d__68::<waitForFixedUpdate>5__3
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ___U3CwaitForFixedUpdateU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C, ___U3CU3E4__this_2)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C, ___U3CtimeU3E5__2_3)); }
	inline float get_U3CtimeU3E5__2_3() const { return ___U3CtimeU3E5__2_3; }
	inline float* get_address_of_U3CtimeU3E5__2_3() { return &___U3CtimeU3E5__2_3; }
	inline void set_U3CtimeU3E5__2_3(float value)
	{
		___U3CtimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CwaitForFixedUpdateU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C, ___U3CwaitForFixedUpdateU3E5__3_4)); }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * get_U3CwaitForFixedUpdateU3E5__3_4() const { return ___U3CwaitForFixedUpdateU3E5__3_4; }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 ** get_address_of_U3CwaitForFixedUpdateU3E5__3_4() { return &___U3CwaitForFixedUpdateU3E5__3_4; }
	inline void set_U3CwaitForFixedUpdateU3E5__3_4(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * value)
	{
		___U3CwaitForFixedUpdateU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwaitForFixedUpdateU3E5__3_4), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WheelFrictionCurve
struct WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D 
{
public:
	// System.Single UnityEngine.WheelFrictionCurve::m_ExtremumSlip
	float ___m_ExtremumSlip_0;
	// System.Single UnityEngine.WheelFrictionCurve::m_ExtremumValue
	float ___m_ExtremumValue_1;
	// System.Single UnityEngine.WheelFrictionCurve::m_AsymptoteSlip
	float ___m_AsymptoteSlip_2;
	// System.Single UnityEngine.WheelFrictionCurve::m_AsymptoteValue
	float ___m_AsymptoteValue_3;
	// System.Single UnityEngine.WheelFrictionCurve::m_Stiffness
	float ___m_Stiffness_4;

public:
	inline static int32_t get_offset_of_m_ExtremumSlip_0() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_ExtremumSlip_0)); }
	inline float get_m_ExtremumSlip_0() const { return ___m_ExtremumSlip_0; }
	inline float* get_address_of_m_ExtremumSlip_0() { return &___m_ExtremumSlip_0; }
	inline void set_m_ExtremumSlip_0(float value)
	{
		___m_ExtremumSlip_0 = value;
	}

	inline static int32_t get_offset_of_m_ExtremumValue_1() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_ExtremumValue_1)); }
	inline float get_m_ExtremumValue_1() const { return ___m_ExtremumValue_1; }
	inline float* get_address_of_m_ExtremumValue_1() { return &___m_ExtremumValue_1; }
	inline void set_m_ExtremumValue_1(float value)
	{
		___m_ExtremumValue_1 = value;
	}

	inline static int32_t get_offset_of_m_AsymptoteSlip_2() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_AsymptoteSlip_2)); }
	inline float get_m_AsymptoteSlip_2() const { return ___m_AsymptoteSlip_2; }
	inline float* get_address_of_m_AsymptoteSlip_2() { return &___m_AsymptoteSlip_2; }
	inline void set_m_AsymptoteSlip_2(float value)
	{
		___m_AsymptoteSlip_2 = value;
	}

	inline static int32_t get_offset_of_m_AsymptoteValue_3() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_AsymptoteValue_3)); }
	inline float get_m_AsymptoteValue_3() const { return ___m_AsymptoteValue_3; }
	inline float* get_address_of_m_AsymptoteValue_3() { return &___m_AsymptoteValue_3; }
	inline void set_m_AsymptoteValue_3(float value)
	{
		___m_AsymptoteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_Stiffness_4() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_Stiffness_4)); }
	inline float get_m_Stiffness_4() const { return ___m_Stiffness_4; }
	inline float* get_address_of_m_Stiffness_4() { return &___m_Stiffness_4; }
	inline void set_m_Stiffness_4(float value)
	{
		___m_Stiffness_4 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794__padding[12];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1
	__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  ___8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0;

public:
	inline static int32_t get_offset_of_U38A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0)); }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  get_U38A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0() const { return ___8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0; }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 * get_address_of_U38A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0() { return &___8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0; }
	inline void set_U38A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0(__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  value)
	{
		___8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// CarData
struct CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D  : public RuntimeObject
{
public:
	// UnityEngine.Material CarData::kartPaintMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___kartPaintMat_0;
	// UnityEngine.Color CarData::kartColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___kartColor_1;
	// UnityEngine.Vector3 CarData::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_2;
	// System.String CarData::name
	String_t* ___name_3;
	// System.Single CarData::maxSpeed
	float ___maxSpeed_4;
	// System.Single CarData::maxBoosterSpeed
	float ___maxBoosterSpeed_5;
	// System.Single CarData::maxTurnPower
	float ___maxTurnPower_6;
	// System.Single CarData::startSpeed
	float ___startSpeed_7;
	// System.Int32 CarData::price
	int32_t ___price_8;

public:
	inline static int32_t get_offset_of_kartPaintMat_0() { return static_cast<int32_t>(offsetof(CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D, ___kartPaintMat_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_kartPaintMat_0() const { return ___kartPaintMat_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_kartPaintMat_0() { return &___kartPaintMat_0; }
	inline void set_kartPaintMat_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___kartPaintMat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kartPaintMat_0), (void*)value);
	}

	inline static int32_t get_offset_of_kartColor_1() { return static_cast<int32_t>(offsetof(CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D, ___kartColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_kartColor_1() const { return ___kartColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_kartColor_1() { return &___kartColor_1; }
	inline void set_kartColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___kartColor_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D, ___pos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_2() const { return ___pos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_maxSpeed_4() { return static_cast<int32_t>(offsetof(CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D, ___maxSpeed_4)); }
	inline float get_maxSpeed_4() const { return ___maxSpeed_4; }
	inline float* get_address_of_maxSpeed_4() { return &___maxSpeed_4; }
	inline void set_maxSpeed_4(float value)
	{
		___maxSpeed_4 = value;
	}

	inline static int32_t get_offset_of_maxBoosterSpeed_5() { return static_cast<int32_t>(offsetof(CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D, ___maxBoosterSpeed_5)); }
	inline float get_maxBoosterSpeed_5() const { return ___maxBoosterSpeed_5; }
	inline float* get_address_of_maxBoosterSpeed_5() { return &___maxBoosterSpeed_5; }
	inline void set_maxBoosterSpeed_5(float value)
	{
		___maxBoosterSpeed_5 = value;
	}

	inline static int32_t get_offset_of_maxTurnPower_6() { return static_cast<int32_t>(offsetof(CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D, ___maxTurnPower_6)); }
	inline float get_maxTurnPower_6() const { return ___maxTurnPower_6; }
	inline float* get_address_of_maxTurnPower_6() { return &___maxTurnPower_6; }
	inline void set_maxTurnPower_6(float value)
	{
		___maxTurnPower_6 = value;
	}

	inline static int32_t get_offset_of_startSpeed_7() { return static_cast<int32_t>(offsetof(CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D, ___startSpeed_7)); }
	inline float get_startSpeed_7() const { return ___startSpeed_7; }
	inline float* get_address_of_startSpeed_7() { return &___startSpeed_7; }
	inline void set_startSpeed_7(float value)
	{
		___startSpeed_7 = value;
	}

	inline static int32_t get_offset_of_price_8() { return static_cast<int32_t>(offsetof(CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D, ___price_8)); }
	inline int32_t get_price_8() const { return ___price_8; }
	inline int32_t* get_address_of_price_8() { return &___price_8; }
	inline void set_price_8(int32_t value)
	{
		___price_8 = value;
	}
};


// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ForceMode
struct ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// SceneState
struct SceneState_t0A8DC0512950A55A63634BC2F419590B6FA786A7 
{
public:
	// System.Int32 SceneState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneState_t0A8DC0512950A55A63634BC2F419590B6FA786A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WheelHit
struct WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB 
{
public:
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_ForwardDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ForwardDir_2;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_SidewaysDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_SidewaysDir_3;
	// System.Single UnityEngine.WheelHit::m_Force
	float ___m_Force_4;
	// System.Single UnityEngine.WheelHit::m_ForwardSlip
	float ___m_ForwardSlip_5;
	// System.Single UnityEngine.WheelHit::m_SidewaysSlip
	float ___m_SidewaysSlip_6;
	// UnityEngine.Collider UnityEngine.WheelHit::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_7;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ForwardDir_2() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_ForwardDir_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_ForwardDir_2() const { return ___m_ForwardDir_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_ForwardDir_2() { return &___m_ForwardDir_2; }
	inline void set_m_ForwardDir_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_ForwardDir_2 = value;
	}

	inline static int32_t get_offset_of_m_SidewaysDir_3() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_SidewaysDir_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_SidewaysDir_3() const { return ___m_SidewaysDir_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_SidewaysDir_3() { return &___m_SidewaysDir_3; }
	inline void set_m_SidewaysDir_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_SidewaysDir_3 = value;
	}

	inline static int32_t get_offset_of_m_Force_4() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_Force_4)); }
	inline float get_m_Force_4() const { return ___m_Force_4; }
	inline float* get_address_of_m_Force_4() { return &___m_Force_4; }
	inline void set_m_Force_4(float value)
	{
		___m_Force_4 = value;
	}

	inline static int32_t get_offset_of_m_ForwardSlip_5() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_ForwardSlip_5)); }
	inline float get_m_ForwardSlip_5() const { return ___m_ForwardSlip_5; }
	inline float* get_address_of_m_ForwardSlip_5() { return &___m_ForwardSlip_5; }
	inline void set_m_ForwardSlip_5(float value)
	{
		___m_ForwardSlip_5 = value;
	}

	inline static int32_t get_offset_of_m_SidewaysSlip_6() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_SidewaysSlip_6)); }
	inline float get_m_SidewaysSlip_6() const { return ___m_SidewaysSlip_6; }
	inline float* get_address_of_m_SidewaysSlip_6() { return &___m_SidewaysSlip_6; }
	inline void set_m_SidewaysSlip_6(float value)
	{
		___m_SidewaysSlip_6 = value;
	}

	inline static int32_t get_offset_of_m_Collider_7() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_Collider_7)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_7() const { return ___m_Collider_7; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_7() { return &___m_Collider_7; }
	inline void set_m_Collider_7(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WheelHit
struct WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ForwardDir_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_SidewaysDir_3;
	float ___m_Force_4;
	float ___m_ForwardSlip_5;
	float ___m_SidewaysSlip_6;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_7;
};
// Native definition for COM marshalling of UnityEngine.WheelHit
struct WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ForwardDir_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_SidewaysDir_3;
	float ___m_Force_4;
	float ___m_ForwardSlip_5;
	float ___m_SidewaysSlip_6;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_7;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// GameSystemManager/ReverseCheckPos
struct ReverseCheckPos_t5E8D0F16D4E310AAFCA766A06B31791E92795204 
{
public:
	// System.Int32 GameSystemManager/ReverseCheckPos::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReverseCheckPos_t5E8D0F16D4E310AAFCA766A06B31791E92795204, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PlayerController/State
struct State_t2803B13ECCB73671BA815CC1794684DC3D33E3F5 
{
public:
	// System.Int32 PlayerController/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t2803B13ECCB73671BA815CC1794684DC3D33E3F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// InGameUiManager/FuncDel
struct FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.WheelCollider
struct WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// Singleton_DontDestroy`1<CarDataTable>
struct Singleton_DontDestroy_1_t0F170216A8E5918ECCDE511697B5C99EECA73DF6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_DontDestroy_1_t0F170216A8E5918ECCDE511697B5C99EECA73DF6_StaticFields
{
public:
	// T Singleton_DontDestroy`1::<Instance>k__BackingField
	CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_DontDestroy_1_t0F170216A8E5918ECCDE511697B5C99EECA73DF6_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton_DontDestroy`1<DataManager>
struct Singleton_DontDestroy_1_t476369C486C70CE5CD3D245CFA49CFAAA2EE8347  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_DontDestroy_1_t476369C486C70CE5CD3D245CFA49CFAAA2EE8347_StaticFields
{
public:
	// T Singleton_DontDestroy`1::<Instance>k__BackingField
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_DontDestroy_1_t476369C486C70CE5CD3D245CFA49CFAAA2EE8347_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton_DontDestroy`1<GameSettings>
struct Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657_StaticFields
{
public:
	// T Singleton_DontDestroy`1::<Instance>k__BackingField
	GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton_DontDestroy`1<GameSystemManager>
struct Singleton_DontDestroy_1_tD8089C6807FBAD2976D80847FD26C8203400ED64  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_DontDestroy_1_tD8089C6807FBAD2976D80847FD26C8203400ED64_StaticFields
{
public:
	// T Singleton_DontDestroy`1::<Instance>k__BackingField
	GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_DontDestroy_1_tD8089C6807FBAD2976D80847FD26C8203400ED64_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton_DontDestroy`1<LoadSceneManager>
struct Singleton_DontDestroy_1_tCA8209B6BA7D4380107625411082ABF8BD46E54D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_DontDestroy_1_tCA8209B6BA7D4380107625411082ABF8BD46E54D_StaticFields
{
public:
	// T Singleton_DontDestroy`1::<Instance>k__BackingField
	LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_DontDestroy_1_tCA8209B6BA7D4380107625411082ABF8BD46E54D_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton_DontDestroy`1<MapDataTable>
struct Singleton_DontDestroy_1_t12442F5DBE70FBAB401F36F35DA9FCE15FD42D98  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_DontDestroy_1_t12442F5DBE70FBAB401F36F35DA9FCE15FD42D98_StaticFields
{
public:
	// T Singleton_DontDestroy`1::<Instance>k__BackingField
	MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_DontDestroy_1_t12442F5DBE70FBAB401F36F35DA9FCE15FD42D98_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton_DontDestroy`1<System.Object>
struct Singleton_DontDestroy_1_tE48FC4FE1D10644E7CF14F91ED91590D669A3C7A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_DontDestroy_1_tE48FC4FE1D10644E7CF14F91ED91590D669A3C7A_StaticFields
{
public:
	// T Singleton_DontDestroy`1::<Instance>k__BackingField
	RuntimeObject * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_DontDestroy_1_tE48FC4FE1D10644E7CF14F91ED91590D669A3C7A_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<CheckPointManager>
struct Singleton_1_t1F8828BD641426F8396821F507A5C47943DE1DAA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_t1F8828BD641426F8396821F507A5C47943DE1DAA_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_t1F8828BD641426F8396821F507A5C47943DE1DAA_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<InGameUiManager>
struct Singleton_1_tFBCCED212AA497E22CD601CE70A71F53A2E9F161  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tFBCCED212AA497E22CD601CE70A71F53A2E9F161_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_tFBCCED212AA497E22CD601CE70A71F53A2E9F161_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<InputManager>
struct Singleton_1_t50C5E5A121B3204A4D5965AE75F43860605ED7B3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_t50C5E5A121B3204A4D5965AE75F43860605ED7B3_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_t50C5E5A121B3204A4D5965AE75F43860605ED7B3_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<LobbyUIManager>
struct Singleton_1_t37F22396911BC0AFFCC353D1908B2E03E6CF10C4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_t37F22396911BC0AFFCC353D1908B2E03E6CF10C4_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_t37F22396911BC0AFFCC353D1908B2E03E6CF10C4_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<MapManager>
struct Singleton_1_tB25C842AECF7533644545E81E9762A79176990C2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tB25C842AECF7533644545E81E9762A79176990C2_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_tB25C842AECF7533644545E81E9762A79176990C2_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<System.Object>
struct Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	RuntimeObject * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<ResetPointManager>
struct Singleton_1_tEB096B8237A899316B43C8E4D8A52048850E4BEB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tEB096B8237A899316B43C8E4D8A52048850E4BEB_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_tEB096B8237A899316B43C8E4D8A52048850E4BEB_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// CheckpointController
struct CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 CheckpointController::m_checkNumber
	int32_t ___m_checkNumber_4;

public:
	inline static int32_t get_offset_of_m_checkNumber_4() { return static_cast<int32_t>(offsetof(CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA, ___m_checkNumber_4)); }
	inline int32_t get_m_checkNumber_4() const { return ___m_checkNumber_4; }
	inline int32_t* get_address_of_m_checkNumber_4() { return &___m_checkNumber_4; }
	inline void set_m_checkNumber_4(int32_t value)
	{
		___m_checkNumber_4 = value;
	}
};


// Lobby_GameStart
struct Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button[] Lobby_GameStart::m_buttons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___m_buttons_4;

public:
	inline static int32_t get_offset_of_m_buttons_4() { return static_cast<int32_t>(offsetof(Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84, ___m_buttons_4)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_m_buttons_4() const { return ___m_buttons_4; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_m_buttons_4() { return &___m_buttons_4; }
	inline void set_m_buttons_4(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___m_buttons_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buttons_4), (void*)value);
	}
};


// Lobby_Garage
struct Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerController/State PlayerController::m_state
	int32_t ___m_state_4;
	// UnityEngine.Transform PlayerController::m_center
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_center_5;
	// UnityEngine.Rigidbody PlayerController::m_playerRb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_playerRb_6;
	// System.String PlayerController::m_playerName
	String_t* ___m_playerName_7;
	// UnityEngine.Color PlayerController::m_kartColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_kartColor_8;
	// System.String PlayerController::m_kartName
	String_t* ___m_kartName_9;
	// UnityEngine.MaterialPropertyBlock PlayerController::m_materialPB
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___m_materialPB_10;
	// UnityEngine.GameObject[] PlayerController::m_wheels
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___m_wheels_11;
	// UnityEngine.WheelCollider[] PlayerController::m_wheelCollider
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* ___m_wheelCollider_12;
	// WheelController[] PlayerController::m_wheelColliderCtr
	WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* ___m_wheelColliderCtr_13;
	// UnityEngine.WheelFrictionCurve PlayerController::m_fowardFricBackWheel
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___m_fowardFricBackWheel_14;
	// UnityEngine.WheelFrictionCurve PlayerController::m_sidewayFricBackWheel
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___m_sidewayFricBackWheel_15;
	// UnityEngine.Vector3 PlayerController::m_startDriftPosSum
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_startDriftPosSum_16;
	// UnityEngine.Vector3 PlayerController::m_endDriftPosSum
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_endDriftPosSum_17;
	// UnityEngine.Vector3 PlayerController::m_wheelColliderPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_wheelColliderPos_18;
	// UnityEngine.Quaternion PlayerController::m_wheelColliderRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_wheelColliderRotation_19;
	// System.Single PlayerController::m_antiRollVal
	float ___m_antiRollVal_20;
	// System.Single PlayerController::m_travelL
	float ___m_travelL_21;
	// System.Single PlayerController::m_travelR
	float ___m_travelR_22;
	// System.Boolean PlayerController::m_isGroundL
	bool ___m_isGroundL_23;
	// System.Boolean PlayerController::m_isGroundR
	bool ___m_isGroundR_24;
	// System.Single PlayerController::m_startBoostTime
	float ___m_startBoostTime_25;
	// System.Single PlayerController::m_startBoostSpeed
	float ___m_startBoostSpeed_26;
	// System.Single PlayerController::m_forceValue
	float ___m_forceValue_27;
	// System.Single PlayerController::m_maxSpeed
	float ___m_maxSpeed_28;
	// System.Single PlayerController::m_normalMaxSpeed
	float ___m_normalMaxSpeed_29;
	// System.Single PlayerController::m_maxReSpeed
	float ___m_maxReSpeed_30;
	// System.Single PlayerController::m_boosterMaxSpeed
	float ___m_boosterMaxSpeed_31;
	// System.Single PlayerController::m_currSpeed
	float ___m_currSpeed_32;
	// System.Single PlayerController::m_turnPower
	float ___m_turnPower_33;
	// System.Single PlayerController::m_slipRate
	float ___m_slipRate_34;
	// System.Single PlayerController::m_slipRateDownForce
	float ___m_slipRateDownForce_35;
	// System.Single PlayerController::m_slipRateUpForce
	float ___m_slipRateUpForce_36;
	// System.Single PlayerController::m_speedUpVal
	float ___m_speedUpVal_37;
	// System.Single PlayerController::m_speedDownVal
	float ___m_speedDownVal_38;
	// System.Single PlayerController::m_speed
	float ___m_speed_39;
	// System.Boolean PlayerController::m_isDrift
	bool ___m_isDrift_40;
	// System.Boolean PlayerController::m_isStart
	bool ___m_isStart_41;
	// UnityEngine.UI.Image PlayerController::m_boosterBar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_boosterBar_42;
	// UnityEngine.UI.Image[] PlayerController::m_boosterIcons
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___m_boosterIcons_43;
	// System.Boolean PlayerController::m_isBooster
	bool ___m_isBooster_44;
	// System.Int32 PlayerController::m_boosterUseCnt
	int32_t ___m_boosterUseCnt_45;
	// System.Single PlayerController::m_defultChargingValue
	float ___m_defultChargingValue_46;
	// System.Single PlayerController::m_boostChargingValue
	float ___m_boostChargingValue_47;
	// System.Single PlayerController::m_time
	float ___m_time_48;
	// System.Single PlayerController::m_boosterTime
	float ___m_boosterTime_49;
	// System.Int32 PlayerController::m_boosterMaxCnt
	int32_t ___m_boosterMaxCnt_50;
	// System.Int32 PlayerController::m_boosterCnt
	int32_t ___m_boosterCnt_51;
	// UnityEngine.AudioClip PlayerController::m_defaultSoundClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_defaultSoundClip_52;
	// UnityEngine.AudioClip PlayerController::m_boosterSoundClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_boosterSoundClip_53;
	// System.Int32 PlayerController::<CrashCnt>k__BackingField
	int32_t ___U3CCrashCntU3Ek__BackingField_54;

public:
	inline static int32_t get_offset_of_m_state_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_state_4)); }
	inline int32_t get_m_state_4() const { return ___m_state_4; }
	inline int32_t* get_address_of_m_state_4() { return &___m_state_4; }
	inline void set_m_state_4(int32_t value)
	{
		___m_state_4 = value;
	}

	inline static int32_t get_offset_of_m_center_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_center_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_center_5() const { return ___m_center_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_center_5() { return &___m_center_5; }
	inline void set_m_center_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_center_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_center_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_playerRb_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_playerRb_6)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_playerRb_6() const { return ___m_playerRb_6; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_playerRb_6() { return &___m_playerRb_6; }
	inline void set_m_playerRb_6(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_playerRb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerRb_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_playerName_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_playerName_7)); }
	inline String_t* get_m_playerName_7() const { return ___m_playerName_7; }
	inline String_t** get_address_of_m_playerName_7() { return &___m_playerName_7; }
	inline void set_m_playerName_7(String_t* value)
	{
		___m_playerName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerName_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_kartColor_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_kartColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_kartColor_8() const { return ___m_kartColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_kartColor_8() { return &___m_kartColor_8; }
	inline void set_m_kartColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_kartColor_8 = value;
	}

	inline static int32_t get_offset_of_m_kartName_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_kartName_9)); }
	inline String_t* get_m_kartName_9() const { return ___m_kartName_9; }
	inline String_t** get_address_of_m_kartName_9() { return &___m_kartName_9; }
	inline void set_m_kartName_9(String_t* value)
	{
		___m_kartName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kartName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialPB_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_materialPB_10)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_m_materialPB_10() const { return ___m_materialPB_10; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_m_materialPB_10() { return &___m_materialPB_10; }
	inline void set_m_materialPB_10(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___m_materialPB_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialPB_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_wheels_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheels_11)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_m_wheels_11() const { return ___m_wheels_11; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_m_wheels_11() { return &___m_wheels_11; }
	inline void set_m_wheels_11(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___m_wheels_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wheels_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_wheelCollider_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelCollider_12)); }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* get_m_wheelCollider_12() const { return ___m_wheelCollider_12; }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6** get_address_of_m_wheelCollider_12() { return &___m_wheelCollider_12; }
	inline void set_m_wheelCollider_12(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* value)
	{
		___m_wheelCollider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wheelCollider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_wheelColliderCtr_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelColliderCtr_13)); }
	inline WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* get_m_wheelColliderCtr_13() const { return ___m_wheelColliderCtr_13; }
	inline WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11** get_address_of_m_wheelColliderCtr_13() { return &___m_wheelColliderCtr_13; }
	inline void set_m_wheelColliderCtr_13(WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* value)
	{
		___m_wheelColliderCtr_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wheelColliderCtr_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_fowardFricBackWheel_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_fowardFricBackWheel_14)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_m_fowardFricBackWheel_14() const { return ___m_fowardFricBackWheel_14; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_m_fowardFricBackWheel_14() { return &___m_fowardFricBackWheel_14; }
	inline void set_m_fowardFricBackWheel_14(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___m_fowardFricBackWheel_14 = value;
	}

	inline static int32_t get_offset_of_m_sidewayFricBackWheel_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_sidewayFricBackWheel_15)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_m_sidewayFricBackWheel_15() const { return ___m_sidewayFricBackWheel_15; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_m_sidewayFricBackWheel_15() { return &___m_sidewayFricBackWheel_15; }
	inline void set_m_sidewayFricBackWheel_15(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___m_sidewayFricBackWheel_15 = value;
	}

	inline static int32_t get_offset_of_m_startDriftPosSum_16() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_startDriftPosSum_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_startDriftPosSum_16() const { return ___m_startDriftPosSum_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_startDriftPosSum_16() { return &___m_startDriftPosSum_16; }
	inline void set_m_startDriftPosSum_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_startDriftPosSum_16 = value;
	}

	inline static int32_t get_offset_of_m_endDriftPosSum_17() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_endDriftPosSum_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_endDriftPosSum_17() const { return ___m_endDriftPosSum_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_endDriftPosSum_17() { return &___m_endDriftPosSum_17; }
	inline void set_m_endDriftPosSum_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_endDriftPosSum_17 = value;
	}

	inline static int32_t get_offset_of_m_wheelColliderPos_18() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelColliderPos_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_wheelColliderPos_18() const { return ___m_wheelColliderPos_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_wheelColliderPos_18() { return &___m_wheelColliderPos_18; }
	inline void set_m_wheelColliderPos_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_wheelColliderPos_18 = value;
	}

	inline static int32_t get_offset_of_m_wheelColliderRotation_19() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelColliderRotation_19)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_wheelColliderRotation_19() const { return ___m_wheelColliderRotation_19; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_wheelColliderRotation_19() { return &___m_wheelColliderRotation_19; }
	inline void set_m_wheelColliderRotation_19(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_wheelColliderRotation_19 = value;
	}

	inline static int32_t get_offset_of_m_antiRollVal_20() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_antiRollVal_20)); }
	inline float get_m_antiRollVal_20() const { return ___m_antiRollVal_20; }
	inline float* get_address_of_m_antiRollVal_20() { return &___m_antiRollVal_20; }
	inline void set_m_antiRollVal_20(float value)
	{
		___m_antiRollVal_20 = value;
	}

	inline static int32_t get_offset_of_m_travelL_21() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_travelL_21)); }
	inline float get_m_travelL_21() const { return ___m_travelL_21; }
	inline float* get_address_of_m_travelL_21() { return &___m_travelL_21; }
	inline void set_m_travelL_21(float value)
	{
		___m_travelL_21 = value;
	}

	inline static int32_t get_offset_of_m_travelR_22() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_travelR_22)); }
	inline float get_m_travelR_22() const { return ___m_travelR_22; }
	inline float* get_address_of_m_travelR_22() { return &___m_travelR_22; }
	inline void set_m_travelR_22(float value)
	{
		___m_travelR_22 = value;
	}

	inline static int32_t get_offset_of_m_isGroundL_23() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isGroundL_23)); }
	inline bool get_m_isGroundL_23() const { return ___m_isGroundL_23; }
	inline bool* get_address_of_m_isGroundL_23() { return &___m_isGroundL_23; }
	inline void set_m_isGroundL_23(bool value)
	{
		___m_isGroundL_23 = value;
	}

	inline static int32_t get_offset_of_m_isGroundR_24() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isGroundR_24)); }
	inline bool get_m_isGroundR_24() const { return ___m_isGroundR_24; }
	inline bool* get_address_of_m_isGroundR_24() { return &___m_isGroundR_24; }
	inline void set_m_isGroundR_24(bool value)
	{
		___m_isGroundR_24 = value;
	}

	inline static int32_t get_offset_of_m_startBoostTime_25() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_startBoostTime_25)); }
	inline float get_m_startBoostTime_25() const { return ___m_startBoostTime_25; }
	inline float* get_address_of_m_startBoostTime_25() { return &___m_startBoostTime_25; }
	inline void set_m_startBoostTime_25(float value)
	{
		___m_startBoostTime_25 = value;
	}

	inline static int32_t get_offset_of_m_startBoostSpeed_26() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_startBoostSpeed_26)); }
	inline float get_m_startBoostSpeed_26() const { return ___m_startBoostSpeed_26; }
	inline float* get_address_of_m_startBoostSpeed_26() { return &___m_startBoostSpeed_26; }
	inline void set_m_startBoostSpeed_26(float value)
	{
		___m_startBoostSpeed_26 = value;
	}

	inline static int32_t get_offset_of_m_forceValue_27() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_forceValue_27)); }
	inline float get_m_forceValue_27() const { return ___m_forceValue_27; }
	inline float* get_address_of_m_forceValue_27() { return &___m_forceValue_27; }
	inline void set_m_forceValue_27(float value)
	{
		___m_forceValue_27 = value;
	}

	inline static int32_t get_offset_of_m_maxSpeed_28() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_maxSpeed_28)); }
	inline float get_m_maxSpeed_28() const { return ___m_maxSpeed_28; }
	inline float* get_address_of_m_maxSpeed_28() { return &___m_maxSpeed_28; }
	inline void set_m_maxSpeed_28(float value)
	{
		___m_maxSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_normalMaxSpeed_29() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_normalMaxSpeed_29)); }
	inline float get_m_normalMaxSpeed_29() const { return ___m_normalMaxSpeed_29; }
	inline float* get_address_of_m_normalMaxSpeed_29() { return &___m_normalMaxSpeed_29; }
	inline void set_m_normalMaxSpeed_29(float value)
	{
		___m_normalMaxSpeed_29 = value;
	}

	inline static int32_t get_offset_of_m_maxReSpeed_30() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_maxReSpeed_30)); }
	inline float get_m_maxReSpeed_30() const { return ___m_maxReSpeed_30; }
	inline float* get_address_of_m_maxReSpeed_30() { return &___m_maxReSpeed_30; }
	inline void set_m_maxReSpeed_30(float value)
	{
		___m_maxReSpeed_30 = value;
	}

	inline static int32_t get_offset_of_m_boosterMaxSpeed_31() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterMaxSpeed_31)); }
	inline float get_m_boosterMaxSpeed_31() const { return ___m_boosterMaxSpeed_31; }
	inline float* get_address_of_m_boosterMaxSpeed_31() { return &___m_boosterMaxSpeed_31; }
	inline void set_m_boosterMaxSpeed_31(float value)
	{
		___m_boosterMaxSpeed_31 = value;
	}

	inline static int32_t get_offset_of_m_currSpeed_32() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_currSpeed_32)); }
	inline float get_m_currSpeed_32() const { return ___m_currSpeed_32; }
	inline float* get_address_of_m_currSpeed_32() { return &___m_currSpeed_32; }
	inline void set_m_currSpeed_32(float value)
	{
		___m_currSpeed_32 = value;
	}

	inline static int32_t get_offset_of_m_turnPower_33() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_turnPower_33)); }
	inline float get_m_turnPower_33() const { return ___m_turnPower_33; }
	inline float* get_address_of_m_turnPower_33() { return &___m_turnPower_33; }
	inline void set_m_turnPower_33(float value)
	{
		___m_turnPower_33 = value;
	}

	inline static int32_t get_offset_of_m_slipRate_34() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_slipRate_34)); }
	inline float get_m_slipRate_34() const { return ___m_slipRate_34; }
	inline float* get_address_of_m_slipRate_34() { return &___m_slipRate_34; }
	inline void set_m_slipRate_34(float value)
	{
		___m_slipRate_34 = value;
	}

	inline static int32_t get_offset_of_m_slipRateDownForce_35() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_slipRateDownForce_35)); }
	inline float get_m_slipRateDownForce_35() const { return ___m_slipRateDownForce_35; }
	inline float* get_address_of_m_slipRateDownForce_35() { return &___m_slipRateDownForce_35; }
	inline void set_m_slipRateDownForce_35(float value)
	{
		___m_slipRateDownForce_35 = value;
	}

	inline static int32_t get_offset_of_m_slipRateUpForce_36() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_slipRateUpForce_36)); }
	inline float get_m_slipRateUpForce_36() const { return ___m_slipRateUpForce_36; }
	inline float* get_address_of_m_slipRateUpForce_36() { return &___m_slipRateUpForce_36; }
	inline void set_m_slipRateUpForce_36(float value)
	{
		___m_slipRateUpForce_36 = value;
	}

	inline static int32_t get_offset_of_m_speedUpVal_37() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_speedUpVal_37)); }
	inline float get_m_speedUpVal_37() const { return ___m_speedUpVal_37; }
	inline float* get_address_of_m_speedUpVal_37() { return &___m_speedUpVal_37; }
	inline void set_m_speedUpVal_37(float value)
	{
		___m_speedUpVal_37 = value;
	}

	inline static int32_t get_offset_of_m_speedDownVal_38() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_speedDownVal_38)); }
	inline float get_m_speedDownVal_38() const { return ___m_speedDownVal_38; }
	inline float* get_address_of_m_speedDownVal_38() { return &___m_speedDownVal_38; }
	inline void set_m_speedDownVal_38(float value)
	{
		___m_speedDownVal_38 = value;
	}

	inline static int32_t get_offset_of_m_speed_39() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_speed_39)); }
	inline float get_m_speed_39() const { return ___m_speed_39; }
	inline float* get_address_of_m_speed_39() { return &___m_speed_39; }
	inline void set_m_speed_39(float value)
	{
		___m_speed_39 = value;
	}

	inline static int32_t get_offset_of_m_isDrift_40() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isDrift_40)); }
	inline bool get_m_isDrift_40() const { return ___m_isDrift_40; }
	inline bool* get_address_of_m_isDrift_40() { return &___m_isDrift_40; }
	inline void set_m_isDrift_40(bool value)
	{
		___m_isDrift_40 = value;
	}

	inline static int32_t get_offset_of_m_isStart_41() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isStart_41)); }
	inline bool get_m_isStart_41() const { return ___m_isStart_41; }
	inline bool* get_address_of_m_isStart_41() { return &___m_isStart_41; }
	inline void set_m_isStart_41(bool value)
	{
		___m_isStart_41 = value;
	}

	inline static int32_t get_offset_of_m_boosterBar_42() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterBar_42)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_boosterBar_42() const { return ___m_boosterBar_42; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_boosterBar_42() { return &___m_boosterBar_42; }
	inline void set_m_boosterBar_42(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_boosterBar_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boosterBar_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_boosterIcons_43() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterIcons_43)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_m_boosterIcons_43() const { return ___m_boosterIcons_43; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_m_boosterIcons_43() { return &___m_boosterIcons_43; }
	inline void set_m_boosterIcons_43(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___m_boosterIcons_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boosterIcons_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_isBooster_44() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isBooster_44)); }
	inline bool get_m_isBooster_44() const { return ___m_isBooster_44; }
	inline bool* get_address_of_m_isBooster_44() { return &___m_isBooster_44; }
	inline void set_m_isBooster_44(bool value)
	{
		___m_isBooster_44 = value;
	}

	inline static int32_t get_offset_of_m_boosterUseCnt_45() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterUseCnt_45)); }
	inline int32_t get_m_boosterUseCnt_45() const { return ___m_boosterUseCnt_45; }
	inline int32_t* get_address_of_m_boosterUseCnt_45() { return &___m_boosterUseCnt_45; }
	inline void set_m_boosterUseCnt_45(int32_t value)
	{
		___m_boosterUseCnt_45 = value;
	}

	inline static int32_t get_offset_of_m_defultChargingValue_46() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_defultChargingValue_46)); }
	inline float get_m_defultChargingValue_46() const { return ___m_defultChargingValue_46; }
	inline float* get_address_of_m_defultChargingValue_46() { return &___m_defultChargingValue_46; }
	inline void set_m_defultChargingValue_46(float value)
	{
		___m_defultChargingValue_46 = value;
	}

	inline static int32_t get_offset_of_m_boostChargingValue_47() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boostChargingValue_47)); }
	inline float get_m_boostChargingValue_47() const { return ___m_boostChargingValue_47; }
	inline float* get_address_of_m_boostChargingValue_47() { return &___m_boostChargingValue_47; }
	inline void set_m_boostChargingValue_47(float value)
	{
		___m_boostChargingValue_47 = value;
	}

	inline static int32_t get_offset_of_m_time_48() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_time_48)); }
	inline float get_m_time_48() const { return ___m_time_48; }
	inline float* get_address_of_m_time_48() { return &___m_time_48; }
	inline void set_m_time_48(float value)
	{
		___m_time_48 = value;
	}

	inline static int32_t get_offset_of_m_boosterTime_49() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterTime_49)); }
	inline float get_m_boosterTime_49() const { return ___m_boosterTime_49; }
	inline float* get_address_of_m_boosterTime_49() { return &___m_boosterTime_49; }
	inline void set_m_boosterTime_49(float value)
	{
		___m_boosterTime_49 = value;
	}

	inline static int32_t get_offset_of_m_boosterMaxCnt_50() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterMaxCnt_50)); }
	inline int32_t get_m_boosterMaxCnt_50() const { return ___m_boosterMaxCnt_50; }
	inline int32_t* get_address_of_m_boosterMaxCnt_50() { return &___m_boosterMaxCnt_50; }
	inline void set_m_boosterMaxCnt_50(int32_t value)
	{
		___m_boosterMaxCnt_50 = value;
	}

	inline static int32_t get_offset_of_m_boosterCnt_51() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterCnt_51)); }
	inline int32_t get_m_boosterCnt_51() const { return ___m_boosterCnt_51; }
	inline int32_t* get_address_of_m_boosterCnt_51() { return &___m_boosterCnt_51; }
	inline void set_m_boosterCnt_51(int32_t value)
	{
		___m_boosterCnt_51 = value;
	}

	inline static int32_t get_offset_of_m_defaultSoundClip_52() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_defaultSoundClip_52)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_defaultSoundClip_52() const { return ___m_defaultSoundClip_52; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_defaultSoundClip_52() { return &___m_defaultSoundClip_52; }
	inline void set_m_defaultSoundClip_52(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_defaultSoundClip_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSoundClip_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_boosterSoundClip_53() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterSoundClip_53)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_boosterSoundClip_53() const { return ___m_boosterSoundClip_53; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_boosterSoundClip_53() { return &___m_boosterSoundClip_53; }
	inline void set_m_boosterSoundClip_53(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_boosterSoundClip_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boosterSoundClip_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCrashCntU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___U3CCrashCntU3Ek__BackingField_54)); }
	inline int32_t get_U3CCrashCntU3Ek__BackingField_54() const { return ___U3CCrashCntU3Ek__BackingField_54; }
	inline int32_t* get_address_of_U3CCrashCntU3Ek__BackingField_54() { return &___U3CCrashCntU3Ek__BackingField_54; }
	inline void set_U3CCrashCntU3Ek__BackingField_54(int32_t value)
	{
		___U3CCrashCntU3Ek__BackingField_54 = value;
	}
};


// TitleController
struct TitleController_tCF91AD75A5ECCDFD621B67FBC7012A0007965D8F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WheelController
struct WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.WheelCollider WheelController::m_wheelCollider
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___m_wheelCollider_4;

public:
	inline static int32_t get_offset_of_m_wheelCollider_4() { return static_cast<int32_t>(offsetof(WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946, ___m_wheelCollider_4)); }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * get_m_wheelCollider_4() const { return ___m_wheelCollider_4; }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** get_address_of_m_wheelCollider_4() { return &___m_wheelCollider_4; }
	inline void set_m_wheelCollider_4(WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		___m_wheelCollider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wheelCollider_4), (void*)value);
	}
};


// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Graphic_4;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA, ___m_Graphic_4)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Graphic_4), (void*)value);
	}
};


// CarDataTable
struct CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A  : public Singleton_DontDestroy_1_t0F170216A8E5918ECCDE511697B5C99EECA73DF6
{
public:
	// CarData[] CarDataTable::m_carDatas
	CarDataU5BU5D_t0688CEAF46D508A83CFA3A8F4307E35DEA5ED566* ___m_carDatas_5;

public:
	inline static int32_t get_offset_of_m_carDatas_5() { return static_cast<int32_t>(offsetof(CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A, ___m_carDatas_5)); }
	inline CarDataU5BU5D_t0688CEAF46D508A83CFA3A8F4307E35DEA5ED566* get_m_carDatas_5() const { return ___m_carDatas_5; }
	inline CarDataU5BU5D_t0688CEAF46D508A83CFA3A8F4307E35DEA5ED566** get_address_of_m_carDatas_5() { return &___m_carDatas_5; }
	inline void set_m_carDatas_5(CarDataU5BU5D_t0688CEAF46D508A83CFA3A8F4307E35DEA5ED566* value)
	{
		___m_carDatas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_carDatas_5), (void*)value);
	}
};


// CheckPointManager
struct CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4  : public Singleton_1_t1F8828BD641426F8396821F507A5C47943DE1DAA
{
public:
	// CheckpointController[] CheckPointManager::m_checkPoints
	CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* ___m_checkPoints_5;

public:
	inline static int32_t get_offset_of_m_checkPoints_5() { return static_cast<int32_t>(offsetof(CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4, ___m_checkPoints_5)); }
	inline CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* get_m_checkPoints_5() const { return ___m_checkPoints_5; }
	inline CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6** get_address_of_m_checkPoints_5() { return &___m_checkPoints_5; }
	inline void set_m_checkPoints_5(CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* value)
	{
		___m_checkPoints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_checkPoints_5), (void*)value);
	}
};


// DataManager
struct DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2  : public Singleton_DontDestroy_1_t476369C486C70CE5CD3D245CFA49CFAAA2EE8347
{
public:
	// PlayerData DataManager::m_playerData
	PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * ___m_playerData_5;

public:
	inline static int32_t get_offset_of_m_playerData_5() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___m_playerData_5)); }
	inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * get_m_playerData_5() const { return ___m_playerData_5; }
	inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 ** get_address_of_m_playerData_5() { return &___m_playerData_5; }
	inline void set_m_playerData_5(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * value)
	{
		___m_playerData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerData_5), (void*)value);
	}
};


// GameSettings
struct GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4  : public Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657
{
public:

public:
};


// GameSystemManager
struct GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617  : public Singleton_DontDestroy_1_tD8089C6807FBAD2976D80847FD26C8203400ED64
{
public:
	// System.Text.StringBuilder GameSystemManager::m_sb
	StringBuilder_t * ___m_sb_5;
	// System.Collections.Generic.Dictionary`2<System.String,GameSystemManager/ReverseCheckPos> GameSystemManager::m_reverseCheckPosDic
	Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * ___m_reverseCheckPosDic_6;
	// System.Single GameSystemManager::m_twoCpsDist
	float ___m_twoCpsDist_7;
	// GameSystemManager/ReverseCheckPos GameSystemManager::m_reverseCheckPos
	int32_t ___m_reverseCheckPos_8;
	// System.Int32 GameSystemManager::m_finishLapCnt
	int32_t ___m_finishLapCnt_9;
	// System.Int32 GameSystemManager::m_checkPointsLength
	int32_t ___m_checkPointsLength_10;
	// System.Int32 GameSystemManager::m_lapTime
	int32_t ___m_lapTime_11;
	// System.Int32 GameSystemManager::m_mapLapTime
	int32_t ___m_mapLapTime_12;
	// System.Int32 GameSystemManager::m_nextCheckPoint
	int32_t ___m_nextCheckPoint_13;
	// System.Int32 GameSystemManager::m_currMapIndex
	int32_t ___m_currMapIndex_14;
	// System.Single GameSystemManager::m_currPos
	float ___m_currPos_15;
	// System.Single GameSystemManager::m_prevPos
	float ___m_prevPos_16;
	// System.Single GameSystemManager::m_resetCooldown
	float ___m_resetCooldown_17;
	// System.Single GameSystemManager::m_resetTimer
	float ___m_resetTimer_18;
	// System.Boolean GameSystemManager::m_isStart
	bool ___m_isStart_19;
	// System.Boolean GameSystemManager::m_isReverse
	bool ___m_isReverse_20;
	// System.Boolean GameSystemManager::m_isReset
	bool ___m_isReset_21;
	// System.Boolean GameSystemManager::m_isCanReset
	bool ___m_isCanReset_22;
	// PlayerController GameSystemManager::m_player
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___m_player_23;
	// System.Int32 GameSystemManager::m_currKartIndex
	int32_t ___m_currKartIndex_24;
	// UnityEngine.AnimationCurve GameSystemManager::m_scaleCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_scaleCurve_25;
	// UnityEngine.AnimationCurve GameSystemManager::m_alphaCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_alphaCurve_26;
	// UnityEngine.Canvas GameSystemManager::m_countCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_countCanvas_27;
	// UnityEngine.UI.Text GameSystemManager::m_countText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_countText_28;
	// UnityEngine.UI.Image GameSystemManager::m_warningImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_warningImage_29;
	// System.Single GameSystemManager::m_duration
	float ___m_duration_30;
	// System.Single GameSystemManager::m_timer
	float ___m_timer_31;
	// System.Single GameSystemManager::m_prevTime
	float ___m_prevTime_32;
	// System.Single GameSystemManager::m_bestTime
	float ___m_bestTime_33;
	// System.Single GameSystemManager::m_maxScale
	float ___m_maxScale_34;
	// System.Single GameSystemManager::m_minScale
	float ___m_minScale_35;
	// System.Single GameSystemManager::m_alphaFrom
	float ___m_alphaFrom_36;
	// System.Single GameSystemManager::m_alphaTo
	float ___m_alphaTo_37;

public:
	inline static int32_t get_offset_of_m_sb_5() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_sb_5)); }
	inline StringBuilder_t * get_m_sb_5() const { return ___m_sb_5; }
	inline StringBuilder_t ** get_address_of_m_sb_5() { return &___m_sb_5; }
	inline void set_m_sb_5(StringBuilder_t * value)
	{
		___m_sb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sb_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_reverseCheckPosDic_6() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_reverseCheckPosDic_6)); }
	inline Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * get_m_reverseCheckPosDic_6() const { return ___m_reverseCheckPosDic_6; }
	inline Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 ** get_address_of_m_reverseCheckPosDic_6() { return &___m_reverseCheckPosDic_6; }
	inline void set_m_reverseCheckPosDic_6(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * value)
	{
		___m_reverseCheckPosDic_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_reverseCheckPosDic_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_twoCpsDist_7() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_twoCpsDist_7)); }
	inline float get_m_twoCpsDist_7() const { return ___m_twoCpsDist_7; }
	inline float* get_address_of_m_twoCpsDist_7() { return &___m_twoCpsDist_7; }
	inline void set_m_twoCpsDist_7(float value)
	{
		___m_twoCpsDist_7 = value;
	}

	inline static int32_t get_offset_of_m_reverseCheckPos_8() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_reverseCheckPos_8)); }
	inline int32_t get_m_reverseCheckPos_8() const { return ___m_reverseCheckPos_8; }
	inline int32_t* get_address_of_m_reverseCheckPos_8() { return &___m_reverseCheckPos_8; }
	inline void set_m_reverseCheckPos_8(int32_t value)
	{
		___m_reverseCheckPos_8 = value;
	}

	inline static int32_t get_offset_of_m_finishLapCnt_9() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_finishLapCnt_9)); }
	inline int32_t get_m_finishLapCnt_9() const { return ___m_finishLapCnt_9; }
	inline int32_t* get_address_of_m_finishLapCnt_9() { return &___m_finishLapCnt_9; }
	inline void set_m_finishLapCnt_9(int32_t value)
	{
		___m_finishLapCnt_9 = value;
	}

	inline static int32_t get_offset_of_m_checkPointsLength_10() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_checkPointsLength_10)); }
	inline int32_t get_m_checkPointsLength_10() const { return ___m_checkPointsLength_10; }
	inline int32_t* get_address_of_m_checkPointsLength_10() { return &___m_checkPointsLength_10; }
	inline void set_m_checkPointsLength_10(int32_t value)
	{
		___m_checkPointsLength_10 = value;
	}

	inline static int32_t get_offset_of_m_lapTime_11() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_lapTime_11)); }
	inline int32_t get_m_lapTime_11() const { return ___m_lapTime_11; }
	inline int32_t* get_address_of_m_lapTime_11() { return &___m_lapTime_11; }
	inline void set_m_lapTime_11(int32_t value)
	{
		___m_lapTime_11 = value;
	}

	inline static int32_t get_offset_of_m_mapLapTime_12() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_mapLapTime_12)); }
	inline int32_t get_m_mapLapTime_12() const { return ___m_mapLapTime_12; }
	inline int32_t* get_address_of_m_mapLapTime_12() { return &___m_mapLapTime_12; }
	inline void set_m_mapLapTime_12(int32_t value)
	{
		___m_mapLapTime_12 = value;
	}

	inline static int32_t get_offset_of_m_nextCheckPoint_13() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_nextCheckPoint_13)); }
	inline int32_t get_m_nextCheckPoint_13() const { return ___m_nextCheckPoint_13; }
	inline int32_t* get_address_of_m_nextCheckPoint_13() { return &___m_nextCheckPoint_13; }
	inline void set_m_nextCheckPoint_13(int32_t value)
	{
		___m_nextCheckPoint_13 = value;
	}

	inline static int32_t get_offset_of_m_currMapIndex_14() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_currMapIndex_14)); }
	inline int32_t get_m_currMapIndex_14() const { return ___m_currMapIndex_14; }
	inline int32_t* get_address_of_m_currMapIndex_14() { return &___m_currMapIndex_14; }
	inline void set_m_currMapIndex_14(int32_t value)
	{
		___m_currMapIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_currPos_15() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_currPos_15)); }
	inline float get_m_currPos_15() const { return ___m_currPos_15; }
	inline float* get_address_of_m_currPos_15() { return &___m_currPos_15; }
	inline void set_m_currPos_15(float value)
	{
		___m_currPos_15 = value;
	}

	inline static int32_t get_offset_of_m_prevPos_16() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_prevPos_16)); }
	inline float get_m_prevPos_16() const { return ___m_prevPos_16; }
	inline float* get_address_of_m_prevPos_16() { return &___m_prevPos_16; }
	inline void set_m_prevPos_16(float value)
	{
		___m_prevPos_16 = value;
	}

	inline static int32_t get_offset_of_m_resetCooldown_17() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_resetCooldown_17)); }
	inline float get_m_resetCooldown_17() const { return ___m_resetCooldown_17; }
	inline float* get_address_of_m_resetCooldown_17() { return &___m_resetCooldown_17; }
	inline void set_m_resetCooldown_17(float value)
	{
		___m_resetCooldown_17 = value;
	}

	inline static int32_t get_offset_of_m_resetTimer_18() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_resetTimer_18)); }
	inline float get_m_resetTimer_18() const { return ___m_resetTimer_18; }
	inline float* get_address_of_m_resetTimer_18() { return &___m_resetTimer_18; }
	inline void set_m_resetTimer_18(float value)
	{
		___m_resetTimer_18 = value;
	}

	inline static int32_t get_offset_of_m_isStart_19() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_isStart_19)); }
	inline bool get_m_isStart_19() const { return ___m_isStart_19; }
	inline bool* get_address_of_m_isStart_19() { return &___m_isStart_19; }
	inline void set_m_isStart_19(bool value)
	{
		___m_isStart_19 = value;
	}

	inline static int32_t get_offset_of_m_isReverse_20() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_isReverse_20)); }
	inline bool get_m_isReverse_20() const { return ___m_isReverse_20; }
	inline bool* get_address_of_m_isReverse_20() { return &___m_isReverse_20; }
	inline void set_m_isReverse_20(bool value)
	{
		___m_isReverse_20 = value;
	}

	inline static int32_t get_offset_of_m_isReset_21() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_isReset_21)); }
	inline bool get_m_isReset_21() const { return ___m_isReset_21; }
	inline bool* get_address_of_m_isReset_21() { return &___m_isReset_21; }
	inline void set_m_isReset_21(bool value)
	{
		___m_isReset_21 = value;
	}

	inline static int32_t get_offset_of_m_isCanReset_22() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_isCanReset_22)); }
	inline bool get_m_isCanReset_22() const { return ___m_isCanReset_22; }
	inline bool* get_address_of_m_isCanReset_22() { return &___m_isCanReset_22; }
	inline void set_m_isCanReset_22(bool value)
	{
		___m_isCanReset_22 = value;
	}

	inline static int32_t get_offset_of_m_player_23() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_player_23)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_m_player_23() const { return ___m_player_23; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_m_player_23() { return &___m_player_23; }
	inline void set_m_player_23(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___m_player_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_player_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_currKartIndex_24() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_currKartIndex_24)); }
	inline int32_t get_m_currKartIndex_24() const { return ___m_currKartIndex_24; }
	inline int32_t* get_address_of_m_currKartIndex_24() { return &___m_currKartIndex_24; }
	inline void set_m_currKartIndex_24(int32_t value)
	{
		___m_currKartIndex_24 = value;
	}

	inline static int32_t get_offset_of_m_scaleCurve_25() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_scaleCurve_25)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_scaleCurve_25() const { return ___m_scaleCurve_25; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_scaleCurve_25() { return &___m_scaleCurve_25; }
	inline void set_m_scaleCurve_25(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_scaleCurve_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_scaleCurve_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_alphaCurve_26() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_alphaCurve_26)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_alphaCurve_26() const { return ___m_alphaCurve_26; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_alphaCurve_26() { return &___m_alphaCurve_26; }
	inline void set_m_alphaCurve_26(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_alphaCurve_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_alphaCurve_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_countCanvas_27() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_countCanvas_27)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_countCanvas_27() const { return ___m_countCanvas_27; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_countCanvas_27() { return &___m_countCanvas_27; }
	inline void set_m_countCanvas_27(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_countCanvas_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_countCanvas_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_countText_28() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_countText_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_countText_28() const { return ___m_countText_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_countText_28() { return &___m_countText_28; }
	inline void set_m_countText_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_countText_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_countText_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_warningImage_29() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_warningImage_29)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_warningImage_29() const { return ___m_warningImage_29; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_warningImage_29() { return &___m_warningImage_29; }
	inline void set_m_warningImage_29(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_warningImage_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_warningImage_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_duration_30() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_duration_30)); }
	inline float get_m_duration_30() const { return ___m_duration_30; }
	inline float* get_address_of_m_duration_30() { return &___m_duration_30; }
	inline void set_m_duration_30(float value)
	{
		___m_duration_30 = value;
	}

	inline static int32_t get_offset_of_m_timer_31() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_timer_31)); }
	inline float get_m_timer_31() const { return ___m_timer_31; }
	inline float* get_address_of_m_timer_31() { return &___m_timer_31; }
	inline void set_m_timer_31(float value)
	{
		___m_timer_31 = value;
	}

	inline static int32_t get_offset_of_m_prevTime_32() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_prevTime_32)); }
	inline float get_m_prevTime_32() const { return ___m_prevTime_32; }
	inline float* get_address_of_m_prevTime_32() { return &___m_prevTime_32; }
	inline void set_m_prevTime_32(float value)
	{
		___m_prevTime_32 = value;
	}

	inline static int32_t get_offset_of_m_bestTime_33() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_bestTime_33)); }
	inline float get_m_bestTime_33() const { return ___m_bestTime_33; }
	inline float* get_address_of_m_bestTime_33() { return &___m_bestTime_33; }
	inline void set_m_bestTime_33(float value)
	{
		___m_bestTime_33 = value;
	}

	inline static int32_t get_offset_of_m_maxScale_34() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_maxScale_34)); }
	inline float get_m_maxScale_34() const { return ___m_maxScale_34; }
	inline float* get_address_of_m_maxScale_34() { return &___m_maxScale_34; }
	inline void set_m_maxScale_34(float value)
	{
		___m_maxScale_34 = value;
	}

	inline static int32_t get_offset_of_m_minScale_35() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_minScale_35)); }
	inline float get_m_minScale_35() const { return ___m_minScale_35; }
	inline float* get_address_of_m_minScale_35() { return &___m_minScale_35; }
	inline void set_m_minScale_35(float value)
	{
		___m_minScale_35 = value;
	}

	inline static int32_t get_offset_of_m_alphaFrom_36() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_alphaFrom_36)); }
	inline float get_m_alphaFrom_36() const { return ___m_alphaFrom_36; }
	inline float* get_address_of_m_alphaFrom_36() { return &___m_alphaFrom_36; }
	inline void set_m_alphaFrom_36(float value)
	{
		___m_alphaFrom_36 = value;
	}

	inline static int32_t get_offset_of_m_alphaTo_37() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_alphaTo_37)); }
	inline float get_m_alphaTo_37() const { return ___m_alphaTo_37; }
	inline float* get_address_of_m_alphaTo_37() { return &___m_alphaTo_37; }
	inline void set_m_alphaTo_37(float value)
	{
		___m_alphaTo_37 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// InGameUiManager
struct InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF  : public Singleton_1_tFBCCED212AA497E22CD601CE70A71F53A2E9F161
{
public:
	// System.Text.StringBuilder InGameUiManager::m_dynamicSb
	StringBuilder_t * ___m_dynamicSb_5;
	// System.Text.StringBuilder InGameUiManager::m_staticSb
	StringBuilder_t * ___m_staticSb_6;
	// UnityEngine.AnimationCurve InGameUiManager::m_alphaCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_alphaCurve_7;
	// PlayerController InGameUiManager::m_player
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___m_player_8;
	// UnityEngine.Canvas InGameUiManager::m_dynamicCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_dynamicCanvas_9;
	// UnityEngine.Canvas InGameUiManager::m_staticCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_staticCanvas_10;
	// UnityEngine.GameObject InGameUiManager::m_resultPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_resultPanel_11;
	// UnityEngine.UI.Text InGameUiManager::m_completeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_completeText_12;
	// UnityEngine.UI.Text InGameUiManager::m_currTimeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_currTimeText_13;
	// UnityEngine.UI.Text InGameUiManager::m_boosterCntText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_boosterCntText_14;
	// UnityEngine.UI.Text InGameUiManager::m_playerBestTimeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_playerBestTimeText_15;
	// UnityEngine.UI.Text InGameUiManager::m_mapNameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_mapNameText_16;
	// UnityEngine.UI.Text InGameUiManager::m_crashCntText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_crashCntText_17;
	// UnityEngine.UI.Text InGameUiManager::m_driftDistText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_driftDistText_18;
	// UnityEngine.UI.Text InGameUiManager::m_averageSpeedText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_averageSpeedText_19;
	// UnityEngine.UI.Text InGameUiManager::m_speedText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_speedText_20;
	// UnityEngine.UI.Text InGameUiManager::m_timerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_timerText_21;
	// UnityEngine.UI.Text InGameUiManager::m_lapTimeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_lapTimeText_22;
	// UnityEngine.UI.Text InGameUiManager::m_bestTimeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_bestTimeText_23;
	// UnityEngine.UI.Text InGameUiManager::m_lastLapText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_lastLapText_24;
	// UnityEngine.UI.Text InGameUiManager::m_userNameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_userNameText_25;
	// UnityEngine.UI.Image InGameUiManager::m_userIconImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_userIconImage_26;
	// UnityEngine.UI.Outline InGameUiManager::m_lastLapTextOutLine
	Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * ___m_lastLapTextOutLine_27;
	// System.Single InGameUiManager::m_lastLapEnableTime
	float ___m_lastLapEnableTime_28;
	// System.Single InGameUiManager::m_alphaFrom
	float ___m_alphaFrom_29;
	// System.Single InGameUiManager::m_alphaTo
	float ___m_alphaTo_30;

public:
	inline static int32_t get_offset_of_m_dynamicSb_5() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_dynamicSb_5)); }
	inline StringBuilder_t * get_m_dynamicSb_5() const { return ___m_dynamicSb_5; }
	inline StringBuilder_t ** get_address_of_m_dynamicSb_5() { return &___m_dynamicSb_5; }
	inline void set_m_dynamicSb_5(StringBuilder_t * value)
	{
		___m_dynamicSb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dynamicSb_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_staticSb_6() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_staticSb_6)); }
	inline StringBuilder_t * get_m_staticSb_6() const { return ___m_staticSb_6; }
	inline StringBuilder_t ** get_address_of_m_staticSb_6() { return &___m_staticSb_6; }
	inline void set_m_staticSb_6(StringBuilder_t * value)
	{
		___m_staticSb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_staticSb_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_alphaCurve_7() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_alphaCurve_7)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_alphaCurve_7() const { return ___m_alphaCurve_7; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_alphaCurve_7() { return &___m_alphaCurve_7; }
	inline void set_m_alphaCurve_7(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_alphaCurve_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_alphaCurve_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_player_8() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_player_8)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_m_player_8() const { return ___m_player_8; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_m_player_8() { return &___m_player_8; }
	inline void set_m_player_8(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___m_player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_player_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_dynamicCanvas_9() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_dynamicCanvas_9)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_dynamicCanvas_9() const { return ___m_dynamicCanvas_9; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_dynamicCanvas_9() { return &___m_dynamicCanvas_9; }
	inline void set_m_dynamicCanvas_9(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_dynamicCanvas_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dynamicCanvas_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_staticCanvas_10() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_staticCanvas_10)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_staticCanvas_10() const { return ___m_staticCanvas_10; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_staticCanvas_10() { return &___m_staticCanvas_10; }
	inline void set_m_staticCanvas_10(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_staticCanvas_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_staticCanvas_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_resultPanel_11() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_resultPanel_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_resultPanel_11() const { return ___m_resultPanel_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_resultPanel_11() { return &___m_resultPanel_11; }
	inline void set_m_resultPanel_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_resultPanel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_resultPanel_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_completeText_12() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_completeText_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_completeText_12() const { return ___m_completeText_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_completeText_12() { return &___m_completeText_12; }
	inline void set_m_completeText_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_completeText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeText_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_currTimeText_13() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_currTimeText_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_currTimeText_13() const { return ___m_currTimeText_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_currTimeText_13() { return &___m_currTimeText_13; }
	inline void set_m_currTimeText_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_currTimeText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currTimeText_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_boosterCntText_14() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_boosterCntText_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_boosterCntText_14() const { return ___m_boosterCntText_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_boosterCntText_14() { return &___m_boosterCntText_14; }
	inline void set_m_boosterCntText_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_boosterCntText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boosterCntText_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_playerBestTimeText_15() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_playerBestTimeText_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_playerBestTimeText_15() const { return ___m_playerBestTimeText_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_playerBestTimeText_15() { return &___m_playerBestTimeText_15; }
	inline void set_m_playerBestTimeText_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_playerBestTimeText_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerBestTimeText_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_mapNameText_16() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_mapNameText_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_mapNameText_16() const { return ___m_mapNameText_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_mapNameText_16() { return &___m_mapNameText_16; }
	inline void set_m_mapNameText_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_mapNameText_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mapNameText_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_crashCntText_17() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_crashCntText_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_crashCntText_17() const { return ___m_crashCntText_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_crashCntText_17() { return &___m_crashCntText_17; }
	inline void set_m_crashCntText_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_crashCntText_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_crashCntText_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_driftDistText_18() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_driftDistText_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_driftDistText_18() const { return ___m_driftDistText_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_driftDistText_18() { return &___m_driftDistText_18; }
	inline void set_m_driftDistText_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_driftDistText_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_driftDistText_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_averageSpeedText_19() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_averageSpeedText_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_averageSpeedText_19() const { return ___m_averageSpeedText_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_averageSpeedText_19() { return &___m_averageSpeedText_19; }
	inline void set_m_averageSpeedText_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_averageSpeedText_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_averageSpeedText_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_speedText_20() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_speedText_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_speedText_20() const { return ___m_speedText_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_speedText_20() { return &___m_speedText_20; }
	inline void set_m_speedText_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_speedText_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_speedText_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_timerText_21() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_timerText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_timerText_21() const { return ___m_timerText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_timerText_21() { return &___m_timerText_21; }
	inline void set_m_timerText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_timerText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timerText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_lapTimeText_22() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_lapTimeText_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_lapTimeText_22() const { return ___m_lapTimeText_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_lapTimeText_22() { return &___m_lapTimeText_22; }
	inline void set_m_lapTimeText_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_lapTimeText_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lapTimeText_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_bestTimeText_23() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_bestTimeText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_bestTimeText_23() const { return ___m_bestTimeText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_bestTimeText_23() { return &___m_bestTimeText_23; }
	inline void set_m_bestTimeText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_bestTimeText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_bestTimeText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_lastLapText_24() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_lastLapText_24)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_lastLapText_24() const { return ___m_lastLapText_24; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_lastLapText_24() { return &___m_lastLapText_24; }
	inline void set_m_lastLapText_24(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_lastLapText_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lastLapText_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_userNameText_25() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_userNameText_25)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_userNameText_25() const { return ___m_userNameText_25; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_userNameText_25() { return &___m_userNameText_25; }
	inline void set_m_userNameText_25(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_userNameText_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_userNameText_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_userIconImage_26() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_userIconImage_26)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_userIconImage_26() const { return ___m_userIconImage_26; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_userIconImage_26() { return &___m_userIconImage_26; }
	inline void set_m_userIconImage_26(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_userIconImage_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_userIconImage_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_lastLapTextOutLine_27() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_lastLapTextOutLine_27)); }
	inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * get_m_lastLapTextOutLine_27() const { return ___m_lastLapTextOutLine_27; }
	inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 ** get_address_of_m_lastLapTextOutLine_27() { return &___m_lastLapTextOutLine_27; }
	inline void set_m_lastLapTextOutLine_27(Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * value)
	{
		___m_lastLapTextOutLine_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lastLapTextOutLine_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_lastLapEnableTime_28() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_lastLapEnableTime_28)); }
	inline float get_m_lastLapEnableTime_28() const { return ___m_lastLapEnableTime_28; }
	inline float* get_address_of_m_lastLapEnableTime_28() { return &___m_lastLapEnableTime_28; }
	inline void set_m_lastLapEnableTime_28(float value)
	{
		___m_lastLapEnableTime_28 = value;
	}

	inline static int32_t get_offset_of_m_alphaFrom_29() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_alphaFrom_29)); }
	inline float get_m_alphaFrom_29() const { return ___m_alphaFrom_29; }
	inline float* get_address_of_m_alphaFrom_29() { return &___m_alphaFrom_29; }
	inline void set_m_alphaFrom_29(float value)
	{
		___m_alphaFrom_29 = value;
	}

	inline static int32_t get_offset_of_m_alphaTo_30() { return static_cast<int32_t>(offsetof(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF, ___m_alphaTo_30)); }
	inline float get_m_alphaTo_30() const { return ___m_alphaTo_30; }
	inline float* get_address_of_m_alphaTo_30() { return &___m_alphaTo_30; }
	inline void set_m_alphaTo_30(float value)
	{
		___m_alphaTo_30 = value;
	}
};


// InputManager
struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A  : public Singleton_1_t50C5E5A121B3204A4D5965AE75F43860605ED7B3
{
public:
	// System.Single InputManager::<Horizontal>k__BackingField
	float ___U3CHorizontalU3Ek__BackingField_5;
	// System.Single InputManager::<Vertical>k__BackingField
	float ___U3CVerticalU3Ek__BackingField_6;
	// System.Boolean InputManager::<HandBreakKeyDown>k__BackingField
	bool ___U3CHandBreakKeyDownU3Ek__BackingField_7;
	// System.Boolean InputManager::<HandBreakKeyUp>k__BackingField
	bool ___U3CHandBreakKeyUpU3Ek__BackingField_8;
	// System.Boolean InputManager::<ResetKeyDown>k__BackingField
	bool ___U3CResetKeyDownU3Ek__BackingField_9;
	// System.Boolean InputManager::<BoosterKeyDown>k__BackingField
	bool ___U3CBoosterKeyDownU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CHorizontalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___U3CHorizontalU3Ek__BackingField_5)); }
	inline float get_U3CHorizontalU3Ek__BackingField_5() const { return ___U3CHorizontalU3Ek__BackingField_5; }
	inline float* get_address_of_U3CHorizontalU3Ek__BackingField_5() { return &___U3CHorizontalU3Ek__BackingField_5; }
	inline void set_U3CHorizontalU3Ek__BackingField_5(float value)
	{
		___U3CHorizontalU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CVerticalU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___U3CVerticalU3Ek__BackingField_6)); }
	inline float get_U3CVerticalU3Ek__BackingField_6() const { return ___U3CVerticalU3Ek__BackingField_6; }
	inline float* get_address_of_U3CVerticalU3Ek__BackingField_6() { return &___U3CVerticalU3Ek__BackingField_6; }
	inline void set_U3CVerticalU3Ek__BackingField_6(float value)
	{
		___U3CVerticalU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CHandBreakKeyDownU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___U3CHandBreakKeyDownU3Ek__BackingField_7)); }
	inline bool get_U3CHandBreakKeyDownU3Ek__BackingField_7() const { return ___U3CHandBreakKeyDownU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CHandBreakKeyDownU3Ek__BackingField_7() { return &___U3CHandBreakKeyDownU3Ek__BackingField_7; }
	inline void set_U3CHandBreakKeyDownU3Ek__BackingField_7(bool value)
	{
		___U3CHandBreakKeyDownU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CHandBreakKeyUpU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___U3CHandBreakKeyUpU3Ek__BackingField_8)); }
	inline bool get_U3CHandBreakKeyUpU3Ek__BackingField_8() const { return ___U3CHandBreakKeyUpU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CHandBreakKeyUpU3Ek__BackingField_8() { return &___U3CHandBreakKeyUpU3Ek__BackingField_8; }
	inline void set_U3CHandBreakKeyUpU3Ek__BackingField_8(bool value)
	{
		___U3CHandBreakKeyUpU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CResetKeyDownU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___U3CResetKeyDownU3Ek__BackingField_9)); }
	inline bool get_U3CResetKeyDownU3Ek__BackingField_9() const { return ___U3CResetKeyDownU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CResetKeyDownU3Ek__BackingField_9() { return &___U3CResetKeyDownU3Ek__BackingField_9; }
	inline void set_U3CResetKeyDownU3Ek__BackingField_9(bool value)
	{
		___U3CResetKeyDownU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CBoosterKeyDownU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___U3CBoosterKeyDownU3Ek__BackingField_10)); }
	inline bool get_U3CBoosterKeyDownU3Ek__BackingField_10() const { return ___U3CBoosterKeyDownU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CBoosterKeyDownU3Ek__BackingField_10() { return &___U3CBoosterKeyDownU3Ek__BackingField_10; }
	inline void set_U3CBoosterKeyDownU3Ek__BackingField_10(bool value)
	{
		___U3CBoosterKeyDownU3Ek__BackingField_10 = value;
	}
};


// LoadSceneManager
struct LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A  : public Singleton_DontDestroy_1_tCA8209B6BA7D4380107625411082ABF8BD46E54D
{
public:
	// System.Text.StringBuilder LoadSceneManager::m_sb
	StringBuilder_t * ___m_sb_5;
	// UnityEngine.AsyncOperation LoadSceneManager::m_loadingInfo
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___m_loadingInfo_6;
	// SceneState LoadSceneManager::m_loadState
	int32_t ___m_loadState_7;
	// UnityEngine.GameObject LoadSceneManager::m_loadingPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_loadingPanel_8;
	// UnityEngine.UI.Text LoadSceneManager::m_loadingValueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_loadingValueText_9;
	// UnityEngine.UI.Text LoadSceneManager::m_loadingText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_loadingText_10;
	// UnityEngine.UI.Image LoadSceneManager::m_loadingProgressBar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_loadingProgressBar_11;

public:
	inline static int32_t get_offset_of_m_sb_5() { return static_cast<int32_t>(offsetof(LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A, ___m_sb_5)); }
	inline StringBuilder_t * get_m_sb_5() const { return ___m_sb_5; }
	inline StringBuilder_t ** get_address_of_m_sb_5() { return &___m_sb_5; }
	inline void set_m_sb_5(StringBuilder_t * value)
	{
		___m_sb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sb_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_loadingInfo_6() { return static_cast<int32_t>(offsetof(LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A, ___m_loadingInfo_6)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_m_loadingInfo_6() const { return ___m_loadingInfo_6; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_m_loadingInfo_6() { return &___m_loadingInfo_6; }
	inline void set_m_loadingInfo_6(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___m_loadingInfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_loadingInfo_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_loadState_7() { return static_cast<int32_t>(offsetof(LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A, ___m_loadState_7)); }
	inline int32_t get_m_loadState_7() const { return ___m_loadState_7; }
	inline int32_t* get_address_of_m_loadState_7() { return &___m_loadState_7; }
	inline void set_m_loadState_7(int32_t value)
	{
		___m_loadState_7 = value;
	}

	inline static int32_t get_offset_of_m_loadingPanel_8() { return static_cast<int32_t>(offsetof(LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A, ___m_loadingPanel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_loadingPanel_8() const { return ___m_loadingPanel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_loadingPanel_8() { return &___m_loadingPanel_8; }
	inline void set_m_loadingPanel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_loadingPanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_loadingPanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_loadingValueText_9() { return static_cast<int32_t>(offsetof(LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A, ___m_loadingValueText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_loadingValueText_9() const { return ___m_loadingValueText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_loadingValueText_9() { return &___m_loadingValueText_9; }
	inline void set_m_loadingValueText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_loadingValueText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_loadingValueText_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_loadingText_10() { return static_cast<int32_t>(offsetof(LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A, ___m_loadingText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_loadingText_10() const { return ___m_loadingText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_loadingText_10() { return &___m_loadingText_10; }
	inline void set_m_loadingText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_loadingText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_loadingText_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_loadingProgressBar_11() { return static_cast<int32_t>(offsetof(LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A, ___m_loadingProgressBar_11)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_loadingProgressBar_11() const { return ___m_loadingProgressBar_11; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_loadingProgressBar_11() { return &___m_loadingProgressBar_11; }
	inline void set_m_loadingProgressBar_11(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_loadingProgressBar_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_loadingProgressBar_11), (void*)value);
	}
};


// LobbyUIManager
struct LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53  : public Singleton_1_t37F22396911BC0AFFCC353D1908B2E03E6CF10C4
{
public:
	// UnityEngine.UI.Button[] LobbyUIManager::m_lobbyButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___m_lobbyButtons_5;
	// UnityEngine.GameObject LobbyUIManager::m_lobbyMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_lobbyMenu_6;
	// UnityEngine.GameObject LobbyUIManager::m_mainLobby
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_mainLobby_7;
	// ILobbyMenu[] LobbyUIManager::m_lobbyMenus
	ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64* ___m_lobbyMenus_8;

public:
	inline static int32_t get_offset_of_m_lobbyButtons_5() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_lobbyButtons_5)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_m_lobbyButtons_5() const { return ___m_lobbyButtons_5; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_m_lobbyButtons_5() { return &___m_lobbyButtons_5; }
	inline void set_m_lobbyButtons_5(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___m_lobbyButtons_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lobbyButtons_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_lobbyMenu_6() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_lobbyMenu_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_lobbyMenu_6() const { return ___m_lobbyMenu_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_lobbyMenu_6() { return &___m_lobbyMenu_6; }
	inline void set_m_lobbyMenu_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_lobbyMenu_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lobbyMenu_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_mainLobby_7() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_mainLobby_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_mainLobby_7() const { return ___m_mainLobby_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_mainLobby_7() { return &___m_mainLobby_7; }
	inline void set_m_mainLobby_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_mainLobby_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mainLobby_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_lobbyMenus_8() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_lobbyMenus_8)); }
	inline ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64* get_m_lobbyMenus_8() const { return ___m_lobbyMenus_8; }
	inline ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64** get_address_of_m_lobbyMenus_8() { return &___m_lobbyMenus_8; }
	inline void set_m_lobbyMenus_8(ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64* value)
	{
		___m_lobbyMenus_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lobbyMenus_8), (void*)value);
	}
};


// MapDataTable
struct MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB  : public Singleton_DontDestroy_1_t12442F5DBE70FBAB401F36F35DA9FCE15FD42D98
{
public:
	// MapData[] MapDataTable::m_mapDataTable
	MapDataU5BU5D_t88BEB0BB3AA596F06D030B2EE5023E241D7DE340* ___m_mapDataTable_5;

public:
	inline static int32_t get_offset_of_m_mapDataTable_5() { return static_cast<int32_t>(offsetof(MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB, ___m_mapDataTable_5)); }
	inline MapDataU5BU5D_t88BEB0BB3AA596F06D030B2EE5023E241D7DE340* get_m_mapDataTable_5() const { return ___m_mapDataTable_5; }
	inline MapDataU5BU5D_t88BEB0BB3AA596F06D030B2EE5023E241D7DE340** get_address_of_m_mapDataTable_5() { return &___m_mapDataTable_5; }
	inline void set_m_mapDataTable_5(MapDataU5BU5D_t88BEB0BB3AA596F06D030B2EE5023E241D7DE340* value)
	{
		___m_mapDataTable_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mapDataTable_5), (void*)value);
	}
};


// MapManager
struct MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225  : public Singleton_1_tB25C842AECF7533644545E81E9762A79176990C2
{
public:
	// System.Int32 MapManager::m_lapTime
	int32_t ___m_lapTime_5;

public:
	inline static int32_t get_offset_of_m_lapTime_5() { return static_cast<int32_t>(offsetof(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225, ___m_lapTime_5)); }
	inline int32_t get_m_lapTime_5() const { return ___m_lapTime_5; }
	inline int32_t* get_address_of_m_lapTime_5() { return &___m_lapTime_5; }
	inline void set_m_lapTime_5(int32_t value)
	{
		___m_lapTime_5 = value;
	}
};


// ResetPointManager
struct ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA  : public Singleton_1_tEB096B8237A899316B43C8E4D8A52048850E4BEB
{
public:
	// UnityEngine.Transform[] ResetPointManager::m_resetPoints
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___m_resetPoints_5;

public:
	inline static int32_t get_offset_of_m_resetPoints_5() { return static_cast<int32_t>(offsetof(ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA, ___m_resetPoints_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_m_resetPoints_5() const { return ___m_resetPoints_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_m_resetPoints_5() { return &___m_resetPoints_5; }
	inline void set_m_resetPoints_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___m_resetPoints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_resetPoints_5), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Shadow
struct Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E  : public BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_EffectColor_5;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_EffectDistance_6;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_7;

public:
	inline static int32_t get_offset_of_m_EffectColor_5() { return static_cast<int32_t>(offsetof(Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E, ___m_EffectColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_EffectColor_5() const { return ___m_EffectColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_EffectColor_5() { return &___m_EffectColor_5; }
	inline void set_m_EffectColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_EffectColor_5 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_6() { return static_cast<int32_t>(offsetof(Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E, ___m_EffectDistance_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_EffectDistance_6() const { return ___m_EffectDistance_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_EffectDistance_6() { return &___m_EffectDistance_6; }
	inline void set_m_EffectDistance_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_EffectDistance_6 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_7() { return static_cast<int32_t>(offsetof(Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E, ___m_UseGraphicAlpha_7)); }
	inline bool get_m_UseGraphicAlpha_7() const { return ___m_UseGraphicAlpha_7; }
	inline bool* get_address_of_m_UseGraphicAlpha_7() { return &___m_UseGraphicAlpha_7; }
	inline void set_m_UseGraphicAlpha_7(bool value)
	{
		___m_UseGraphicAlpha_7 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Outline
struct Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2  : public Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E
{
public:

public:
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// CheckpointController[]
struct CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * m_Items[1];

public:
	inline CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CarData[]
struct CarDataU5BU5D_t0688CEAF46D508A83CFA3A8F4307E35DEA5ED566  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * m_Items[1];

public:
	inline CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MapData[]
struct MapDataU5BU5D_t88BEB0BB3AA596F06D030B2EE5023E241D7DE340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * m_Items[1];

public:
	inline MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ILobbyMenu[]
struct ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * m_Items[1];

public:
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * m_Items[1];

public:
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// WheelController[]
struct WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * m_Items[1];

public:
	inline WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Singleton_DontDestroy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_DontDestroy_1__ctor_mFD2D777AA83F22AEDE8235B9E8D6FC837B56FA88_gshared (Singleton_DontDestroy_1_tE48FC4FE1D10644E7CF14F91ED91590D669A3C7A * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared (Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3 * __this, const RuntimeMethod* method);
// T Singleton_DontDestroy`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mC3E2914537EF15406FA2F725DB20CA60F190F4F6_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// T Singleton`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mABEB0118462E5CA83603DB684E8E73682AC01EE6_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDD94B092289B595591F7BFA6575667F3FCD66B00_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m1162B29A5E7F58C6D71090AE00D175818BC0B955_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Singleton_DontDestroy`1<CarDataTable>::.ctor()
inline void Singleton_DontDestroy_1__ctor_m604193DC57C1DEEC26EE50B1C81D2A8E4F3B416B (Singleton_DontDestroy_1_t0F170216A8E5918ECCDE511697B5C99EECA73DF6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_DontDestroy_1_t0F170216A8E5918ECCDE511697B5C99EECA73DF6 *, const RuntimeMethod*))Singleton_DontDestroy_1__ctor_mFD2D777AA83F22AEDE8235B9E8D6FC837B56FA88_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<CheckpointController>()
inline CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* Component_GetComponentsInChildren_TisCheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA_m75B3255B5CFDEC76AF04D425B615C4337BC9E735 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void CheckpointController::set_CheckNumber(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CheckpointController_set_CheckNumber_m5939CB32D3925250499243375E9CC174DAACE7BA_inline (CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Singleton`1<CheckPointManager>::.ctor()
inline void Singleton_1__ctor_m8AE824D08625930D68DF7DBDDA540777003EB473 (Singleton_1_t1F8828BD641426F8396821F507A5C47943DE1DAA * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t1F8828BD641426F8396821F507A5C47943DE1DAA *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// T Singleton_DontDestroy`1<GameSystemManager>::get_Instance()
inline GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline (const RuntimeMethod* method)
{
	return ((  GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * (*) (const RuntimeMethod*))Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline)(method);
}
// System.Void GameSystemManager::OnThroughCheckPoint(System.Int32,CheckpointController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_OnThroughCheckPoint_m41349E32EE71EB704BA3B136AEDD2B19F8425F3B (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, int32_t ___checkNum0, CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * ___cpObj1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<MapInfo>::get_Item(System.Int32)
inline MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_inline (List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * (*) (List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_m5709C9DC233D10A7E9AF4BCC9639E3F18FE36831 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<PlayerData>(System.String)
inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * JsonUtility_FromJson_TisPlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_m1BC0A217D6A8FFBE81E040268CC950AEC4BECDD0 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// T Singleton_DontDestroy`1<CarDataTable>::get_Instance()
inline CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A * Singleton_DontDestroy_1_get_Instance_mDA4E9233BC020115A3780F03671BB403CC56615E_inline (const RuntimeMethod* method)
{
	return ((  CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A * (*) (const RuntimeMethod*))Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline)(method);
}
// T Singleton_DontDestroy`1<MapDataTable>::get_Instance()
inline MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB * Singleton_DontDestroy_1_get_Instance_m48013895EE6E21395EF2E3747418C7FB8FE41662_inline (const RuntimeMethod* method)
{
	return ((  MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB * (*) (const RuntimeMethod*))Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline)(method);
}
// PlayerData DataManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * DataManager_Load_mCB3862B253C5BE2058DA10F648A53460DE398FF4 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method);
// System.Void PlayerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData__ctor_mC2DA6B32832AB92B19E799148968590FF1F28C1B (PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * __this, const RuntimeMethod* method);
// System.Void CarInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarInfo__ctor_mF6C3B57DDE5882675A7065BCD1AF384A3CDA8092 (CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * __this, const RuntimeMethod* method);
// System.Void DataManager::UpdateCarDatas(CarInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_UpdateCarDatas_m1670675ACF25ABC994DC3ABF591007AA62C31940 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * ___carInfo0, int32_t ___index1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CarInfo>::Add(!0)
inline void List_1_Add_mE58075DCA2DD492591EE826F55B64888CAE37419 (List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 * __this, CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 *, CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void MapInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapInfo__ctor_mE155B555F97BC250A30AC06A6053E0370CA024A7 (MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * __this, const RuntimeMethod* method);
// System.Void DataManager::UpdateMapDatas(MapInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_UpdateMapDatas_m49787FA8C1E724CBE1B0CD71D2C84E98ED149C70 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * ___mapInfo0, int32_t ___index1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MapInfo>::Add(!0)
inline void List_1_Add_m019F0C56BDA1D57FD8B1B7C7EDF1205031C1AB87 (List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * __this, MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 *, MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<CarInfo>::get_Item(System.Int32)
inline CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * List_1_get_Item_m1B9E7EBC2D36456DFD010A4AE30231AD08EAFB9D_inline (List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * (*) (List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void DataManager::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_Save_mB970570AAF16A2836DD9FDA18F7E811E1520662B (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method);
// System.Void Singleton_DontDestroy`1<DataManager>::.ctor()
inline void Singleton_DontDestroy_1__ctor_m6176AF940683CEDA527E07B16229747C10A5792C (Singleton_DontDestroy_1_t476369C486C70CE5CD3D245CFA49CFAAA2EE8347 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_DontDestroy_1_t476369C486C70CE5CD3D245CFA49CFAAA2EE8347 *, const RuntimeMethod*))Singleton_DontDestroy_1__ctor_mFD2D777AA83F22AEDE8235B9E8D6FC837B56FA88_gshared)(__this, method);
}
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC (int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline (const RuntimeMethod* method);
// System.Void Singleton_DontDestroy`1<GameSettings>::.ctor()
inline void Singleton_DontDestroy_1__ctor_m8C15519BEA644C759C8915FEA98097675E2E65E2 (Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657 *, const RuntimeMethod*))Singleton_DontDestroy_1__ctor_mFD2D777AA83F22AEDE8235B9E8D6FC837B56FA88_gshared)(__this, method);
}
// System.Void GameSystemManager/<Coroutine_CountDown>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__48__ctor_mDB139B7307811BF2976DB22099985FE674B5AE02 (U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,GameSystemManager/ReverseCheckPos>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m2796BA4A4BA944D0D56474980415A526E15F33E7 (Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mC3E2914537EF15406FA2F725DB20CA60F190F4F6_gshared)(__this, ___key0, method);
}
// System.Void GameSystemManager::SetReverseCheckPos(GameSystemManager/ReverseCheckPos)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSystemManager_SetReverseCheckPos_m8F928B0DCB017CBF3305F0BCC807BBAD79A301B8_inline (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, int32_t ___pos0, const RuntimeMethod* method);
// System.Void GameSystemManager::CalculateBestTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_CalculateBestTime_mD5D40841D64216295B777CC99F3AB4EEB613F7A7 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// T Singleton`1<InGameUiManager>::get_Instance()
inline InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline (const RuntimeMethod* method)
{
	return ((  InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// System.Void InGameUiManager::UpdateStaticCanvas(System.Int32,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_UpdateStaticCanvas_mC7F4D042A6847D0C10500AC0B204EA54574CB724 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, int32_t ___mapLapTime0, int32_t ___currLapTime1, float ___bestTime2, bool ___isLastLap3, const RuntimeMethod* method);
// System.Boolean GameSystemManager::get_IsEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameSystemManager_get_IsEnd_m58870F17DE167ED6588D6D5345A7731FB8AF5B9C (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// System.Void GameSystemManager::OnFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_OnFinish_mF5A0F4271BD032FA9E62379DDB9C0483AF4A3DED (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// T Singleton_DontDestroy`1<DataManager>::get_Instance()
inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_inline (const RuntimeMethod* method)
{
	return ((  DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * (*) (const RuntimeMethod*))Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline)(method);
}
// System.Single DataManager::GetMapBestTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DataManager_GetMapBestTime_m541E4021EBF29AB0E1F06AFDD91956CABA7A996B (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, int32_t ___mapIndex0, const RuntimeMethod* method);
// System.Void DataManager::UpdateMapBestTime(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_UpdateMapBestTime_mD0CEAB99C8721DBA4AA1D3B7351EFE24CAC28320 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, float ___time0, int32_t ___mapIndex1, const RuntimeMethod* method);
// System.Void PlayerController::set_IsStart(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_set_IsStart_m5A2591E0C7CDC386CFBC7106F6B67BBEA6470ED3_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void PlayerController::Break(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Break_m1D52BD0C1FAB988971A3AD7B832909D5044F07C7 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, float ___breakForce0, const RuntimeMethod* method);
// System.Void InGameUiManager::SetFinishUI(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_SetFinishUI_mC9F64C14DD7630362D9F728036F9B9D9FFB458B4 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, String_t* ___completeText0, float ___mapBestTime1, float ___currTime2, const RuntimeMethod* method);
// T Singleton`1<ResetPointManager>::get_Instance()
inline ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * Singleton_1_get_Instance_m51871C9785657A4252A3CFA65DFF568D3B78FA84_inline (const RuntimeMethod* method)
{
	return ((  ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// UnityEngine.Transform[] ResetPointManager::get_ResetPoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ResetPointManager_get_ResetPoints_m92FC544988A8D4229C3DFBF95221117AD43E1D1C_inline (ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Quaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_mD3D4C66907C994D30D99E76063623F7000F6998E (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void PlayerController::SetState(PlayerController/State)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void GameSystemManager::SetReverse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_SetReverse_m5CF03927DE2BF485D77D94FC35871B7B598D0FB2 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, bool ___value0, const RuntimeMethod* method);
// PlayerData DataManager::get_PlayerData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * DataManager_get_PlayerData_m8FA62B56F659CBCADE516A5B93460BF4E00DE0F7_inline (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method);
// System.Void PlayerController::InitPlayer(PlayerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_InitPlayer_mAD7DF4934C6108B37E620021FF3DA33F53350DF2 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * ___playerData0, const RuntimeMethod* method);
// T Singleton`1<MapManager>::get_Instance()
inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * Singleton_1_get_Instance_m28056174581FE9682DDBB2D4323C27D8E7F0D281_inline (const RuntimeMethod* method)
{
	return ((  MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// System.Void MapManager::InitMap(MapInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_InitMap_mEDF74D678AC97F8C4A3B2710718F9551C220F76B (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * ___mapinfo0, const RuntimeMethod* method);
// System.Void GameSystemManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_LoadData_m69DC02E6FBE08F3D9140A9330A239A176DCDBCAD (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// System.Void InGameUiManager::SetActiveAllCanvas(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_SetActiveAllCanvas_m87FEE572924E350996309176326A46B360FBFDED (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameSystemManager/ReverseCheckPos>::Add(!0,!1)
inline void Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7 (Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_mABEB0118462E5CA83603DB684E8E73682AC01EE6_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.IEnumerator GameSystemManager::Coroutine_CountDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameSystemManager_Coroutine_CountDown_m5FA213D8405A69914CFD9C43B2DB2B91D9093006 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// T Singleton`1<CheckPointManager>::get_Instance()
inline CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * Singleton_1_get_Instance_mC846049DA7CB63D29B540DFA4AE468318A51516F_inline (const RuntimeMethod* method)
{
	return ((  CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// CheckpointController[] CheckPointManager::get_CheckPoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* CheckPointManager_get_CheckPoints_m4A796B083369C9D84E226DF70120F939891E1E99_inline (CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * __this, const RuntimeMethod* method);
// System.Int32 MapManager::get_LapTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MapManager_get_LapTime_m5EA78556805B8E2FCAC8B6521601588E1F9D3B60_inline (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, const RuntimeMethod* method);
// System.Void InGameUiManager::UpdateLapTimeText(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_UpdateLapTimeText_mDA4B243D4E7DBEB3B53FB262C98F09B087B012C5 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, int32_t ___mapLapTime0, int32_t ___currLapTime1, const RuntimeMethod* method);
// System.Void InGameUiManager::SetUserProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_SetUserProfile_mEAD142A731DB6E2009D246F53C11B1DB06C91408 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void InGameUiManager::UpdateDynamicCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_UpdateDynamicCanvas_m6A005541BADA153EA6709E0B55ACDFD6ECE20BE7 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, const RuntimeMethod* method);
// System.Void GameSystemManager::CheckReverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_CheckReverse_m7F5AB12852D604EF7631DB14AC6D0C9D2C38EDCC (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,GameSystemManager/ReverseCheckPos>::.ctor()
inline void Dictionary_2__ctor_mBF13816DD89AFE7A5FEE6AE16CA7E8DD08DB62AB (Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 *, const RuntimeMethod*))Dictionary_2__ctor_mDD94B092289B595591F7BFA6575667F3FCD66B00_gshared)(__this, method);
}
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method);
// System.Void Singleton_DontDestroy`1<GameSystemManager>::.ctor()
inline void Singleton_DontDestroy_1__ctor_m4F8D135D6284D1BF2269F115B8AFC2622A9FEF41 (Singleton_DontDestroy_1_tD8089C6807FBAD2976D80847FD26C8203400ED64 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_DontDestroy_1_tD8089C6807FBAD2976D80847FD26C8203400ED64 *, const RuntimeMethod*))Singleton_DontDestroy_1__ctor_mFD2D777AA83F22AEDE8235B9E8D6FC837B56FA88_gshared)(__this, method);
}
// System.Void InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextAlphaFadeoutU3Ed__27__ctor_m0A17ABA177FC3C97FCB86BDABF020C6E8AEE10B2 (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28__ctor_m5682EAC9C43C140AB026F85BAE6973B30573C6BC (U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextScaleFadeInU3Ed__29__ctor_mFFBAB9A66E4FC445D21CDF42C5435446E35898C5 (U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String PlayerController::get_UserName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayerController_get_UserName_m6B35135EC082D4F37AD871F59A2F53127EC5860C_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// UnityEngine.Color PlayerController::get_KartColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  PlayerController_get_KartColor_mA2874332D2DA78DD84F9D2923A06D18F2C3920D6_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void GameSystemManager::ConvetTime(System.Single,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_ConvetTime_m9CC274B393249FACDD6343441899D627F11D33B2 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, float ___time0, int32_t* ___minute1, int32_t* ___second2, int32_t* ___millisecond3, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m3648BC8C77CEA688F3B90C7D79007CEDE85947E3 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void InGameUiManager/FuncDel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncDel__ctor_m5B834188921D4D72168C3266160E9FCFF25AA205 (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.IEnumerator InGameUiManager::Coroutine_OutlineTextAlphaFadeout(UnityEngine.UI.Text,UnityEngine.UI.Outline,UnityEngine.AnimationCurve,System.Single,System.Single,System.Single,System.Single[],InGameUiManager/FuncDel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameUiManager_Coroutine_OutlineTextAlphaFadeout_m9BC6440191A993BB2FD8FF0FB489C11A6C05D8DD (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text0, Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * ___outline1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve2, float ___from3, float ___to4, float ___duration5, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rgbColors6, FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * ___funcDel7, const RuntimeMethod* method);
// System.Single GameSystemManager::get_CurrentTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameSystemManager_get_CurrentTime_mCC545336B16384620D9C1D0DF9188F66605049C8_inline (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// System.Single PlayerController::get_CurrentSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerController_get_CurrentSpeed_mA7190F289A58683110E3398C8DB80C311DF4034F_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Single GameSystemManager::get_AverageSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameSystemManager_get_AverageSpeed_m935DFF74B384739420D69119981A5BAE42059AB3 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// System.Int32 GameSystemManager::get_CurrMapIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameSystemManager_get_CurrMapIndex_mAE4D3CDD7FE836A079A8B79444E3831D9BF332A9_inline (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// System.String DataManager::GetMapName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataManager_GetMapName_m794F0F889B3134E7F4755B364AEA92B66D8B2215 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, int32_t ___mapIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Single PlayerController::get_TotalDriftDist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerController_get_TotalDriftDist_m53B4695152CC3F8A7A7722FED411B6EAB3F6D22E (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Int32 PlayerController::get_BoosterCnt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerController_get_BoosterCnt_mA15136F01D1D81ABEE880035522CF20D55DE43C9_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Int32 PlayerController::get_CrashCnt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerController_get_CrashCnt_m569632CB37790AD2080088D68362BCD75E0DB897_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void Singleton`1<InGameUiManager>::.ctor()
inline void Singleton_1__ctor_mF8DE3D3BE959789F20595EB234412F45922CA43A (Singleton_1_tFBCCED212AA497E22CD601CE70A71F53A2E9F161 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tFBCCED212AA497E22CD601CE70A71F53A2E9F161 *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void InputManager::set_Horizontal(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_Horizontal_m301A66829A357914DE773D16DC1D3745779AA4FE_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, float ___value0, const RuntimeMethod* method);
// System.Void InputManager::set_Vertical(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_Vertical_m2E72E0FCA438D080A686E5ABC563A504735B295C_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void InputManager::set_HandBreakKeyDown(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_HandBreakKeyDown_mEA92EBEA5CE213FFFC93AA19FF6BB8F3CD2645C2_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void InputManager::set_HandBreakKeyUp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_HandBreakKeyUp_m96C262BA4F464626DA528B298200FF492276E37F_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void InputManager::set_ResetKeyDown(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_ResetKeyDown_mC04095BE64237CDE269F7D6918B5BB18C5FA610C_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void InputManager::set_BoosterKeyDown(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_BoosterKeyDown_mD2B14D35C32BA9F0E7C0975B38B703E76BDEC3C9_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Singleton`1<InputManager>::.ctor()
inline void Singleton_1__ctor_m29478D063D801FB0A7F41CD80CB94A3AB392E913 (Singleton_1_t50C5E5A121B3204A4D5965AE75F43860605ED7B3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t50C5E5A121B3204A4D5965AE75F43860605ED7B3 *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// System.Void LoadSceneManager::SetLoadState(SceneState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadSceneManager_SetLoadState_m05336826A421B0EC3C10E257CE907CBB8C93744D_inline (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void LoadSceneManager::ShowLoadingPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneManager_ShowLoadingPanel_m99B5E644D1FE84C327A5EDC401DF5657C48D0624 (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void LoadSceneManager::HideLoadingPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneManager_HideLoadingPanel_mE19DEBAD3E08563C3762356B3582F15DEC108561 (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Singleton_DontDestroy`1<LoadSceneManager>::.ctor()
inline void Singleton_DontDestroy_1__ctor_m89B891EB53DE373F5A677AC2CB00AC19463D76CB (Singleton_DontDestroy_1_tCA8209B6BA7D4380107625411082ABF8BD46E54D * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_DontDestroy_1_tCA8209B6BA7D4380107625411082ABF8BD46E54D *, const RuntimeMethod*))Singleton_DontDestroy_1__ctor_mFD2D777AA83F22AEDE8235B9E8D6FC837B56FA88_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Button>()
inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* GameObject_GetComponentsInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mF3139839C2BC3D5EF7908957E3571DA98A2E8D80 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<ILobbyMenu>(System.Boolean)
inline ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64* GameObject_GetComponentsInChildren_TisILobbyMenu_tB0467DF96D08B2902E9EE64A066BF958BE7B9B18_m82019BFFCD6129A09F7F07FD7B97266CE16919EB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m1162B29A5E7F58C6D71090AE00D175818BC0B955_gshared)(__this, ___includeInactive0, method);
}
// System.Void LobbyUIManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4548D9A8BEFEE1C07AC1101CFC35BA39B58D17B7 (U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void Singleton`1<LobbyUIManager>::.ctor()
inline void Singleton_1__ctor_mE2FE84704684CB0B914BA446A79B1DDC8555E4B8 (Singleton_1_t37F22396911BC0AFFCC353D1908B2E03E6CF10C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t37F22396911BC0AFFCC353D1908B2E03E6CF10C4 *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// T Singleton_DontDestroy`1<LoadSceneManager>::get_Instance()
inline LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * Singleton_DontDestroy_1_get_Instance_m0F7FEFE4C28410D4A8700CF512F22A3403E38542_inline (const RuntimeMethod* method)
{
	return ((  LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * (*) (const RuntimeMethod*))Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline)(method);
}
// System.Void LoadSceneManager::LoadSceneAsync(SceneState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneManager_LoadSceneAsync_m8380BE31B9121D5F65528078A63D376E9C48BCE6 (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, int32_t ___sceneState0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Button>()
inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* Component_GetComponentsInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m5045215CA864069866D1F0E99E242A4EEB8CE508 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void Lobby_GameStart::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_GameStart_Hide_m8FDF24FDA28A83BD3689CFC925B53D3F879C8D86 (Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84 * __this, const RuntimeMethod* method);
// System.Void Lobby_GameStart::OnPressTimeAttackButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_GameStart_OnPressTimeAttackButton_mBE2626A7726D9D335C7BB52DC4935881053FEF80 (Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84 * __this, bool ___isShadow0, const RuntimeMethod* method);
// System.Void Singleton_DontDestroy`1<MapDataTable>::.ctor()
inline void Singleton_DontDestroy_1__ctor_m46C839FE5DB299BE3801D23908C96372AD1ECBE2 (Singleton_DontDestroy_1_t12442F5DBE70FBAB401F36F35DA9FCE15FD42D98 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_DontDestroy_1_t12442F5DBE70FBAB401F36F35DA9FCE15FD42D98 *, const RuntimeMethod*))Singleton_DontDestroy_1__ctor_mFD2D777AA83F22AEDE8235B9E8D6FC837B56FA88_gshared)(__this, method);
}
// System.Void GameSystemManager::OnThroughGate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_OnThroughGate_mBD19D942F19451E99DC4612A9540CD2012A04371 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// System.Void Singleton`1<MapManager>::.ctor()
inline void Singleton_1__ctor_m503166E44D89D1E6C9FFBCA12A58A0557B8DF9E1 (Singleton_1_tB25C842AECF7533644545E81E9762A79176990C2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tB25C842AECF7533644545E81E9762A79176990C2 *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// System.Void PlayerController/<Coroutine_StartBoost>d__68::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_StartBoostU3Ed__68__ctor_m74814D518B6B3CEF337C17853BB5202FBFC5A1BF (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 GameSystemManager::get_CurrKartIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameSystemManager_get_CurrKartIndex_m62DA46414A4C533C54FB6B7A2D1219BAFA35051D_inline (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_GetWorldPose_m227D45061C7734F3ED4A43B7F89605A398BE8BB5 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___quat1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void WheelController::UpdatePos(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_UpdatePos_mE56D2D293F405C6A49FEB8DC46877FA3716D416E (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___wheel0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// T Singleton`1<InputManager>::get_Instance()
inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_inline (const RuntimeMethod* method)
{
	return ((  InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// System.Boolean InputManager::get_BoosterKeyDown()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputManager_get_BoosterKeyDown_m3F07FF6AEE044E5C3D81604C0FED0695AD38BE31_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Void PlayerController::OnBooster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnBooster_mB54C4D587FEF5BA61680419B8DE01D22220C65D2 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// System.Single InputManager::get_Horizontal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputManager_get_Horizontal_mE579B142D4714901F27361F4A14CA8C02B2604A7_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Single InputManager::get_Vertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputManager_get_Vertical_m02E6C12A4599D2F61D7558FBA32BD7F1E9CA1144_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void WheelController::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Move_m6906837F76EC4BD1752AE2FE2814331400442F94 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, float ___speed0, float ___dir1, const RuntimeMethod* method);
// System.Void WheelController::Turn(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Turn_m5A63600BB178A54CCA2094144990EEBA086F3B40 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, float ___speed0, float ___dir1, const RuntimeMethod* method);
// System.Void PlayerController::CarDriftControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CarDriftControl_mAD137B2B92FB3C0E2F2F3B2472BE41B2137B063B (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// UnityEngine.WheelFrictionCurve UnityEngine.WheelCollider::get_forwardFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelCollider_get_forwardFriction_m430D5CCD9D463482275A9058352832DA8153B7DD (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// UnityEngine.WheelFrictionCurve UnityEngine.WheelCollider::get_sidewaysFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelCollider_get_sidewaysFriction_m85AA645570CAC61DF6BC5F9B8F70409A877F7DFE (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WheelFrictionCurve::set_stiffness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8 (WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * __this, float ___value0, const RuntimeMethod* method);
// System.Void WheelController::Drift(UnityEngine.WheelFrictionCurve,UnityEngine.WheelFrictionCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Drift_mC4BDA672AE5C078A370EF926B8F4EB2DB39B0B24 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___forwardWheelFric0, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___sidewayWheelFric1, const RuntimeMethod* method);
// System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WheelCollider_GetGroundHit_mDCD55AC74710E685DBA37F02C904B8F8F3E59DB9 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB * ___hit0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.WheelHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WheelHit_get_point_m950E6B764A768CE147DB57C1CAE81D288391E5E8 (WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Single UnityEngine.WheelCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_radius_mDB04C14DAB0BB1D5D7A2D160C5EE3F159CE3FA26 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.WheelCollider::get_suspensionDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_suspensionDistance_m716BAA97103E158AAD36ECA2D775047D41ADB368 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m5190249D95CE1882B37481C5BFD2ABF201902BA5 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void PlayerController::set_CrashCnt(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_set_CrashCnt_m92C7C1BA8E01C77420D1A86400702F36EDE81DA3_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_centerOfMass_m3B13BE412D99CE5133606643F14501CF5C63CCEC (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<WheelController>()
inline WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* Component_GetComponentsInChildren_TisWheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_m17413F9808DE4439423E099650601D9332D77756 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.WheelCollider>()
inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * GameObject_GetComponent_TisWheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779_mA24D5DC9C60C0CEF50D9E3B3BE1966D8610EA617 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void PlayerController::InitWheelPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_InitWheelPos_m0C4AB2AE283811EC6F074EFCFA24B3231443836C (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Single GameSystemManager::get_ResetCoolDown()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameSystemManager_get_ResetCoolDown_mDF8175061B7707F1209DF80717A460D3ABEE3DE7_inline (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// System.Boolean InputManager::get_HandBreakKeyDown()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputManager_get_HandBreakKeyDown_m2A024A77CF8F4594D11F9EA695ABC2B894801B30_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean InputManager::get_HandBreakKeyUp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputManager_get_HandBreakKeyUp_m18D82FC0B35DA6CBA633C3BDD898EA6417F3BCB9_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Boolean InputManager::get_ResetKeyDown()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputManager_get_ResetKeyDown_m32A0EF91EFD01C6648844A1D1E7E80F78BCF8214_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Void GameSystemManager::ResetPlayerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_ResetPlayerPosition_m25B0C92C87FE24EBB5B8924297C9B67B12123D43 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_mB16F20D8A54197A9CB7648A10810E68038A49E5D (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::BoosterControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_BoosterControl_m497DBFE46661ED9C6E785581C10CA36993EAC72C (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::WheelStabilizerBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_WheelStabilizerBar_mFE7458CAF40188D739ADBAD51886F8EF10479139 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CarInfo>::.ctor()
inline void List_1__ctor_m0EDE7105BBC326084DA2BAFCD153E386F5228776 (List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MapInfo>::.ctor()
inline void List_1__ctor_m211FFA81B3AB1306FEFFCF1ACAE09CF596EC8081 (List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void Singleton`1<ResetPointManager>::.ctor()
inline void Singleton_1__ctor_m87F1DF44033454E90854C38EF11BDE3E9DA6568E (Singleton_1_tEB096B8237A899316B43C8E4D8A52048850E4BEB * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tEB096B8237A899316B43C8E4D8A52048850E4BEB *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_forwardFriction(UnityEngine.WheelFrictionCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_forwardFriction_mEC613D233431786260E97DA4B2D14C597A4390A8 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_sidewaysFriction(UnityEngine.WheelFrictionCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_sidewaysFriction_mEE0EFD1DFE53A0FA023F8D1E05840A58D69784C2 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator InGameUiManager::Coroutine_TextScaleFadeIn(UnityEngine.UI.Text,UnityEngine.AnimationCurve,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameUiManager_Coroutine_TextScaleFadeIn_mF2499A7C58A9D79C30223A90A06BAAC7E846DECB (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___from2, float ___to3, int32_t ___repeatCnt4, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerController::Coroutine_StartBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Coroutine_StartBoost_m37C3D0BAF50DF3D1742F9229DBF708BDB8419E01 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator InGameUiManager::Coroutine_TextAlphaFadeout(UnityEngine.UI.Text,UnityEngine.AnimationCurve,System.Single,System.Single,System.Single,System.Single[],InGameUiManager/FuncDel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameUiManager_Coroutine_TextAlphaFadeout_mB18DF43D5719A3F02E12808A70B00BC3C2B035C5 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___from2, float ___to3, float ___duration4, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rgbColors5, FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * ___funcDel6, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Shadow_get_effectColor_m00C1776542129598C244BB469E7128D60F6BCAC2_inline (Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_set_effectColor_mFB6601937B8DCBB52A6095435A380C4AE0A807DF (Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void InGameUiManager/FuncDel::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncDel_Invoke_mF7A2362A047D06012378F45363AB52B598EA8898 (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void LobbyUIManager::OnPressButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyUIManager_OnPressButton_m3AAEE85039A8C84784BD86CAFCDBDEDB70F9AA14 (LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CarData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarData__ctor_mB2680D79E61261545B5E811E7431D2196E40D2FE (CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CarDataTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarDataTable__ctor_mED64E045105947D9344DDA2464CBA1203D4954CA (CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1__ctor_m604193DC57C1DEEC26EE50B1C81D2A8E4F3B416B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_DontDestroy_1__ctor_m604193DC57C1DEEC26EE50B1C81D2A8E4F3B416B(__this, /*hidden argument*/Singleton_DontDestroy_1__ctor_m604193DC57C1DEEC26EE50B1C81D2A8E4F3B416B_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CarInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarInfo__ctor_mF6C3B57DDE5882675A7065BCD1AF384A3CDA8092 (CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CheckpointController[] CheckPointManager::get_CheckPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* CheckPointManager_get_CheckPoints_m4A796B083369C9D84E226DF70120F939891E1E99 (CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * __this, const RuntimeMethod* method)
{
	{
		// public CheckpointController[] CheckPoints { get { return m_checkPoints; } }
		CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* L_0 = __this->get_m_checkPoints_5();
		return L_0;
	}
}
// System.Void CheckPointManager::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckPointManager_OnStart_m46C08CCE4860B9C32F1BC0FF4032A13968AAAB9C (CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA_m75B3255B5CFDEC76AF04D425B615C4337BC9E735_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// m_checkPoints = GetComponentsInChildren<CheckpointController>();
		CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* L_0;
		L_0 = Component_GetComponentsInChildren_TisCheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA_m75B3255B5CFDEC76AF04D425B615C4337BC9E735(__this, /*hidden argument*/Component_GetComponentsInChildren_TisCheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA_m75B3255B5CFDEC76AF04D425B615C4337BC9E735_RuntimeMethod_var);
		__this->set_m_checkPoints_5(L_0);
		// var length = m_checkPoints.Length;
		CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* L_1 = __this->get_m_checkPoints_5();
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		// for(int i = 0; i < length; i++)
		V_1 = 0;
		goto IL_002b;
	}

IL_0019:
	{
		// m_checkPoints[i].CheckNumber = i;
		CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* L_2 = __this->get_m_checkPoints_5();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		NullCheck(L_5);
		CheckpointController_set_CheckNumber_m5939CB32D3925250499243375E9CC174DAACE7BA_inline(L_5, L_6, /*hidden argument*/NULL);
		// for(int i = 0; i < length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002b:
	{
		// for(int i = 0; i < length; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CheckPointManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckPointManager__ctor_m9C654C31587E802A78EBE08F3A4B7D642A1FD530 (CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m8AE824D08625930D68DF7DBDDA540777003EB473_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m8AE824D08625930D68DF7DBDDA540777003EB473(__this, /*hidden argument*/Singleton_1__ctor_m8AE824D08625930D68DF7DBDDA540777003EB473_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CheckpointController::set_CheckNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointController_set_CheckNumber_m5939CB32D3925250499243375E9CC174DAACE7BA (CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CheckNumber { set { m_checkNumber = value; } }
		int32_t L_0 = ___value0;
		__this->set_m_checkNumber_4(L_0);
		// public int CheckNumber { set { m_checkNumber = value; } }
		return;
	}
}
// System.Void CheckpointController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointController_OnTriggerEnter_mBC978B1277FAB4E7404E068E19525E6E34C0D6C4 (CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// GameSystemManager.Instance.OnThroughCheckPoint(m_checkNumber, this);
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_2;
		L_2 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		int32_t L_3 = __this->get_m_checkNumber_4();
		NullCheck(L_2);
		GameSystemManager_OnThroughCheckPoint_m41349E32EE71EB704BA3B136AEDD2B19F8425F3B(L_2, L_3, __this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CheckpointController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointController__ctor_m5DE317EF1157E676EFB1403675CA7267190EF502 (CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// PlayerData DataManager::get_PlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * DataManager_get_PlayerData_m8FA62B56F659CBCADE516A5B93460BF4E00DE0F7 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerData PlayerData { get { return m_playerData; } }
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_0 = __this->get_m_playerData_5();
		return L_0;
	}
}
// System.Void DataManager::UpdateMapBestTime(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_UpdateMapBestTime_mD0CEAB99C8721DBA4AA1D3B7351EFE24CAC28320 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, float ___time0, int32_t ___mapIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_playerData.mapList[mapIndex].bestTime = time;
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_0 = __this->get_m_playerData_5();
		NullCheck(L_0);
		List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * L_1 = L_0->get_mapList_1();
		int32_t L_2 = ___mapIndex1;
		NullCheck(L_1);
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_3;
		L_3 = List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_RuntimeMethod_var);
		float L_4 = ___time0;
		NullCheck(L_3);
		L_3->set_bestTime_1(L_4);
		// }
		return;
	}
}
// System.Single DataManager::GetMapBestTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DataManager_GetMapBestTime_m541E4021EBF29AB0E1F06AFDD91956CABA7A996B (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, int32_t ___mapIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_playerData.mapList[mapIndex].bestTime;
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_0 = __this->get_m_playerData_5();
		NullCheck(L_0);
		List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * L_1 = L_0->get_mapList_1();
		int32_t L_2 = ___mapIndex0;
		NullCheck(L_1);
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_3;
		L_3 = List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_RuntimeMethod_var);
		NullCheck(L_3);
		float L_4 = L_3->get_bestTime_1();
		return L_4;
	}
}
// System.String DataManager::GetMapName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataManager_GetMapName_m794F0F889B3134E7F4755B364AEA92B66D8B2215 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, int32_t ___mapIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_playerData.mapList[mapIndex].data.name;
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_0 = __this->get_m_playerData_5();
		NullCheck(L_0);
		List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * L_1 = L_0->get_mapList_1();
		int32_t L_2 = ___mapIndex0;
		NullCheck(L_1);
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_3;
		L_3 = List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_RuntimeMethod_var);
		NullCheck(L_3);
		MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * L_4 = L_3->get_data_0();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_name_0();
		return L_5;
	}
}
// PlayerData DataManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * DataManager_Load_mCB3862B253C5BE2058DA10F648A53460DE398FF4 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_m1BC0A217D6A8FFBE81E040268CC950AEC4BECDD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D5A4730B7DD6D0A7F69964933E6C49EFF1B39BD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var jsonData = PlayerPrefs.GetString("PLAYER_DATA", string.Empty);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_m5709C9DC233D10A7E9AF4BCC9639E3F18FE36831(_stringLiteral8D5A4730B7DD6D0A7F69964933E6C49EFF1B39BD, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (string.IsNullOrEmpty(jsonData))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return null;
		return (PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 *)NULL;
	}

IL_001a:
	{
		// return JsonUtility.FromJson<PlayerData>(jsonData);
		String_t* L_4 = V_0;
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_5;
		L_5 = JsonUtility_FromJson_TisPlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_m1BC0A217D6A8FFBE81E040268CC950AEC4BECDD0(L_4, /*hidden argument*/JsonUtility_FromJson_TisPlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_m1BC0A217D6A8FFBE81E040268CC950AEC4BECDD0_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void DataManager::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_Save_mB970570AAF16A2836DD9FDA18F7E811E1520662B (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D5A4730B7DD6D0A7F69964933E6C49EFF1B39BD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var playerJsonData = JsonUtility.ToJson(m_playerData);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_0 = __this->get_m_playerData_5();
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// PlayerPrefs.SetString("PLAYER_DATA", playerJsonData);
		String_t* L_2 = V_0;
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral8D5A4730B7DD6D0A7F69964933E6C49EFF1B39BD, L_2, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DataManager::UpdateCarDatas(CarInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_UpdateCarDatas_m1670675ACF25ABC994DC3ABF591007AA62C31940 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * ___carInfo0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_mDA4E9233BC020115A3780F03671BB403CC56615E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// carInfo.data = CarDataTable.Instance.m_carDatas[index];
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_0 = ___carInfo0;
		CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A * L_1;
		L_1 = Singleton_DontDestroy_1_get_Instance_mDA4E9233BC020115A3780F03671BB403CC56615E_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_mDA4E9233BC020115A3780F03671BB403CC56615E_RuntimeMethod_var);
		NullCheck(L_1);
		CarDataU5BU5D_t0688CEAF46D508A83CFA3A8F4307E35DEA5ED566* L_2 = L_1->get_m_carDatas_5();
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		L_0->set_data_0(L_5);
		// }
		return;
	}
}
// System.Void DataManager::UpdateMapDatas(MapInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_UpdateMapDatas_m49787FA8C1E724CBE1B0CD71D2C84E98ED149C70 (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * ___mapInfo0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m48013895EE6E21395EF2E3747418C7FB8FE41662_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mapInfo.data = MapDataTable.Instance.m_mapDataTable[index];
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_0 = ___mapInfo0;
		MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB * L_1;
		L_1 = Singleton_DontDestroy_1_get_Instance_m48013895EE6E21395EF2E3747418C7FB8FE41662_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m48013895EE6E21395EF2E3747418C7FB8FE41662_RuntimeMethod_var);
		NullCheck(L_1);
		MapDataU5BU5D_t88BEB0BB3AA596F06D030B2EE5023E241D7DE340* L_2 = L_1->get_m_mapDataTable_5();
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		L_0->set_data_0(L_5);
		// }
		return;
	}
}
// System.Void DataManager::OnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_OnAwake_m876F55CFCD0A7990DB40C844625FE3B06501466E (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m019F0C56BDA1D57FD8B1B7C7EDF1205031C1AB87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE58075DCA2DD492591EE826F55B64888CAE37419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B9E7EBC2D36456DFD010A4AE30231AD08EAFB9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m48013895EE6E21395EF2E3747418C7FB8FE41662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_mDA4E9233BC020115A3780F03671BB403CC56615E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A9915B8AA9E73B0828407BFD932F2FCA84292B6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * V_3 = NULL;
	int32_t V_4 = 0;
	MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * V_5 = NULL;
	{
		// m_playerData = Load();
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_0;
		L_0 = DataManager_Load_mCB3862B253C5BE2058DA10F648A53460DE398FF4(__this, /*hidden argument*/NULL);
		__this->set_m_playerData_5(L_0);
		// if (m_playerData == null)
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_1 = __this->get_m_playerData_5();
		if (L_1)
		{
			goto IL_00f7;
		}
	}
	{
		// m_playerData = new PlayerData();
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_2 = (PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 *)il2cpp_codegen_object_new(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_il2cpp_TypeInfo_var);
		PlayerData__ctor_mC2DA6B32832AB92B19E799148968590FF1F28C1B(L_2, /*hidden argument*/NULL);
		__this->set_m_playerData_5(L_2);
		// m_playerData.userName = "Lucy";
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_3 = __this->get_m_playerData_5();
		NullCheck(L_3);
		L_3->set_userName_2(_stringLiteral9A9915B8AA9E73B0828407BFD932F2FCA84292B6);
		// var dataLength = CarDataTable.Instance.m_carDatas.Length;
		CarDataTable_t0147DC5836BAE4CA6725BF326FC113A82356480A * L_4;
		L_4 = Singleton_DontDestroy_1_get_Instance_mDA4E9233BC020115A3780F03671BB403CC56615E_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_mDA4E9233BC020115A3780F03671BB403CC56615E_RuntimeMethod_var);
		NullCheck(L_4);
		CarDataU5BU5D_t0688CEAF46D508A83CFA3A8F4307E35DEA5ED566* L_5 = L_4->get_m_carDatas_5();
		NullCheck(L_5);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		// for (int i = 0; i < dataLength; i++)
		V_2 = 0;
		goto IL_0088;
	}

IL_0043:
	{
		// CarInfo carInfo = new CarInfo();
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_6 = (CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C *)il2cpp_codegen_object_new(CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C_il2cpp_TypeInfo_var);
		CarInfo__ctor_mF6C3B57DDE5882675A7065BCD1AF384A3CDA8092(L_6, /*hidden argument*/NULL);
		V_3 = L_6;
		// UpdateCarDatas(carInfo, i);
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_7 = V_3;
		int32_t L_8 = V_2;
		DataManager_UpdateCarDatas_m1670675ACF25ABC994DC3ABF591007AA62C31940(__this, L_7, L_8, /*hidden argument*/NULL);
		// carInfo.data.kartPaintMat.color = carInfo.data.kartColor;
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_9 = V_3;
		NullCheck(L_9);
		CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * L_10 = L_9->get_data_0();
		NullCheck(L_10);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = L_10->get_kartPaintMat_0();
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_12 = V_3;
		NullCheck(L_12);
		CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * L_13 = L_12->get_data_0();
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = L_13->get_kartColor_1();
		NullCheck(L_11);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_11, L_14, /*hidden argument*/NULL);
		// carInfo.isPlayable = false;
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_15 = V_3;
		NullCheck(L_15);
		L_15->set_isPlayable_1((bool)0);
		// m_playerData.carsList.Add(carInfo);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_16 = __this->get_m_playerData_5();
		NullCheck(L_16);
		List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 * L_17 = L_16->get_carsList_0();
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_18 = V_3;
		NullCheck(L_17);
		List_1_Add_mE58075DCA2DD492591EE826F55B64888CAE37419(L_17, L_18, /*hidden argument*/List_1_Add_mE58075DCA2DD492591EE826F55B64888CAE37419_RuntimeMethod_var);
		// for (int i = 0; i < dataLength; i++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0088:
	{
		// for (int i = 0; i < dataLength; i++)
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		// var mapDatalength = MapDataTable.Instance.m_mapDataTable.Length;
		MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB * L_22;
		L_22 = Singleton_DontDestroy_1_get_Instance_m48013895EE6E21395EF2E3747418C7FB8FE41662_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m48013895EE6E21395EF2E3747418C7FB8FE41662_RuntimeMethod_var);
		NullCheck(L_22);
		MapDataU5BU5D_t88BEB0BB3AA596F06D030B2EE5023E241D7DE340* L_23 = L_22->get_m_mapDataTable_5();
		NullCheck(L_23);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)));
		// for (int i = 0; i < mapDatalength; i++)
		V_4 = 0;
		goto IL_00db;
	}

IL_009e:
	{
		// MapInfo mapInfo = new MapInfo();
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_24 = (MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 *)il2cpp_codegen_object_new(MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3_il2cpp_TypeInfo_var);
		MapInfo__ctor_mE155B555F97BC250A30AC06A6053E0370CA024A7(L_24, /*hidden argument*/NULL);
		V_5 = L_24;
		// UpdateMapDatas(mapInfo, i);
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_25 = V_5;
		int32_t L_26 = V_4;
		DataManager_UpdateMapDatas_m49787FA8C1E724CBE1B0CD71D2C84E98ED149C70(__this, L_25, L_26, /*hidden argument*/NULL);
		// mapInfo.bestTime = float.PositiveInfinity;
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_27 = V_5;
		NullCheck(L_27);
		L_27->set_bestTime_1((std::numeric_limits<float>::infinity()));
		// mapInfo.recentPlaydate = 0;
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_28 = V_5;
		NullCheck(L_28);
		L_28->set_recentPlaydate_2(0);
		// m_playerData.mapList.Add(mapInfo);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_29 = __this->get_m_playerData_5();
		NullCheck(L_29);
		List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * L_30 = L_29->get_mapList_1();
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_31 = V_5;
		NullCheck(L_30);
		List_1_Add_m019F0C56BDA1D57FD8B1B7C7EDF1205031C1AB87(L_30, L_31, /*hidden argument*/List_1_Add_m019F0C56BDA1D57FD8B1B7C7EDF1205031C1AB87_RuntimeMethod_var);
		// for (int i = 0; i < mapDatalength; i++)
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00db:
	{
		// for (int i = 0; i < mapDatalength; i++)
		int32_t L_33 = V_4;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_009e;
		}
	}
	{
		// m_playerData.carsList[0].isPlayable = true;
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_35 = __this->get_m_playerData_5();
		NullCheck(L_35);
		List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 * L_36 = L_35->get_carsList_0();
		NullCheck(L_36);
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_37;
		L_37 = List_1_get_Item_m1B9E7EBC2D36456DFD010A4AE30231AD08EAFB9D_inline(L_36, 0, /*hidden argument*/List_1_get_Item_m1B9E7EBC2D36456DFD010A4AE30231AD08EAFB9D_RuntimeMethod_var);
		NullCheck(L_37);
		L_37->set_isPlayable_1((bool)1);
	}

IL_00f7:
	{
		// Save();
		DataManager_Save_mB970570AAF16A2836DD9FDA18F7E811E1520662B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DataManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager__ctor_m8A6DD19CA5399C36D89F0B103A74AB7F0A7BA4DE (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1__ctor_m6176AF940683CEDA527E07B16229747C10A5792C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_DontDestroy_1__ctor_m6176AF940683CEDA527E07B16229747C10A5792C(__this, /*hidden argument*/Singleton_DontDestroy_1__ctor_m6176AF940683CEDA527E07B16229747C10A5792C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameSettings::OnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_OnAwake_m0D5CDC9CAE40014E9BCF82CA28BAD883AFDEFA6E (GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = 500;
		Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC(((int32_t)500), /*hidden argument*/NULL);
		// Debug.unityLogger.logEnabled = false;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.ILogger::set_logEnabled(System.Boolean) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_0, (bool)0);
		// }
		return;
	}
}
// System.Void GameSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings__ctor_m993AC39E0A76664B1DCE7526186B5BAF000D42E1 (GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1__ctor_m8C15519BEA644C759C8915FEA98097675E2E65E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_DontDestroy_1__ctor_m8C15519BEA644C759C8915FEA98097675E2E65E2(__this, /*hidden argument*/Singleton_DontDestroy_1__ctor_m8C15519BEA644C759C8915FEA98097675E2E65E2_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean GameSystemManager::get_IsEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameSystemManager_get_IsEnd_m58870F17DE167ED6588D6D5345A7731FB8AF5B9C (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsEnd { get { return m_finishLapCnt == m_mapLapTime; } }
		int32_t L_0 = __this->get_m_finishLapCnt_9();
		int32_t L_1 = __this->get_m_mapLapTime_12();
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Boolean GameSystemManager::get_IsReverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameSystemManager_get_IsReverse_m66EBD60C2766989DD5BE2E47BAEAA22F9B4038B5 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReverse { get { return m_isReverse; } }
		bool L_0 = __this->get_m_isReverse_20();
		return L_0;
	}
}
// System.Int32 GameSystemManager::get_CurrMapIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameSystemManager_get_CurrMapIndex_mAE4D3CDD7FE836A079A8B79444E3831D9BF332A9 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public int CurrMapIndex { get { return m_currMapIndex; } }
		int32_t L_0 = __this->get_m_currMapIndex_14();
		return L_0;
	}
}
// System.Int32 GameSystemManager::get_CurrKartIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameSystemManager_get_CurrKartIndex_m62DA46414A4C533C54FB6B7A2D1219BAFA35051D (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public int CurrKartIndex { get { return m_currKartIndex; } }
		int32_t L_0 = __this->get_m_currKartIndex_24();
		return L_0;
	}
}
// System.Single GameSystemManager::get_AverageSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameSystemManager_get_AverageSpeed_m935DFF74B384739420D69119981A5BAE42059AB3 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public float AverageSpeed { get { return (m_twoCpsDist / m_timer) * 3.6f; } }
		float L_0 = __this->get_m_twoCpsDist_7();
		float L_1 = __this->get_m_timer_31();
		return ((float)il2cpp_codegen_multiply((float)((float)((float)L_0/(float)L_1)), (float)(3.5999999f)));
	}
}
// System.Single GameSystemManager::get_CurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameSystemManager_get_CurrentTime_mCC545336B16384620D9C1D0DF9188F66605049C8 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public float CurrentTime { get { return m_timer; } }
		float L_0 = __this->get_m_timer_31();
		return L_0;
	}
}
// System.Single GameSystemManager::get_ResetCoolDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameSystemManager_get_ResetCoolDown_mDF8175061B7707F1209DF80717A460D3ABEE3DE7 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public float ResetCoolDown { get { return m_resetCooldown; } }
		float L_0 = __this->get_m_resetCooldown_17();
		return L_0;
	}
}
// System.Collections.IEnumerator GameSystemManager::Coroutine_CountDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameSystemManager_Coroutine_CountDown_m5FA213D8405A69914CFD9C43B2DB2B91D9093006 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE * L_0 = (U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE *)il2cpp_codegen_object_new(U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE_il2cpp_TypeInfo_var);
		U3CCoroutine_CountDownU3Ed__48__ctor_mDB139B7307811BF2976DB22099985FE674B5AE02(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameSystemManager::SetReverse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_SetReverse_m5CF03927DE2BF485D77D94FC35871B7B598D0FB2 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_warningImage.enabled = value;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_m_warningImage_29();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, L_1, /*hidden argument*/NULL);
		// m_isReverse = value;
		bool L_2 = ___value0;
		__this->set_m_isReverse_20(L_2);
		// }
		return;
	}
}
// System.Void GameSystemManager::SetReverseCheckPos(GameSystemManager/ReverseCheckPos)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_SetReverseCheckPos_m8F928B0DCB017CBF3305F0BCC807BBAD79A301B8 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, int32_t ___pos0, const RuntimeMethod* method)
{
	{
		// m_reverseCheckPos = pos;
		int32_t L_0 = ___pos0;
		__this->set_m_reverseCheckPos_8(L_0);
		// }
		return;
	}
}
// System.Void GameSystemManager::OnThroughCheckPoint(System.Int32,CheckpointController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_OnThroughCheckPoint_m41349E32EE71EB704BA3B136AEDD2B19F8425F3B (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, int32_t ___checkNum0, CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * ___cpObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m2796BA4A4BA944D0D56474980415A526E15F33E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetReverseCheckPos(m_reverseCheckPosDic[cpObj.tag]);
		Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * L_0 = __this->get_m_reverseCheckPosDic_6();
		CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * L_1 = ___cpObj1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Dictionary_2_get_Item_m2796BA4A4BA944D0D56474980415A526E15F33E7(L_0, L_2, /*hidden argument*/Dictionary_2_get_Item_m2796BA4A4BA944D0D56474980415A526E15F33E7_RuntimeMethod_var);
		GameSystemManager_SetReverseCheckPos_m8F928B0DCB017CBF3305F0BCC807BBAD79A301B8_inline(__this, L_3, /*hidden argument*/NULL);
		// if (checkNum == m_nextCheckPoint)
		int32_t L_4 = ___checkNum0;
		int32_t L_5 = __this->get_m_nextCheckPoint_13();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0053;
		}
	}
	{
		// m_nextCheckPoint++;
		int32_t L_6 = __this->get_m_nextCheckPoint_13();
		__this->set_m_nextCheckPoint_13(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		// if (m_nextCheckPoint > m_checkPointsLength - 1)
		int32_t L_7 = __this->get_m_nextCheckPoint_13();
		int32_t L_8 = __this->get_m_checkPointsLength_10();
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))))
		{
			goto IL_0053;
		}
	}
	{
		// m_nextCheckPoint = 0;
		__this->set_m_nextCheckPoint_13(0);
		// m_finishLapCnt++;
		int32_t L_9 = __this->get_m_finishLapCnt_9();
		__this->set_m_finishLapCnt_9(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void GameSystemManager::OnThroughGate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_OnThroughGate_mBD19D942F19451E99DC4612A9540CD2012A04371 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_finishLapCnt > 0)
		int32_t L_0 = __this->get_m_finishLapCnt_9();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		// m_lapTime++;
		int32_t L_1 = __this->get_m_lapTime_11();
		__this->set_m_lapTime_11(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// CalculateBestTime();
		GameSystemManager_CalculateBestTime_mD5D40841D64216295B777CC99F3AB4EEB613F7A7(__this, /*hidden argument*/NULL);
		// InGameUiManager.Instance.UpdateStaticCanvas(m_mapLapTime, m_lapTime, m_bestTime, m_lapTime == m_mapLapTime);
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_2;
		L_2 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		int32_t L_3 = __this->get_m_mapLapTime_12();
		int32_t L_4 = __this->get_m_lapTime_11();
		float L_5 = __this->get_m_bestTime_33();
		int32_t L_6 = __this->get_m_lapTime_11();
		int32_t L_7 = __this->get_m_mapLapTime_12();
		NullCheck(L_2);
		InGameUiManager_UpdateStaticCanvas_mC7F4D042A6847D0C10500AC0B204EA54574CB724(L_2, L_3, L_4, L_5, (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), /*hidden argument*/NULL);
		// if (IsEnd)
		bool L_8;
		L_8 = GameSystemManager_get_IsEnd_m58870F17DE167ED6588D6D5345A7731FB8AF5B9C(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// OnFinish();
		GameSystemManager_OnFinish_mF5A0F4271BD032FA9E62379DDB9C0483AF4A3DED(__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void GameSystemManager::ConvetTime(System.Single,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_ConvetTime_m9CC274B393249FACDD6343441899D627F11D33B2 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, float ___time0, int32_t* ___minute1, int32_t* ___second2, int32_t* ___millisecond3, const RuntimeMethod* method)
{
	{
		// minute = Mathf.FloorToInt(time / 60f);
		int32_t* L_0 = ___minute1;
		float L_1 = ___time0;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)((float)L_1/(float)(60.0f))), /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_2;
		// second = (int)time % 60;
		int32_t* L_3 = ___second2;
		float L_4 = ___time0;
		*((int32_t*)L_3) = (int32_t)((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_4)%(int32_t)((int32_t)60)));
		// millisecond = (int)(time * 100) % 100;
		int32_t* L_5 = ___millisecond3;
		float L_6 = ___time0;
		*((int32_t*)L_5) = (int32_t)((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)L_6, (float)(100.0f))))%(int32_t)((int32_t)100)));
		// }
		return;
	}
}
// System.Void GameSystemManager::OnFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_OnFinish_mF5A0F4271BD032FA9E62379DDB9C0483AF4A3DED (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF77A1C26EEAC2E2055D66E78756654DC9D0A4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8EB61CB0D400CA4743BBD9C47AD12E87CF0E392);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// string completeText = "���� ���";
		V_0 = _stringLiteralF8EB61CB0D400CA4743BBD9C47AD12E87CF0E392;
		// float mapTime = DataManager.Instance.GetMapBestTime(m_currMapIndex);
		DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * L_0;
		L_0 = Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		int32_t L_1 = __this->get_m_currMapIndex_14();
		NullCheck(L_0);
		float L_2;
		L_2 = DataManager_GetMapBestTime_m541E4021EBF29AB0E1F06AFDD91956CABA7A996B(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// if(mapTime > m_timer)
		float L_3 = V_1;
		float L_4 = __this->get_m_timer_31();
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_003e;
		}
	}
	{
		// mapTime = m_timer;
		float L_5 = __this->get_m_timer_31();
		V_1 = L_5;
		// completeText = "�ű��";
		V_0 = _stringLiteralBEF77A1C26EEAC2E2055D66E78756654DC9D0A4F;
		// DataManager.Instance.UpdateMapBestTime(mapTime, m_currMapIndex);
		DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * L_6;
		L_6 = Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		float L_7 = V_1;
		int32_t L_8 = __this->get_m_currMapIndex_14();
		NullCheck(L_6);
		DataManager_UpdateMapBestTime_mD0CEAB99C8721DBA4AA1D3B7351EFE24CAC28320(L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// m_player.IsStart = false;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_9 = __this->get_m_player_23();
		NullCheck(L_9);
		PlayerController_set_IsStart_m5A2591E0C7CDC386CFBC7106F6B67BBEA6470ED3_inline(L_9, (bool)0, /*hidden argument*/NULL);
		// m_isStart = false;
		__this->set_m_isStart_19((bool)0);
		// m_player.Break(1000f);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_10 = __this->get_m_player_23();
		NullCheck(L_10);
		PlayerController_Break_m1D52BD0C1FAB988971A3AD7B832909D5044F07C7(L_10, (1000.0f), /*hidden argument*/NULL);
		// InGameUiManager.Instance.SetFinishUI(completeText, mapTime, m_timer); //���� ������ �����鸸 �Ű������� �Ѱ���, ���� ���ɼ��� ���� �������� UI Manager���� ó��
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_11;
		L_11 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		String_t* L_12 = V_0;
		float L_13 = V_1;
		float L_14 = __this->get_m_timer_31();
		NullCheck(L_11);
		InGameUiManager_SetFinishUI_mC9F64C14DD7630362D9F728036F9B9D9FFB458B4(L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		// DataManager.Instance.Save();
		DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * L_15;
		L_15 = Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		NullCheck(L_15);
		DataManager_Save_mB970570AAF16A2836DD9FDA18F7E811E1520662B(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameSystemManager::ResetPlayerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_ResetPlayerPosition_m25B0C92C87FE24EBB5B8924297C9B67B12123D43 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m51871C9785657A4252A3CFA65DFF568D3B78FA84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1975AC104F214C808CE7580A79C17D8AC1141A3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral932549B56F93B5D5FA036D903946293A2525FA1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53039B802B4AD3E93BA03948255B227786E12B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE4EACF6D5D4092E6A48C09BCCB97238EA068EB3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// if (m_isCanReset)
		bool L_0 = __this->get_m_isCanReset_22();
		if (!L_0)
		{
			goto IL_0190;
		}
	}
	{
		// var length = ResetPointManager.Instance.ResetPoints.Length;
		ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * L_1;
		L_1 = Singleton_1_get_Instance_m51871C9785657A4252A3CFA65DFF568D3B78FA84_inline(/*hidden argument*/Singleton_1_get_Instance_m51871C9785657A4252A3CFA65DFF568D3B78FA84_RuntimeMethod_var);
		NullCheck(L_1);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2;
		L_2 = ResetPointManager_get_ResetPoints_m92FC544988A8D4229C3DFBF95221117AD43E1D1C_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		// Vector3 nearesetPos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_1 = L_3;
		// Quaternion resetPointRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		V_2 = L_4;
		// float nearestDist = float.PositiveInfinity;
		V_3 = (std::numeric_limits<float>::infinity());
		// float dist = 0f;
		V_4 = (0.0f);
		// for(int i = 1; i < length; i++)
		V_5 = 1;
		goto IL_0151;
	}

IL_0039:
	{
		// var pos = ResetPointManager.Instance.ResetPoints[i].position;
		ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * L_5;
		L_5 = Singleton_1_get_Instance_m51871C9785657A4252A3CFA65DFF568D3B78FA84_inline(/*hidden argument*/Singleton_1_get_Instance_m51871C9785657A4252A3CFA65DFF568D3B78FA84_RuntimeMethod_var);
		NullCheck(L_5);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6;
		L_6 = ResetPointManager_get_ResetPoints_m92FC544988A8D4229C3DFBF95221117AD43E1D1C_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_5;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		V_6 = L_10;
		// var dir = (pos - m_player.transform.position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_6;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_12 = __this->get_m_player_23();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_14, /*hidden argument*/NULL);
		V_7 = L_15;
		// var dot = Vector3.Dot(m_player.transform.forward, dir.normalized);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_16 = __this->get_m_player_23();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		float L_20;
		L_20 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_18, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		// if (dot > 0) continue;
		float L_21 = V_8;
		if ((((float)L_21) > ((float)(0.0f))))
		{
			goto IL_014b;
		}
	}
	{
		// resetPointRotation = ResetPointManager.Instance.ResetPoints[i].localRotation;
		ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * L_22;
		L_22 = Singleton_1_get_Instance_m51871C9785657A4252A3CFA65DFF568D3B78FA84_inline(/*hidden argument*/Singleton_1_get_Instance_m51871C9785657A4252A3CFA65DFF568D3B78FA84_RuntimeMethod_var);
		NullCheck(L_22);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_23;
		L_23 = ResetPointManager_get_ResetPoints_m92FC544988A8D4229C3DFBF95221117AD43E1D1C_inline(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// Debug.Log("Forward : " + resetPointRotation);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28 = V_2;
		V_9 = L_28;
		String_t* L_29;
		L_29 = Quaternion_ToString_mD3D4C66907C994D30D99E76063623F7000F6998E((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_9), /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1975AC104F214C808CE7580A79C17D8AC1141A3A, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_30, /*hidden argument*/NULL);
		// Debug.Log("resetPoint position : " + pos.normalized);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), /*hidden argument*/NULL);
		V_10 = L_31;
		String_t* L_32;
		L_32 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), /*hidden argument*/NULL);
		String_t* L_33;
		L_33 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral932549B56F93B5D5FA036D903946293A2525FA1E, L_32, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_33, /*hidden argument*/NULL);
		// Debug.Log("Player Forward : " + m_player.transform.forward);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_34 = __this->get_m_player_23();
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_35, /*hidden argument*/NULL);
		V_10 = L_36;
		String_t* L_37;
		L_37 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEE4EACF6D5D4092E6A48C09BCCB97238EA068EB3, L_37, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_38, /*hidden argument*/NULL);
		// Debug.Log("index : " + i + " : " + dot);
		String_t* L_39;
		L_39 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_5), /*hidden argument*/NULL);
		String_t* L_40;
		L_40 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_8), /*hidden argument*/NULL);
		String_t* L_41;
		L_41 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralB53039B802B4AD3E93BA03948255B227786E12B3, L_39, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, L_40, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_41, /*hidden argument*/NULL);
		// dist = dir.sqrMagnitude;
		float L_42;
		L_42 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		V_4 = L_42;
		// if (dist < nearestDist)
		float L_43 = V_4;
		float L_44 = V_3;
		if ((!(((float)L_43) < ((float)L_44))))
		{
			goto IL_014b;
		}
	}
	{
		// nearesetPos = pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_6;
		V_1 = L_45;
		// nearestDist = dist;
		float L_46 = V_4;
		V_3 = L_46;
	}

IL_014b:
	{
		// for(int i = 1; i < length; i++)
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0151:
	{
		// for(int i = 1; i < length; i++)
		int32_t L_48 = V_5;
		int32_t L_49 = V_0;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0039;
		}
	}
	{
		// Debug.Log(nearesetPos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = L_50;
		RuntimeObject * L_52 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_51);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_52, /*hidden argument*/NULL);
		// m_player.transform.SetPositionAndRotation(nearesetPos, resetPointRotation);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_53 = __this->get_m_player_23();
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56 = V_2;
		NullCheck(L_54);
		Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE(L_54, L_55, L_56, /*hidden argument*/NULL);
		// m_player.SetState(PlayerController.State.Reset);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_57 = __this->get_m_player_23();
		NullCheck(L_57);
		PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5_inline(L_57, 2, /*hidden argument*/NULL);
		// m_isReset = true;
		__this->set_m_isReset_21((bool)1);
		// m_isCanReset = false;
		__this->set_m_isCanReset_22((bool)0);
	}

IL_0190:
	{
		// }
		return;
	}
}
// System.Void GameSystemManager::CalculateBestTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_CalculateBestTime_mD5D40841D64216295B777CC99F3AB4EEB613F7A7 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// if (m_bestTime > m_timer - m_prevTime)
		float L_0 = __this->get_m_bestTime_33();
		float L_1 = __this->get_m_timer_31();
		float L_2 = __this->get_m_prevTime_32();
		if ((!(((float)L_0) > ((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))))))
		{
			goto IL_0028;
		}
	}
	{
		// m_bestTime = m_timer - m_prevTime;
		float L_3 = __this->get_m_timer_31();
		float L_4 = __this->get_m_prevTime_32();
		__this->set_m_bestTime_33(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
	}

IL_0028:
	{
		// m_prevTime = m_timer;
		float L_5 = __this->get_m_timer_31();
		__this->set_m_prevTime_32(L_5);
		// }
		return;
	}
}
// System.Void GameSystemManager::CheckReverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_CheckReverse_m7F5AB12852D604EF7631DB14AC6D0C9D2C38EDCC (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (m_reverseCheckPos == ReverseCheckPos.Z || m_reverseCheckPos == ReverseCheckPos.NegativeZ)
		int32_t L_0 = __this->get_m_reverseCheckPos_8();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->get_m_reverseCheckPos_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_002d;
		}
	}

IL_0012:
	{
		// m_currPos = m_player.transform.position.z;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_2 = __this->get_m_player_23();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		__this->set_m_currPos_15(L_5);
	}

IL_002d:
	{
		// if(m_reverseCheckPos == ReverseCheckPos.X || m_reverseCheckPos == ReverseCheckPos.NegativeX)
		int32_t L_6 = __this->get_m_reverseCheckPos_8();
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->get_m_reverseCheckPos_8();
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_005a;
		}
	}

IL_003f:
	{
		// m_currPos = m_player.transform.position.x;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_8 = __this->get_m_player_23();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		__this->set_m_currPos_15(L_11);
	}

IL_005a:
	{
		// switch (m_reverseCheckPos)
		int32_t L_12 = __this->get_m_reverseCheckPos_8();
		V_0 = L_12;
		int32_t L_13 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
		{
			case 0:
			{
				goto IL_009b;
			}
			case 1:
			{
				goto IL_007b;
			}
			case 2:
			{
				goto IL_007b;
			}
			case 3:
			{
				goto IL_009b;
			}
		}
	}
	{
		goto IL_00b9;
	}

IL_007b:
	{
		// if (m_currPos < m_prevPos)
		float L_14 = __this->get_m_currPos_15();
		float L_15 = __this->get_m_prevPos_16();
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0092;
		}
	}
	{
		// SetReverse(true);
		GameSystemManager_SetReverse_m5CF03927DE2BF485D77D94FC35871B7B598D0FB2(__this, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00b9;
	}

IL_0092:
	{
		// SetReverse(false);
		GameSystemManager_SetReverse_m5CF03927DE2BF485D77D94FC35871B7B598D0FB2(__this, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00b9;
	}

IL_009b:
	{
		// if (m_currPos > m_prevPos)
		float L_16 = __this->get_m_currPos_15();
		float L_17 = __this->get_m_prevPos_16();
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_00b2;
		}
	}
	{
		// SetReverse(true);
		GameSystemManager_SetReverse_m5CF03927DE2BF485D77D94FC35871B7B598D0FB2(__this, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00b9;
	}

IL_00b2:
	{
		// SetReverse(false);
		GameSystemManager_SetReverse_m5CF03927DE2BF485D77D94FC35871B7B598D0FB2(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// m_prevPos = m_currPos;
		float L_18 = __this->get_m_currPos_15();
		__this->set_m_prevPos_16(L_18);
		// }
		return;
	}
}
// System.Void GameSystemManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_LoadData_m69DC02E6FBE08F3D9140A9330A239A176DCDBCAD (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m28056174581FE9682DDBB2D4323C27D8E7F0D281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * V_0 = NULL;
	MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * V_1 = NULL;
	{
		// var playerData = DataManager.Instance.PlayerData;
		DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * L_0;
		L_0 = Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		NullCheck(L_0);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_1;
		L_1 = DataManager_get_PlayerData_m8FA62B56F659CBCADE516A5B93460BF4E00DE0F7_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var mapInfo = DataManager.Instance.PlayerData.mapList[m_currMapIndex];
		DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * L_2;
		L_2 = Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		NullCheck(L_2);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_3;
		L_3 = DataManager_get_PlayerData_m8FA62B56F659CBCADE516A5B93460BF4E00DE0F7_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * L_4 = L_3->get_mapList_1();
		int32_t L_5 = __this->get_m_currMapIndex_14();
		NullCheck(L_4);
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_6;
		L_6 = List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_mDCC89495B2ACB37E261907280166E41757E76800_RuntimeMethod_var);
		V_1 = L_6;
		// m_player.InitPlayer(playerData);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_7 = __this->get_m_player_23();
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_8 = V_0;
		NullCheck(L_7);
		PlayerController_InitPlayer_mAD7DF4934C6108B37E620021FF3DA33F53350DF2(L_7, L_8, /*hidden argument*/NULL);
		// MapManager.Instance.InitMap(mapInfo);
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_9;
		L_9 = Singleton_1_get_Instance_m28056174581FE9682DDBB2D4323C27D8E7F0D281_inline(/*hidden argument*/Singleton_1_get_Instance_m28056174581FE9682DDBB2D4323C27D8E7F0D281_RuntimeMethod_var);
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_10 = V_1;
		NullCheck(L_9);
		MapManager_InitMap_mEDF74D678AC97F8C4A3B2710718F9551C220F76B(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameSystemManager::OnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_OnAwake_m52E553AF70D40EBDC9B19CCE78D1A979D907007E (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral383594196FA50B548FBFC6ABFCF8EF8F5A31A66F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A95E6D62AA1F0995E99CEF7025A29B59622AF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CF7D29C7B8D2BF1E98016A0F980CDD85741253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3847DA66D7FB9B75485D8454A98DF0E2CFFB9CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadData();
		GameSystemManager_LoadData_m69DC02E6FBE08F3D9140A9330A239A176DCDBCAD(__this, /*hidden argument*/NULL);
		// InGameUiManager.Instance.SetActiveAllCanvas(false);
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_0;
		L_0 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		NullCheck(L_0);
		InGameUiManager_SetActiveAllCanvas_m87FEE572924E350996309176326A46B360FBFDED(L_0, (bool)0, /*hidden argument*/NULL);
		// m_warningImage.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_warningImage_29();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// m_reverseCheckPosDic.Add("Reverse_X", ReverseCheckPos.X);
		Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * L_2 = __this->get_m_reverseCheckPosDic_6();
		NullCheck(L_2);
		Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7(L_2, _stringLiteral8A95E6D62AA1F0995E99CEF7025A29B59622AF5A, 1, /*hidden argument*/Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7_RuntimeMethod_var);
		// m_reverseCheckPosDic.Add("Reverse_Z", ReverseCheckPos.Z);
		Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * L_3 = __this->get_m_reverseCheckPosDic_6();
		NullCheck(L_3);
		Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7(L_3, _stringLiteralD3847DA66D7FB9B75485D8454A98DF0E2CFFB9CE, 2, /*hidden argument*/Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7_RuntimeMethod_var);
		// m_reverseCheckPosDic.Add("Reverse_NegativeX", ReverseCheckPos.NegativeX);
		Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * L_4 = __this->get_m_reverseCheckPosDic_6();
		NullCheck(L_4);
		Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7(L_4, _stringLiteralB9CF7D29C7B8D2BF1E98016A0F980CDD85741253, 3, /*hidden argument*/Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7_RuntimeMethod_var);
		// m_reverseCheckPosDic.Add("Reverse_NegativeZ", ReverseCheckPos.NegativeZ);
		Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * L_5 = __this->get_m_reverseCheckPosDic_6();
		NullCheck(L_5);
		Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7(L_5, _stringLiteral383594196FA50B548FBFC6ABFCF8EF8F5A31A66F, 4, /*hidden argument*/Dictionary_2_Add_m95E9A5315D90D7AFC7566E68ABC8C264D7F1DFE7_RuntimeMethod_var);
		// StartCoroutine(Coroutine_CountDown());
		RuntimeObject* L_6;
		L_6 = GameSystemManager_Coroutine_CountDown_m5FA213D8405A69914CFD9C43B2DB2B91D9093006(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameSystemManager::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_OnStart_m50FDC19B1B19171C7128D42BFFBA19607B61CD32 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m28056174581FE9682DDBB2D4323C27D8E7F0D281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mC846049DA7CB63D29B540DFA4AE468318A51516F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var checkPoints = CheckPointManager.Instance.CheckPoints;
		CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * L_0;
		L_0 = Singleton_1_get_Instance_mC846049DA7CB63D29B540DFA4AE468318A51516F_inline(/*hidden argument*/Singleton_1_get_Instance_mC846049DA7CB63D29B540DFA4AE468318A51516F_RuntimeMethod_var);
		NullCheck(L_0);
		CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* L_1;
		L_1 = CheckPointManager_get_CheckPoints_m4A796B083369C9D84E226DF70120F939891E1E99_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// m_checkPointsLength = checkPoints.Length;
		CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* L_2 = V_0;
		NullCheck(L_2);
		__this->set_m_checkPointsLength_10(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		// m_twoCpsDist = (checkPoints[m_checkPointsLength - 1].transform.position - checkPoints[0].transform.position).sqrMagnitude;
		CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* L_3 = V_0;
		int32_t L_4 = __this->get_m_checkPointsLength_10();
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		float L_15;
		L_15 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		__this->set_m_twoCpsDist_7(L_15);
		// m_mapLapTime = MapManager.Instance.LapTime;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_16;
		L_16 = Singleton_1_get_Instance_m28056174581FE9682DDBB2D4323C27D8E7F0D281_inline(/*hidden argument*/Singleton_1_get_Instance_m28056174581FE9682DDBB2D4323C27D8E7F0D281_RuntimeMethod_var);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = MapManager_get_LapTime_m5EA78556805B8E2FCAC8B6521601588E1F9D3B60_inline(L_16, /*hidden argument*/NULL);
		__this->set_m_mapLapTime_12(L_17);
		// m_nextCheckPoint = 0;
		__this->set_m_nextCheckPoint_13(0);
		// SetReverseCheckPos(ReverseCheckPos.Z);
		GameSystemManager_SetReverseCheckPos_m8F928B0DCB017CBF3305F0BCC807BBAD79A301B8_inline(__this, 2, /*hidden argument*/NULL);
		// InGameUiManager.Instance.UpdateLapTimeText(m_mapLapTime, m_lapTime);
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_18;
		L_18 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		int32_t L_19 = __this->get_m_mapLapTime_12();
		int32_t L_20 = __this->get_m_lapTime_11();
		NullCheck(L_18);
		InGameUiManager_UpdateLapTimeText_mDA4B243D4E7DBEB3B53FB262C98F09B087B012C5(L_18, L_19, L_20, /*hidden argument*/NULL);
		// InGameUiManager.Instance.SetUserProfile();
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_21;
		L_21 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		NullCheck(L_21);
		InGameUiManager_SetUserProfile_mEAD142A731DB6E2009D246F53C11B1DB06C91408(L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameSystemManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_Update_m9EBFC1168E709E7305F2EAE2A643BA28EC82B61E (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_isStart)
		bool L_0 = __this->get_m_isStart_19();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// m_timer += Time.deltaTime;
		float L_1 = __this->get_m_timer_31();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_m_timer_31(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		// InGameUiManager.Instance.UpdateDynamicCanvas();
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_3;
		L_3 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		NullCheck(L_3);
		InGameUiManager_UpdateDynamicCanvas_m6A005541BADA153EA6709E0B55ACDFD6ECE20BE7(L_3, /*hidden argument*/NULL);
		// CheckReverse();
		GameSystemManager_CheckReverse_m7F5AB12852D604EF7631DB14AC6D0C9D2C38EDCC(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// if (m_isReset)
		bool L_4 = __this->get_m_isReset_21();
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		// m_resetTimer += Time.deltaTime;
		float L_5 = __this->get_m_resetTimer_18();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_m_resetTimer_18(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
		// if (m_resetTimer > m_resetCooldown)
		float L_7 = __this->get_m_resetTimer_18();
		float L_8 = __this->get_m_resetCooldown_17();
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_006b;
		}
	}
	{
		// m_isCanReset = true;
		__this->set_m_isCanReset_22((bool)1);
		// m_isReset = false;
		__this->set_m_isReset_21((bool)0);
		// m_resetTimer = 0f;
		__this->set_m_resetTimer_18((0.0f));
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void GameSystemManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager__ctor_m88FEE59C4B537A52FF95A69B352827B3B84F5446 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBF13816DD89AFE7A5FEE6AE16CA7E8DD08DB62AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1__ctor_m4F8D135D6284D1BF2269F115B8AFC2622A9FEF41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder m_sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_m_sb_5(L_0);
		// Dictionary<string, ReverseCheckPos> m_reverseCheckPosDic = new Dictionary<string, ReverseCheckPos>();
		Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 * L_1 = (Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02 *)il2cpp_codegen_object_new(Dictionary_2_t26A2024A423F75272DDEBFDF6D7CA1AE57E90D02_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBF13816DD89AFE7A5FEE6AE16CA7E8DD08DB62AB(L_1, /*hidden argument*/Dictionary_2__ctor_mBF13816DD89AFE7A5FEE6AE16CA7E8DD08DB62AB_RuntimeMethod_var);
		__this->set_m_reverseCheckPosDic_6(L_1);
		// AnimationCurve m_scaleCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2;
		L_2 = AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_scaleCurve_25(L_2);
		// AnimationCurve m_alphaCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3;
		L_3 = AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_alphaCurve_26(L_3);
		// float m_duration = 0.5f;
		__this->set_m_duration_30((0.5f));
		// float m_maxScale = 1f; //target scale value
		__this->set_m_maxScale_34((1.0f));
		// float m_minScale = 0.5f; //start scale value
		__this->set_m_minScale_35((0.5f));
		// float m_alphaFrom = 1f; //start alpha value
		__this->set_m_alphaFrom_36((1.0f));
		Singleton_DontDestroy_1__ctor_m4F8D135D6284D1BF2269F115B8AFC2622A9FEF41(__this, /*hidden argument*/Singleton_DontDestroy_1__ctor_m4F8D135D6284D1BF2269F115B8AFC2622A9FEF41_RuntimeMethod_var);
		return;
	}
}
// System.Void GameSystemManager::<Coroutine_CountDown>b__48_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSystemManager_U3CCoroutine_CountDownU3Eb__48_0_m9F234F2E7C1D244B6764D3F8FD9804C15DCE0568 (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// InGameUiManager.Instance.StartCoroutine(InGameUiManager.Instance.Coroutine_TextAlphaFadeout(m_countText, m_alphaCurve, m_alphaFrom, m_alphaTo, m_duration, colors, () => m_countCanvas.enabled = false));
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get_m_countCanvas_27();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator InGameUiManager::Coroutine_TextAlphaFadeout(UnityEngine.UI.Text,UnityEngine.AnimationCurve,System.Single,System.Single,System.Single,System.Single[],InGameUiManager/FuncDel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameUiManager_Coroutine_TextAlphaFadeout_mB18DF43D5719A3F02E12808A70B00BC3C2B035C5 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___from2, float ___to3, float ___duration4, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rgbColors5, FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * ___funcDel6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * L_0 = (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 *)il2cpp_codegen_object_new(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9_il2cpp_TypeInfo_var);
		U3CCoroutine_TextAlphaFadeoutU3Ed__27__ctor_m0A17ABA177FC3C97FCB86BDABF020C6E8AEE10B2(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * L_1 = L_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = ___text0;
		NullCheck(L_1);
		L_1->set_text_5(L_2);
		U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * L_3 = L_1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = ___curve1;
		NullCheck(L_3);
		L_3->set_curve_2(L_4);
		U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * L_5 = L_3;
		float L_6 = ___from2;
		NullCheck(L_5);
		L_5->set_from_3(L_6);
		U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * L_7 = L_5;
		float L_8 = ___to3;
		NullCheck(L_7);
		L_7->set_to_4(L_8);
		U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * L_9 = L_7;
		float L_10 = ___duration4;
		NullCheck(L_9);
		L_9->set_duration_7(L_10);
		U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * L_11 = L_9;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = ___rgbColors5;
		NullCheck(L_11);
		L_11->set_rgbColors_6(L_12);
		U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * L_13 = L_11;
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_14 = ___funcDel6;
		NullCheck(L_13);
		L_13->set_funcDel_8(L_14);
		return L_13;
	}
}
// System.Collections.IEnumerator InGameUiManager::Coroutine_OutlineTextAlphaFadeout(UnityEngine.UI.Text,UnityEngine.UI.Outline,UnityEngine.AnimationCurve,System.Single,System.Single,System.Single,System.Single[],InGameUiManager/FuncDel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameUiManager_Coroutine_OutlineTextAlphaFadeout_m9BC6440191A993BB2FD8FF0FB489C11A6C05D8DD (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text0, Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * ___outline1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve2, float ___from3, float ___to4, float ___duration5, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rgbColors6, FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * ___funcDel7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * L_0 = (U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC *)il2cpp_codegen_object_new(U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC_il2cpp_TypeInfo_var);
		U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28__ctor_m5682EAC9C43C140AB026F85BAE6973B30573C6BC(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * L_1 = L_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = ___text0;
		NullCheck(L_1);
		L_1->set_text_5(L_2);
		U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * L_3 = L_1;
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_4 = ___outline1;
		NullCheck(L_3);
		L_3->set_outline_7(L_4);
		U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * L_5 = L_3;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = ___curve2;
		NullCheck(L_5);
		L_5->set_curve_2(L_6);
		U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * L_7 = L_5;
		float L_8 = ___from3;
		NullCheck(L_7);
		L_7->set_from_3(L_8);
		U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * L_9 = L_7;
		float L_10 = ___to4;
		NullCheck(L_9);
		L_9->set_to_4(L_10);
		U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * L_11 = L_9;
		float L_12 = ___duration5;
		NullCheck(L_11);
		L_11->set_duration_8(L_12);
		U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * L_13 = L_11;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = ___rgbColors6;
		NullCheck(L_13);
		L_13->set_rgbColors_6(L_14);
		U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * L_15 = L_13;
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_16 = ___funcDel7;
		NullCheck(L_15);
		L_15->set_funcDel_9(L_16);
		return L_15;
	}
}
// System.Collections.IEnumerator InGameUiManager::Coroutine_TextScaleFadeIn(UnityEngine.UI.Text,UnityEngine.AnimationCurve,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameUiManager_Coroutine_TextScaleFadeIn_mF2499A7C58A9D79C30223A90A06BAAC7E846DECB (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___from2, float ___to3, int32_t ___repeatCnt4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * L_0 = (U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D *)il2cpp_codegen_object_new(U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D_il2cpp_TypeInfo_var);
		U3CCoroutine_TextScaleFadeInU3Ed__29__ctor_mFFBAB9A66E4FC445D21CDF42C5435446E35898C5(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * L_1 = L_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = ___text0;
		NullCheck(L_1);
		L_1->set_text_5(L_2);
		U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * L_3 = L_1;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = ___curve1;
		NullCheck(L_3);
		L_3->set_curve_2(L_4);
		U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * L_5 = L_3;
		float L_6 = ___from2;
		NullCheck(L_5);
		L_5->set_from_3(L_6);
		U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * L_7 = L_5;
		float L_8 = ___to3;
		NullCheck(L_7);
		L_7->set_to_4(L_8);
		U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * L_9 = L_7;
		int32_t L_10 = ___repeatCnt4;
		NullCheck(L_9);
		L_9->set_repeatCnt_6(L_10);
		return L_9;
	}
}
// System.Void InGameUiManager::SetActiveAllCanvas(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_SetActiveAllCanvas_m87FEE572924E350996309176326A46B360FBFDED (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_dynamicCanvas.enabled = value;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get_m_dynamicCanvas_9();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, L_1, /*hidden argument*/NULL);
		// m_staticCanvas.enabled = value;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_2 = __this->get_m_staticCanvas_10();
		bool L_3 = ___value0;
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InGameUiManager::UpdateLapTimeText(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_UpdateLapTimeText_mDA4B243D4E7DBEB3B53FB262C98F09B087B012C5 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, int32_t ___mapLapTime0, int32_t ___currLapTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE584B6826F35FA897EB8E3F13C12F9EB50D9FB1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_staticSb.Clear();
		StringBuilder_t * L_0 = __this->get_m_staticSb_6();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_0, /*hidden argument*/NULL);
		// m_staticSb.AppendFormat("<color=yellow><size=150>{0}</size></color> /{1}", currLapTime, mapLapTime);
		StringBuilder_t * L_2 = __this->get_m_staticSb_6();
		int32_t L_3 = ___currLapTime1;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = ___mapLapTime0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_2);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_2, _stringLiteralDE584B6826F35FA897EB8E3F13C12F9EB50D9FB1, L_5, L_8, /*hidden argument*/NULL);
		// m_lapTimeText.text = m_staticSb.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_m_lapTimeText_22();
		StringBuilder_t * L_11 = __this->get_m_staticSb_6();
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		// }
		return;
	}
}
// System.Void InGameUiManager::SetUserProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_SetUserProfile_mEAD142A731DB6E2009D246F53C11B1DB06C91408 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, const RuntimeMethod* method)
{
	{
		// m_userNameText.text = m_player.UserName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_userNameText_25();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_1 = __this->get_m_player_8();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = PlayerController_get_UserName_m6B35135EC082D4F37AD871F59A2F53127EC5860C_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// m_userIconImage.color = m_player.KartColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_m_userIconImage_26();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_4 = __this->get_m_player_8();
		NullCheck(L_4);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = PlayerController_get_KartColor_mA2874332D2DA78DD84F9D2923A06D18F2C3920D6_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void InGameUiManager::UpdateStaticCanvas(System.Int32,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_UpdateStaticCanvas_mC7F4D042A6847D0C10500AC0B204EA54574CB724 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, int32_t ___mapLapTime0, int32_t ___currLapTime1, float ___bestTime2, bool ___isLastLap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InGameUiManager_U3CUpdateStaticCanvasU3Eb__33_0_m55B965A4B76DA3C525CBB94957CDF0A4A3184414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23B3B44C42CF754D535B83D1925A20E297F10F04);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_3 = NULL;
	{
		// UpdateLapTimeText(mapLapTime, currLapTime);
		int32_t L_0 = ___mapLapTime0;
		int32_t L_1 = ___currLapTime1;
		InGameUiManager_UpdateLapTimeText_mDA4B243D4E7DBEB3B53FB262C98F09B087B012C5(__this, L_0, L_1, /*hidden argument*/NULL);
		// m_staticSb.Clear();
		StringBuilder_t * L_2 = __this->get_m_staticSb_6();
		NullCheck(L_2);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_2, /*hidden argument*/NULL);
		// GameSystemManager.Instance.ConvetTime(bestTime, out int minute, out int second, out int millisecond);
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_4;
		L_4 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		float L_5 = ___bestTime2;
		NullCheck(L_4);
		GameSystemManager_ConvetTime_m9CC274B393249FACDD6343441899D627F11D33B2(L_4, L_5, (int32_t*)(&V_0), (int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		// m_staticSb.AppendFormat("<b>BEST</b>  /  {0:00}:{1:00}:{2:00}", minute, second, millisecond);
		StringBuilder_t * L_6 = __this->get_m_staticSb_6();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_6);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_AppendFormat_m3648BC8C77CEA688F3B90C7D79007CEDE85947E3(L_6, _stringLiteral23B3B44C42CF754D535B83D1925A20E297F10F04, L_9, L_12, L_15, /*hidden argument*/NULL);
		// m_bestTimeText.text = m_staticSb.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_m_bestTimeText_23();
		StringBuilder_t * L_18 = __this->get_m_staticSb_6();
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		// if(isLastLap)
		bool L_20 = ___isLastLap3;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		// m_lastLapText.enabled = true;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_m_lastLapText_24();
		NullCheck(L_21);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_21, (bool)1, /*hidden argument*/NULL);
		// float[] colors = new float[3] { 255f, 183f, 0f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_23 = L_22;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(255.0f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = L_23;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(183.0f));
		V_3 = L_24;
		// m_lastLapTextOutLine.
		// StartCoroutine(Coroutine_OutlineTextAlphaFadeout(m_lastLapText, m_lastLapTextOutLine, m_alphaCurve, m_alphaFrom, m_alphaTo, m_lastLapEnableTime, colors, () => m_lastLapText.gameObject.SetActive(false)));
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_25 = __this->get_m_lastLapTextOutLine_27();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26 = __this->get_m_lastLapText_24();
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_27 = __this->get_m_lastLapTextOutLine_27();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = __this->get_m_alphaCurve_7();
		float L_29 = __this->get_m_alphaFrom_29();
		float L_30 = __this->get_m_alphaTo_30();
		float L_31 = __this->get_m_lastLapEnableTime_28();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = V_3;
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_33 = (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 *)il2cpp_codegen_object_new(FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54_il2cpp_TypeInfo_var);
		FuncDel__ctor_m5B834188921D4D72168C3266160E9FCFF25AA205(L_33, __this, (intptr_t)((intptr_t)InGameUiManager_U3CUpdateStaticCanvasU3Eb__33_0_m55B965A4B76DA3C525CBB94957CDF0A4A3184414_RuntimeMethod_var), /*hidden argument*/NULL);
		RuntimeObject* L_34;
		L_34 = InGameUiManager_Coroutine_OutlineTextAlphaFadeout_m9BC6440191A993BB2FD8FF0FB489C11A6C05D8DD(__this, L_26, L_27, L_28, L_29, L_30, L_31, L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_25);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_35;
		L_35 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_25, L_34, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void InGameUiManager::UpdateDynamicCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_UpdateDynamicCanvas_m6A005541BADA153EA6709E0B55ACDFD6ECE20BE7 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D60A12D6822F2279196258CD85BE267A20958F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBCAB4D0B142B5A92A89606D5ABA69A26112C74);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// m_dynamicSb.Clear();
		StringBuilder_t * L_0 = __this->get_m_dynamicSb_5();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_0, /*hidden argument*/NULL);
		// float time = GameSystemManager.Instance.CurrentTime;
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_2;
		L_2 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		NullCheck(L_2);
		float L_3;
		L_3 = GameSystemManager_get_CurrentTime_mCC545336B16384620D9C1D0DF9188F66605049C8_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// GameSystemManager.Instance.ConvetTime(time, out int minute, out int second, out int millisecond);
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_4;
		L_4 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		float L_5 = V_0;
		NullCheck(L_4);
		GameSystemManager_ConvetTime_m9CC274B393249FACDD6343441899D627F11D33B2(L_4, L_5, (int32_t*)(&V_1), (int32_t*)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		// m_dynamicSb.AppendFormat("<b>TIME</b>  /  {0:00}:{1:00}:{2:00}", minute, second, millisecond);
		StringBuilder_t * L_6 = __this->get_m_dynamicSb_5();
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_6);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_AppendFormat_m3648BC8C77CEA688F3B90C7D79007CEDE85947E3(L_6, _stringLiteral27D60A12D6822F2279196258CD85BE267A20958F, L_9, L_12, L_15, /*hidden argument*/NULL);
		// m_timerText.text = m_dynamicSb.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_m_timerText_21();
		StringBuilder_t * L_18 = __this->get_m_dynamicSb_5();
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		// m_dynamicSb.Clear();
		StringBuilder_t * L_20 = __this->get_m_dynamicSb_5();
		NullCheck(L_20);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_20, /*hidden argument*/NULL);
		// m_dynamicSb.AppendFormat("{0:0.0} km / h", m_player.CurrentSpeed);
		StringBuilder_t * L_22 = __this->get_m_dynamicSb_5();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_23 = __this->get_m_player_8();
		NullCheck(L_23);
		float L_24;
		L_24 = PlayerController_get_CurrentSpeed_mA7190F289A58683110E3398C8DB80C311DF4034F_inline(L_23, /*hidden argument*/NULL);
		float L_25 = L_24;
		RuntimeObject * L_26 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_22);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_22, _stringLiteralECBCAB4D0B142B5A92A89606D5ABA69A26112C74, L_26, /*hidden argument*/NULL);
		// m_speedText.text = m_dynamicSb.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_28 = __this->get_m_speedText_20();
		StringBuilder_t * L_29 = __this->get_m_dynamicSb_5();
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_30);
		// }
		return;
	}
}
// System.Void InGameUiManager::SetFinishUI(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_SetFinishUI_mC9F64C14DD7630362D9F728036F9B9D9FFB458B4 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, String_t* ___completeText0, float ___mapBestTime1, float ___currTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C134A4AA231A13401AB350AF7FD6CB585BC50EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D62C819863738A590C17DF61AD3BA6443FEFEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A099DDAB9C54AF52CD3FB1793F707B097A16A9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8239D7D184C3B9CB62A6BDF5686BE90EB8CF240);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD33E1D1E19768AF1C9219F8CEAB79FF6905D318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3B712485B4BAEAED2D090DD0EA72E3124901069);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	String_t* V_4 = NULL;
	{
		// float averageSpeed = GameSystemManager.Instance.AverageSpeed;
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_0;
		L_0 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = GameSystemManager_get_AverageSpeed_m935DFF74B384739420D69119981A5BAE42059AB3(L_0, /*hidden argument*/NULL);
		V_3 = L_1;
		// string mapName = DataManager.Instance.GetMapName(GameSystemManager.Instance.CurrMapIndex);
		DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * L_2;
		L_2 = Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_3;
		L_3 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = GameSystemManager_get_CurrMapIndex_mAE4D3CDD7FE836A079A8B79444E3831D9BF332A9_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_5;
		L_5 = DataManager_GetMapName_m794F0F889B3134E7F4755B364AEA92B66D8B2215(L_2, L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		// m_dynamicCanvas.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_6 = __this->get_m_dynamicCanvas_9();
		NullCheck(L_6);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)0, /*hidden argument*/NULL);
		// m_resultPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_m_resultPanel_11();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// m_completeText.text = completeText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_m_completeText_12();
		String_t* L_9 = ___completeText0;
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
		// m_mapNameText.text = mapName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_m_mapNameText_16();
		String_t* L_11 = V_4;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// GameSystemManager.Instance.ConvetTime(currTime, out minute, out second, out millisecond);
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_12;
		L_12 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		float L_13 = ___currTime2;
		NullCheck(L_12);
		GameSystemManager_ConvetTime_m9CC274B393249FACDD6343441899D627F11D33B2(L_12, L_13, (int32_t*)(&V_0), (int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		// m_currTimeText.text = string.Format("{0:00}:{1:00}:{2:00}", minute, second, millisecond);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_m_currTimeText_13();
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralA8239D7D184C3B9CB62A6BDF5686BE90EB8CF240, L_17, L_20, L_23, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_24);
		// GameSystemManager.Instance.ConvetTime(mapBestTime, out minute, out second, out millisecond);
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_25;
		L_25 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		float L_26 = ___mapBestTime1;
		NullCheck(L_25);
		GameSystemManager_ConvetTime_m9CC274B393249FACDD6343441899D627F11D33B2(L_25, L_26, (int32_t*)(&V_0), (int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		// m_playerBestTimeText.text = string.Format("�ְ� �ְ� ���  <color=yellow><b>{0:00}:{1:00}:{2:00}</b></color>", minute, second, millisecond);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = __this->get_m_playerBestTimeText_15();
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_29);
		int32_t L_31 = V_1;
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
		int32_t L_34 = V_2;
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralBD33E1D1E19768AF1C9219F8CEAB79FF6905D318, L_30, L_33, L_36, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_37);
		// m_driftDistText.text = string.Format("�帮��Ʈ <color=yellow><b>{0}</b></color> m", Mathf.Round(m_player.TotalDriftDist) * 10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = __this->get_m_driftDistText_18();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_39 = __this->get_m_player_8();
		NullCheck(L_39);
		float L_40;
		L_40 = PlayerController_get_TotalDriftDist_m53B4695152CC3F8A7A7722FED411B6EAB3F6D22E(L_39, /*hidden argument*/NULL);
		float L_41;
		L_41 = bankers_roundf(L_40);
		float L_42 = ((float)il2cpp_codegen_multiply((float)L_41, (float)(10.0f)));
		RuntimeObject * L_43 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_42);
		String_t* L_44;
		L_44 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3C134A4AA231A13401AB350AF7FD6CB585BC50EA, L_43, /*hidden argument*/NULL);
		NullCheck(L_38);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, L_44);
		// m_boosterCntText.text = string.Format("�ν��� <color=yellow><b>{0}</b></color> ȸ", m_player.BoosterCnt);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = __this->get_m_boosterCntText_14();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_46 = __this->get_m_player_8();
		NullCheck(L_46);
		int32_t L_47;
		L_47 = PlayerController_get_BoosterCnt_mA15136F01D1D81ABEE880035522CF20D55DE43C9_inline(L_46, /*hidden argument*/NULL);
		int32_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50;
		L_50 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral52D62C819863738A590C17DF61AD3BA6443FEFEF, L_49, /*hidden argument*/NULL);
		NullCheck(L_45);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, L_50);
		// m_crashCntText.text = string.Format("�浹 Ƚ�� <color=yellow><b>{0}</b></color> ȸ", m_player.CrashCnt);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_51 = __this->get_m_crashCntText_17();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_52 = __this->get_m_player_8();
		NullCheck(L_52);
		int32_t L_53;
		L_53 = PlayerController_get_CrashCnt_m569632CB37790AD2080088D68362BCD75E0DB897_inline(L_52, /*hidden argument*/NULL);
		int32_t L_54 = L_53;
		RuntimeObject * L_55 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_54);
		String_t* L_56;
		L_56 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral7A099DDAB9C54AF52CD3FB1793F707B097A16A9C, L_55, /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_56);
		// m_averageSpeedText.text = string.Format("��� �ӵ� <color=yellow><b>{0}</b></color> km/h", Mathf.Round(averageSpeed));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_57 = __this->get_m_averageSpeedText_19();
		float L_58 = V_3;
		float L_59;
		L_59 = bankers_roundf(L_58);
		float L_60 = L_59;
		RuntimeObject * L_61 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_60);
		String_t* L_62;
		L_62 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralF3B712485B4BAEAED2D090DD0EA72E3124901069, L_61, /*hidden argument*/NULL);
		NullCheck(L_57);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_57, L_62);
		// }
		return;
	}
}
// System.Void InGameUiManager::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_OnStart_mD51FFF8F01F8943966C13089B32B7387B0A4F6C0 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, const RuntimeMethod* method)
{
	{
		// m_resultPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_resultPanel_11();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// m_lastLapText.enabled = false;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_m_lastLapText_24();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InGameUiManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager__ctor_mB515166F48F5DF10442F4E73DF5B04BD6E2A40AF (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mF8DE3D3BE959789F20595EB234412F45922CA43A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder m_dynamicSb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_m_dynamicSb_5(L_0);
		// StringBuilder m_staticSb = new StringBuilder();
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_1, /*hidden argument*/NULL);
		__this->set_m_staticSb_6(L_1);
		// AnimationCurve m_alphaCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2;
		L_2 = AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_alphaCurve_7(L_2);
		// float m_alphaFrom = 1f;
		__this->set_m_alphaFrom_29((1.0f));
		Singleton_1__ctor_mF8DE3D3BE959789F20595EB234412F45922CA43A(__this, /*hidden argument*/Singleton_1__ctor_mF8DE3D3BE959789F20595EB234412F45922CA43A_RuntimeMethod_var);
		return;
	}
}
// System.Void InGameUiManager::<UpdateStaticCanvas>b__33_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_U3CUpdateStaticCanvasU3Eb__33_0_m55B965A4B76DA3C525CBB94957CDF0A4A3184414 (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Coroutine_OutlineTextAlphaFadeout(m_lastLapText, m_lastLapTextOutLine, m_alphaCurve, m_alphaFrom, m_alphaTo, m_lastLapEnableTime, colors, () => m_lastLapText.gameObject.SetActive(false)));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_lastLapText_24();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single InputManager::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputManager_get_Horizontal_mE579B142D4714901F27361F4A14CA8C02B2604A7 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public float Horizontal { get; set; }
		float L_0 = __this->get_U3CHorizontalU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void InputManager::set_Horizontal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_set_Horizontal_m301A66829A357914DE773D16DC1D3745779AA4FE (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Horizontal { get; set; }
		float L_0 = ___value0;
		__this->set_U3CHorizontalU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Single InputManager::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputManager_get_Vertical_m02E6C12A4599D2F61D7558FBA32BD7F1E9CA1144 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public float Vertical { get; set; }
		float L_0 = __this->get_U3CVerticalU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void InputManager::set_Vertical(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_set_Vertical_m2E72E0FCA438D080A686E5ABC563A504735B295C (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Vertical { get; set; }
		float L_0 = ___value0;
		__this->set_U3CVerticalU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean InputManager::get_HandBreakKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManager_get_HandBreakKeyDown_m2A024A77CF8F4594D11F9EA695ABC2B894801B30 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public bool HandBreakKeyDown { get; set; }
		bool L_0 = __this->get_U3CHandBreakKeyDownU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void InputManager::set_HandBreakKeyDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_set_HandBreakKeyDown_mEA92EBEA5CE213FFFC93AA19FF6BB8F3CD2645C2 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HandBreakKeyDown { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CHandBreakKeyDownU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean InputManager::get_HandBreakKeyUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManager_get_HandBreakKeyUp_m18D82FC0B35DA6CBA633C3BDD898EA6417F3BCB9 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public bool HandBreakKeyUp { get; set; }
		bool L_0 = __this->get_U3CHandBreakKeyUpU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void InputManager::set_HandBreakKeyUp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_set_HandBreakKeyUp_m96C262BA4F464626DA528B298200FF492276E37F (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HandBreakKeyUp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CHandBreakKeyUpU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean InputManager::get_ResetKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManager_get_ResetKeyDown_m32A0EF91EFD01C6648844A1D1E7E80F78BCF8214 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public bool ResetKeyDown { get; set; }
		bool L_0 = __this->get_U3CResetKeyDownU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void InputManager::set_ResetKeyDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_set_ResetKeyDown_mC04095BE64237CDE269F7D6918B5BB18C5FA610C (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ResetKeyDown { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CResetKeyDownU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean InputManager::get_BoosterKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManager_get_BoosterKeyDown_m3F07FF6AEE044E5C3D81604C0FED0695AD38BE31 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public bool BoosterKeyDown { get; set; }
		bool L_0 = __this->get_U3CBoosterKeyDownU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void InputManager::set_BoosterKeyDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_set_BoosterKeyDown_mD2B14D35C32BA9F0E7C0975B38B703E76BDEC3C9 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BoosterKeyDown { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CBoosterKeyDownU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void InputManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Update_mE17FD2A03E0E1BE94DFE0B0AB4B5B9C5F3EA285B (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * G_B2_0 = NULL;
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * G_B3_1 = NULL;
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * G_B5_0 = NULL;
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * G_B6_1 = NULL;
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * G_B8_0 = NULL;
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * G_B9_1 = NULL;
	{
		// Horizontal = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		InputManager_set_Horizontal_m301A66829A357914DE773D16DC1D3745779AA4FE_inline(__this, L_0, /*hidden argument*/NULL);
		// Vertical = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		InputManager_set_Vertical_m2E72E0FCA438D080A686E5ABC563A504735B295C_inline(__this, L_1, /*hidden argument*/NULL);
		// HandBreakKeyDown = Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift);
		bool L_2;
		L_2 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)304), /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0039;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)303), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		NullCheck(G_B3_1);
		InputManager_set_HandBreakKeyDown_mEA92EBEA5CE213FFFC93AA19FF6BB8F3CD2645C2_inline(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		// HandBreakKeyUp = Input.GetKeyUp(KeyCode.LeftShift) || Input.GetKeyUp(KeyCode.RightShift);
		bool L_4;
		L_4 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)304), /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (L_4)
		{
			G_B5_0 = __this;
			goto IL_0058;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)303), /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_5));
		G_B6_1 = G_B4_0;
		goto IL_0059;
	}

IL_0058:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0059:
	{
		NullCheck(G_B6_1);
		InputManager_set_HandBreakKeyUp_m96C262BA4F464626DA528B298200FF492276E37F_inline(G_B6_1, (bool)G_B6_0, /*hidden argument*/NULL);
		// ResetKeyDown = Input.GetKeyDown(KeyCode.R);
		bool L_6;
		L_6 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		InputManager_set_ResetKeyDown_mC04095BE64237CDE269F7D6918B5BB18C5FA610C_inline(__this, L_6, /*hidden argument*/NULL);
		// BoosterKeyDown = Input.GetKeyDown(KeyCode.LeftControl) || Input.GetKeyDown(KeyCode.RightControl);
		bool L_7;
		L_7 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)306), /*hidden argument*/NULL);
		G_B7_0 = __this;
		if (L_7)
		{
			G_B8_0 = __this;
			goto IL_0084;
		}
	}
	{
		bool L_8;
		L_8 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)305), /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_8));
		G_B9_1 = G_B7_0;
		goto IL_0085;
	}

IL_0084:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_0085:
	{
		NullCheck(G_B9_1);
		InputManager_set_BoosterKeyDown_mD2B14D35C32BA9F0E7C0975B38B703E76BDEC3C9_inline(G_B9_1, (bool)G_B9_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_mB533F16325A793C9274F6CA3804EBCE27AD700A7 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m29478D063D801FB0A7F41CD80CB94A3AB392E913_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m29478D063D801FB0A7F41CD80CB94A3AB392E913(__this, /*hidden argument*/Singleton_1__ctor_m29478D063D801FB0A7F41CD80CB94A3AB392E913_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadSceneManager::SetLoadState(SceneState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneManager_SetLoadState_m05336826A421B0EC3C10E257CE907CBB8C93744D (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// m_loadState = state;
		int32_t L_0 = ___state0;
		__this->set_m_loadState_7(L_0);
		// }
		return;
	}
}
// System.Void LoadSceneManager::LoadSceneAsync(SceneState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneManager_LoadSceneAsync_m8380BE31B9121D5F65528078A63D376E9C48BCE6 (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, int32_t ___sceneState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_loadState != SceneState.None) return;
		int32_t L_0 = __this->get_m_loadState_7();
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (m_loadState != SceneState.None) return;
		return;
	}

IL_000a:
	{
		// SetLoadState(sceneState);
		int32_t L_1 = ___sceneState0;
		LoadSceneManager_SetLoadState_m05336826A421B0EC3C10E257CE907CBB8C93744D_inline(__this, L_1, /*hidden argument*/NULL);
		// ShowLoadingPanel();
		LoadSceneManager_ShowLoadingPanel_m99B5E644D1FE84C327A5EDC401DF5657C48D0624(__this, /*hidden argument*/NULL);
		// m_loadingInfo = SceneManager.LoadSceneAsync((int)sceneState);
		int32_t L_2 = ___sceneState0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_3;
		L_3 = SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E(L_2, /*hidden argument*/NULL);
		__this->set_m_loadingInfo_6(L_3);
		// }
		return;
	}
}
// System.Void LoadSceneManager::ShowLoadingPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneManager_ShowLoadingPanel_m99B5E644D1FE84C327A5EDC401DF5657C48D0624 (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, const RuntimeMethod* method)
{
	{
		// m_loadingPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_loadingPanel_8();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadSceneManager::HideLoadingPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneManager_HideLoadingPanel_mE19DEBAD3E08563C3762356B3582F15DEC108561 (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, const RuntimeMethod* method)
{
	{
		// m_loadingPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_loadingPanel_8();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadSceneManager::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneManager_OnStart_m2949EE32639CEC24F487115494EB7079FB1110C8 (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, const RuntimeMethod* method)
{
	{
		// HideLoadingPanel();
		LoadSceneManager_HideLoadingPanel_mE19DEBAD3E08563C3762356B3582F15DEC108561(__this, /*hidden argument*/NULL);
		// SetLoadState(SceneState.None);
		LoadSceneManager_SetLoadState_m05336826A421B0EC3C10E257CE907CBB8C93744D_inline(__this, (-1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadSceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneManager_Update_mB0E77D7DBAF08199523F4C7E47CDE60292BCC77B (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral517C1E9240257ADB3B22BB9D500C1A9DA0CF2A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD5DE54798BD9884BC611C55995CCDE28DA4E5EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(m_loadingInfo != null && m_loadState != SceneState.None)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0 = __this->get_m_loadingInfo_6();
		if (!L_0)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_1 = __this->get_m_loadState_7();
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_00c9;
		}
	}
	{
		// if (!m_loadingInfo.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_2 = __this->get_m_loadingInfo_6();
		NullCheck(L_2);
		bool L_3;
		L_3 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_007e;
		}
	}
	{
		// m_sb.AppendFormat("{0}%", Mathf.CeilToInt(m_loadingInfo.progress * 100));
		StringBuilder_t * L_4 = __this->get_m_sb_5();
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_5 = __this->get_m_loadingInfo_6();
		NullCheck(L_5);
		float L_6;
		L_6 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_5, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_multiply((float)L_6, (float)(100.0f))), /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_4);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_4, _stringLiteral517C1E9240257ADB3B22BB9D500C1A9DA0CF2A66, L_9, /*hidden argument*/NULL);
		// m_loadingValueText.text = m_sb.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_m_loadingValueText_9();
		StringBuilder_t * L_12 = __this->get_m_sb_5();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// m_loadingProgressBar.fillAmount = m_loadingInfo.progress;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = __this->get_m_loadingProgressBar_11();
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_15 = __this->get_m_loadingInfo_6();
		NullCheck(L_15);
		float L_16;
		L_16 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_14, L_16, /*hidden argument*/NULL);
		// }
		goto IL_00c9;
	}

IL_007e:
	{
		// m_loadingInfo = null;
		__this->set_m_loadingInfo_6((AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *)NULL);
		// m_sb.Append("100%");
		StringBuilder_t * L_17 = __this->get_m_sb_5();
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteralCD5DE54798BD9884BC611C55995CCDE28DA4E5EA, /*hidden argument*/NULL);
		// m_loadingValueText.text = m_sb.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_m_loadingValueText_9();
		StringBuilder_t * L_20 = __this->get_m_sb_5();
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_21);
		// m_loadingProgressBar.fillAmount = 1f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = __this->get_m_loadingProgressBar_11();
		NullCheck(L_22);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_22, (1.0f), /*hidden argument*/NULL);
		// SetLoadState(SceneState.None);
		LoadSceneManager_SetLoadState_m05336826A421B0EC3C10E257CE907CBB8C93744D_inline(__this, (-1), /*hidden argument*/NULL);
		// HideLoadingPanel();
		LoadSceneManager_HideLoadingPanel_mE19DEBAD3E08563C3762356B3582F15DEC108561(__this, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		// m_sb.Clear();
		StringBuilder_t * L_23 = __this->get_m_sb_5();
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneManager__ctor_m875092AABE90D3147B6550E865F8490211B1E329 (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1__ctor_m89B891EB53DE373F5A677AC2CB00AC19463D76CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder m_sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_m_sb_5(L_0);
		Singleton_DontDestroy_1__ctor_m89B891EB53DE373F5A677AC2CB00AC19463D76CB(__this, /*hidden argument*/Singleton_DontDestroy_1__ctor_m89B891EB53DE373F5A677AC2CB00AC19463D76CB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LobbyUIManager::OnPressButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyUIManager_OnPressButton_m3AAEE85039A8C84784BD86CAFCDBDEDB70F9AA14 (LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILobbyMenu_tB0467DF96D08B2902E9EE64A066BF958BE7B9B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// m_mainLobby.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_mainLobby_7();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// var name = button.gameObject.name.Split('_');
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = ___button0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)95));
		NullCheck(L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_3, L_5, /*hidden argument*/NULL);
		// var index = int.Parse(name[0]);
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9;
		L_9 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// m_lobbyMenus[index].Show();
		ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64* L_10 = __this->get_m_lobbyMenus_8();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void ILobbyMenu::Show() */, ILobbyMenu_tB0467DF96D08B2902E9EE64A066BF958BE7B9B18_il2cpp_TypeInfo_var, L_13);
		// }
		return;
	}
}
// System.Void LobbyUIManager::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyUIManager_OnStart_mA51EE1169D035ED2FF1AF21D1BFD6A8F415CC68F (LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mF3139839C2BC3D5EF7908957E3571DA98A2E8D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisILobbyMenu_tB0467DF96D08B2902E9EE64A066BF958BE7B9B18_m82019BFFCD6129A09F7F07FD7B97266CE16919EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnStartU3Eb__0_mDCA9165C477BFF588AADFE36ED5091C9387CC04B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B * V_2 = NULL;
	{
		// var length = m_lobbyButtons.Length;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_0 = __this->get_m_lobbyButtons_5();
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// m_lobbyButtons = m_mainLobby.GetComponentsInChildren<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_m_mainLobby_7();
		NullCheck(L_1);
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_2;
		L_2 = GameObject_GetComponentsInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mF3139839C2BC3D5EF7908957E3571DA98A2E8D80(L_1, /*hidden argument*/GameObject_GetComponentsInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mF3139839C2BC3D5EF7908957E3571DA98A2E8D80_RuntimeMethod_var);
		__this->set_m_lobbyButtons_5(L_2);
		// m_lobbyMenus = m_lobbyMenu.GetComponentsInChildren<ILobbyMenu>(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_m_lobbyMenu_6();
		NullCheck(L_3);
		ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64* L_4;
		L_4 = GameObject_GetComponentsInChildren_TisILobbyMenu_tB0467DF96D08B2902E9EE64A066BF958BE7B9B18_m82019BFFCD6129A09F7F07FD7B97266CE16919EB(L_3, (bool)1, /*hidden argument*/GameObject_GetComponentsInChildren_TisILobbyMenu_tB0467DF96D08B2902E9EE64A066BF958BE7B9B18_m82019BFFCD6129A09F7F07FD7B97266CE16919EB_RuntimeMethod_var);
		__this->set_m_lobbyMenus_8(L_4);
		// for(int i = 0; i < length; i++)
		V_1 = 0;
		goto IL_006d;
	}

IL_0030:
	{
		U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B * L_5 = (U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m4548D9A8BEFEE1C07AC1101CFC35BA39B58D17B7(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B * L_6 = V_2;
		NullCheck(L_6);
		L_6->set_U3CU3E4__this_1(__this);
		// var button = m_lobbyButtons[i];
		U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B * L_7 = V_2;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_8 = __this->get_m_lobbyButtons_5();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		L_7->set_button_0(L_11);
		// m_lobbyButtons[i].onClick.AddListener(() => OnPressButton(button));
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_12 = __this->get_m_lobbyButtons_5();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_16;
		L_16 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_15, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B * L_17 = V_2;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_18 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3COnStartU3Eb__0_mDCA9165C477BFF588AADFE36ED5091C9387CC04B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_16, L_18, /*hidden argument*/NULL);
		// for(int i = 0; i < length; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006d:
	{
		// for(int i = 0; i < length; i++)
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0030;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LobbyUIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyUIManager__ctor_m9DBD8EC63A59E23B076B8DA5668FA8FD9B636554 (LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mE2FE84704684CB0B914BA446A79B1DDC8555E4B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_mE2FE84704684CB0B914BA446A79B1DDC8555E4B8(__this, /*hidden argument*/Singleton_1__ctor_mE2FE84704684CB0B914BA446A79B1DDC8555E4B8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Lobby_GameStart::OnPressTimeAttackButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_GameStart_OnPressTimeAttackButton_mBE2626A7726D9D335C7BB52DC4935881053FEF80 (Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84 * __this, bool ___isShadow0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m0F7FEFE4C28410D4A8700CF512F22A3403E38542_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadSceneManager.Instance.LoadSceneAsync(SceneState.Game);
		LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * L_0;
		L_0 = Singleton_DontDestroy_1_get_Instance_m0F7FEFE4C28410D4A8700CF512F22A3403E38542_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m0F7FEFE4C28410D4A8700CF512F22A3403E38542_RuntimeMethod_var);
		NullCheck(L_0);
		LoadSceneManager_LoadSceneAsync_m8380BE31B9121D5F65528078A63D376E9C48BCE6(L_0, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lobby_GameStart::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_GameStart_Show_mDB3A76BA502102FB11F20C592C5E802E4185EADA (Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lobby_GameStart::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_GameStart_Hide_m8FDF24FDA28A83BD3689CFC925B53D3F879C8D86 (Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lobby_GameStart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_GameStart_Start_mD2A749D4B38E88265C6054AA7F1E278A6916E271 (Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m5045215CA864069866D1F0E99E242A4EEB8CE508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lobby_GameStart_U3CStartU3Eb__4_0_mA4E44B9FE3BB1286CAD6BD3AFA4FDA0FC2537BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lobby_GameStart_U3CStartU3Eb__4_1_m2B6D68178194C066452BF698F753F3F41E4579F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_buttons = GetComponentsInChildren<Button>();
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_0;
		L_0 = Component_GetComponentsInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m5045215CA864069866D1F0E99E242A4EEB8CE508(__this, /*hidden argument*/Component_GetComponentsInChildren_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m5045215CA864069866D1F0E99E242A4EEB8CE508_RuntimeMethod_var);
		__this->set_m_buttons_4(L_0);
		// m_buttons[0].onClick.AddListener(() => OnPressTimeAttackButton(false));
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_1 = __this->get_m_buttons_4();
		NullCheck(L_1);
		int32_t L_2 = 0;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)Lobby_GameStart_U3CStartU3Eb__4_0_mA4E44B9FE3BB1286CAD6BD3AFA4FDA0FC2537BFC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// m_buttons[1].onClick.AddListener(() => OnPressTimeAttackButton(true));
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_6 = __this->get_m_buttons_4();
		NullCheck(L_6);
		int32_t L_7 = 1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_9;
		L_9 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_8, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_10, __this, (intptr_t)((intptr_t)Lobby_GameStart_U3CStartU3Eb__4_1_m2B6D68178194C066452BF698F753F3F41E4579F8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_9, L_10, /*hidden argument*/NULL);
		// Hide();
		Lobby_GameStart_Hide_m8FDF24FDA28A83BD3689CFC925B53D3F879C8D86(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lobby_GameStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_GameStart__ctor_mF2219A345181C8064D62382DC507A87175EB6921 (Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lobby_GameStart::<Start>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_GameStart_U3CStartU3Eb__4_0_mA4E44B9FE3BB1286CAD6BD3AFA4FDA0FC2537BFC (Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84 * __this, const RuntimeMethod* method)
{
	{
		// m_buttons[0].onClick.AddListener(() => OnPressTimeAttackButton(false));
		Lobby_GameStart_OnPressTimeAttackButton_mBE2626A7726D9D335C7BB52DC4935881053FEF80(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lobby_GameStart::<Start>b__4_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_GameStart_U3CStartU3Eb__4_1_m2B6D68178194C066452BF698F753F3F41E4579F8 (Lobby_GameStart_tBAD98C3B462C85A9D6AC813B8879B69C09FF3B84 * __this, const RuntimeMethod* method)
{
	{
		// m_buttons[1].onClick.AddListener(() => OnPressTimeAttackButton(true));
		Lobby_GameStart_OnPressTimeAttackButton_mBE2626A7726D9D335C7BB52DC4935881053FEF80(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Lobby_Garage::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_Garage_Show_mC915CBE5A4936F87DA1C19905FFC6EF6252E7A4F (Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lobby_Garage::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_Garage_Hide_mC6F51F58215CA65315050080B79C1F33597A4120 (Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lobby_Garage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_Garage_Start_m26A5519A53C74F547916535903837A9F45B7A816 (Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Lobby_Garage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_Garage_Update_m277E4BDFE009A9E21FBEC433A4D4793754D265E4 (Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Lobby_Garage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_Garage__ctor_mC9F4C1C51F378D4D082DB6B463A35B1022A593CA (Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapData__ctor_m563D13F6F487F541EB89195C5866DAB7862505A7 (MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapDataTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapDataTable__ctor_mBFDE187D93108A2A9F35D3F6BE452AE0755AB6E0 (MapDataTable_t23A244B1C86650B7A05FD63A73907787576075AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1__ctor_m46C839FE5DB299BE3801D23908C96372AD1ECBE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_DontDestroy_1__ctor_m46C839FE5DB299BE3801D23908C96372AD1ECBE2(__this, /*hidden argument*/Singleton_DontDestroy_1__ctor_m46C839FE5DB299BE3801D23908C96372AD1ECBE2_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapInfo__ctor_mE155B555F97BC250A30AC06A6053E0370CA024A7 (MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 MapManager::get_LapTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapManager_get_LapTime_m5EA78556805B8E2FCAC8B6521601588E1F9D3B60 (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, const RuntimeMethod* method)
{
	{
		// public int LapTime { get { return m_lapTime; } }
		int32_t L_0 = __this->get_m_lapTime_5();
		return L_0;
	}
}
// System.Void MapManager::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_OnTriggerEnter_m83AF4EDE85ED4090D40217900F219CF7E2AEC272 (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!other.CompareTag("Player")) return;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!other.CompareTag("Player")) return;
		return;
	}

IL_000e:
	{
		// GameSystemManager.Instance.OnThroughGate();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_2;
		L_2 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		NullCheck(L_2);
		GameSystemManager_OnThroughGate_mBD19D942F19451E99DC4612A9540CD2012A04371(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapManager::InitMap(MapInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_InitMap_mEDF74D678AC97F8C4A3B2710718F9551C220F76B (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * ___mapinfo0, const RuntimeMethod* method)
{
	{
		// m_lapTime = mapinfo.data.lapTime;
		MapInfo_t592D193988B7B04327FFF30C40405D3BC63A1CD3 * L_0 = ___mapinfo0;
		NullCheck(L_0);
		MapData_t49077CF69F800F5953D4AF9CB456CC052666EEB8 * L_1 = L_0->get_data_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_lapTime_1();
		__this->set_m_lapTime_5(L_2);
		// }
		return;
	}
}
// System.Void MapManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager__ctor_m7DC7045E64B59C29C225D27DAA89BE7BAAA89DE4 (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m503166E44D89D1E6C9FFBCA12A58A0557B8DF9E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m503166E44D89D1E6C9FFBCA12A58A0557B8DF9E1(__this, /*hidden argument*/Singleton_1__ctor_m503166E44D89D1E6C9FFBCA12A58A0557B8DF9E1_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color PlayerController::get_KartColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  PlayerController_get_KartColor_mA2874332D2DA78DD84F9D2923A06D18F2C3920D6 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public Color KartColor { get { return m_kartColor; } }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_kartColor_8();
		return L_0;
	}
}
// System.Boolean PlayerController::get_IsStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_get_IsStart_mFA4C1CB5A294CF609DB75045211C3E32EFF87A5F (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsStart { get { return m_isStart; } set { m_isStart = value; } }
		bool L_0 = __this->get_m_isStart_41();
		return L_0;
	}
}
// System.Void PlayerController::set_IsStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_set_IsStart_m5A2591E0C7CDC386CFBC7106F6B67BBEA6470ED3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsStart { get { return m_isStart; } set { m_isStart = value; } }
		bool L_0 = ___value0;
		__this->set_m_isStart_41(L_0);
		// public bool IsStart { get { return m_isStart; } set { m_isStart = value; } }
		return;
	}
}
// System.Int32 PlayerController::get_BoosterCnt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerController_get_BoosterCnt_mA15136F01D1D81ABEE880035522CF20D55DE43C9 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public int BoosterCnt { get { return m_boosterUseCnt; } }
		int32_t L_0 = __this->get_m_boosterUseCnt_45();
		return L_0;
	}
}
// System.Int32 PlayerController::get_CrashCnt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerController_get_CrashCnt_m569632CB37790AD2080088D68362BCD75E0DB897 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public int CrashCnt { get; set; }
		int32_t L_0 = __this->get_U3CCrashCntU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void PlayerController::set_CrashCnt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_set_CrashCnt_m92C7C1BA8E01C77420D1A86400702F36EDE81DA3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CrashCnt { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCrashCntU3Ek__BackingField_54(L_0);
		return;
	}
}
// System.Single PlayerController::get_TotalDriftDist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerController_get_TotalDriftDist_m53B4695152CC3F8A7A7722FED411B6EAB3F6D22E (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public float TotalDriftDist { get { return (m_startDriftPosSum - m_endDriftPosSum).sqrMagnitude; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_startDriftPosSum_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_m_endDriftPosSum_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single PlayerController::get_CurrentSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerController_get_CurrentSpeed_mA7190F289A58683110E3398C8DB80C311DF4034F (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public float CurrentSpeed { get { return m_speed; } }
		float L_0 = __this->get_m_speed_39();
		return L_0;
	}
}
// System.String PlayerController::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerController_get_UserName_m6B35135EC082D4F37AD871F59A2F53127EC5860C (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public string UserName { get { return m_playerName; } }
		String_t* L_0 = __this->get_m_playerName_7();
		return L_0;
	}
}
// System.Collections.IEnumerator PlayerController::Coroutine_StartBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Coroutine_StartBoost_m37C3D0BAF50DF3D1742F9229DBF708BDB8419E01 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * L_0 = (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C *)il2cpp_codegen_object_new(U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C_il2cpp_TypeInfo_var);
		U3CCoroutine_StartBoostU3Ed__68__ctor_m74814D518B6B3CEF337C17853BB5202FBFC5A1BF(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerController::InitPlayer(PlayerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_InitPlayer_mAD7DF4934C6108B37E620021FF3DA33F53350DF2 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * ___playerData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B9E7EBC2D36456DFD010A4AE30231AD08EAFB9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * V_0 = NULL;
	{
		// var carInfo = playerData.carsList[GameSystemManager.Instance.CurrKartIndex];
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_0 = ___playerData0;
		NullCheck(L_0);
		List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 * L_1 = L_0->get_carsList_0();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_2;
		L_2 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = GameSystemManager_get_CurrKartIndex_m62DA46414A4C533C54FB6B7A2D1219BAFA35051D_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_4;
		L_4 = List_1_get_Item_m1B9E7EBC2D36456DFD010A4AE30231AD08EAFB9D_inline(L_1, L_3, /*hidden argument*/List_1_get_Item_m1B9E7EBC2D36456DFD010A4AE30231AD08EAFB9D_RuntimeMethod_var);
		V_0 = L_4;
		// m_kartName = carInfo.data.name;
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_5 = V_0;
		NullCheck(L_5);
		CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * L_6 = L_5->get_data_0();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_name_3();
		__this->set_m_kartName_9(L_7);
		// m_kartColor = carInfo.data.kartColor;
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_8 = V_0;
		NullCheck(L_8);
		CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * L_9 = L_8->get_data_0();
		NullCheck(L_9);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = L_9->get_kartColor_1();
		__this->set_m_kartColor_8(L_10);
		// transform.position = carInfo.data.pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_12 = V_0;
		NullCheck(L_12);
		CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * L_13 = L_12->get_data_0();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = L_13->get_pos_2();
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_14, /*hidden argument*/NULL);
		// m_startBoostSpeed = carInfo.data.startSpeed;
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_15 = V_0;
		NullCheck(L_15);
		CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * L_16 = L_15->get_data_0();
		NullCheck(L_16);
		float L_17 = L_16->get_startSpeed_7();
		__this->set_m_startBoostSpeed_26(L_17);
		// m_normalMaxSpeed = carInfo.data.maxSpeed;
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_18 = V_0;
		NullCheck(L_18);
		CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * L_19 = L_18->get_data_0();
		NullCheck(L_19);
		float L_20 = L_19->get_maxSpeed_4();
		__this->set_m_normalMaxSpeed_29(L_20);
		// m_boosterMaxSpeed = carInfo.data.maxBoosterSpeed;
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_21 = V_0;
		NullCheck(L_21);
		CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * L_22 = L_21->get_data_0();
		NullCheck(L_22);
		float L_23 = L_22->get_maxBoosterSpeed_5();
		__this->set_m_boosterMaxSpeed_31(L_23);
		// m_turnPower = carInfo.data.maxTurnPower;
		CarInfo_t9D0797487FD468677D787BB0FF2D883572A7EB5C * L_24 = V_0;
		NullCheck(L_24);
		CarData_t2745FD0B24774156F72A72624BCE11AF82ADD09D * L_25 = L_24->get_data_0();
		NullCheck(L_25);
		float L_26 = L_25->get_maxTurnPower_6();
		__this->set_m_turnPower_33(L_26);
		// m_playerName = playerData.userName;
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_27 = ___playerData0;
		NullCheck(L_27);
		String_t* L_28 = L_27->get_userName_2();
		__this->set_m_playerName_7(L_28);
		// }
		return;
	}
}
// System.Void PlayerController::Break(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Break_m1D52BD0C1FAB988971A3AD7B832909D5044F07C7 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, float ___breakForce0, const RuntimeMethod* method)
{
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach(WheelCollider w in m_wheelCollider)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_m_wheelCollider_12();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach(WheelCollider w in m_wheelCollider)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// w.brakeTorque = breakForce;
		float L_5 = ___breakForce0;
		NullCheck(L_4);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		// foreach(WheelCollider w in m_wheelCollider)
		int32_t L_7 = V_1;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlayerController::SetState(PlayerController/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// m_state = state;
		int32_t L_0 = ___state0;
		__this->set_m_state_4(L_0);
		// }
		return;
	}
}
// System.Void PlayerController::InitWheelPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_InitWheelPos_m0C4AB2AE283811EC6F074EFCFA24B3231443836C (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int wLength = m_wheelCollider.Length;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_m_wheelCollider_12();
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// for (int i = 0; i < wLength; i++)
		V_1 = 0;
		goto IL_0050;
	}

IL_000d:
	{
		// m_wheelCollider[i].GetWorldPose(out m_wheelColliderPos, out m_wheelColliderRotation);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_1 = __this->get_m_wheelCollider_12();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_m_wheelColliderPos_18();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_6 = __this->get_address_of_m_wheelColliderRotation_19();
		NullCheck(L_4);
		WheelCollider_GetWorldPose_m227D45061C7734F3ED4A43B7F89605A398BE8BB5(L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_6, /*hidden argument*/NULL);
		// m_wheelColliderCtr[i].UpdatePos(m_wheels[i].transform, m_wheelColliderPos, m_wheelColliderRotation);
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_7 = __this->get_m_wheelColliderCtr_13();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_m_wheels_11();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_m_wheelColliderPos_18();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = __this->get_m_wheelColliderRotation_19();
		NullCheck(L_10);
		WheelController_UpdatePos_mE56D2D293F405C6A49FEB8DC46877FA3716D416E(L_10, L_15, L_16, L_17, /*hidden argument*/NULL);
		// for (int i = 0; i < wLength; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0050:
	{
		// for (int i = 0; i < wLength; i++)
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnBooster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnBooster_mB54C4D587FEF5BA61680419B8DE01D22220C65D2 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// SetState(State.Booster);
		PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5_inline(__this, 1, /*hidden argument*/NULL);
		// m_boosterIcons[m_boosterCnt].enabled = false;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_0 = __this->get_m_boosterIcons_43();
		int32_t L_1 = __this->get_m_boosterCnt_51();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
		// m_boosterCnt--;
		int32_t L_4 = __this->get_m_boosterCnt_51();
		__this->set_m_boosterCnt_51(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		// m_isBooster = true;
		__this->set_m_isBooster_44((bool)1);
		// }
		return;
	}
}
// System.Void PlayerController::BoosterControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_BoosterControl_m497DBFE46661ED9C6E785581C10CA36993EAC72C (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_isBooster)
		bool L_0 = __this->get_m_isBooster_44();
		if (L_0)
		{
			goto IL_003b;
		}
	}
	{
		// if(InputManager.Instance.BoosterKeyDown && m_boosterCnt >= 0)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1;
		L_1 = Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_inline(/*hidden argument*/Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2;
		L_2 = InputManager_get_BoosterKeyDown_m3F07FF6AEE044E5C3D81604C0FED0695AD38BE31_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->get_m_boosterCnt_51();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// OnBooster();
		PlayerController_OnBooster_mB54C4D587FEF5BA61680419B8DE01D22220C65D2(__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// m_boosterBar.fillAmount += m_defultChargingValue;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_m_boosterBar_42();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_m_defultChargingValue_46();
		NullCheck(L_5);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_5, ((float)il2cpp_codegen_add((float)L_6, (float)L_7)), /*hidden argument*/NULL);
	}

IL_003b:
	{
		// if (m_isDrift && InputManager.Instance.Horizontal != 0)
		bool L_8 = __this->get_m_isDrift_40();
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_9;
		L_9 = Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_inline(/*hidden argument*/Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		NullCheck(L_9);
		float L_10;
		L_10 = InputManager_get_Horizontal_mE579B142D4714901F27361F4A14CA8C02B2604A7_inline(L_9, /*hidden argument*/NULL);
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_006d;
		}
	}
	{
		// m_boosterBar.fillAmount += m_boostChargingValue;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = __this->get_m_boosterBar_42();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = L_11;
		NullCheck(L_12);
		float L_13;
		L_13 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_m_boostChargingValue_47();
		NullCheck(L_12);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_12, ((float)il2cpp_codegen_add((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_006d:
	{
		// else if (!m_isDrift && m_boosterBar.fillAmount >= 1f)
		bool L_15 = __this->get_m_isDrift_40();
		if (L_15)
		{
			goto IL_00c8;
		}
	}
	{
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = __this->get_m_boosterBar_42();
		NullCheck(L_16);
		float L_17;
		L_17 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_16, /*hidden argument*/NULL);
		if ((!(((float)L_17) >= ((float)(1.0f)))))
		{
			goto IL_00c8;
		}
	}
	{
		// m_boosterBar.fillAmount = 0f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_18 = __this->get_m_boosterBar_42();
		NullCheck(L_18);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_18, (0.0f), /*hidden argument*/NULL);
		// if (m_boosterCnt < m_boosterMaxCnt - 1)
		int32_t L_19 = __this->get_m_boosterCnt_51();
		int32_t L_20 = __this->get_m_boosterMaxCnt_50();
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)))))
		{
			goto IL_00b5;
		}
	}
	{
		// m_boosterCnt++;
		int32_t L_21 = __this->get_m_boosterCnt_51();
		__this->set_m_boosterCnt_51(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
	}

IL_00b5:
	{
		// m_boosterIcons[m_boosterCnt].enabled = true;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_22 = __this->get_m_boosterIcons_43();
		int32_t L_23 = __this->get_m_boosterCnt_51();
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_25, (bool)1, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_mB16F20D8A54197A9CB7648A10810E68038A49E5D (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// var dirZ = InputManager.Instance.Vertical;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0;
		L_0 = Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_inline(/*hidden argument*/Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = InputManager_get_Vertical_m02E6C12A4599D2F61D7558FBA32BD7F1E9CA1144_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var dirX = InputManager.Instance.Horizontal;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_2;
		L_2 = Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_inline(/*hidden argument*/Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		NullCheck(L_2);
		float L_3;
		L_3 = InputManager_get_Horizontal_mE579B142D4714901F27361F4A14CA8C02B2604A7_inline(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// var currTurnPower = Mathf.Abs(m_turnPower - m_playerRb.velocity.magnitude);
		float L_4 = __this->get_m_turnPower_33();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5 = __this->get_m_playerRb_6();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7;
		L_7 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		float L_8;
		L_8 = fabsf(((float)il2cpp_codegen_subtract((float)L_4, (float)L_7)));
		V_2 = L_8;
		// foreach (WheelController w in m_wheelColliderCtr)
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_9 = __this->get_m_wheelColliderCtr_13();
		V_4 = L_9;
		V_5 = 0;
		goto IL_005a;
	}

IL_0043:
	{
		// foreach (WheelController w in m_wheelColliderCtr)
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// w.Move(m_currSpeed, dirZ);
		float L_14 = __this->get_m_currSpeed_32();
		float L_15 = V_0;
		NullCheck(L_13);
		WheelController_Move_m6906837F76EC4BD1752AE2FE2814331400442F94(L_13, L_14, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005a:
	{
		// foreach (WheelController w in m_wheelColliderCtr)
		int32_t L_17 = V_5;
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_18 = V_4;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		// if (dirZ > 0)
		float L_19 = V_0;
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		// if (m_currSpeed < m_maxSpeed)
		float L_20 = __this->get_m_currSpeed_32();
		float L_21 = __this->get_m_maxSpeed_28();
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_008b;
		}
	}
	{
		// m_currSpeed += m_speedUpVal;
		float L_22 = __this->get_m_currSpeed_32();
		float L_23 = __this->get_m_speedUpVal_37();
		__this->set_m_currSpeed_32(((float)il2cpp_codegen_add((float)L_22, (float)L_23)));
	}

IL_008b:
	{
		// if (m_currSpeed > m_maxSpeed)
		float L_24 = __this->get_m_currSpeed_32();
		float L_25 = __this->get_m_maxSpeed_28();
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_00f8;
		}
	}
	{
		// m_currSpeed -= m_speedDownVal;
		float L_26 = __this->get_m_currSpeed_32();
		float L_27 = __this->get_m_speedDownVal_38();
		__this->set_m_currSpeed_32(((float)il2cpp_codegen_subtract((float)L_26, (float)L_27)));
		// }
		goto IL_00f8;
	}

IL_00ae:
	{
		// else if (dirZ < 0)
		float L_28 = V_0;
		if ((!(((float)L_28) < ((float)(0.0f)))))
		{
			goto IL_00f8;
		}
	}
	{
		// if (m_currSpeed < m_maxReSpeed)
		float L_29 = __this->get_m_currSpeed_32();
		float L_30 = __this->get_m_maxReSpeed_30();
		if ((!(((float)L_29) < ((float)L_30))))
		{
			goto IL_00d7;
		}
	}
	{
		// m_currSpeed += m_speedUpVal;
		float L_31 = __this->get_m_currSpeed_32();
		float L_32 = __this->get_m_speedUpVal_37();
		__this->set_m_currSpeed_32(((float)il2cpp_codegen_add((float)L_31, (float)L_32)));
	}

IL_00d7:
	{
		// if (m_currSpeed > m_maxReSpeed)
		float L_33 = __this->get_m_currSpeed_32();
		float L_34 = __this->get_m_maxReSpeed_30();
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_00f8;
		}
	}
	{
		// m_currSpeed -= m_speedDownVal;
		float L_35 = __this->get_m_currSpeed_32();
		float L_36 = __this->get_m_speedDownVal_38();
		__this->set_m_currSpeed_32(((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)));
	}

IL_00f8:
	{
		// if (Mathf.Abs(dirZ) > 0)
		float L_37 = V_0;
		float L_38;
		L_38 = fabsf(L_37);
		if ((!(((float)L_38) > ((float)(0.0f)))))
		{
			goto IL_0125;
		}
	}
	{
		// for (int i = 0; i < 2; i++)
		V_6 = 0;
		goto IL_0120;
	}

IL_010a:
	{
		// m_wheelColliderCtr[i].Turn(currTurnPower, dirX);
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_39 = __this->get_m_wheelColliderCtr_13();
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		float L_43 = V_2;
		float L_44 = V_1;
		NullCheck(L_42);
		WheelController_Turn_m5A63600BB178A54CCA2094144990EEBA086F3B40(L_42, L_43, L_44, /*hidden argument*/NULL);
		// for (int i = 0; i < 2; i++)
		int32_t L_45 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_0120:
	{
		// for (int i = 0; i < 2; i++)
		int32_t L_46 = V_6;
		if ((((int32_t)L_46) < ((int32_t)2)))
		{
			goto IL_010a;
		}
	}

IL_0125:
	{
		// CarDriftControl();
		PlayerController_CarDriftControl_mAD137B2B92FB3C0E2F2F3B2472BE41B2137B063B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::CarDriftControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CarDriftControl_mAD137B2B92FB3C0E2F2F3B2472BE41B2137B063B (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (m_isDrift)
		bool L_0 = __this->get_m_isDrift_40();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// m_slipRate -= m_slipRateDownForce;
		float L_1 = __this->get_m_slipRate_34();
		float L_2 = __this->get_m_slipRateDownForce_35();
		__this->set_m_slipRate_34(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// if (m_slipRate < 0.1f) m_slipRate = 0.1f;
		float L_3 = __this->get_m_slipRate_34();
		if ((!(((float)L_3) < ((float)(0.100000001f)))))
		{
			goto IL_0060;
		}
	}
	{
		// if (m_slipRate < 0.1f) m_slipRate = 0.1f;
		__this->set_m_slipRate_34((0.100000001f));
		// }
		goto IL_0060;
	}

IL_0035:
	{
		// m_slipRate += m_slipRateUpForce;
		float L_4 = __this->get_m_slipRate_34();
		float L_5 = __this->get_m_slipRateUpForce_36();
		__this->set_m_slipRate_34(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
		// if (m_slipRate > 1f) m_slipRate = 1f;
		float L_6 = __this->get_m_slipRate_34();
		if ((!(((float)L_6) > ((float)(1.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// if (m_slipRate > 1f) m_slipRate = 1f;
		__this->set_m_slipRate_34((1.0f));
	}

IL_0060:
	{
		// for (int i = 2; i < 4; i++)
		V_0 = 2;
		goto IL_00c9;
	}

IL_0064:
	{
		// m_fowardFricBackWheel = m_wheelCollider[i].forwardFriction;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_7 = __this->get_m_wheelCollider_12();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_11;
		L_11 = WheelCollider_get_forwardFriction_m430D5CCD9D463482275A9058352832DA8153B7DD(L_10, /*hidden argument*/NULL);
		__this->set_m_fowardFricBackWheel_14(L_11);
		// m_sidewayFricBackWheel = m_wheelCollider[i].sidewaysFriction;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_12 = __this->get_m_wheelCollider_12();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_16;
		L_16 = WheelCollider_get_sidewaysFriction_m85AA645570CAC61DF6BC5F9B8F70409A877F7DFE(L_15, /*hidden argument*/NULL);
		__this->set_m_sidewayFricBackWheel_15(L_16);
		// m_fowardFricBackWheel.stiffness = m_slipRate;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_17 = __this->get_address_of_m_fowardFricBackWheel_14();
		float L_18 = __this->get_m_slipRate_34();
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)L_17, L_18, /*hidden argument*/NULL);
		// m_sidewayFricBackWheel.stiffness = m_slipRate;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_19 = __this->get_address_of_m_sidewayFricBackWheel_15();
		float L_20 = __this->get_m_slipRate_34();
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)L_19, L_20, /*hidden argument*/NULL);
		// m_wheelColliderCtr[i].Drift(m_fowardFricBackWheel, m_sidewayFricBackWheel);
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_21 = __this->get_m_wheelColliderCtr_13();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_25 = __this->get_m_fowardFricBackWheel_14();
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_26 = __this->get_m_sidewayFricBackWheel_15();
		NullCheck(L_24);
		WheelController_Drift_mC4BDA672AE5C078A370EF926B8F4EB2DB39B0B24(L_24, L_25, L_26, /*hidden argument*/NULL);
		// for (int i = 2; i < 4; i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00c9:
	{
		// for (int i = 2; i < 4; i++)
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) < ((int32_t)4)))
		{
			goto IL_0064;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlayerController::WheelStabilizerBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_WheelStabilizerBar_mFE7458CAF40188D739ADBAD51886F8EF10479139 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// m_isGroundL = m_wheelCollider[2].GetGroundHit(out hit);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_m_wheelCollider_12();
		NullCheck(L_0);
		int32_t L_1 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		bool L_3;
		L_3 = WheelCollider_GetGroundHit_mDCD55AC74710E685DBA37F02C904B8F8F3E59DB9(L_2, (WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_isGroundL_23(L_3);
		// if(m_isGroundL)
		bool L_4 = __this->get_m_isGroundL_23();
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		// m_travelL = (-m_wheelCollider[2].transform.InverseTransformPoint(hit.point).y - m_wheelCollider[2].radius) / m_wheelCollider[2].suspensionDistance;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_5 = __this->get_m_wheelCollider_12();
		NullCheck(L_5);
		int32_t L_6 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = WheelHit_get_point_m950E6B764A768CE147DB57C1CAE81D288391E5E8((WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_12 = __this->get_m_wheelCollider_12();
		NullCheck(L_12);
		int32_t L_13 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		float L_15;
		L_15 = WheelCollider_get_radius_mDB04C14DAB0BB1D5D7A2D160C5EE3F159CE3FA26(L_14, /*hidden argument*/NULL);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_16 = __this->get_m_wheelCollider_12();
		NullCheck(L_16);
		int32_t L_17 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		float L_19;
		L_19 = WheelCollider_get_suspensionDistance_m716BAA97103E158AAD36ECA2D775047D41ADB368(L_18, /*hidden argument*/NULL);
		__this->set_m_travelL_21(((float)((float)((float)il2cpp_codegen_subtract((float)((-L_11)), (float)L_15))/(float)L_19)));
	}

IL_005e:
	{
		// m_isGroundR = m_wheelCollider[3].GetGroundHit(out hit);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_20 = __this->get_m_wheelCollider_12();
		NullCheck(L_20);
		int32_t L_21 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		bool L_23;
		L_23 = WheelCollider_GetGroundHit_mDCD55AC74710E685DBA37F02C904B8F8F3E59DB9(L_22, (WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_isGroundR_24(L_23);
		// if(m_isGroundR)
		bool L_24 = __this->get_m_isGroundR_24();
		if (!L_24)
		{
			goto IL_00bc;
		}
	}
	{
		// m_travelR = (-m_wheelCollider[3].transform.InverseTransformPoint(hit.point).y - m_wheelCollider[3].radius) / m_wheelCollider[3].suspensionDistance;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_25 = __this->get_m_wheelCollider_12();
		NullCheck(L_25);
		int32_t L_26 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = WheelHit_get_point_m950E6B764A768CE147DB57C1CAE81D288391E5E8((WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_28, L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_y_3();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_32 = __this->get_m_wheelCollider_12();
		NullCheck(L_32);
		int32_t L_33 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		float L_35;
		L_35 = WheelCollider_get_radius_mDB04C14DAB0BB1D5D7A2D160C5EE3F159CE3FA26(L_34, /*hidden argument*/NULL);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_36 = __this->get_m_wheelCollider_12();
		NullCheck(L_36);
		int32_t L_37 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		float L_39;
		L_39 = WheelCollider_get_suspensionDistance_m716BAA97103E158AAD36ECA2D775047D41ADB368(L_38, /*hidden argument*/NULL);
		__this->set_m_travelR_22(((float)((float)((float)il2cpp_codegen_subtract((float)((-L_31)), (float)L_35))/(float)L_39)));
	}

IL_00bc:
	{
		// var force = (m_travelL - m_travelR) * m_antiRollVal;
		float L_40 = __this->get_m_travelL_21();
		float L_41 = __this->get_m_travelR_22();
		float L_42 = __this->get_m_antiRollVal_20();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_40, (float)L_41)), (float)L_42));
		// if(m_isGroundL)
		bool L_43 = __this->get_m_isGroundL_23();
		if (!L_43)
		{
			goto IL_0113;
		}
	}
	{
		// m_playerRb.AddForceAtPosition(-m_wheelCollider[2].transform.up * force, m_wheelCollider[2].transform.position);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_44 = __this->get_m_playerRb_6();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_45 = __this->get_m_wheelCollider_12();
		NullCheck(L_45);
		int32_t L_46 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_48, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_49, /*hidden argument*/NULL);
		float L_51 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_50, L_51, /*hidden argument*/NULL);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_53 = __this->get_m_wheelCollider_12();
		NullCheck(L_53);
		int32_t L_54 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		NullCheck(L_44);
		Rigidbody_AddForceAtPosition_m5190249D95CE1882B37481C5BFD2ABF201902BA5(L_44, L_52, L_57, /*hidden argument*/NULL);
	}

IL_0113:
	{
		// if(m_isGroundR)
		bool L_58 = __this->get_m_isGroundR_24();
		if (!L_58)
		{
			goto IL_0150;
		}
	}
	{
		// m_playerRb.AddForceAtPosition(m_wheelCollider[3].transform.up * force, m_wheelCollider[3].transform.position);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_59 = __this->get_m_playerRb_6();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_60 = __this->get_m_wheelCollider_12();
		NullCheck(L_60);
		int32_t L_61 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_63, /*hidden argument*/NULL);
		float L_65 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_64, L_65, /*hidden argument*/NULL);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_67 = __this->get_m_wheelCollider_12();
		NullCheck(L_67);
		int32_t L_68 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_70, /*hidden argument*/NULL);
		NullCheck(L_59);
		Rigidbody_AddForceAtPosition_m5190249D95CE1882B37481C5BFD2ABF201902BA5(L_59, L_66, L_71, /*hidden argument*/NULL);
	}

IL_0150:
	{
		// }
		return;
	}
}
// System.Void PlayerController::PlayEngineSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_PlayEngineSound_m6C5CAE1675C928FB984197B43E07E83E7571AFA4 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter_m68BA6D0E1F4613D0A8E7A86BA53F2A94AF4D9C84 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// CrashCnt++;
		int32_t L_0;
		L_0 = PlayerController_get_CrashCnt_m569632CB37790AD2080088D68362BCD75E0DB897_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		PlayerController_set_CrashCnt_m92C7C1BA8E01C77420D1A86400702F36EDE81DA3_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m9531F30EC892BDD1758A2EEC724E86EFBDA150A3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisWheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_m17413F9808DE4439423E099650601D9332D77756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779_mA24D5DC9C60C0CEF50D9E3B3BE1966D8610EA617_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// m_playerRb.centerOfMass = m_center.localPosition;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_m_playerRb_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_m_center_5();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_centerOfMass_m3B13BE412D99CE5133606643F14501CF5C63CCEC(L_0, L_2, /*hidden argument*/NULL);
		// m_wheelColliderCtr = GetComponentsInChildren<WheelController>();
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_3;
		L_3 = Component_GetComponentsInChildren_TisWheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_m17413F9808DE4439423E099650601D9332D77756(__this, /*hidden argument*/Component_GetComponentsInChildren_TisWheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_m17413F9808DE4439423E099650601D9332D77756_RuntimeMethod_var);
		__this->set_m_wheelColliderCtr_13(L_3);
		// for (int i = 0; i < m_wheelColliderCtr.Length; i++)
		V_0 = 0;
		goto IL_0044;
	}

IL_0026:
	{
		// m_wheelCollider[i] = m_wheelColliderCtr[i].gameObject.GetComponent<WheelCollider>();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_4 = __this->get_m_wheelCollider_12();
		int32_t L_5 = V_0;
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_6 = __this->get_m_wheelColliderCtr_13();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_11;
		L_11 = GameObject_GetComponent_TisWheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779_mA24D5DC9C60C0CEF50D9E3B3BE1966D8610EA617(L_10, /*hidden argument*/GameObject_GetComponent_TisWheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779_mA24D5DC9C60C0CEF50D9E3B3BE1966D8610EA617_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_11);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 *)L_11);
		// for (int i = 0; i < m_wheelColliderCtr.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0044:
	{
		// for (int i = 0; i < m_wheelColliderCtr.Length; i++)
		int32_t L_13 = V_0;
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_14 = __this->get_m_wheelColliderCtr_13();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		// m_boosterIcons[0].enabled = m_boosterIcons[1].enabled = false;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_15 = __this->get_m_boosterIcons_43();
		NullCheck(L_15);
		int32_t L_16 = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_18 = __this->get_m_boosterIcons_43();
		NullCheck(L_18);
		int32_t L_19 = 1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = 0;
		V_1 = (bool)L_21;
		NullCheck(L_20);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)L_21, /*hidden argument*/NULL);
		bool L_22 = V_1;
		NullCheck(L_17);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_17, L_22, /*hidden argument*/NULL);
		// m_state = State.Defult;
		__this->set_m_state_4(0);
		// m_wheelCollider[2].brakeTorque = m_wheelCollider[3].brakeTorque = 0f;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_23 = __this->get_m_wheelCollider_12();
		NullCheck(L_23);
		int32_t L_24 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_26 = __this->get_m_wheelCollider_12();
		NullCheck(L_26);
		int32_t L_27 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		float L_29 = (0.0f);
		V_2 = L_29;
		NullCheck(L_28);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_28, L_29, /*hidden argument*/NULL);
		float L_30 = V_2;
		NullCheck(L_25);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_25, L_30, /*hidden argument*/NULL);
		// m_boosterBar.fillAmount = 0f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_m_boosterBar_42();
		NullCheck(L_31);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_31, (0.0f), /*hidden argument*/NULL);
		// InitWheelPos();
		PlayerController_InitWheelPos_m0C4AB2AE283811EC6F074EFCFA24B3231443836C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_mB31159CAD7DD2329859472554BC9154A83D8E794 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// m_speed = (m_playerRb.velocity.magnitude * 3.6f) * 5.5f;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_m_playerRb_6();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_speed_39(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_2, (float)(3.5999999f))), (float)(5.5f))));
		// switch (m_state)
		int32_t L_3 = __this->get_m_state_4();
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_00ac;
			}
		}
	}
	{
		goto IL_0103;
	}

IL_0043:
	{
		// m_maxSpeed = m_normalMaxSpeed;
		float L_5 = __this->get_m_normalMaxSpeed_29();
		__this->set_m_maxSpeed_28(L_5);
		// break;
		goto IL_0103;
	}

IL_0054:
	{
		// m_maxSpeed = m_boosterMaxSpeed;
		float L_6 = __this->get_m_boosterMaxSpeed_31();
		__this->set_m_maxSpeed_28(L_6);
		// m_time += Time.deltaTime;
		float L_7 = __this->get_m_time_48();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_m_time_48(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// if(m_time > m_boosterTime)
		float L_9 = __this->get_m_time_48();
		float L_10 = __this->get_m_boosterTime_49();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0103;
		}
	}
	{
		// SetState(State.Defult);
		PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5_inline(__this, 0, /*hidden argument*/NULL);
		// m_boosterUseCnt++;
		int32_t L_11 = __this->get_m_boosterUseCnt_45();
		__this->set_m_boosterUseCnt_45(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		// m_isBooster = false;
		__this->set_m_isBooster_44((bool)0);
		// m_time = 0f;
		__this->set_m_time_48((0.0f));
		// break;
		goto IL_0103;
	}

IL_00ac:
	{
		// Break(10000f);
		PlayerController_Break_m1D52BD0C1FAB988971A3AD7B832909D5044F07C7(__this, (10000.0f), /*hidden argument*/NULL);
		// m_currSpeed = 0f;
		__this->set_m_currSpeed_32((0.0f));
		// m_time += Time.deltaTime;
		float L_12 = __this->get_m_time_48();
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_m_time_48(((float)il2cpp_codegen_add((float)L_12, (float)L_13)));
		// if (m_time > GameSystemManager.Instance.ResetCoolDown)
		float L_14 = __this->get_m_time_48();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_15;
		L_15 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16;
		L_16 = GameSystemManager_get_ResetCoolDown_mDF8175061B7707F1209DF80717A460D3ABEE3DE7_inline(L_15, /*hidden argument*/NULL);
		if ((!(((float)L_14) > ((float)L_16))))
		{
			goto IL_0103;
		}
	}
	{
		// Break(0f);
		PlayerController_Break_m1D52BD0C1FAB988971A3AD7B832909D5044F07C7(__this, (0.0f), /*hidden argument*/NULL);
		// SetState(State.Defult);
		PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5_inline(__this, 0, /*hidden argument*/NULL);
		// m_time = 0f;
		__this->set_m_time_48((0.0f));
	}

IL_0103:
	{
		// if (InputManager.Instance.HandBreakKeyDown)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_17;
		L_17 = Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_inline(/*hidden argument*/Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		NullCheck(L_17);
		bool L_18;
		L_18 = InputManager_get_HandBreakKeyDown_m2A024A77CF8F4594D11F9EA695ABC2B894801B30_inline(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0132;
		}
	}
	{
		// m_isDrift = true;
		__this->set_m_isDrift_40((bool)1);
		// m_startDriftPosSum += transform.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = __this->get_m_startDriftPosSum_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_21, /*hidden argument*/NULL);
		__this->set_m_startDriftPosSum_16(L_22);
	}

IL_0132:
	{
		// if(InputManager.Instance.HandBreakKeyUp)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_23;
		L_23 = Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_inline(/*hidden argument*/Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		NullCheck(L_23);
		bool L_24;
		L_24 = InputManager_get_HandBreakKeyUp_m18D82FC0B35DA6CBA633C3BDD898EA6417F3BCB9_inline(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0161;
		}
	}
	{
		// m_isDrift = false;
		__this->set_m_isDrift_40((bool)0);
		// m_endDriftPosSum += transform.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_m_endDriftPosSum_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_25, L_27, /*hidden argument*/NULL);
		__this->set_m_endDriftPosSum_17(L_28);
	}

IL_0161:
	{
		// if(InputManager.Instance.ResetKeyDown)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_29;
		L_29 = Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_inline(/*hidden argument*/Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		NullCheck(L_29);
		bool L_30;
		L_30 = InputManager_get_ResetKeyDown_m32A0EF91EFD01C6648844A1D1E7E80F78BCF8214_inline(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0177;
		}
	}
	{
		// GameSystemManager.Instance.ResetPlayerPosition();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_31;
		L_31 = Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m96F4991A214422D7CA9C7008DC79328FE6F34F54_RuntimeMethod_var);
		NullCheck(L_31);
		GameSystemManager_ResetPlayerPosition_m25B0C92C87FE24EBB5B8924297C9B67B12123D43(L_31, /*hidden argument*/NULL);
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m54EE3ADAA7597303B1F69849B233D1A68D880B14 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_playerRb.AddForce(Vector3.down * m_forceValue * m_playerRb.velocity.magnitude);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_m_playerRb_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		float L_2 = __this->get_m_forceValue_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_4 = __this->get_m_playerRb_6();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_0, L_7, /*hidden argument*/NULL);
		// if (m_isStart)
		bool L_8 = __this->get_m_isStart_41();
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// Move();
		PlayerController_Move_mB16F20D8A54197A9CB7648A10810E68038A49E5D(__this, /*hidden argument*/NULL);
		// BoosterControl();
		PlayerController_BoosterControl_m497DBFE46661ED9C6E785581C10CA36993EAC72C(__this, /*hidden argument*/NULL);
		// InitWheelPos();
		PlayerController_InitWheelPos_m0C4AB2AE283811EC6F074EFCFA24B3231443836C(__this, /*hidden argument*/NULL);
		// WheelStabilizerBar();
		PlayerController_WheelStabilizerBar_mFE7458CAF40188D739ADBAD51886F8EF10479139(__this, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject[] m_wheels = new GameObject[4]; //�����Ž� �迭
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_m_wheels_11(L_0);
		// WheelCollider[] m_wheelCollider = new WheelCollider[4];
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_1 = (WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6*)(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6*)SZArrayNew(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_m_wheelCollider_12(L_1);
		// WheelController[] m_wheelColliderCtr = new WheelController[4]; //�� �ݶ��̴� �迭
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_2 = (WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11*)(WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11*)SZArrayNew(WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_m_wheelColliderCtr_13(L_2);
		// float m_antiRollVal = 5000f;
		__this->set_m_antiRollVal_20((5000.0f));
		// float m_travelL = 1f;
		__this->set_m_travelL_21((1.0f));
		// float m_travelR = 1f;
		__this->set_m_travelR_22((1.0f));
		// float m_startBoostTime = 0.5f;
		__this->set_m_startBoostTime_25((0.5f));
		// float m_startBoostSpeed = 5f;
		__this->set_m_startBoostSpeed_26((5.0f));
		// float m_normalMaxSpeed = 150f; //�ڵ����� ���� �ִ�ӵ�
		__this->set_m_normalMaxSpeed_29((150.0f));
		// float m_maxReSpeed = 15f; //�ڵ����� ���� �ְ��ӵ�
		__this->set_m_maxReSpeed_30((15.0f));
		// float m_turnPower = 3f; //�ڵ����� ȸ���ӵ�
		__this->set_m_turnPower_33((3.0f));
		// float m_slipRate = 1.0f; //���� �������
		__this->set_m_slipRate_34((1.0f));
		// float m_speedUpVal = 3f;
		__this->set_m_speedUpVal_37((3.0f));
		// float m_speedDownVal = 1f;
		__this->set_m_speedDownVal_38((1.0f));
		// Image[] m_boosterIcons = new Image[2];
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_3 = (ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224*)(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224*)SZArrayNew(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_boosterIcons_43(L_3);
		// float m_defultChargingValue = 0.0001f;
		__this->set_m_defultChargingValue_46((9.99999975E-05f));
		// float m_boostChargingValue = 0.005f;
		__this->set_m_boostChargingValue_47((0.00499999989f));
		// float m_boosterTime = 2f;
		__this->set_m_boosterTime_49((2.0f));
		// int m_boosterMaxCnt = 2;
		__this->set_m_boosterMaxCnt_50(2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData__ctor_mC2DA6B32832AB92B19E799148968590FF1F28C1B (PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0EDE7105BBC326084DA2BAFCD153E386F5228776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m211FFA81B3AB1306FEFFCF1ACAE09CF596EC8081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<CarInfo> carsList = new List<CarInfo>();
		List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 * L_0 = (List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3 *)il2cpp_codegen_object_new(List_1_t8587BECE546F715C18E01DA4BE276BE467B810F3_il2cpp_TypeInfo_var);
		List_1__ctor_m0EDE7105BBC326084DA2BAFCD153E386F5228776(L_0, /*hidden argument*/List_1__ctor_m0EDE7105BBC326084DA2BAFCD153E386F5228776_RuntimeMethod_var);
		__this->set_carsList_0(L_0);
		// public List<MapInfo> mapList = new List<MapInfo>();
		List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 * L_1 = (List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21 *)il2cpp_codegen_object_new(List_1_tD176EECBD5BEBC72403F2658B7D6F75DCD77CD21_il2cpp_TypeInfo_var);
		List_1__ctor_m211FFA81B3AB1306FEFFCF1ACAE09CF596EC8081(L_1, /*hidden argument*/List_1__ctor_m211FFA81B3AB1306FEFFCF1ACAE09CF596EC8081_RuntimeMethod_var);
		__this->set_mapList_1(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform[] ResetPointManager::get_ResetPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ResetPointManager_get_ResetPoints_m92FC544988A8D4229C3DFBF95221117AD43E1D1C (ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * __this, const RuntimeMethod* method)
{
	{
		// public Transform[] ResetPoints { get { return m_resetPoints; } }
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_m_resetPoints_5();
		return L_0;
	}
}
// System.Void ResetPointManager::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetPointManager_OnStart_m3E7D818DBBF434DF304418DC144935DA616E516F (ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_resetPoints = GetComponentsInChildren<Transform>();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0;
		L_0 = Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C(__this, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var);
		__this->set_m_resetPoints_5(L_0);
		// }
		return;
	}
}
// System.Void ResetPointManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetPointManager__ctor_m9158767BB1E71F13609A4C9E37EA362579B9FEC8 (ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m87F1DF44033454E90854C38EF11BDE3E9DA6568E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m87F1DF44033454E90854C38EF11BDE3E9DA6568E(__this, /*hidden argument*/Singleton_1__ctor_m87F1DF44033454E90854C38EF11BDE3E9DA6568E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TitleController::OnStartButtonPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleController_OnStartButtonPress_m3B8F1413193F5133764CAFCBA44BDFDC86412C90 (TitleController_tCF91AD75A5ECCDFD621B67FBC7012A0007965D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m0F7FEFE4C28410D4A8700CF512F22A3403E38542_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadSceneManager.Instance.LoadSceneAsync(SceneState.Lobby);
		LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * L_0;
		L_0 = Singleton_DontDestroy_1_get_Instance_m0F7FEFE4C28410D4A8700CF512F22A3403E38542_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m0F7FEFE4C28410D4A8700CF512F22A3403E38542_RuntimeMethod_var);
		NullCheck(L_0);
		LoadSceneManager_LoadSceneAsync_m8380BE31B9121D5F65528078A63D376E9C48BCE6(L_0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TitleController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleController__ctor_m33949E941F484FE79EFACBEF7BA4D7F01018A4EA (TitleController_tCF91AD75A5ECCDFD621B67FBC7012A0007965D8F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.WheelFrictionCurve WheelController::get_ForwardFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelController_get_ForwardFriction_m72D285AF5293DA147B698698C7E396DBDDCBC4C6 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, const RuntimeMethod* method)
{
	{
		// public WheelFrictionCurve ForwardFriction { get { return m_wheelCollider.forwardFriction; } }
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_m_wheelCollider_4();
		NullCheck(L_0);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_1;
		L_1 = WheelCollider_get_forwardFriction_m430D5CCD9D463482275A9058352832DA8153B7DD(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.WheelFrictionCurve WheelController::get_SideWayFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelController_get_SideWayFriction_m412F8BF6F797F35558E14C073C687054BCB69086 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, const RuntimeMethod* method)
{
	{
		// public WheelFrictionCurve SideWayFriction { get { return m_wheelCollider.sidewaysFriction; } }
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_m_wheelCollider_4();
		NullCheck(L_0);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_1;
		L_1 = WheelCollider_get_sidewaysFriction_m85AA645570CAC61DF6BC5F9B8F70409A877F7DFE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void WheelController::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Move_m6906837F76EC4BD1752AE2FE2814331400442F94 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, float ___speed0, float ___dir1, const RuntimeMethod* method)
{
	{
		// m_wheelCollider.motorTorque = (speed * 5) / 4 * dir * Time.fixedDeltaTime;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_m_wheelCollider_4();
		float L_1 = ___speed0;
		float L_2 = ___dir1;
		float L_3;
		L_3 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		NullCheck(L_0);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_0, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_1, (float)(5.0f)))/(float)(4.0f))), (float)L_2)), (float)L_3)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WheelController::Turn(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Turn_m5A63600BB178A54CCA2094144990EEBA086F3B40 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, float ___speed0, float ___dir1, const RuntimeMethod* method)
{
	{
		// m_wheelCollider.steerAngle = speed * dir * 10f * Time.fixedDeltaTime;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_m_wheelCollider_4();
		float L_1 = ___speed0;
		float L_2 = ___dir1;
		float L_3;
		L_3 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		NullCheck(L_0);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_0, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (float)(10.0f))), (float)L_3)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WheelController::Drift(UnityEngine.WheelFrictionCurve,UnityEngine.WheelFrictionCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Drift_mC4BDA672AE5C078A370EF926B8F4EB2DB39B0B24 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___forwardWheelFric0, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___sidewayWheelFric1, const RuntimeMethod* method)
{
	{
		// m_wheelCollider.forwardFriction = forwardWheelFric;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_m_wheelCollider_4();
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_1 = ___forwardWheelFric0;
		NullCheck(L_0);
		WheelCollider_set_forwardFriction_mEC613D233431786260E97DA4B2D14C597A4390A8(L_0, L_1, /*hidden argument*/NULL);
		// m_wheelCollider.sidewaysFriction = sidewayWheelFric;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_2 = __this->get_m_wheelCollider_4();
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_3 = ___sidewayWheelFric1;
		NullCheck(L_2);
		WheelCollider_set_sidewaysFriction_mEE0EFD1DFE53A0FA023F8D1E05840A58D69784C2(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WheelController::UpdatePos(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_UpdatePos_mE56D2D293F405C6A49FEB8DC46877FA3716D416E (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___wheel0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	{
		// wheel.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___wheel0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___pos1;
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// wheel.rotation = rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___wheel0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___rotation2;
		NullCheck(L_2);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WheelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController__ctor_m29AF8F8DD974E854EDDFE98D524FA043D52EC134 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameSystemManager/<Coroutine_CountDown>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__48__ctor_mDB139B7307811BF2976DB22099985FE674B5AE02 (U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameSystemManager/<Coroutine_CountDown>d__48::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__48_System_IDisposable_Dispose_m620AEE7E4D3EA34BFEB1609C241916E03D3B56E0 (U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameSystemManager/<Coroutine_CountDown>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_CountDownU3Ed__48_MoveNext_mB3A65D5ABB71D534B50F5AF84FB0A70536EC78BB (U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSystemManager_U3CCoroutine_CountDownU3Eb__48_0_m9F234F2E7C1D244B6764D3F8FD9804C15DCE0568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03A2B194F1456E87F9587B9E4AB3D9B3CC3C4B43);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * V_1 = NULL;
	int32_t V_2 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_018b;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float time = 0f;
		__this->set_U3CtimeU3E5__2_3((0.0f));
		// int cnt = 3;
		__this->set_U3CcntU3E5__3_4(3);
		// InGameUiManager.Instance.StartCoroutine(InGameUiManager.Instance.Coroutine_TextScaleFadeIn(m_countText, m_scaleCurve, m_minScale, m_maxScale, 4));
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_4;
		L_4 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_5;
		L_5 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_6 = V_1;
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6->get_m_countText_28();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_8 = V_1;
		NullCheck(L_8);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = L_8->get_m_scaleCurve_25();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_m_minScale_35();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_m_maxScale_34();
		NullCheck(L_5);
		RuntimeObject* L_14;
		L_14 = InGameUiManager_Coroutine_TextScaleFadeIn_mF2499A7C58A9D79C30223A90A06BAAC7E846DECB(L_5, L_7, L_9, L_11, L_13, 4, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
		L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_4, L_14, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// m_sb.Clear();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_16 = V_1;
		NullCheck(L_16);
		StringBuilder_t * L_17 = L_16->get_m_sb_5();
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_17, /*hidden argument*/NULL);
		// m_sb.Append(cnt);
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_19 = V_1;
		NullCheck(L_19);
		StringBuilder_t * L_20 = L_19->get_m_sb_5();
		int32_t L_21 = __this->get_U3CcntU3E5__3_4();
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD(L_20, L_21, /*hidden argument*/NULL);
		// m_countText.text = m_sb.ToString();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_23 = V_1;
		NullCheck(L_23);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = L_23->get_m_countText_28();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_25 = V_1;
		NullCheck(L_25);
		StringBuilder_t * L_26 = L_25->get_m_sb_5();
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_27);
		// time += Time.deltaTime;
		float L_28 = __this->get_U3CtimeU3E5__2_3();
		float L_29;
		L_29 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_28, (float)L_29)));
		// if (time > 1f)
		float L_30 = __this->get_U3CtimeU3E5__2_3();
		if ((!(((float)L_30) > ((float)(1.0f)))))
		{
			goto IL_00cf;
		}
	}
	{
		// cnt--;
		int32_t L_31 = __this->get_U3CcntU3E5__3_4();
		V_2 = L_31;
		int32_t L_32 = V_2;
		__this->set_U3CcntU3E5__3_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)));
		// time = 0f;
		__this->set_U3CtimeU3E5__2_3((0.0f));
	}

IL_00cf:
	{
		// if (cnt < 1)
		int32_t L_33 = __this->get_U3CcntU3E5__3_4();
		if ((((int32_t)L_33) >= ((int32_t)1)))
		{
			goto IL_017b;
		}
	}
	{
		// float[] colors = new float[3] { 1f, 1f, 1f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = L_34;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_36 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_35;
		// m_countText.text = "����";
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_37 = V_1;
		NullCheck(L_37);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = L_37->get_m_countText_28();
		NullCheck(L_38);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, _stringLiteral03A2B194F1456E87F9587B9E4AB3D9B3CC3C4B43);
		// InGameUiManager.Instance.SetActiveAllCanvas(true);
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_39;
		L_39 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		NullCheck(L_39);
		InGameUiManager_SetActiveAllCanvas_m87FEE572924E350996309176326A46B360FBFDED(L_39, (bool)1, /*hidden argument*/NULL);
		// m_player.StartCoroutine(m_player.Coroutine_StartBoost());
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_40 = V_1;
		NullCheck(L_40);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_41 = L_40->get_m_player_23();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_42 = V_1;
		NullCheck(L_42);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_43 = L_42->get_m_player_23();
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = PlayerController_Coroutine_StartBoost_m37C3D0BAF50DF3D1742F9229DBF708BDB8419E01(L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_45;
		L_45 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_41, L_44, /*hidden argument*/NULL);
		// InGameUiManager.Instance.StartCoroutine(InGameUiManager.Instance.Coroutine_TextAlphaFadeout(m_countText, m_alphaCurve, m_alphaFrom, m_alphaTo, m_duration, colors, () => m_countCanvas.enabled = false));
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_46;
		L_46 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_47;
		L_47 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_48 = V_1;
		NullCheck(L_48);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_49 = L_48->get_m_countText_28();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_50 = V_1;
		NullCheck(L_50);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_51 = L_50->get_m_alphaCurve_26();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_52 = V_1;
		NullCheck(L_52);
		float L_53 = L_52->get_m_alphaFrom_36();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_54 = V_1;
		NullCheck(L_54);
		float L_55 = L_54->get_m_alphaTo_37();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_56 = V_1;
		NullCheck(L_56);
		float L_57 = L_56->get_m_duration_30();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_58 = V_3;
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_59 = V_1;
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_60 = (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 *)il2cpp_codegen_object_new(FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54_il2cpp_TypeInfo_var);
		FuncDel__ctor_m5B834188921D4D72168C3266160E9FCFF25AA205(L_60, L_59, (intptr_t)((intptr_t)GameSystemManager_U3CCoroutine_CountDownU3Eb__48_0_m9F234F2E7C1D244B6764D3F8FD9804C15DCE0568_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_47);
		RuntimeObject* L_61;
		L_61 = InGameUiManager_Coroutine_TextAlphaFadeout_mB18DF43D5719A3F02E12808A70B00BC3C2B035C5(L_47, L_49, L_51, L_53, L_55, L_57, L_58, L_60, /*hidden argument*/NULL);
		NullCheck(L_46);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_62;
		L_62 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_46, L_61, /*hidden argument*/NULL);
		// m_player.IsStart = true;
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_63 = V_1;
		NullCheck(L_63);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_64 = L_63->get_m_player_23();
		NullCheck(L_64);
		PlayerController_set_IsStart_m5A2591E0C7CDC386CFBC7106F6B67BBEA6470ED3_inline(L_64, (bool)1, /*hidden argument*/NULL);
		// m_isStart = true;
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_65 = V_1;
		NullCheck(L_65);
		L_65->set_m_isStart_19((bool)1);
		// m_isCanReset = true;
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_66 = V_1;
		NullCheck(L_66);
		L_66->set_m_isCanReset_22((bool)1);
		// yield break;
		return (bool)0;
	}

IL_017b:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_018b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0061;
	}
}
// System.Object GameSystemManager/<Coroutine_CountDown>d__48::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_CountDownU3Ed__48_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m98499C48E1BF071BF1F48CD2333534005281ED15 (U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameSystemManager/<Coroutine_CountDown>d__48::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__48_System_Collections_IEnumerator_Reset_m07B4BBE2ED4223E8E2EF1E54343AFB800DCE1362 (U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_CountDownU3Ed__48_System_Collections_IEnumerator_Reset_m07B4BBE2ED4223E8E2EF1E54343AFB800DCE1362_RuntimeMethod_var)));
	}
}
// System.Object GameSystemManager/<Coroutine_CountDown>d__48::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_CountDownU3Ed__48_System_Collections_IEnumerator_get_Current_m8EB2FC79555FA7D36A784D478FF4BA5C1589EECE (U3CCoroutine_CountDownU3Ed__48_t90285CFADF6FCAEAEFF9786A58AA546E6C02FCDE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28__ctor_m5682EAC9C43C140AB026F85BAE6973B30573C6BC (U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_System_IDisposable_Dispose_mFB4BA9AFEB731F05643DFF3989C9F61A84F0FA96 (U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_MoveNext_m72FC098746154A558D71D264575C40C0950F97BF (U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0104;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float time = 0f;
		__this->set_U3CtimeU3E5__2_10((0.0f));
	}

IL_0025:
	{
		// var alphaValue = curve.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_curve_2();
		float L_4 = __this->get_U3CtimeU3E5__2_10();
		NullCheck(L_3);
		float L_5;
		L_5 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// var alpha = from * (1f - alphaValue) + to * alphaValue;
		float L_6 = __this->get_from_3();
		float L_7 = V_1;
		float L_8 = __this->get_to_4();
		float L_9 = V_1;
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_6, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9))));
		// text.color = new Color(rgbColors[0], rgbColors[1], rgbColors[2], alpha);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_text_5();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_rgbColors_6();
		NullCheck(L_11);
		int32_t L_12 = 0;
		float L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = __this->get_rgbColors_6();
		NullCheck(L_14);
		int32_t L_15 = 1;
		float L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = __this->get_rgbColors_6();
		NullCheck(L_17);
		int32_t L_18 = 2;
		float L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_21), L_13, L_16, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_21);
		// outline.effectColor = new Color(outline.effectColor.r, outline.effectColor.g, outline.effectColor.b, alpha);
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_22 = __this->get_outline_7();
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_23 = __this->get_outline_7();
		NullCheck(L_23);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = Shadow_get_effectColor_m00C1776542129598C244BB469E7128D60F6BCAC2_inline(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_r_0();
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_26 = __this->get_outline_7();
		NullCheck(L_26);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = Shadow_get_effectColor_m00C1776542129598C244BB469E7128D60F6BCAC2_inline(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_g_1();
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_29 = __this->get_outline_7();
		NullCheck(L_29);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Shadow_get_effectColor_m00C1776542129598C244BB469E7128D60F6BCAC2_inline(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_b_2();
		float L_32 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_33), L_25, L_28, L_31, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		Shadow_set_effectColor_mFB6601937B8DCBB52A6095435A380C4AE0A807DF(L_22, L_33, /*hidden argument*/NULL);
		// time += Time.deltaTime / duration;
		float L_34 = __this->get_U3CtimeU3E5__2_10();
		float L_35;
		L_35 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_36 = __this->get_duration_8();
		__this->set_U3CtimeU3E5__2_10(((float)il2cpp_codegen_add((float)L_34, (float)((float)((float)L_35/(float)L_36)))));
		// if (time > 1f)
		float L_37 = __this->get_U3CtimeU3E5__2_10();
		if ((!(((float)L_37) > ((float)(1.0f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// if (funcDel != null)
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_38 = __this->get_funcDel_9();
		if (!L_38)
		{
			goto IL_00f2;
		}
	}
	{
		// funcDel();
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_39 = __this->get_funcDel_9();
		NullCheck(L_39);
		FuncDel_Invoke_mF7A2362A047D06012378F45363AB52B598EA8898(L_39, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		// yield break;
		return (bool)0;
	}

IL_00f4:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0104:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0025;
	}
}
// System.Object InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB75D994721E77B755F1BE9D68AE6642C0587FEEE (U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_System_Collections_IEnumerator_Reset_mCEF65B4FCF880D613C4562045D9849897316C9C7 (U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_System_Collections_IEnumerator_Reset_mCEF65B4FCF880D613C4562045D9849897316C9C7_RuntimeMethod_var)));
	}
}
// System.Object InGameUiManager/<Coroutine_OutlineTextAlphaFadeout>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_System_Collections_IEnumerator_get_Current_m2A74D055AC9A32BA12505633C0DBB41CB224E8B4 (U3CCoroutine_OutlineTextAlphaFadeoutU3Ed__28_tB3E0A980FDB60DD727F1E408E4A5B4E80586B9CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextAlphaFadeoutU3Ed__27__ctor_m0A17ABA177FC3C97FCB86BDABF020C6E8AEE10B2 (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_IDisposable_Dispose_m7CF42A7671EA015EC9C46D7DB52CDFA3E81FBF41 (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_TextAlphaFadeoutU3Ed__27_MoveNext_m43D5E4979B10A7621F2066BCF8F616902B9BEA95 (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float time = 0f;
		__this->set_U3CtimeU3E5__2_9((0.0f));
	}

IL_0025:
	{
		// var alphaValue = curve.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_curve_2();
		float L_4 = __this->get_U3CtimeU3E5__2_9();
		NullCheck(L_3);
		float L_5;
		L_5 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// var alpha = from * (1f - alphaValue) + to * alphaValue;
		float L_6 = __this->get_from_3();
		float L_7 = V_1;
		float L_8 = __this->get_to_4();
		float L_9 = V_1;
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_6, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9))));
		// text.color = new Color(rgbColors[0], rgbColors[1], rgbColors[2], alpha);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_text_5();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_rgbColors_6();
		NullCheck(L_11);
		int32_t L_12 = 0;
		float L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = __this->get_rgbColors_6();
		NullCheck(L_14);
		int32_t L_15 = 1;
		float L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = __this->get_rgbColors_6();
		NullCheck(L_17);
		int32_t L_18 = 2;
		float L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_21), L_13, L_16, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_21);
		// time += Time.deltaTime / duration;
		float L_22 = __this->get_U3CtimeU3E5__2_9();
		float L_23;
		L_23 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_24 = __this->get_duration_7();
		__this->set_U3CtimeU3E5__2_9(((float)il2cpp_codegen_add((float)L_22, (float)((float)((float)L_23/(float)L_24)))));
		// if (time > 1f)
		float L_25 = __this->get_U3CtimeU3E5__2_9();
		if ((!(((float)L_25) > ((float)(1.0f)))))
		{
			goto IL_00b3;
		}
	}
	{
		// if (funcDel != null)
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_26 = __this->get_funcDel_8();
		if (!L_26)
		{
			goto IL_00b1;
		}
	}
	{
		// funcDel();
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_27 = __this->get_funcDel_8();
		NullCheck(L_27);
		FuncDel_Invoke_mF7A2362A047D06012378F45363AB52B598EA8898(L_27, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// yield break;
		return (bool)0;
	}

IL_00b3:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c3:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0025;
	}
}
// System.Object InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m218A114EBD7D44D8DC1334ED01A28F0D9B72B92C (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_Reset_m5867E593122FC329808AA1C9161B79E3FBBB0270 (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_Reset_m5867E593122FC329808AA1C9161B79E3FBBB0270_RuntimeMethod_var)));
	}
}
// System.Object InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_get_Current_m1142C6876D4DFA73F5A9A906014DBDF4CB4F155C (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextScaleFadeInU3Ed__29__ctor_mFFBAB9A66E4FC445D21CDF42C5435446E35898C5 (U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextScaleFadeInU3Ed__29_System_IDisposable_Dispose_mB24BF3710CF06DBE3FFB2CBD01F404063BC6B9A4 (U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_TextScaleFadeInU3Ed__29_MoveNext_mD990035F0D9BCB3CEF4D4D48DE91D9EB87ED2594 (U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00c8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float time = 0f;
		__this->set_U3CtimeU3E5__2_7((0.0f));
		// int cnt = 0;
		__this->set_U3CcntU3E5__3_8(0);
	}

IL_002c:
	{
		// var scaleValue = curve.Evaluate(time);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_curve_2();
		float L_4 = __this->get_U3CtimeU3E5__2_7();
		NullCheck(L_3);
		float L_5;
		L_5 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// var scale = from * (1f - scaleValue) + to * scaleValue;
		float L_6 = __this->get_from_3();
		float L_7 = V_1;
		float L_8 = __this->get_to_4();
		float L_9 = V_1;
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_6, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9))));
		// text.transform.localScale = new Vector3(scale, scale, scale);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_text_5();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		float L_12 = V_2;
		float L_13 = V_2;
		float L_14 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_11, L_15, /*hidden argument*/NULL);
		// time += Time.deltaTime;
		float L_16 = __this->get_U3CtimeU3E5__2_7();
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimeU3E5__2_7(((float)il2cpp_codegen_add((float)L_16, (float)L_17)));
		// if(time > 1f)
		float L_18 = __this->get_U3CtimeU3E5__2_7();
		if ((!(((float)L_18) > ((float)(1.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		// time = 0f;
		__this->set_U3CtimeU3E5__2_7((0.0f));
		// cnt++;
		int32_t L_19 = __this->get_U3CcntU3E5__3_8();
		V_3 = L_19;
		int32_t L_20 = V_3;
		__this->set_U3CcntU3E5__3_8(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		// if (cnt > repeatCnt)
		int32_t L_21 = __this->get_U3CcntU3E5__3_8();
		int32_t L_22 = __this->get_repeatCnt_6();
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_00b8;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_00b8:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_002c;
	}
}
// System.Object InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_TextScaleFadeInU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5A660E26E51C5F9E6571C5D74F8F1F14C9EA17BB (U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextScaleFadeInU3Ed__29_System_Collections_IEnumerator_Reset_m60F628644A9CC1E586227A889C7FFB2FE16B9884 (U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_TextScaleFadeInU3Ed__29_System_Collections_IEnumerator_Reset_m60F628644A9CC1E586227A889C7FFB2FE16B9884_RuntimeMethod_var)));
	}
}
// System.Object InGameUiManager/<Coroutine_TextScaleFadeIn>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_TextScaleFadeInU3Ed__29_System_Collections_IEnumerator_get_Current_m370150436CE38DDBE63D586B300100D5594C87C4 (U3CCoroutine_TextScaleFadeInU3Ed__29_tA4D984CC75CFEF866AD41716A48A00967D27D83D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void InGameUiManager/FuncDel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncDel__ctor_m5B834188921D4D72168C3266160E9FCFF25AA205 (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void InGameUiManager/FuncDel::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncDel_Invoke_mF7A2362A047D06012378F45363AB52B598EA8898 (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult InGameUiManager/FuncDel::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FuncDel_BeginInvoke_m403459CA465C94AFEA78BD68ABE1A79461843C24 (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void InGameUiManager/FuncDel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncDel_EndInvoke_mEE5AF12939F96558C6CB1BA11EA1F3AC5F4336AC (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LobbyUIManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4548D9A8BEFEE1C07AC1101CFC35BA39B58D17B7 (U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LobbyUIManager/<>c__DisplayClass5_0::<OnStart>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnStartU3Eb__0_mDCA9165C477BFF588AADFE36ED5091C9387CC04B (U3CU3Ec__DisplayClass5_0_tC7B8BED18263C3EB47FB87769919C3FE0C84232B * __this, const RuntimeMethod* method)
{
	{
		// m_lobbyButtons[i].onClick.AddListener(() => OnPressButton(button));
		LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * L_0 = __this->get_U3CU3E4__this_1();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_button_0();
		NullCheck(L_0);
		LobbyUIManager_OnPressButton_m3AAEE85039A8C84784BD86CAFCDBDEDB70F9AA14(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController/<Coroutine_StartBoost>d__68::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_StartBoostU3Ed__68__ctor_m74814D518B6B3CEF337C17853BB5202FBFC5A1BF (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerController/<Coroutine_StartBoost>d__68::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_StartBoostU3Ed__68_System_IDisposable_Dispose_m5CC5839A72BB075A37396006452076246EB473CF (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Coroutine_StartBoost>d__68::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_StartBoostU3Ed__68_MoveNext_mE79640B65EE77935538490533BD148E4B44ABB4A (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_00c2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float time = 0f;
		__this->set_U3CtimeU3E5__2_3((0.0f));
		// WaitForFixedUpdate waitForFixedUpdate = new WaitForFixedUpdate();
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_3 = (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 *)il2cpp_codegen_object_new(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C(L_3, /*hidden argument*/NULL);
		__this->set_U3CwaitForFixedUpdateU3E5__3_4(L_3);
	}

IL_003f:
	{
		// if(InputManager.Instance.Vertical > 0)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_4;
		L_4 = Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_inline(/*hidden argument*/Singleton_1_get_Instance_mD98CE38F5DF2BA6AD877841B50608DC3173EF9B1_RuntimeMethod_var);
		NullCheck(L_4);
		float L_5;
		L_5 = InputManager_get_Vertical_m02E6C12A4599D2F61D7558FBA32BD7F1E9CA1144_inline(L_4, /*hidden argument*/NULL);
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0090;
		}
	}
	{
		// yield return waitForFixedUpdate;
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_6 = __this->get_U3CwaitForFixedUpdateU3E5__3_4();
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_playerRb.AddForce(transform.forward * m_startBoostSpeed, ForceMode.VelocityChange);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_7 = V_1;
		NullCheck(L_7);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8 = L_7->get_m_playerRb_6();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_9 = V_1;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_10, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_m_startBoostSpeed_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_8, L_14, 2, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_0090:
	{
		// time += Time.deltaTime;
		float L_15 = __this->get_U3CtimeU3E5__2_3();
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
		// if (time > m_startBoostTime)
		float L_17 = __this->get_U3CtimeU3E5__2_3();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->get_m_startBoostTime_25();
		if ((!(((float)L_17) > ((float)L_19))))
		{
			goto IL_00b2;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_00b2:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00c2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while(true)
		goto IL_003f;
	}
}
// System.Object PlayerController/<Coroutine_StartBoost>d__68::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_StartBoostU3Ed__68_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6EE28CC05C3FD5E858686B5026F021260C1A7F08 (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController/<Coroutine_StartBoost>d__68::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_Reset_m97C4078E7D63C2E9C6CD0E7314B8AA7250BE7A5F (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_Reset_m97C4078E7D63C2E9C6CD0E7314B8AA7250BE7A5F_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Coroutine_StartBoost>d__68::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_get_Current_m6CDA841DA95811B213EA87803903EF5D46BCA539 (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CheckpointController_set_CheckNumber_m5939CB32D3925250499243375E9CC174DAACE7BA_inline (CheckpointController_t2E6B2D9348066BDB67599B9501DB62A72FF61BFA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CheckNumber { set { m_checkNumber = value; } }
		int32_t L_0 = ___value0;
		__this->set_m_checkNumber_4(L_0);
		// public int CheckNumber { set { m_checkNumber = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields*)il2cpp_codegen_static_fields_for(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var))->get_s_Logger_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSystemManager_SetReverseCheckPos_m8F928B0DCB017CBF3305F0BCC807BBAD79A301B8_inline (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, int32_t ___pos0, const RuntimeMethod* method)
{
	{
		// m_reverseCheckPos = pos;
		int32_t L_0 = ___pos0;
		__this->set_m_reverseCheckPos_8(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_set_IsStart_m5A2591E0C7CDC386CFBC7106F6B67BBEA6470ED3_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsStart { get { return m_isStart; } set { m_isStart = value; } }
		bool L_0 = ___value0;
		__this->set_m_isStart_41(L_0);
		// public bool IsStart { get { return m_isStart; } set { m_isStart = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ResetPointManager_get_ResetPoints_m92FC544988A8D4229C3DFBF95221117AD43E1D1C_inline (ResetPointManager_t4DDDC559E820066EE7E61C6F8B60C4C4AABCB0BA * __this, const RuntimeMethod* method)
{
	{
		// public Transform[] ResetPoints { get { return m_resetPoints; } }
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_m_resetPoints_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// m_state = state;
		int32_t L_0 = ___state0;
		__this->set_m_state_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * DataManager_get_PlayerData_m8FA62B56F659CBCADE516A5B93460BF4E00DE0F7_inline (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerData PlayerData { get { return m_playerData; } }
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_0 = __this->get_m_playerData_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* CheckPointManager_get_CheckPoints_m4A796B083369C9D84E226DF70120F939891E1E99_inline (CheckPointManager_tED8E53E60F8539D449110AA163875E6934B932F4 * __this, const RuntimeMethod* method)
{
	{
		// public CheckpointController[] CheckPoints { get { return m_checkPoints; } }
		CheckpointControllerU5BU5D_t5F9FA99C87E7ABE7941F34C1EEE11B44D6D0F0B6* L_0 = __this->get_m_checkPoints_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MapManager_get_LapTime_m5EA78556805B8E2FCAC8B6521601588E1F9D3B60_inline (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, const RuntimeMethod* method)
{
	{
		// public int LapTime { get { return m_lapTime; } }
		int32_t L_0 = __this->get_m_lapTime_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayerController_get_UserName_m6B35135EC082D4F37AD871F59A2F53127EC5860C_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public string UserName { get { return m_playerName; } }
		String_t* L_0 = __this->get_m_playerName_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  PlayerController_get_KartColor_mA2874332D2DA78DD84F9D2923A06D18F2C3920D6_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public Color KartColor { get { return m_kartColor; } }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_kartColor_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameSystemManager_get_CurrentTime_mCC545336B16384620D9C1D0DF9188F66605049C8_inline (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public float CurrentTime { get { return m_timer; } }
		float L_0 = __this->get_m_timer_31();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerController_get_CurrentSpeed_mA7190F289A58683110E3398C8DB80C311DF4034F_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public float CurrentSpeed { get { return m_speed; } }
		float L_0 = __this->get_m_speed_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameSystemManager_get_CurrMapIndex_mAE4D3CDD7FE836A079A8B79444E3831D9BF332A9_inline (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public int CurrMapIndex { get { return m_currMapIndex; } }
		int32_t L_0 = __this->get_m_currMapIndex_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerController_get_BoosterCnt_mA15136F01D1D81ABEE880035522CF20D55DE43C9_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public int BoosterCnt { get { return m_boosterUseCnt; } }
		int32_t L_0 = __this->get_m_boosterUseCnt_45();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerController_get_CrashCnt_m569632CB37790AD2080088D68362BCD75E0DB897_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public int CrashCnt { get; set; }
		int32_t L_0 = __this->get_U3CCrashCntU3Ek__BackingField_54();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_Horizontal_m301A66829A357914DE773D16DC1D3745779AA4FE_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Horizontal { get; set; }
		float L_0 = ___value0;
		__this->set_U3CHorizontalU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_Vertical_m2E72E0FCA438D080A686E5ABC563A504735B295C_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Vertical { get; set; }
		float L_0 = ___value0;
		__this->set_U3CVerticalU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_HandBreakKeyDown_mEA92EBEA5CE213FFFC93AA19FF6BB8F3CD2645C2_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HandBreakKeyDown { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CHandBreakKeyDownU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_HandBreakKeyUp_m96C262BA4F464626DA528B298200FF492276E37F_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HandBreakKeyUp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CHandBreakKeyUpU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_ResetKeyDown_mC04095BE64237CDE269F7D6918B5BB18C5FA610C_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ResetKeyDown { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CResetKeyDownU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputManager_set_BoosterKeyDown_mD2B14D35C32BA9F0E7C0975B38B703E76BDEC3C9_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BoosterKeyDown { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CBoosterKeyDownU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadSceneManager_SetLoadState_m05336826A421B0EC3C10E257CE907CBB8C93744D_inline (LoadSceneManager_tA16E771FB5BF945615E81AE1770206F782F86C6A * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// m_loadState = state;
		int32_t L_0 = ___state0;
		__this->set_m_loadState_7(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameSystemManager_get_CurrKartIndex_m62DA46414A4C533C54FB6B7A2D1219BAFA35051D_inline (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public int CurrKartIndex { get { return m_currKartIndex; } }
		int32_t L_0 = __this->get_m_currKartIndex_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputManager_get_BoosterKeyDown_m3F07FF6AEE044E5C3D81604C0FED0695AD38BE31_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public bool BoosterKeyDown { get; set; }
		bool L_0 = __this->get_U3CBoosterKeyDownU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method)
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->get_m_FillAmount_43();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputManager_get_Horizontal_mE579B142D4714901F27361F4A14CA8C02B2604A7_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public float Horizontal { get; set; }
		float L_0 = __this->get_U3CHorizontalU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputManager_get_Vertical_m02E6C12A4599D2F61D7558FBA32BD7F1E9CA1144_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public float Vertical { get; set; }
		float L_0 = __this->get_U3CVerticalU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_set_CrashCnt_m92C7C1BA8E01C77420D1A86400702F36EDE81DA3_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CrashCnt { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCrashCntU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameSystemManager_get_ResetCoolDown_mDF8175061B7707F1209DF80717A460D3ABEE3DE7_inline (GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * __this, const RuntimeMethod* method)
{
	{
		// public float ResetCoolDown { get { return m_resetCooldown; } }
		float L_0 = __this->get_m_resetCooldown_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputManager_get_HandBreakKeyDown_m2A024A77CF8F4594D11F9EA695ABC2B894801B30_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public bool HandBreakKeyDown { get; set; }
		bool L_0 = __this->get_U3CHandBreakKeyDownU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputManager_get_HandBreakKeyUp_m18D82FC0B35DA6CBA633C3BDD898EA6417F3BCB9_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public bool HandBreakKeyUp { get; set; }
		bool L_0 = __this->get_U3CHandBreakKeyUpU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputManager_get_ResetKeyDown_m32A0EF91EFD01C6648844A1D1E7E80F78BCF8214_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// public bool ResetKeyDown { get; set; }
		bool L_0 = __this->get_U3CResetKeyDownU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Shadow_get_effectColor_m00C1776542129598C244BB469E7128D60F6BCAC2_inline (Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_EffectColor; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_EffectColor_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline (const RuntimeMethod* method)
{
	{
		// public static T Instance { get; private set; }
		RuntimeObject * L_0 = ((Singleton_DontDestroy_1_tE48FC4FE1D10644E7CF14F91ED91590D669A3C7A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_U3CInstanceU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline (const RuntimeMethod* method)
{
	{
		// public static T Instance { get; private set; }
		RuntimeObject * L_0 = ((Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_U3CInstanceU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
