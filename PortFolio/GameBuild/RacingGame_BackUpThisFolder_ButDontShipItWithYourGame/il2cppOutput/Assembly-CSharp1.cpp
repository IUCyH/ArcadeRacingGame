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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>
struct Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94;
// System.Collections.Generic.Dictionary`2<SFXClip,System.Int32>
struct Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98;
// System.Collections.Generic.Dictionary`2<System.String,GameObjectPool`1<UnityEngine.GameObject>>
struct Dictionary_2_t1697BAD6199139BD92FCE80B99FA9DF736F80390;
// System.Collections.Generic.Dictionary`2<System.String,GameSystemManager/ReverseDirection>
struct Dictionary_2_t5F78C190B7D09A1632A9691AAE9672CA7170E89B;
// System.Collections.Generic.IEqualityComparer`1<SFXClip>
struct IEqualityComparer_1_t6B0012D1047268F2EFFBE6FF732807196F79296A;
// System.Collections.Generic.Dictionary`2/KeyCollection<SFXClip,System.Int32>
struct KeyCollection_tC0290B2E0AC06FC02EA238B3D3EFF4EB78A85822;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t15050E83C4C051CA706B3489C75EBD1038966135;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE;
// System.Collections.Generic.Stack`1<ILobbySubMenu>
struct Stack_1_t6F5278D10BCA2AE3C0242CAED73BA465A3D47C52;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<SFXClip,System.Int32>
struct ValueCollection_t598C746C4EEAB2F281D51BCA1A43C0ADE0E1A00F;
// System.Collections.Generic.Dictionary`2/Entry<SFXClip,System.Int32>[]
struct EntryU5BU5D_t1A951CD7C6E015E3CD2DD5934E855EED38436565;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// ILobbyMenu[]
struct ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64;
// ISetting[]
struct ISettingU5BU5D_tB080A1208E53403D919985A88412EF1A260CFD16;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
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
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
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
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameSettingManager
struct GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93;
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
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InGameUiManager
struct InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// KartSelectPanelController
struct KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E;
// KartViewStageController
struct KartViewStageController_tD6F3220D6A5CB543E97DCC8144D104B72632D9A6;
// KeySetting
struct KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF;
// LobbyManager
struct LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779;
// LobbyUIManager
struct LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53;
// Lobby_Garage
struct Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5;
// Lobby_Shop
struct Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.UI.Outline
struct Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// PlayerData
struct PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5;
// PopupFuncDel
struct PopupFuncDel_t84BFE49CF0CB745576D16FE2900CBD1A1598725F;
// PopupManager
struct PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SettingData
struct SettingData_tBC45B3BAD129CD17144A734C49820A1353FFB9CE;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
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
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WheelCollider
struct WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779;
// WheelController
struct WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// GameSettingManager/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tFBBF87074F9B9E5776ABADF5A78E5D44B15A72CC;
// GameSystemManager/<Coroutine_CountDown>d__44
struct U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF;
// InGameUiManager/<Coroutine_TextAlphaFadeout>d__27
struct U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9;
// InGameUiManager/<Coroutine_TextScaleFadeIn>d__28
struct U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562;
// InGameUiManager/FuncDel
struct FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54;
// KartSelectPanelController/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tBA52E074C240CFF6E9C789201922662D1C1F5B48;
// KeySetting/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t032A4F043C0F216C8FEED7AD793692F7ECCE8A7F;
// LobbyUIManager/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t463DAE5EBE2750DAE9A251FDBC0F343616607F98;
// Lobby_Shop/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tC13D48A61FD180DDADD2BF84E25A787A095A9274;
// Lobby_Shop/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t7E7BA8EED0A8B71950A10FFB5624B985C3FB93BF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerController/<Coroutine_StartBoost>d__68
struct U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C;
// PopupManager/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tB6C61F4D1E175A7B5BD96533EA0942CE4C791CA8;
// SoundManager/<Coroutine_CheckSFX>d__5
struct U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[];
IL2CPP_EXTERN_C RuntimeClass* FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03A2B194F1456E87F9587B9E4AB3D9B3CC3C4B43;
IL2CPP_EXTERN_C String_t* _stringLiteral3814B25E6204CE3401AF7AFDAA9C86C78DD2A1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral49629EB0641054F97A143B9386ED8A542CF24002;
IL2CPP_EXTERN_C String_t* _stringLiteralE5E2660BCEAAA56759EB79265F8204E161B6EE7A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1653510E8F29390038BFE9182D18470390681AEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAB6D9C14E91DD1013DFC5B8CC45B29D2AEC00AE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m093721AABC6E3EBCD3B85F2D674B027EA960A83F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameSystemManager_U3CCoroutine_CountDownU3Eb__44_0_m4274CFA4E93C15778967CA754692B0A5E7A1F68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m2A6A40AA1354EB6C8A7D6AF32187EB13BAE8BFFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1_get_Instance_m0F6FF64DB0DFA29E42EFF64EB7BD342D67402D82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CheckSFXU3Ed__5_MoveNext_m9BCB2B84A6B4A5A96811C7C5304D6297ED12BBE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CheckSFXU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEEB9D3BBD1A0FA428FDB0D0685D00A67CB89B8A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CheckSFXU3Ed__5_System_Collections_IEnumerator_Reset_m2AFC7716AE5B6C8A560CB82E3F25DCE1B6304BFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CheckSFXU3Ed__5_System_Collections_IEnumerator_get_Current_m2BC5045F566190B436E44F00082C45D13065C6D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CheckSFXU3Ed__5_System_IDisposable_Dispose_m6820528EAFBC98C6F82056F740214E2E6201C54F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CheckSFXU3Ed__5__ctor_mE9E978D97572E7387118BFA4550331D11E18DFFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CountDownU3Ed__44_MoveNext_mF4B9A75E0EE50A08ADAF0DB65150B7DC62ADAEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CountDownU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE49121E3C90E94689035F60946AC3ECCB76B341E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CountDownU3Ed__44_System_Collections_IEnumerator_Reset_mFE414276A300893275B944C922B52476CBAAD611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CountDownU3Ed__44_System_Collections_IEnumerator_get_Current_m27A0F1955D36B66F21D15CCE11F126E70938BA62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CountDownU3Ed__44_System_IDisposable_Dispose_m86AEAE6EE381B13EE98BBBC1C76FF31767FFECD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CountDownU3Ed__44__ctor_m84E7675AB219847D55F866C0B21A8B6B57FBED8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_StartBoostU3Ed__68_MoveNext_mE79640B65EE77935538490533BD148E4B44ABB4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_StartBoostU3Ed__68_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6EE28CC05C3FD5E858686B5026F021260C1A7F08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_Reset_m97C4078E7D63C2E9C6CD0E7314B8AA7250BE7A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_get_Current_m6CDA841DA95811B213EA87803903EF5D46BCA539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_StartBoostU3Ed__68_System_IDisposable_Dispose_m5CC5839A72BB075A37396006452076246EB473CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_StartBoostU3Ed__68__ctor_m74814D518B6B3CEF337C17853BB5202FBFC5A1BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextAlphaFadeoutU3Ed__27_MoveNext_m43D5E4979B10A7621F2066BCF8F616902B9BEA95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m218A114EBD7D44D8DC1334ED01A28F0D9B72B92C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_Reset_m5867E593122FC329808AA1C9161B79E3FBBB0270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_get_Current_m1142C6876D4DFA73F5A9A906014DBDF4CB4F155C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_IDisposable_Dispose_m7CF42A7671EA015EC9C46D7DB52CDFA3E81FBF41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextAlphaFadeoutU3Ed__27__ctor_m0A17ABA177FC3C97FCB86BDABF020C6E8AEE10B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextScaleFadeInU3Ed__28_MoveNext_mFF1B3AEBD37E0977F16F66C0B600A8AC35475252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA00AE3CCA5998036AB3B36C4F676F1CF6CFB4DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_IEnumerator_Reset_m85B31B3F16026CB67F75E1EC8061FBC906B3CB47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_IEnumerator_get_Current_m1B9A3DF2DD5296E1DDCCA3ED6FE3567569C81573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextScaleFadeInU3Ed__28_System_IDisposable_Dispose_mD7F67B1808A9DAD55BE60BDF73A06886F1FD36CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_TextScaleFadeInU3Ed__28__ctor_mCD2237104992E6825E6C1DB0BD9881C7C7EA4C01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CStartU3Eb__0_m3DF0023474C4A45783985E24B9C24FDB67CAE8E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0__ctor_mAA128EC636837E5D0A58F6C680EBB78A23966954_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CInitU3Eb__0_m919D7FE5E3DF7E4F6C532D3451632E69875B3D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0__ctor_mEC49274F87EF638B729F6D002983550A5DEE5571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3COnPressBuyButtonU3Eb__0_m81085A360ABB39863B370757BA3399766B195BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0__ctor_m69AA6F7C0C612BC80F6313A86CD6AA882F32DE29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3COnStartU3Eb__0_mAC91105E0EB0F949318FD47B2EE3EB24C8F97B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0__ctor_m5058F492101314E2178B71F356CE7F32801309F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CAwakeU3Eb__0_mCF0BA237CE3EE0FF238BFE57C2B1564E17B614FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0__ctor_m8056F4B162E71CCA0EEA48BD36027A1B41EF6486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3COnStartU3Eb__0_m23CB597101A86BB47EEA7D4F4A8B9E6F8C425A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0__ctor_mC74E965C3BF349192C3E3AA1E3129111F4F3A54E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass36_0_U3COnStartU3Eb__0_m6E510B4F25494367F36F4861CBBC13F03C283C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass36_0__ctor_mEC1EFFC27FB022F7C2BEC65AE3C34D020559486B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelController_Drift_mC4BDA672AE5C078A370EF926B8F4EB2DB39B0B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelController_Move_m6906837F76EC4BD1752AE2FE2814331400442F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelController_Turn_m5A63600BB178A54CCA2094144990EEBA086F3B40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelController_UpdatePos_mE56D2D293F405C6A49FEB8DC46877FA3716D416E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelController__ctor_m29AF8F8DD974E854EDDFE98D524FA043D52EC134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelController_get_ForwardFriction_m72D285AF5293DA147B698698C7E396DBDDCBC4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelController_get_SideWayFriction_m412F8BF6F797F35558E14C073C687054BCB69086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SFXClip_t940FF34C57B327EABAF7998727EEFADF2E484846_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass11_0_tBA52E074C240CFF6E9C789201922662D1C1F5B48_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass13_0_t032A4F043C0F216C8FEED7AD793692F7ECCE8A7F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass16_0_tC13D48A61FD180DDADD2BF84E25A787A095A9274_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass17_0_tB6C61F4D1E175A7B5BD96533EA0942CE4C791CA8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass24_0_t7E7BA8EED0A8B71950A10FFB5624B985C3FB93BF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass32_0_t463DAE5EBE2750DAE9A251FDBC0F343616607F98_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass36_0_tFBBF87074F9B9E5776ABADF5A78E5D44B15A72CC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<SFXClip,System.Int32>
struct Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1A951CD7C6E015E3CD2DD5934E855EED38436565* ___entries_1;
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
	KeyCollection_tC0290B2E0AC06FC02EA238B3D3EFF4EB78A85822 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t598C746C4EEAB2F281D51BCA1A43C0ADE0E1A00F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98, ___entries_1)); }
	inline EntryU5BU5D_t1A951CD7C6E015E3CD2DD5934E855EED38436565* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1A951CD7C6E015E3CD2DD5934E855EED38436565** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1A951CD7C6E015E3CD2DD5934E855EED38436565* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98, ___keys_7)); }
	inline KeyCollection_tC0290B2E0AC06FC02EA238B3D3EFF4EB78A85822 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC0290B2E0AC06FC02EA238B3D3EFF4EB78A85822 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC0290B2E0AC06FC02EA238B3D3EFF4EB78A85822 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98, ___values_8)); }
	inline ValueCollection_t598C746C4EEAB2F281D51BCA1A43C0ADE0E1A00F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t598C746C4EEAB2F281D51BCA1A43C0ADE0E1A00F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t598C746C4EEAB2F281D51BCA1A43C0ADE0E1A00F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// GameSystemManager/<Coroutine_CountDown>d__44
struct U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF  : public RuntimeObject
{
public:
	// System.Int32 GameSystemManager/<Coroutine_CountDown>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameSystemManager/<Coroutine_CountDown>d__44::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameSystemManager GameSystemManager/<Coroutine_CountDown>d__44::<>4__this
	GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * ___U3CU3E4__this_2;
	// System.Single GameSystemManager/<Coroutine_CountDown>d__44::<time>5__1
	float ___U3CtimeU3E5__1_3;
	// System.Int32 GameSystemManager/<Coroutine_CountDown>d__44::<cnt>5__2
	int32_t ___U3CcntU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF, ___U3CU3E4__this_2)); }
	inline GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF, ___U3CtimeU3E5__1_3)); }
	inline float get_U3CtimeU3E5__1_3() const { return ___U3CtimeU3E5__1_3; }
	inline float* get_address_of_U3CtimeU3E5__1_3() { return &___U3CtimeU3E5__1_3; }
	inline void set_U3CtimeU3E5__1_3(float value)
	{
		___U3CtimeU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CcntU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF, ___U3CcntU3E5__2_4)); }
	inline int32_t get_U3CcntU3E5__2_4() const { return ___U3CcntU3E5__2_4; }
	inline int32_t* get_address_of_U3CcntU3E5__2_4() { return &___U3CcntU3E5__2_4; }
	inline void set_U3CcntU3E5__2_4(int32_t value)
	{
		___U3CcntU3E5__2_4 = value;
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
	// UnityEngine.UI.Text InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_2;
	// System.Single InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::duration
	float ___duration_3;
	// InGameUiManager/FuncDel InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::funcDel
	FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * ___funcDel_4;
	// InGameUiManager InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::<>4__this
	InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * ___U3CU3E4__this_5;

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

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___text_2)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_2() const { return ___text_2; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_funcDel_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___funcDel_4)); }
	inline FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * get_funcDel_4() const { return ___funcDel_4; }
	inline FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 ** get_address_of_funcDel_4() { return &___funcDel_4; }
	inline void set_funcDel_4(FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * value)
	{
		___funcDel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___funcDel_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9, ___U3CU3E4__this_5)); }
	inline InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}
};


// InGameUiManager/<Coroutine_TextScaleFadeIn>d__28
struct U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562  : public RuntimeObject
{
public:
	// System.Int32 InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Text InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_2;
	// UnityEngine.AnimationCurve InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve_3;
	// System.Single InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::from
	float ___from_4;
	// System.Single InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::to
	float ___to_5;
	// System.Int32 InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::repeatCnt
	int32_t ___repeatCnt_6;
	// InGameUiManager InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::<>4__this
	InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * ___U3CU3E4__this_7;
	// System.Single InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::<time>5__1
	float ___U3CtimeU3E5__1_8;
	// System.Int32 InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::<cnt>5__2
	int32_t ___U3CcntU3E5__2_9;
	// System.Single InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::<scaleValue>5__3
	float ___U3CscaleValueU3E5__3_10;
	// System.Single InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::<scale>5__4
	float ___U3CscaleU3E5__4_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___text_2)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_2() const { return ___text_2; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_curve_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___curve_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_curve_3() const { return ___curve_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_curve_3() { return &___curve_3; }
	inline void set_curve_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___curve_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curve_3), (void*)value);
	}

	inline static int32_t get_offset_of_from_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___from_4)); }
	inline float get_from_4() const { return ___from_4; }
	inline float* get_address_of_from_4() { return &___from_4; }
	inline void set_from_4(float value)
	{
		___from_4 = value;
	}

	inline static int32_t get_offset_of_to_5() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___to_5)); }
	inline float get_to_5() const { return ___to_5; }
	inline float* get_address_of_to_5() { return &___to_5; }
	inline void set_to_5(float value)
	{
		___to_5 = value;
	}

	inline static int32_t get_offset_of_repeatCnt_6() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___repeatCnt_6)); }
	inline int32_t get_repeatCnt_6() const { return ___repeatCnt_6; }
	inline int32_t* get_address_of_repeatCnt_6() { return &___repeatCnt_6; }
	inline void set_repeatCnt_6(int32_t value)
	{
		___repeatCnt_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___U3CU3E4__this_7)); }
	inline InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__1_8() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___U3CtimeU3E5__1_8)); }
	inline float get_U3CtimeU3E5__1_8() const { return ___U3CtimeU3E5__1_8; }
	inline float* get_address_of_U3CtimeU3E5__1_8() { return &___U3CtimeU3E5__1_8; }
	inline void set_U3CtimeU3E5__1_8(float value)
	{
		___U3CtimeU3E5__1_8 = value;
	}

	inline static int32_t get_offset_of_U3CcntU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___U3CcntU3E5__2_9)); }
	inline int32_t get_U3CcntU3E5__2_9() const { return ___U3CcntU3E5__2_9; }
	inline int32_t* get_address_of_U3CcntU3E5__2_9() { return &___U3CcntU3E5__2_9; }
	inline void set_U3CcntU3E5__2_9(int32_t value)
	{
		___U3CcntU3E5__2_9 = value;
	}

	inline static int32_t get_offset_of_U3CscaleValueU3E5__3_10() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___U3CscaleValueU3E5__3_10)); }
	inline float get_U3CscaleValueU3E5__3_10() const { return ___U3CscaleValueU3E5__3_10; }
	inline float* get_address_of_U3CscaleValueU3E5__3_10() { return &___U3CscaleValueU3E5__3_10; }
	inline void set_U3CscaleValueU3E5__3_10(float value)
	{
		___U3CscaleValueU3E5__3_10 = value;
	}

	inline static int32_t get_offset_of_U3CscaleU3E5__4_11() { return static_cast<int32_t>(offsetof(U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562, ___U3CscaleU3E5__4_11)); }
	inline float get_U3CscaleU3E5__4_11() const { return ___U3CscaleU3E5__4_11; }
	inline float* get_address_of_U3CscaleU3E5__4_11() { return &___U3CscaleU3E5__4_11; }
	inline void set_U3CscaleU3E5__4_11(float value)
	{
		___U3CscaleU3E5__4_11 = value;
	}
};


// KartSelectPanelController/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tBA52E074C240CFF6E9C789201922662D1C1F5B48  : public RuntimeObject
{
public:
	// System.Int32 KartSelectPanelController/<>c__DisplayClass11_0::index
	int32_t ___index_0;
	// KartSelectPanelController KartSelectPanelController/<>c__DisplayClass11_0::<>4__this
	KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tBA52E074C240CFF6E9C789201922662D1C1F5B48, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tBA52E074C240CFF6E9C789201922662D1C1F5B48, ___U3CU3E4__this_1)); }
	inline KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// LobbyUIManager/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t463DAE5EBE2750DAE9A251FDBC0F343616607F98  : public RuntimeObject
{
public:
	// UnityEngine.UI.Button LobbyUIManager/<>c__DisplayClass32_0::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_0;
	// LobbyUIManager LobbyUIManager/<>c__DisplayClass32_0::<>4__this
	LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_button_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t463DAE5EBE2750DAE9A251FDBC0F343616607F98, ___button_0)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_0() const { return ___button_0; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_0() { return &___button_0; }
	inline void set_button_0(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t463DAE5EBE2750DAE9A251FDBC0F343616607F98, ___U3CU3E4__this_1)); }
	inline LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// Lobby_Shop/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tC13D48A61FD180DDADD2BF84E25A787A095A9274  : public RuntimeObject
{
public:
	// Lobby_Shop Lobby_Shop/<>c__DisplayClass16_0::<>4__this
	Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * ___U3CU3E4__this_0;
	// System.Int32 Lobby_Shop/<>c__DisplayClass16_0::kartPrice
	int32_t ___kartPrice_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tC13D48A61FD180DDADD2BF84E25A787A095A9274, ___U3CU3E4__this_0)); }
	inline Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_kartPrice_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tC13D48A61FD180DDADD2BF84E25A787A095A9274, ___kartPrice_1)); }
	inline int32_t get_kartPrice_1() const { return ___kartPrice_1; }
	inline int32_t* get_address_of_kartPrice_1() { return &___kartPrice_1; }
	inline void set_kartPrice_1(int32_t value)
	{
		___kartPrice_1 = value;
	}
};


// Lobby_Shop/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t7E7BA8EED0A8B71950A10FFB5624B985C3FB93BF  : public RuntimeObject
{
public:
	// System.Int32 Lobby_Shop/<>c__DisplayClass24_0::index
	int32_t ___index_0;
	// Lobby_Shop Lobby_Shop/<>c__DisplayClass24_0::<>4__this
	Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_t7E7BA8EED0A8B71950A10FFB5624B985C3FB93BF, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_t7E7BA8EED0A8B71950A10FFB5624B985C3FB93BF, ___U3CU3E4__this_1)); }
	inline Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * value)
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
	// System.Single PlayerController/<Coroutine_StartBoost>d__68::<time>5__1
	float ___U3CtimeU3E5__1_3;
	// UnityEngine.WaitForFixedUpdate PlayerController/<Coroutine_StartBoost>d__68::<waitForFixedUpdate>5__2
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ___U3CwaitForFixedUpdateU3E5__2_4;

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

	inline static int32_t get_offset_of_U3CtimeU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C, ___U3CtimeU3E5__1_3)); }
	inline float get_U3CtimeU3E5__1_3() const { return ___U3CtimeU3E5__1_3; }
	inline float* get_address_of_U3CtimeU3E5__1_3() { return &___U3CtimeU3E5__1_3; }
	inline void set_U3CtimeU3E5__1_3(float value)
	{
		___U3CtimeU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CwaitForFixedUpdateU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C, ___U3CwaitForFixedUpdateU3E5__2_4)); }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * get_U3CwaitForFixedUpdateU3E5__2_4() const { return ___U3CwaitForFixedUpdateU3E5__2_4; }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 ** get_address_of_U3CwaitForFixedUpdateU3E5__2_4() { return &___U3CwaitForFixedUpdateU3E5__2_4; }
	inline void set_U3CwaitForFixedUpdateU3E5__2_4(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * value)
	{
		___U3CwaitForFixedUpdateU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwaitForFixedUpdateU3E5__2_4), (void*)value);
	}
};


// PopupManager/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tB6C61F4D1E175A7B5BD96533EA0942CE4C791CA8  : public RuntimeObject
{
public:
	// UnityEngine.GameObject PopupManager/<>c__DisplayClass17_0::popupObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___popupObj_0;
	// PopupManager PopupManager/<>c__DisplayClass17_0::<>4__this
	PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_popupObj_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_tB6C61F4D1E175A7B5BD96533EA0942CE4C791CA8, ___popupObj_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_popupObj_0() const { return ___popupObj_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_popupObj_0() { return &___popupObj_0; }
	inline void set_popupObj_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___popupObj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupObj_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_tB6C61F4D1E175A7B5BD96533EA0942CE4C791CA8, ___U3CU3E4__this_1)); }
	inline PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
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

// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 
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
		uint8_t __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66__padding[16];
	};

public:
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


// Key
struct Key_tB313BF742406084E17C47FE2B934490E0261AC8E 
{
public:
	// System.Int32 Key::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Key_tB313BF742406084E17C47FE2B934490E0261AC8E, ___value___2)); }
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

// SFXClip
struct SFXClip_t940FF34C57B327EABAF7998727EEFADF2E484846 
{
public:
	// System.Int32 SFXClip::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SFXClip_t940FF34C57B327EABAF7998727EEFADF2E484846, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Setting
struct Setting_tAEBE86587C77D5E88978CC868DCE6813D280B580 
{
public:
	// System.Int32 Setting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Setting_tAEBE86587C77D5E88978CC868DCE6813D280B580, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameSystemManager/ReverseDirection
struct ReverseDirection_t84803F21DB56DB886F86BC70D3DFA717837BD781 
{
public:
	// System.Int32 GameSystemManager/ReverseDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReverseDirection_t84803F21DB56DB886F86BC70D3DFA717837BD781, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GraphicSetting/Settings
struct Settings_t48BCADD8C28275202F749BCEE899A0F67DB7BC37 
{
public:
	// System.Int32 GraphicSetting/Settings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Settings_t48BCADD8C28275202F749BCEE899A0F67DB7BC37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LobbyUIManager/KartStat
struct KartStat_tEA7B89689D2867B96ADA0BBF4B56A8367CCA7D6C 
{
public:
	// System.Int32 LobbyUIManager/KartStat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KartStat_tEA7B89689D2867B96ADA0BBF4B56A8367CCA7D6C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Lobby_Shop/BuyBtnOnClickEvent
struct BuyBtnOnClickEvent_t7CF0D0EC038598886CCCEBEC10A7E11B903F7745 
{
public:
	// System.Int32 Lobby_Shop/BuyBtnOnClickEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuyBtnOnClickEvent_t7CF0D0EC038598886CCCEBEC10A7E11B903F7745, ___value___2)); }
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


// PopupManager/PopupName
struct PopupName_t0CDA7EAA04EEEAB179770CE2605D5611A70FFD74 
{
public:
	// System.Int32 PopupManager/PopupName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PopupName_t0CDA7EAA04EEEAB179770CE2605D5611A70FFD74, ___value___2)); }
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


// ShadowQuality/Shadow
struct Shadow_t9FFEB8D3A6D8FAE7FF79AC252F5C5E21E63A050D 
{
public:
	// System.Int32 ShadowQuality/Shadow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Shadow_t9FFEB8D3A6D8FAE7FF79AC252F5C5E21E63A050D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
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


// GameSettingManager/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tFBBF87074F9B9E5776ABADF5A78E5D44B15A72CC  : public RuntimeObject
{
public:
	// Setting GameSettingManager/<>c__DisplayClass36_0::setting
	int32_t ___setting_0;
	// GameSettingManager GameSettingManager/<>c__DisplayClass36_0::<>4__this
	GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_setting_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tFBBF87074F9B9E5776ABADF5A78E5D44B15A72CC, ___setting_0)); }
	inline int32_t get_setting_0() const { return ___setting_0; }
	inline int32_t* get_address_of_setting_0() { return &___setting_0; }
	inline void set_setting_0(int32_t value)
	{
		___setting_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tFBBF87074F9B9E5776ABADF5A78E5D44B15A72CC, ___U3CU3E4__this_1)); }
	inline GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// KeySetting/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t032A4F043C0F216C8FEED7AD793692F7ECCE8A7F  : public RuntimeObject
{
public:
	// Key KeySetting/<>c__DisplayClass13_0::key
	int32_t ___key_0;
	// KeySetting KeySetting/<>c__DisplayClass13_0::<>4__this
	KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t032A4F043C0F216C8FEED7AD793692F7ECCE8A7F, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t032A4F043C0F216C8FEED7AD793692F7ECCE8A7F, ___U3CU3E4__this_1)); }
	inline KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// SoundManager/<Coroutine_CheckSFX>d__5
struct U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0  : public RuntimeObject
{
public:
	// System.Int32 SoundManager/<Coroutine_CheckSFX>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SoundManager/<Coroutine_CheckSFX>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.AudioClip SoundManager/<Coroutine_CheckSFX>d__5::audioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip_2;
	// SFXClip SoundManager/<Coroutine_CheckSFX>d__5::sfx
	int32_t ___sfx_3;
	// SoundManager SoundManager/<Coroutine_CheckSFX>d__5::<>4__this
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___U3CU3E4__this_4;
	// UnityEngine.WaitForSeconds SoundManager/<Coroutine_CheckSFX>d__5::<waitForSeconds>5__1
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___U3CwaitForSecondsU3E5__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_audioClip_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0, ___audioClip_2)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_audioClip_2() const { return ___audioClip_2; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_audioClip_2() { return &___audioClip_2; }
	inline void set_audioClip_2(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___audioClip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioClip_2), (void*)value);
	}

	inline static int32_t get_offset_of_sfx_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0, ___sfx_3)); }
	inline int32_t get_sfx_3() const { return ___sfx_3; }
	inline int32_t* get_address_of_sfx_3() { return &___sfx_3; }
	inline void set_sfx_3(int32_t value)
	{
		___sfx_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0, ___U3CU3E4__this_4)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwaitForSecondsU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0, ___U3CwaitForSecondsU3E5__1_5)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_U3CwaitForSecondsU3E5__1_5() const { return ___U3CwaitForSecondsU3E5__1_5; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_U3CwaitForSecondsU3E5__1_5() { return &___U3CwaitForSecondsU3E5__1_5; }
	inline void set_U3CwaitForSecondsU3E5__1_5(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___U3CwaitForSecondsU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwaitForSecondsU3E5__1_5), (void*)value);
	}
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


// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisMaskU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E, ___U3CisMaskU3Ek__BackingField_4)); }
	inline bool get_U3CisMaskU3Ek__BackingField_4() const { return ___U3CisMaskU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisMaskU3Ek__BackingField_4() { return &___U3CisMaskU3Ek__BackingField_4; }
	inline void set_U3CisMaskU3Ek__BackingField_4(bool value)
	{
		___U3CisMaskU3Ek__BackingField_4 = value;
	}
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


// PopupFuncDel
struct PopupFuncDel_t84BFE49CF0CB745576D16FE2900CBD1A1598725F  : public MulticastDelegate_t
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


// Singleton_DontDestroy`1<GameSettingManager>
struct Singleton_DontDestroy_1_tFEB8E8AE77F64781D946E3ED24AC91620A5FC1CD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_DontDestroy_1_tFEB8E8AE77F64781D946E3ED24AC91620A5FC1CD_StaticFields
{
public:
	// T Singleton_DontDestroy`1::<Instance>k__BackingField
	GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_DontDestroy_1_tFEB8E8AE77F64781D946E3ED24AC91620A5FC1CD_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93 * value)
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


// Singleton_DontDestroy`1<PopupManager>
struct Singleton_DontDestroy_1_tFC070AAF599940D3CC243AB535E1B76347F68C7E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_DontDestroy_1_tFC070AAF599940D3CC243AB535E1B76347F68C7E_StaticFields
{
public:
	// T Singleton_DontDestroy`1::<Instance>k__BackingField
	PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_DontDestroy_1_tFC070AAF599940D3CC243AB535E1B76347F68C7E_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton_DontDestroy`1<SoundManager>
struct Singleton_DontDestroy_1_tFDA4B57E6ADC373A293B7A52CE35AE4116986A1C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_DontDestroy_1_tFDA4B57E6ADC373A293B7A52CE35AE4116986A1C_StaticFields
{
public:
	// T Singleton_DontDestroy`1::<Instance>k__BackingField
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_DontDestroy_1_tFDA4B57E6ADC373A293B7A52CE35AE4116986A1C_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<GameSystemManager>
struct Singleton_1_t4E5017F2C00D18667DFF77E36AA0FDE9D4B8603E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_t4E5017F2C00D18667DFF77E36AA0FDE9D4B8603E_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_t4E5017F2C00D18667DFF77E36AA0FDE9D4B8603E_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * value)
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


// Singleton`1<LobbyManager>
struct Singleton_1_t51F9A8BDD64DE21C8516948D6DCB4FC042E0B177  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_t51F9A8BDD64DE21C8516948D6DCB4FC042E0B177_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_t51F9A8BDD64DE21C8516948D6DCB4FC042E0B177_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * value)
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


// KartSelectPanelController
struct KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Lobby_Garage KartSelectPanelController::m_garageMenu
	Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5 * ___m_garageMenu_4;
	// UnityEngine.UI.Button[] KartSelectPanelController::m_kartButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___m_kartButtons_5;
	// UnityEngine.UI.Text[] KartSelectPanelController::m_kartNames
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___m_kartNames_6;
	// System.Int32 KartSelectPanelController::<CurrKartIndex>k__BackingField
	int32_t ___U3CCurrKartIndexU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_garageMenu_4() { return static_cast<int32_t>(offsetof(KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E, ___m_garageMenu_4)); }
	inline Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5 * get_m_garageMenu_4() const { return ___m_garageMenu_4; }
	inline Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5 ** get_address_of_m_garageMenu_4() { return &___m_garageMenu_4; }
	inline void set_m_garageMenu_4(Lobby_Garage_tEE5846C98393323BE2DD723AD679698E4D1EFDD5 * value)
	{
		___m_garageMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_garageMenu_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_kartButtons_5() { return static_cast<int32_t>(offsetof(KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E, ___m_kartButtons_5)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_m_kartButtons_5() const { return ___m_kartButtons_5; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_m_kartButtons_5() { return &___m_kartButtons_5; }
	inline void set_m_kartButtons_5(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___m_kartButtons_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kartButtons_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_kartNames_6() { return static_cast<int32_t>(offsetof(KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E, ___m_kartNames_6)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_m_kartNames_6() const { return ___m_kartNames_6; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_m_kartNames_6() { return &___m_kartNames_6; }
	inline void set_m_kartNames_6(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___m_kartNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kartNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrKartIndexU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E, ___U3CCurrKartIndexU3Ek__BackingField_7)); }
	inline int32_t get_U3CCurrKartIndexU3Ek__BackingField_7() const { return ___U3CCurrKartIndexU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCurrKartIndexU3Ek__BackingField_7() { return &___U3CCurrKartIndexU3Ek__BackingField_7; }
	inline void set_U3CCurrKartIndexU3Ek__BackingField_7(int32_t value)
	{
		___U3CCurrKartIndexU3Ek__BackingField_7 = value;
	}
};


// KeySetting
struct KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Text.StringBuilder KeySetting::m_sb
	StringBuilder_t * ___m_sb_4;
	// UnityEngine.GameObject KeySetting::m_keys
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_keys_5;
	// UnityEngine.UI.Button[] KeySetting::m_keyButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___m_keyButtons_6;
	// UnityEngine.UI.Text[] KeySetting::m_keyTexts
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___m_keyTexts_7;
	// UnityEngine.UI.ColorBlock KeySetting::m_colorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_colorBlock_8;
	// UnityEngine.Color KeySetting::m_normalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_normalColor_9;
	// UnityEngine.Color KeySetting::m_selectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_selectedColor_10;
	// Key KeySetting::m_currChangingKey
	int32_t ___m_currChangingKey_11;
	// UnityEngine.KeyCode KeySetting::m_selectedKey
	int32_t ___m_selectedKey_12;
	// System.Boolean KeySetting::m_keyDownCheck
	bool ___m_keyDownCheck_13;

public:
	inline static int32_t get_offset_of_m_sb_4() { return static_cast<int32_t>(offsetof(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF, ___m_sb_4)); }
	inline StringBuilder_t * get_m_sb_4() const { return ___m_sb_4; }
	inline StringBuilder_t ** get_address_of_m_sb_4() { return &___m_sb_4; }
	inline void set_m_sb_4(StringBuilder_t * value)
	{
		___m_sb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sb_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_keys_5() { return static_cast<int32_t>(offsetof(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF, ___m_keys_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_keys_5() const { return ___m_keys_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_keys_5() { return &___m_keys_5; }
	inline void set_m_keys_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_keys_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keys_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_keyButtons_6() { return static_cast<int32_t>(offsetof(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF, ___m_keyButtons_6)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_m_keyButtons_6() const { return ___m_keyButtons_6; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_m_keyButtons_6() { return &___m_keyButtons_6; }
	inline void set_m_keyButtons_6(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___m_keyButtons_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keyButtons_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_keyTexts_7() { return static_cast<int32_t>(offsetof(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF, ___m_keyTexts_7)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_m_keyTexts_7() const { return ___m_keyTexts_7; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_m_keyTexts_7() { return &___m_keyTexts_7; }
	inline void set_m_keyTexts_7(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___m_keyTexts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keyTexts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorBlock_8() { return static_cast<int32_t>(offsetof(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF, ___m_colorBlock_8)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_colorBlock_8() const { return ___m_colorBlock_8; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_colorBlock_8() { return &___m_colorBlock_8; }
	inline void set_m_colorBlock_8(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_colorBlock_8 = value;
	}

	inline static int32_t get_offset_of_m_normalColor_9() { return static_cast<int32_t>(offsetof(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF, ___m_normalColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_normalColor_9() const { return ___m_normalColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_normalColor_9() { return &___m_normalColor_9; }
	inline void set_m_normalColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_normalColor_9 = value;
	}

	inline static int32_t get_offset_of_m_selectedColor_10() { return static_cast<int32_t>(offsetof(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF, ___m_selectedColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_selectedColor_10() const { return ___m_selectedColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_selectedColor_10() { return &___m_selectedColor_10; }
	inline void set_m_selectedColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_selectedColor_10 = value;
	}

	inline static int32_t get_offset_of_m_currChangingKey_11() { return static_cast<int32_t>(offsetof(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF, ___m_currChangingKey_11)); }
	inline int32_t get_m_currChangingKey_11() const { return ___m_currChangingKey_11; }
	inline int32_t* get_address_of_m_currChangingKey_11() { return &___m_currChangingKey_11; }
	inline void set_m_currChangingKey_11(int32_t value)
	{
		___m_currChangingKey_11 = value;
	}

	inline static int32_t get_offset_of_m_selectedKey_12() { return static_cast<int32_t>(offsetof(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF, ___m_selectedKey_12)); }
	inline int32_t get_m_selectedKey_12() const { return ___m_selectedKey_12; }
	inline int32_t* get_address_of_m_selectedKey_12() { return &___m_selectedKey_12; }
	inline void set_m_selectedKey_12(int32_t value)
	{
		___m_selectedKey_12 = value;
	}

	inline static int32_t get_offset_of_m_keyDownCheck_13() { return static_cast<int32_t>(offsetof(KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF, ___m_keyDownCheck_13)); }
	inline bool get_m_keyDownCheck_13() const { return ___m_keyDownCheck_13; }
	inline bool* get_address_of_m_keyDownCheck_13() { return &___m_keyDownCheck_13; }
	inline void set_m_keyDownCheck_13(bool value)
	{
		___m_keyDownCheck_13 = value;
	}
};


// Lobby_Shop
struct Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Text.StringBuilder Lobby_Shop::m_sb
	StringBuilder_t * ___m_sb_4;
	// KartViewStageController Lobby_Shop::m_kartViewStage
	KartViewStageController_tD6F3220D6A5CB543E97DCC8144D104B72632D9A6 * ___m_kartViewStage_5;
	// UnityEngine.UI.Button[] Lobby_Shop::m_selectButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___m_selectButtons_6;
	// UnityEngine.UI.Button Lobby_Shop::m_buyButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_buyButton_7;
	// System.Collections.Generic.List`1<UnityEngine.UI.Text> Lobby_Shop::m_priceTexts
	List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * ___m_priceTexts_8;
	// UnityEngine.UI.Text Lobby_Shop::m_goldText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_goldText_9;
	// UnityEngine.UI.Text Lobby_Shop::m_buyText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_buyText_10;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> Lobby_Shop::m_goldImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_goldImages_11;
	// UnityEngine.GameObject Lobby_Shop::m_items
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_items_12;
	// System.String Lobby_Shop::m_textBuy
	String_t* ___m_textBuy_13;
	// System.String Lobby_Shop::m_textSelected
	String_t* ___m_textSelected_14;
	// System.String Lobby_Shop::m_textFinishBuy
	String_t* ___m_textFinishBuy_15;
	// System.Int32 Lobby_Shop::m_currSelectedKart
	int32_t ___m_currSelectedKart_16;

public:
	inline static int32_t get_offset_of_m_sb_4() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_sb_4)); }
	inline StringBuilder_t * get_m_sb_4() const { return ___m_sb_4; }
	inline StringBuilder_t ** get_address_of_m_sb_4() { return &___m_sb_4; }
	inline void set_m_sb_4(StringBuilder_t * value)
	{
		___m_sb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sb_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_kartViewStage_5() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_kartViewStage_5)); }
	inline KartViewStageController_tD6F3220D6A5CB543E97DCC8144D104B72632D9A6 * get_m_kartViewStage_5() const { return ___m_kartViewStage_5; }
	inline KartViewStageController_tD6F3220D6A5CB543E97DCC8144D104B72632D9A6 ** get_address_of_m_kartViewStage_5() { return &___m_kartViewStage_5; }
	inline void set_m_kartViewStage_5(KartViewStageController_tD6F3220D6A5CB543E97DCC8144D104B72632D9A6 * value)
	{
		___m_kartViewStage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kartViewStage_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectButtons_6() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_selectButtons_6)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_m_selectButtons_6() const { return ___m_selectButtons_6; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_m_selectButtons_6() { return &___m_selectButtons_6; }
	inline void set_m_selectButtons_6(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___m_selectButtons_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_selectButtons_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_buyButton_7() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_buyButton_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_buyButton_7() const { return ___m_buyButton_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_buyButton_7() { return &___m_buyButton_7; }
	inline void set_m_buyButton_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_buyButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buyButton_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_priceTexts_8() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_priceTexts_8)); }
	inline List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * get_m_priceTexts_8() const { return ___m_priceTexts_8; }
	inline List_1_t15050E83C4C051CA706B3489C75EBD1038966135 ** get_address_of_m_priceTexts_8() { return &___m_priceTexts_8; }
	inline void set_m_priceTexts_8(List_1_t15050E83C4C051CA706B3489C75EBD1038966135 * value)
	{
		___m_priceTexts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_priceTexts_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_goldText_9() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_goldText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_goldText_9() const { return ___m_goldText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_goldText_9() { return &___m_goldText_9; }
	inline void set_m_goldText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_goldText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_goldText_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_buyText_10() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_buyText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_buyText_10() const { return ___m_buyText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_buyText_10() { return &___m_buyText_10; }
	inline void set_m_buyText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_buyText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buyText_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_goldImages_11() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_goldImages_11)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_goldImages_11() const { return ___m_goldImages_11; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_goldImages_11() { return &___m_goldImages_11; }
	inline void set_m_goldImages_11(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_goldImages_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_goldImages_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_items_12() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_items_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_items_12() const { return ___m_items_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_items_12() { return &___m_items_12; }
	inline void set_m_items_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_items_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_items_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_textBuy_13() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_textBuy_13)); }
	inline String_t* get_m_textBuy_13() const { return ___m_textBuy_13; }
	inline String_t** get_address_of_m_textBuy_13() { return &___m_textBuy_13; }
	inline void set_m_textBuy_13(String_t* value)
	{
		___m_textBuy_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textBuy_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_textSelected_14() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_textSelected_14)); }
	inline String_t* get_m_textSelected_14() const { return ___m_textSelected_14; }
	inline String_t** get_address_of_m_textSelected_14() { return &___m_textSelected_14; }
	inline void set_m_textSelected_14(String_t* value)
	{
		___m_textSelected_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textSelected_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_textFinishBuy_15() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_textFinishBuy_15)); }
	inline String_t* get_m_textFinishBuy_15() const { return ___m_textFinishBuy_15; }
	inline String_t** get_address_of_m_textFinishBuy_15() { return &___m_textFinishBuy_15; }
	inline void set_m_textFinishBuy_15(String_t* value)
	{
		___m_textFinishBuy_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textFinishBuy_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_currSelectedKart_16() { return static_cast<int32_t>(offsetof(Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35, ___m_currSelectedKart_16)); }
	inline int32_t get_m_currSelectedKart_16() const { return ___m_currSelectedKart_16; }
	inline int32_t* get_address_of_m_currSelectedKart_16() { return &___m_currSelectedKart_16; }
	inline void set_m_currSelectedKart_16(int32_t value)
	{
		___m_currSelectedKart_16 = value;
	}
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
	// UnityEngine.Material PlayerController::m_backLightMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_backLightMat_9;
	// UnityEngine.GameObject PlayerController::m_kartPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_kartPrefab_10;
	// System.Single PlayerController::m_kartPosY
	float ___m_kartPosY_11;
	// UnityEngine.GameObject[] PlayerController::m_wheels
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___m_wheels_12;
	// UnityEngine.WheelCollider[] PlayerController::m_wheelCollider
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* ___m_wheelCollider_13;
	// WheelController[] PlayerController::m_wheelColliderCtr
	WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* ___m_wheelColliderCtr_14;
	// UnityEngine.WheelFrictionCurve PlayerController::m_fowardFricBackWheel
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___m_fowardFricBackWheel_15;
	// UnityEngine.WheelFrictionCurve PlayerController::m_sidewayFricBackWheel
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___m_sidewayFricBackWheel_16;
	// UnityEngine.Vector3 PlayerController::m_startDriftPosSum
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_startDriftPosSum_17;
	// UnityEngine.Vector3 PlayerController::m_endDriftPosSum
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_endDriftPosSum_18;
	// UnityEngine.Vector3 PlayerController::m_wheelColliderPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_wheelColliderPos_19;
	// UnityEngine.Quaternion PlayerController::m_wheelColliderRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_wheelColliderRotation_20;
	// System.Single PlayerController::m_antiRollVal
	float ___m_antiRollVal_21;
	// System.Single PlayerController::m_travelL
	float ___m_travelL_22;
	// System.Single PlayerController::m_travelR
	float ___m_travelR_23;
	// System.Boolean PlayerController::m_isGroundL
	bool ___m_isGroundL_24;
	// System.Boolean PlayerController::m_isGroundR
	bool ___m_isGroundR_25;
	// System.Single PlayerController::m_startBoostTime
	float ___m_startBoostTime_26;
	// System.Single PlayerController::m_startBoostSpeed
	float ___m_startBoostSpeed_27;
	// System.Single PlayerController::m_forceValue
	float ___m_forceValue_28;
	// System.Single PlayerController::m_maxSpeed
	float ___m_maxSpeed_29;
	// System.Single PlayerController::m_normalMaxSpeed
	float ___m_normalMaxSpeed_30;
	// System.Single PlayerController::m_maxReSpeed
	float ___m_maxReSpeed_31;
	// System.Single PlayerController::m_boosterMaxSpeed
	float ___m_boosterMaxSpeed_32;
	// System.Single PlayerController::m_currSpeed
	float ___m_currSpeed_33;
	// System.Single PlayerController::m_turnPower
	float ___m_turnPower_34;
	// System.Single PlayerController::m_slipRate
	float ___m_slipRate_35;
	// System.Single PlayerController::m_slipRateDownForce
	float ___m_slipRateDownForce_36;
	// System.Single PlayerController::m_slipRateUpForce
	float ___m_slipRateUpForce_37;
	// System.Single PlayerController::m_speed
	float ___m_speed_38;
	// System.Single PlayerController::m_velocityDownValue
	float ___m_velocityDownValue_39;
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

	inline static int32_t get_offset_of_m_backLightMat_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_backLightMat_9)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_backLightMat_9() const { return ___m_backLightMat_9; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_backLightMat_9() { return &___m_backLightMat_9; }
	inline void set_m_backLightMat_9(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_backLightMat_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_backLightMat_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_kartPrefab_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_kartPrefab_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_kartPrefab_10() const { return ___m_kartPrefab_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_kartPrefab_10() { return &___m_kartPrefab_10; }
	inline void set_m_kartPrefab_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_kartPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kartPrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_kartPosY_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_kartPosY_11)); }
	inline float get_m_kartPosY_11() const { return ___m_kartPosY_11; }
	inline float* get_address_of_m_kartPosY_11() { return &___m_kartPosY_11; }
	inline void set_m_kartPosY_11(float value)
	{
		___m_kartPosY_11 = value;
	}

	inline static int32_t get_offset_of_m_wheels_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheels_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_m_wheels_12() const { return ___m_wheels_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_m_wheels_12() { return &___m_wheels_12; }
	inline void set_m_wheels_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___m_wheels_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wheels_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_wheelCollider_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelCollider_13)); }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* get_m_wheelCollider_13() const { return ___m_wheelCollider_13; }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6** get_address_of_m_wheelCollider_13() { return &___m_wheelCollider_13; }
	inline void set_m_wheelCollider_13(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* value)
	{
		___m_wheelCollider_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wheelCollider_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_wheelColliderCtr_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelColliderCtr_14)); }
	inline WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* get_m_wheelColliderCtr_14() const { return ___m_wheelColliderCtr_14; }
	inline WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11** get_address_of_m_wheelColliderCtr_14() { return &___m_wheelColliderCtr_14; }
	inline void set_m_wheelColliderCtr_14(WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* value)
	{
		___m_wheelColliderCtr_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wheelColliderCtr_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_fowardFricBackWheel_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_fowardFricBackWheel_15)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_m_fowardFricBackWheel_15() const { return ___m_fowardFricBackWheel_15; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_m_fowardFricBackWheel_15() { return &___m_fowardFricBackWheel_15; }
	inline void set_m_fowardFricBackWheel_15(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___m_fowardFricBackWheel_15 = value;
	}

	inline static int32_t get_offset_of_m_sidewayFricBackWheel_16() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_sidewayFricBackWheel_16)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_m_sidewayFricBackWheel_16() const { return ___m_sidewayFricBackWheel_16; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_m_sidewayFricBackWheel_16() { return &___m_sidewayFricBackWheel_16; }
	inline void set_m_sidewayFricBackWheel_16(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___m_sidewayFricBackWheel_16 = value;
	}

	inline static int32_t get_offset_of_m_startDriftPosSum_17() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_startDriftPosSum_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_startDriftPosSum_17() const { return ___m_startDriftPosSum_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_startDriftPosSum_17() { return &___m_startDriftPosSum_17; }
	inline void set_m_startDriftPosSum_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_startDriftPosSum_17 = value;
	}

	inline static int32_t get_offset_of_m_endDriftPosSum_18() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_endDriftPosSum_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_endDriftPosSum_18() const { return ___m_endDriftPosSum_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_endDriftPosSum_18() { return &___m_endDriftPosSum_18; }
	inline void set_m_endDriftPosSum_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_endDriftPosSum_18 = value;
	}

	inline static int32_t get_offset_of_m_wheelColliderPos_19() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelColliderPos_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_wheelColliderPos_19() const { return ___m_wheelColliderPos_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_wheelColliderPos_19() { return &___m_wheelColliderPos_19; }
	inline void set_m_wheelColliderPos_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_wheelColliderPos_19 = value;
	}

	inline static int32_t get_offset_of_m_wheelColliderRotation_20() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelColliderRotation_20)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_wheelColliderRotation_20() const { return ___m_wheelColliderRotation_20; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_wheelColliderRotation_20() { return &___m_wheelColliderRotation_20; }
	inline void set_m_wheelColliderRotation_20(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_wheelColliderRotation_20 = value;
	}

	inline static int32_t get_offset_of_m_antiRollVal_21() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_antiRollVal_21)); }
	inline float get_m_antiRollVal_21() const { return ___m_antiRollVal_21; }
	inline float* get_address_of_m_antiRollVal_21() { return &___m_antiRollVal_21; }
	inline void set_m_antiRollVal_21(float value)
	{
		___m_antiRollVal_21 = value;
	}

	inline static int32_t get_offset_of_m_travelL_22() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_travelL_22)); }
	inline float get_m_travelL_22() const { return ___m_travelL_22; }
	inline float* get_address_of_m_travelL_22() { return &___m_travelL_22; }
	inline void set_m_travelL_22(float value)
	{
		___m_travelL_22 = value;
	}

	inline static int32_t get_offset_of_m_travelR_23() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_travelR_23)); }
	inline float get_m_travelR_23() const { return ___m_travelR_23; }
	inline float* get_address_of_m_travelR_23() { return &___m_travelR_23; }
	inline void set_m_travelR_23(float value)
	{
		___m_travelR_23 = value;
	}

	inline static int32_t get_offset_of_m_isGroundL_24() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isGroundL_24)); }
	inline bool get_m_isGroundL_24() const { return ___m_isGroundL_24; }
	inline bool* get_address_of_m_isGroundL_24() { return &___m_isGroundL_24; }
	inline void set_m_isGroundL_24(bool value)
	{
		___m_isGroundL_24 = value;
	}

	inline static int32_t get_offset_of_m_isGroundR_25() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isGroundR_25)); }
	inline bool get_m_isGroundR_25() const { return ___m_isGroundR_25; }
	inline bool* get_address_of_m_isGroundR_25() { return &___m_isGroundR_25; }
	inline void set_m_isGroundR_25(bool value)
	{
		___m_isGroundR_25 = value;
	}

	inline static int32_t get_offset_of_m_startBoostTime_26() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_startBoostTime_26)); }
	inline float get_m_startBoostTime_26() const { return ___m_startBoostTime_26; }
	inline float* get_address_of_m_startBoostTime_26() { return &___m_startBoostTime_26; }
	inline void set_m_startBoostTime_26(float value)
	{
		___m_startBoostTime_26 = value;
	}

	inline static int32_t get_offset_of_m_startBoostSpeed_27() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_startBoostSpeed_27)); }
	inline float get_m_startBoostSpeed_27() const { return ___m_startBoostSpeed_27; }
	inline float* get_address_of_m_startBoostSpeed_27() { return &___m_startBoostSpeed_27; }
	inline void set_m_startBoostSpeed_27(float value)
	{
		___m_startBoostSpeed_27 = value;
	}

	inline static int32_t get_offset_of_m_forceValue_28() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_forceValue_28)); }
	inline float get_m_forceValue_28() const { return ___m_forceValue_28; }
	inline float* get_address_of_m_forceValue_28() { return &___m_forceValue_28; }
	inline void set_m_forceValue_28(float value)
	{
		___m_forceValue_28 = value;
	}

	inline static int32_t get_offset_of_m_maxSpeed_29() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_maxSpeed_29)); }
	inline float get_m_maxSpeed_29() const { return ___m_maxSpeed_29; }
	inline float* get_address_of_m_maxSpeed_29() { return &___m_maxSpeed_29; }
	inline void set_m_maxSpeed_29(float value)
	{
		___m_maxSpeed_29 = value;
	}

	inline static int32_t get_offset_of_m_normalMaxSpeed_30() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_normalMaxSpeed_30)); }
	inline float get_m_normalMaxSpeed_30() const { return ___m_normalMaxSpeed_30; }
	inline float* get_address_of_m_normalMaxSpeed_30() { return &___m_normalMaxSpeed_30; }
	inline void set_m_normalMaxSpeed_30(float value)
	{
		___m_normalMaxSpeed_30 = value;
	}

	inline static int32_t get_offset_of_m_maxReSpeed_31() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_maxReSpeed_31)); }
	inline float get_m_maxReSpeed_31() const { return ___m_maxReSpeed_31; }
	inline float* get_address_of_m_maxReSpeed_31() { return &___m_maxReSpeed_31; }
	inline void set_m_maxReSpeed_31(float value)
	{
		___m_maxReSpeed_31 = value;
	}

	inline static int32_t get_offset_of_m_boosterMaxSpeed_32() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterMaxSpeed_32)); }
	inline float get_m_boosterMaxSpeed_32() const { return ___m_boosterMaxSpeed_32; }
	inline float* get_address_of_m_boosterMaxSpeed_32() { return &___m_boosterMaxSpeed_32; }
	inline void set_m_boosterMaxSpeed_32(float value)
	{
		___m_boosterMaxSpeed_32 = value;
	}

	inline static int32_t get_offset_of_m_currSpeed_33() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_currSpeed_33)); }
	inline float get_m_currSpeed_33() const { return ___m_currSpeed_33; }
	inline float* get_address_of_m_currSpeed_33() { return &___m_currSpeed_33; }
	inline void set_m_currSpeed_33(float value)
	{
		___m_currSpeed_33 = value;
	}

	inline static int32_t get_offset_of_m_turnPower_34() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_turnPower_34)); }
	inline float get_m_turnPower_34() const { return ___m_turnPower_34; }
	inline float* get_address_of_m_turnPower_34() { return &___m_turnPower_34; }
	inline void set_m_turnPower_34(float value)
	{
		___m_turnPower_34 = value;
	}

	inline static int32_t get_offset_of_m_slipRate_35() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_slipRate_35)); }
	inline float get_m_slipRate_35() const { return ___m_slipRate_35; }
	inline float* get_address_of_m_slipRate_35() { return &___m_slipRate_35; }
	inline void set_m_slipRate_35(float value)
	{
		___m_slipRate_35 = value;
	}

	inline static int32_t get_offset_of_m_slipRateDownForce_36() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_slipRateDownForce_36)); }
	inline float get_m_slipRateDownForce_36() const { return ___m_slipRateDownForce_36; }
	inline float* get_address_of_m_slipRateDownForce_36() { return &___m_slipRateDownForce_36; }
	inline void set_m_slipRateDownForce_36(float value)
	{
		___m_slipRateDownForce_36 = value;
	}

	inline static int32_t get_offset_of_m_slipRateUpForce_37() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_slipRateUpForce_37)); }
	inline float get_m_slipRateUpForce_37() const { return ___m_slipRateUpForce_37; }
	inline float* get_address_of_m_slipRateUpForce_37() { return &___m_slipRateUpForce_37; }
	inline void set_m_slipRateUpForce_37(float value)
	{
		___m_slipRateUpForce_37 = value;
	}

	inline static int32_t get_offset_of_m_speed_38() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_speed_38)); }
	inline float get_m_speed_38() const { return ___m_speed_38; }
	inline float* get_address_of_m_speed_38() { return &___m_speed_38; }
	inline void set_m_speed_38(float value)
	{
		___m_speed_38 = value;
	}

	inline static int32_t get_offset_of_m_velocityDownValue_39() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_velocityDownValue_39)); }
	inline float get_m_velocityDownValue_39() const { return ___m_velocityDownValue_39; }
	inline float* get_address_of_m_velocityDownValue_39() { return &___m_velocityDownValue_39; }
	inline void set_m_velocityDownValue_39(float value)
	{
		___m_velocityDownValue_39 = value;
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


// DataManager
struct DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2  : public Singleton_DontDestroy_1_t476369C486C70CE5CD3D245CFA49CFAAA2EE8347
{
public:
	// PlayerData DataManager::m_playerData
	PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * ___m_playerData_5;
	// SettingData DataManager::m_settingData
	SettingData_tBC45B3BAD129CD17144A734C49820A1353FFB9CE * ___m_settingData_6;
	// System.String DataManager::m_playerJsonDataName
	String_t* ___m_playerJsonDataName_7;
	// System.String DataManager::m_settingJsonDataName
	String_t* ___m_settingJsonDataName_8;
	// System.String DataManager::m_inputFieldName
	String_t* ___m_inputFieldName_9;
	// System.Int32 DataManager::m_usingKart
	int32_t ___m_usingKart_10;

public:
	inline static int32_t get_offset_of_m_playerData_5() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___m_playerData_5)); }
	inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * get_m_playerData_5() const { return ___m_playerData_5; }
	inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 ** get_address_of_m_playerData_5() { return &___m_playerData_5; }
	inline void set_m_playerData_5(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * value)
	{
		___m_playerData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_settingData_6() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___m_settingData_6)); }
	inline SettingData_tBC45B3BAD129CD17144A734C49820A1353FFB9CE * get_m_settingData_6() const { return ___m_settingData_6; }
	inline SettingData_tBC45B3BAD129CD17144A734C49820A1353FFB9CE ** get_address_of_m_settingData_6() { return &___m_settingData_6; }
	inline void set_m_settingData_6(SettingData_tBC45B3BAD129CD17144A734C49820A1353FFB9CE * value)
	{
		___m_settingData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_settingData_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_playerJsonDataName_7() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___m_playerJsonDataName_7)); }
	inline String_t* get_m_playerJsonDataName_7() const { return ___m_playerJsonDataName_7; }
	inline String_t** get_address_of_m_playerJsonDataName_7() { return &___m_playerJsonDataName_7; }
	inline void set_m_playerJsonDataName_7(String_t* value)
	{
		___m_playerJsonDataName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerJsonDataName_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_settingJsonDataName_8() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___m_settingJsonDataName_8)); }
	inline String_t* get_m_settingJsonDataName_8() const { return ___m_settingJsonDataName_8; }
	inline String_t** get_address_of_m_settingJsonDataName_8() { return &___m_settingJsonDataName_8; }
	inline void set_m_settingJsonDataName_8(String_t* value)
	{
		___m_settingJsonDataName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_settingJsonDataName_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_inputFieldName_9() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___m_inputFieldName_9)); }
	inline String_t* get_m_inputFieldName_9() const { return ___m_inputFieldName_9; }
	inline String_t** get_address_of_m_inputFieldName_9() { return &___m_inputFieldName_9; }
	inline void set_m_inputFieldName_9(String_t* value)
	{
		___m_inputFieldName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_inputFieldName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_usingKart_10() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___m_usingKart_10)); }
	inline int32_t get_m_usingKart_10() const { return ___m_usingKart_10; }
	inline int32_t* get_address_of_m_usingKart_10() { return &___m_usingKart_10; }
	inline void set_m_usingKart_10(int32_t value)
	{
		___m_usingKart_10 = value;
	}
};


// GameSettingManager
struct GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93  : public Singleton_DontDestroy_1_tFEB8E8AE77F64781D946E3ED24AC91620A5FC1CD
{
public:
	// ISetting[] GameSettingManager::m_settingPanels
	ISettingU5BU5D_tB080A1208E53403D919985A88412EF1A260CFD16* ___m_settingPanels_5;
	// Setting GameSettingManager::m_currOpenSettingPanel
	int32_t ___m_currOpenSettingPanel_6;
	// UnityEngine.UI.Button[] GameSettingManager::m_settingButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___m_settingButtons_7;
	// UnityEngine.UI.Text GameSettingManager::m_backBtnText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_backBtnText_8;
	// UnityEngine.Canvas GameSettingManager::m_settingCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_settingCanvas_9;
	// System.Collections.Generic.List`1<System.String> GameSettingManager::m_backTexts
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_backTexts_10;
	// UnityEngine.GameObject GameSettingManager::m_optionsPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_optionsPanel_11;
	// UnityEngine.GameObject GameSettingManager::m_settingPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_settingPanel_12;
	// System.Single GameSettingManager::m_animPlaySpeed
	float ___m_animPlaySpeed_13;
	// System.Single GameSettingManager::m_time
	float ___m_time_14;
	// System.Single GameSettingManager::m_scaleFrom
	float ___m_scaleFrom_15;
	// System.Single GameSettingManager::m_scaleTo
	float ___m_scaleTo_16;
	// System.Boolean GameSettingManager::m_playSettingPanelAnim
	bool ___m_playSettingPanelAnim_17;
	// System.Boolean GameSettingManager::m_playSettingPanelReverseAnim
	bool ___m_playSettingPanelReverseAnim_18;
	// System.Boolean GameSettingManager::m_isPlayingAnim
	bool ___m_isPlayingAnim_19;

public:
	inline static int32_t get_offset_of_m_settingPanels_5() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_settingPanels_5)); }
	inline ISettingU5BU5D_tB080A1208E53403D919985A88412EF1A260CFD16* get_m_settingPanels_5() const { return ___m_settingPanels_5; }
	inline ISettingU5BU5D_tB080A1208E53403D919985A88412EF1A260CFD16** get_address_of_m_settingPanels_5() { return &___m_settingPanels_5; }
	inline void set_m_settingPanels_5(ISettingU5BU5D_tB080A1208E53403D919985A88412EF1A260CFD16* value)
	{
		___m_settingPanels_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_settingPanels_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_currOpenSettingPanel_6() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_currOpenSettingPanel_6)); }
	inline int32_t get_m_currOpenSettingPanel_6() const { return ___m_currOpenSettingPanel_6; }
	inline int32_t* get_address_of_m_currOpenSettingPanel_6() { return &___m_currOpenSettingPanel_6; }
	inline void set_m_currOpenSettingPanel_6(int32_t value)
	{
		___m_currOpenSettingPanel_6 = value;
	}

	inline static int32_t get_offset_of_m_settingButtons_7() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_settingButtons_7)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_m_settingButtons_7() const { return ___m_settingButtons_7; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_m_settingButtons_7() { return &___m_settingButtons_7; }
	inline void set_m_settingButtons_7(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___m_settingButtons_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_settingButtons_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_backBtnText_8() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_backBtnText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_backBtnText_8() const { return ___m_backBtnText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_backBtnText_8() { return &___m_backBtnText_8; }
	inline void set_m_backBtnText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_backBtnText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_backBtnText_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_settingCanvas_9() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_settingCanvas_9)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_settingCanvas_9() const { return ___m_settingCanvas_9; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_settingCanvas_9() { return &___m_settingCanvas_9; }
	inline void set_m_settingCanvas_9(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_settingCanvas_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_settingCanvas_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_backTexts_10() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_backTexts_10)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_backTexts_10() const { return ___m_backTexts_10; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_backTexts_10() { return &___m_backTexts_10; }
	inline void set_m_backTexts_10(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_backTexts_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_backTexts_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_optionsPanel_11() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_optionsPanel_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_optionsPanel_11() const { return ___m_optionsPanel_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_optionsPanel_11() { return &___m_optionsPanel_11; }
	inline void set_m_optionsPanel_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_optionsPanel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_optionsPanel_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_settingPanel_12() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_settingPanel_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_settingPanel_12() const { return ___m_settingPanel_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_settingPanel_12() { return &___m_settingPanel_12; }
	inline void set_m_settingPanel_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_settingPanel_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_settingPanel_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_animPlaySpeed_13() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_animPlaySpeed_13)); }
	inline float get_m_animPlaySpeed_13() const { return ___m_animPlaySpeed_13; }
	inline float* get_address_of_m_animPlaySpeed_13() { return &___m_animPlaySpeed_13; }
	inline void set_m_animPlaySpeed_13(float value)
	{
		___m_animPlaySpeed_13 = value;
	}

	inline static int32_t get_offset_of_m_time_14() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_time_14)); }
	inline float get_m_time_14() const { return ___m_time_14; }
	inline float* get_address_of_m_time_14() { return &___m_time_14; }
	inline void set_m_time_14(float value)
	{
		___m_time_14 = value;
	}

	inline static int32_t get_offset_of_m_scaleFrom_15() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_scaleFrom_15)); }
	inline float get_m_scaleFrom_15() const { return ___m_scaleFrom_15; }
	inline float* get_address_of_m_scaleFrom_15() { return &___m_scaleFrom_15; }
	inline void set_m_scaleFrom_15(float value)
	{
		___m_scaleFrom_15 = value;
	}

	inline static int32_t get_offset_of_m_scaleTo_16() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_scaleTo_16)); }
	inline float get_m_scaleTo_16() const { return ___m_scaleTo_16; }
	inline float* get_address_of_m_scaleTo_16() { return &___m_scaleTo_16; }
	inline void set_m_scaleTo_16(float value)
	{
		___m_scaleTo_16 = value;
	}

	inline static int32_t get_offset_of_m_playSettingPanelAnim_17() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_playSettingPanelAnim_17)); }
	inline bool get_m_playSettingPanelAnim_17() const { return ___m_playSettingPanelAnim_17; }
	inline bool* get_address_of_m_playSettingPanelAnim_17() { return &___m_playSettingPanelAnim_17; }
	inline void set_m_playSettingPanelAnim_17(bool value)
	{
		___m_playSettingPanelAnim_17 = value;
	}

	inline static int32_t get_offset_of_m_playSettingPanelReverseAnim_18() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_playSettingPanelReverseAnim_18)); }
	inline bool get_m_playSettingPanelReverseAnim_18() const { return ___m_playSettingPanelReverseAnim_18; }
	inline bool* get_address_of_m_playSettingPanelReverseAnim_18() { return &___m_playSettingPanelReverseAnim_18; }
	inline void set_m_playSettingPanelReverseAnim_18(bool value)
	{
		___m_playSettingPanelReverseAnim_18 = value;
	}

	inline static int32_t get_offset_of_m_isPlayingAnim_19() { return static_cast<int32_t>(offsetof(GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93, ___m_isPlayingAnim_19)); }
	inline bool get_m_isPlayingAnim_19() const { return ___m_isPlayingAnim_19; }
	inline bool* get_address_of_m_isPlayingAnim_19() { return &___m_isPlayingAnim_19; }
	inline void set_m_isPlayingAnim_19(bool value)
	{
		___m_isPlayingAnim_19 = value;
	}
};


// GameSystemManager
struct GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617  : public Singleton_1_t4E5017F2C00D18667DFF77E36AA0FDE9D4B8603E
{
public:
	// System.Text.StringBuilder GameSystemManager::m_sb
	StringBuilder_t * ___m_sb_5;
	// System.Collections.Generic.Dictionary`2<System.String,GameSystemManager/ReverseDirection> GameSystemManager::m_reverseDirDic
	Dictionary_2_t5F78C190B7D09A1632A9691AAE9672CA7170E89B * ___m_reverseDirDic_6;
	// System.Single GameSystemManager::m_twoCpsDist
	float ___m_twoCpsDist_7;
	// GameSystemManager/ReverseDirection GameSystemManager::m_currReverseDir
	int32_t ___m_currReverseDir_8;
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
	// UnityEngine.AnimationCurve GameSystemManager::m_scaleCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_scaleCurve_24;
	// UnityEngine.Canvas GameSystemManager::m_countCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_countCanvas_25;
	// UnityEngine.UI.Text GameSystemManager::m_countText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_countText_26;
	// UnityEngine.UI.Image GameSystemManager::m_warningImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_warningImage_27;
	// System.Single GameSystemManager::m_cntTextAlphaFadeOutduration
	float ___m_cntTextAlphaFadeOutduration_28;
	// System.Single GameSystemManager::m_timer
	float ___m_timer_29;
	// System.Single GameSystemManager::m_prevTime
	float ___m_prevTime_30;
	// System.Single GameSystemManager::m_bestTime
	float ___m_bestTime_31;
	// System.Single GameSystemManager::m_maxScale
	float ___m_maxScale_32;
	// System.Single GameSystemManager::m_minScale
	float ___m_minScale_33;
	// System.Single GameSystemManager::m_alphaFrom
	float ___m_alphaFrom_34;
	// System.Single GameSystemManager::m_alphaTo
	float ___m_alphaTo_35;

public:
	inline static int32_t get_offset_of_m_sb_5() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_sb_5)); }
	inline StringBuilder_t * get_m_sb_5() const { return ___m_sb_5; }
	inline StringBuilder_t ** get_address_of_m_sb_5() { return &___m_sb_5; }
	inline void set_m_sb_5(StringBuilder_t * value)
	{
		___m_sb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sb_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_reverseDirDic_6() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_reverseDirDic_6)); }
	inline Dictionary_2_t5F78C190B7D09A1632A9691AAE9672CA7170E89B * get_m_reverseDirDic_6() const { return ___m_reverseDirDic_6; }
	inline Dictionary_2_t5F78C190B7D09A1632A9691AAE9672CA7170E89B ** get_address_of_m_reverseDirDic_6() { return &___m_reverseDirDic_6; }
	inline void set_m_reverseDirDic_6(Dictionary_2_t5F78C190B7D09A1632A9691AAE9672CA7170E89B * value)
	{
		___m_reverseDirDic_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_reverseDirDic_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_twoCpsDist_7() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_twoCpsDist_7)); }
	inline float get_m_twoCpsDist_7() const { return ___m_twoCpsDist_7; }
	inline float* get_address_of_m_twoCpsDist_7() { return &___m_twoCpsDist_7; }
	inline void set_m_twoCpsDist_7(float value)
	{
		___m_twoCpsDist_7 = value;
	}

	inline static int32_t get_offset_of_m_currReverseDir_8() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_currReverseDir_8)); }
	inline int32_t get_m_currReverseDir_8() const { return ___m_currReverseDir_8; }
	inline int32_t* get_address_of_m_currReverseDir_8() { return &___m_currReverseDir_8; }
	inline void set_m_currReverseDir_8(int32_t value)
	{
		___m_currReverseDir_8 = value;
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

	inline static int32_t get_offset_of_m_scaleCurve_24() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_scaleCurve_24)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_scaleCurve_24() const { return ___m_scaleCurve_24; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_scaleCurve_24() { return &___m_scaleCurve_24; }
	inline void set_m_scaleCurve_24(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_scaleCurve_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_scaleCurve_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_countCanvas_25() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_countCanvas_25)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_countCanvas_25() const { return ___m_countCanvas_25; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_countCanvas_25() { return &___m_countCanvas_25; }
	inline void set_m_countCanvas_25(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_countCanvas_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_countCanvas_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_countText_26() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_countText_26)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_countText_26() const { return ___m_countText_26; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_countText_26() { return &___m_countText_26; }
	inline void set_m_countText_26(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_countText_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_countText_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_warningImage_27() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_warningImage_27)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_warningImage_27() const { return ___m_warningImage_27; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_warningImage_27() { return &___m_warningImage_27; }
	inline void set_m_warningImage_27(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_warningImage_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_warningImage_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cntTextAlphaFadeOutduration_28() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_cntTextAlphaFadeOutduration_28)); }
	inline float get_m_cntTextAlphaFadeOutduration_28() const { return ___m_cntTextAlphaFadeOutduration_28; }
	inline float* get_address_of_m_cntTextAlphaFadeOutduration_28() { return &___m_cntTextAlphaFadeOutduration_28; }
	inline void set_m_cntTextAlphaFadeOutduration_28(float value)
	{
		___m_cntTextAlphaFadeOutduration_28 = value;
	}

	inline static int32_t get_offset_of_m_timer_29() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_timer_29)); }
	inline float get_m_timer_29() const { return ___m_timer_29; }
	inline float* get_address_of_m_timer_29() { return &___m_timer_29; }
	inline void set_m_timer_29(float value)
	{
		___m_timer_29 = value;
	}

	inline static int32_t get_offset_of_m_prevTime_30() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_prevTime_30)); }
	inline float get_m_prevTime_30() const { return ___m_prevTime_30; }
	inline float* get_address_of_m_prevTime_30() { return &___m_prevTime_30; }
	inline void set_m_prevTime_30(float value)
	{
		___m_prevTime_30 = value;
	}

	inline static int32_t get_offset_of_m_bestTime_31() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_bestTime_31)); }
	inline float get_m_bestTime_31() const { return ___m_bestTime_31; }
	inline float* get_address_of_m_bestTime_31() { return &___m_bestTime_31; }
	inline void set_m_bestTime_31(float value)
	{
		___m_bestTime_31 = value;
	}

	inline static int32_t get_offset_of_m_maxScale_32() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_maxScale_32)); }
	inline float get_m_maxScale_32() const { return ___m_maxScale_32; }
	inline float* get_address_of_m_maxScale_32() { return &___m_maxScale_32; }
	inline void set_m_maxScale_32(float value)
	{
		___m_maxScale_32 = value;
	}

	inline static int32_t get_offset_of_m_minScale_33() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_minScale_33)); }
	inline float get_m_minScale_33() const { return ___m_minScale_33; }
	inline float* get_address_of_m_minScale_33() { return &___m_minScale_33; }
	inline void set_m_minScale_33(float value)
	{
		___m_minScale_33 = value;
	}

	inline static int32_t get_offset_of_m_alphaFrom_34() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_alphaFrom_34)); }
	inline float get_m_alphaFrom_34() const { return ___m_alphaFrom_34; }
	inline float* get_address_of_m_alphaFrom_34() { return &___m_alphaFrom_34; }
	inline void set_m_alphaFrom_34(float value)
	{
		___m_alphaFrom_34 = value;
	}

	inline static int32_t get_offset_of_m_alphaTo_35() { return static_cast<int32_t>(offsetof(GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617, ___m_alphaTo_35)); }
	inline float get_m_alphaTo_35() const { return ___m_alphaTo_35; }
	inline float* get_address_of_m_alphaTo_35() { return &___m_alphaTo_35; }
	inline void set_m_alphaTo_35(float value)
	{
		___m_alphaTo_35 = value;
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


// LobbyManager
struct LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779  : public Singleton_1_t51F9A8BDD64DE21C8516948D6DCB4FC042E0B177
{
public:
	// System.Text.StringBuilder LobbyManager::m_sb
	StringBuilder_t * ___m_sb_5;
	// UnityEngine.UI.Text LobbyManager::m_goldText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_goldText_6;
	// UnityEngine.GameObject LobbyManager::m_kartParentObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_kartParentObj_7;
	// UnityEngine.GameObject[] LobbyManager::m_kartPrefabs
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___m_kartPrefabs_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LobbyManager::m_karts
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___m_karts_9;
	// UnityEngine.GameObject LobbyManager::m_cameraArm
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_cameraArm_10;
	// UnityEngine.Rigidbody LobbyManager::m_cameraRb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_cameraRb_11;
	// UnityEngine.EventSystems.EventSystem LobbyManager::m_eventSys
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_eventSys_12;
	// UnityEngine.Vector3 LobbyManager::m_originCamPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_originCamPos_13;
	// UnityEngine.Quaternion LobbyManager::m_originCamRot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_originCamRot_14;
	// System.Int32 LobbyManager::m_currKartIndex
	int32_t ___m_currKartIndex_15;
	// System.Single LobbyManager::m_speed
	float ___m_speed_16;
	// System.Single LobbyManager::m_yAngle
	float ___m_yAngle_17;
	// System.Single LobbyManager::m_xAngle
	float ___m_xAngle_18;
	// System.Single LobbyManager::m_maxAngleX
	float ___m_maxAngleX_19;
	// System.Boolean LobbyManager::m_isMouseDown
	bool ___m_isMouseDown_20;

public:
	inline static int32_t get_offset_of_m_sb_5() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_sb_5)); }
	inline StringBuilder_t * get_m_sb_5() const { return ___m_sb_5; }
	inline StringBuilder_t ** get_address_of_m_sb_5() { return &___m_sb_5; }
	inline void set_m_sb_5(StringBuilder_t * value)
	{
		___m_sb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sb_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_goldText_6() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_goldText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_goldText_6() const { return ___m_goldText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_goldText_6() { return &___m_goldText_6; }
	inline void set_m_goldText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_goldText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_goldText_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_kartParentObj_7() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_kartParentObj_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_kartParentObj_7() const { return ___m_kartParentObj_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_kartParentObj_7() { return &___m_kartParentObj_7; }
	inline void set_m_kartParentObj_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_kartParentObj_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kartParentObj_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_kartPrefabs_8() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_kartPrefabs_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_m_kartPrefabs_8() const { return ___m_kartPrefabs_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_m_kartPrefabs_8() { return &___m_kartPrefabs_8; }
	inline void set_m_kartPrefabs_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___m_kartPrefabs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kartPrefabs_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_karts_9() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_karts_9)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_m_karts_9() const { return ___m_karts_9; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_m_karts_9() { return &___m_karts_9; }
	inline void set_m_karts_9(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___m_karts_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_karts_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_cameraArm_10() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_cameraArm_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_cameraArm_10() const { return ___m_cameraArm_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_cameraArm_10() { return &___m_cameraArm_10; }
	inline void set_m_cameraArm_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_cameraArm_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cameraArm_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_cameraRb_11() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_cameraRb_11)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_cameraRb_11() const { return ___m_cameraRb_11; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_cameraRb_11() { return &___m_cameraRb_11; }
	inline void set_m_cameraRb_11(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_cameraRb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cameraRb_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventSys_12() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_eventSys_12)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_eventSys_12() const { return ___m_eventSys_12; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_eventSys_12() { return &___m_eventSys_12; }
	inline void set_m_eventSys_12(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_eventSys_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventSys_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_originCamPos_13() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_originCamPos_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_originCamPos_13() const { return ___m_originCamPos_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_originCamPos_13() { return &___m_originCamPos_13; }
	inline void set_m_originCamPos_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_originCamPos_13 = value;
	}

	inline static int32_t get_offset_of_m_originCamRot_14() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_originCamRot_14)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_originCamRot_14() const { return ___m_originCamRot_14; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_originCamRot_14() { return &___m_originCamRot_14; }
	inline void set_m_originCamRot_14(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_originCamRot_14 = value;
	}

	inline static int32_t get_offset_of_m_currKartIndex_15() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_currKartIndex_15)); }
	inline int32_t get_m_currKartIndex_15() const { return ___m_currKartIndex_15; }
	inline int32_t* get_address_of_m_currKartIndex_15() { return &___m_currKartIndex_15; }
	inline void set_m_currKartIndex_15(int32_t value)
	{
		___m_currKartIndex_15 = value;
	}

	inline static int32_t get_offset_of_m_speed_16() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_speed_16)); }
	inline float get_m_speed_16() const { return ___m_speed_16; }
	inline float* get_address_of_m_speed_16() { return &___m_speed_16; }
	inline void set_m_speed_16(float value)
	{
		___m_speed_16 = value;
	}

	inline static int32_t get_offset_of_m_yAngle_17() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_yAngle_17)); }
	inline float get_m_yAngle_17() const { return ___m_yAngle_17; }
	inline float* get_address_of_m_yAngle_17() { return &___m_yAngle_17; }
	inline void set_m_yAngle_17(float value)
	{
		___m_yAngle_17 = value;
	}

	inline static int32_t get_offset_of_m_xAngle_18() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_xAngle_18)); }
	inline float get_m_xAngle_18() const { return ___m_xAngle_18; }
	inline float* get_address_of_m_xAngle_18() { return &___m_xAngle_18; }
	inline void set_m_xAngle_18(float value)
	{
		___m_xAngle_18 = value;
	}

	inline static int32_t get_offset_of_m_maxAngleX_19() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_maxAngleX_19)); }
	inline float get_m_maxAngleX_19() const { return ___m_maxAngleX_19; }
	inline float* get_address_of_m_maxAngleX_19() { return &___m_maxAngleX_19; }
	inline void set_m_maxAngleX_19(float value)
	{
		___m_maxAngleX_19 = value;
	}

	inline static int32_t get_offset_of_m_isMouseDown_20() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___m_isMouseDown_20)); }
	inline bool get_m_isMouseDown_20() const { return ___m_isMouseDown_20; }
	inline bool* get_address_of_m_isMouseDown_20() { return &___m_isMouseDown_20; }
	inline void set_m_isMouseDown_20(bool value)
	{
		___m_isMouseDown_20 = value;
	}
};


// LobbyUIManager
struct LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53  : public Singleton_1_t37F22396911BC0AFFCC353D1908B2E03E6CF10C4
{
public:
	// UnityEngine.UI.Button LobbyUIManager::m_exitButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_exitButton_5;
	// UnityEngine.UI.Button[] LobbyUIManager::m_lobbyButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___m_lobbyButtons_6;
	// UnityEngine.GameObject LobbyUIManager::m_lobbyMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_lobbyMenu_7;
	// UnityEngine.GameObject LobbyUIManager::m_mainLobby
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_mainLobby_8;
	// UnityEngine.UI.Image[] LobbyUIManager::m_Garage_statBars
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___m_Garage_statBars_9;
	// ILobbyMenu[] LobbyUIManager::m_lobbyMenus
	ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64* ___m_lobbyMenus_10;
	// System.Collections.Generic.Stack`1<ILobbySubMenu> LobbyUIManager::m_subMenuStack
	Stack_1_t6F5278D10BCA2AE3C0242CAED73BA465A3D47C52 * ___m_subMenuStack_11;
	// System.Single LobbyUIManager::m_time
	float ___m_time_12;
	// System.Single LobbyUIManager::m_speed
	float ___m_speed_13;
	// System.Single LobbyUIManager::m_speedFillAmount
	float ___m_speedFillAmount_14;
	// System.Single LobbyUIManager::m_turnPowerFillAmount
	float ___m_turnPowerFillAmount_15;
	// System.Single LobbyUIManager::m_boosterTimeFillAmount
	float ___m_boosterTimeFillAmount_16;
	// System.Single LobbyUIManager::m_chargingSpeedFillAmount
	float ___m_chargingSpeedFillAmount_17;
	// System.Int32 LobbyUIManager::m_menuIndex
	int32_t ___m_menuIndex_18;
	// System.Int32 LobbyUIManager::m_kartIndex
	int32_t ___m_kartIndex_19;
	// System.Boolean LobbyUIManager::m_setStatBars
	bool ___m_setStatBars_20;
	// System.Boolean LobbyUIManager::<IsMenuOpen>k__BackingField
	bool ___U3CIsMenuOpenU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_m_exitButton_5() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_exitButton_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_exitButton_5() const { return ___m_exitButton_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_exitButton_5() { return &___m_exitButton_5; }
	inline void set_m_exitButton_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_exitButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_exitButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_lobbyButtons_6() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_lobbyButtons_6)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_m_lobbyButtons_6() const { return ___m_lobbyButtons_6; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_m_lobbyButtons_6() { return &___m_lobbyButtons_6; }
	inline void set_m_lobbyButtons_6(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___m_lobbyButtons_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lobbyButtons_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_lobbyMenu_7() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_lobbyMenu_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_lobbyMenu_7() const { return ___m_lobbyMenu_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_lobbyMenu_7() { return &___m_lobbyMenu_7; }
	inline void set_m_lobbyMenu_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_lobbyMenu_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lobbyMenu_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_mainLobby_8() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_mainLobby_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_mainLobby_8() const { return ___m_mainLobby_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_mainLobby_8() { return &___m_mainLobby_8; }
	inline void set_m_mainLobby_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_mainLobby_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mainLobby_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Garage_statBars_9() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_Garage_statBars_9)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_m_Garage_statBars_9() const { return ___m_Garage_statBars_9; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_m_Garage_statBars_9() { return &___m_Garage_statBars_9; }
	inline void set_m_Garage_statBars_9(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___m_Garage_statBars_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Garage_statBars_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_lobbyMenus_10() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_lobbyMenus_10)); }
	inline ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64* get_m_lobbyMenus_10() const { return ___m_lobbyMenus_10; }
	inline ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64** get_address_of_m_lobbyMenus_10() { return &___m_lobbyMenus_10; }
	inline void set_m_lobbyMenus_10(ILobbyMenuU5BU5D_tC222A9A229BD5E37E711BC73E92F3FD1937FEE64* value)
	{
		___m_lobbyMenus_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lobbyMenus_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_subMenuStack_11() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_subMenuStack_11)); }
	inline Stack_1_t6F5278D10BCA2AE3C0242CAED73BA465A3D47C52 * get_m_subMenuStack_11() const { return ___m_subMenuStack_11; }
	inline Stack_1_t6F5278D10BCA2AE3C0242CAED73BA465A3D47C52 ** get_address_of_m_subMenuStack_11() { return &___m_subMenuStack_11; }
	inline void set_m_subMenuStack_11(Stack_1_t6F5278D10BCA2AE3C0242CAED73BA465A3D47C52 * value)
	{
		___m_subMenuStack_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subMenuStack_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_time_12() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_time_12)); }
	inline float get_m_time_12() const { return ___m_time_12; }
	inline float* get_address_of_m_time_12() { return &___m_time_12; }
	inline void set_m_time_12(float value)
	{
		___m_time_12 = value;
	}

	inline static int32_t get_offset_of_m_speed_13() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_speed_13)); }
	inline float get_m_speed_13() const { return ___m_speed_13; }
	inline float* get_address_of_m_speed_13() { return &___m_speed_13; }
	inline void set_m_speed_13(float value)
	{
		___m_speed_13 = value;
	}

	inline static int32_t get_offset_of_m_speedFillAmount_14() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_speedFillAmount_14)); }
	inline float get_m_speedFillAmount_14() const { return ___m_speedFillAmount_14; }
	inline float* get_address_of_m_speedFillAmount_14() { return &___m_speedFillAmount_14; }
	inline void set_m_speedFillAmount_14(float value)
	{
		___m_speedFillAmount_14 = value;
	}

	inline static int32_t get_offset_of_m_turnPowerFillAmount_15() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_turnPowerFillAmount_15)); }
	inline float get_m_turnPowerFillAmount_15() const { return ___m_turnPowerFillAmount_15; }
	inline float* get_address_of_m_turnPowerFillAmount_15() { return &___m_turnPowerFillAmount_15; }
	inline void set_m_turnPowerFillAmount_15(float value)
	{
		___m_turnPowerFillAmount_15 = value;
	}

	inline static int32_t get_offset_of_m_boosterTimeFillAmount_16() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_boosterTimeFillAmount_16)); }
	inline float get_m_boosterTimeFillAmount_16() const { return ___m_boosterTimeFillAmount_16; }
	inline float* get_address_of_m_boosterTimeFillAmount_16() { return &___m_boosterTimeFillAmount_16; }
	inline void set_m_boosterTimeFillAmount_16(float value)
	{
		___m_boosterTimeFillAmount_16 = value;
	}

	inline static int32_t get_offset_of_m_chargingSpeedFillAmount_17() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_chargingSpeedFillAmount_17)); }
	inline float get_m_chargingSpeedFillAmount_17() const { return ___m_chargingSpeedFillAmount_17; }
	inline float* get_address_of_m_chargingSpeedFillAmount_17() { return &___m_chargingSpeedFillAmount_17; }
	inline void set_m_chargingSpeedFillAmount_17(float value)
	{
		___m_chargingSpeedFillAmount_17 = value;
	}

	inline static int32_t get_offset_of_m_menuIndex_18() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_menuIndex_18)); }
	inline int32_t get_m_menuIndex_18() const { return ___m_menuIndex_18; }
	inline int32_t* get_address_of_m_menuIndex_18() { return &___m_menuIndex_18; }
	inline void set_m_menuIndex_18(int32_t value)
	{
		___m_menuIndex_18 = value;
	}

	inline static int32_t get_offset_of_m_kartIndex_19() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_kartIndex_19)); }
	inline int32_t get_m_kartIndex_19() const { return ___m_kartIndex_19; }
	inline int32_t* get_address_of_m_kartIndex_19() { return &___m_kartIndex_19; }
	inline void set_m_kartIndex_19(int32_t value)
	{
		___m_kartIndex_19 = value;
	}

	inline static int32_t get_offset_of_m_setStatBars_20() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___m_setStatBars_20)); }
	inline bool get_m_setStatBars_20() const { return ___m_setStatBars_20; }
	inline bool* get_address_of_m_setStatBars_20() { return &___m_setStatBars_20; }
	inline void set_m_setStatBars_20(bool value)
	{
		___m_setStatBars_20 = value;
	}

	inline static int32_t get_offset_of_U3CIsMenuOpenU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53, ___U3CIsMenuOpenU3Ek__BackingField_21)); }
	inline bool get_U3CIsMenuOpenU3Ek__BackingField_21() const { return ___U3CIsMenuOpenU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsMenuOpenU3Ek__BackingField_21() { return &___U3CIsMenuOpenU3Ek__BackingField_21; }
	inline void set_U3CIsMenuOpenU3Ek__BackingField_21(bool value)
	{
		___U3CIsMenuOpenU3Ek__BackingField_21 = value;
	}
};


// PopupManager
struct PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9  : public Singleton_DontDestroy_1_tFC070AAF599940D3CC243AB535E1B76347F68C7E
{
public:
	// UnityEngine.GameObject[] PopupManager::m_popupPrefabs
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___m_popupPrefabs_5;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> PopupManager::m_popupStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___m_popupStack_6;
	// System.Collections.Generic.Dictionary`2<System.String,GameObjectPool`1<UnityEngine.GameObject>> PopupManager::m_popupPoolDic
	Dictionary_2_t1697BAD6199139BD92FCE80B99FA9DF736F80390 * ___m_popupPoolDic_7;
	// UnityEngine.Canvas PopupManager::m_popupCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_popupCanvas_8;
	// UnityEngine.UI.InputField PopupManager::m_currInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___m_currInputField_9;
	// System.Collections.Generic.List`1<System.String> PopupManager::m_popupNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_popupNames_10;

public:
	inline static int32_t get_offset_of_m_popupPrefabs_5() { return static_cast<int32_t>(offsetof(PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9, ___m_popupPrefabs_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_m_popupPrefabs_5() const { return ___m_popupPrefabs_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_m_popupPrefabs_5() { return &___m_popupPrefabs_5; }
	inline void set_m_popupPrefabs_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___m_popupPrefabs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_popupPrefabs_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_popupStack_6() { return static_cast<int32_t>(offsetof(PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9, ___m_popupStack_6)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_m_popupStack_6() const { return ___m_popupStack_6; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_m_popupStack_6() { return &___m_popupStack_6; }
	inline void set_m_popupStack_6(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___m_popupStack_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_popupStack_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_popupPoolDic_7() { return static_cast<int32_t>(offsetof(PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9, ___m_popupPoolDic_7)); }
	inline Dictionary_2_t1697BAD6199139BD92FCE80B99FA9DF736F80390 * get_m_popupPoolDic_7() const { return ___m_popupPoolDic_7; }
	inline Dictionary_2_t1697BAD6199139BD92FCE80B99FA9DF736F80390 ** get_address_of_m_popupPoolDic_7() { return &___m_popupPoolDic_7; }
	inline void set_m_popupPoolDic_7(Dictionary_2_t1697BAD6199139BD92FCE80B99FA9DF736F80390 * value)
	{
		___m_popupPoolDic_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_popupPoolDic_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_popupCanvas_8() { return static_cast<int32_t>(offsetof(PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9, ___m_popupCanvas_8)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_popupCanvas_8() const { return ___m_popupCanvas_8; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_popupCanvas_8() { return &___m_popupCanvas_8; }
	inline void set_m_popupCanvas_8(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_popupCanvas_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_popupCanvas_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_currInputField_9() { return static_cast<int32_t>(offsetof(PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9, ___m_currInputField_9)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_m_currInputField_9() const { return ___m_currInputField_9; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_m_currInputField_9() { return &___m_currInputField_9; }
	inline void set_m_currInputField_9(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___m_currInputField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currInputField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_popupNames_10() { return static_cast<int32_t>(offsetof(PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9, ___m_popupNames_10)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_popupNames_10() const { return ___m_popupNames_10; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_popupNames_10() { return &___m_popupNames_10; }
	inline void set_m_popupNames_10(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_popupNames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_popupNames_10), (void*)value);
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


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public Singleton_DontDestroy_1_tFDA4B57E6ADC373A293B7A52CE35AE4116986A1C
{
public:
	// UnityEngine.AudioSource[] SoundManager::m_audios
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ___m_audios_5;
	// UnityEngine.AudioClip[] SoundManager::m_bgmClips
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___m_bgmClips_6;
	// UnityEngine.AudioClip[] SoundManager::m_sfxClips
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___m_sfxClips_7;
	// System.Collections.Generic.Dictionary`2<SFXClip,System.Int32> SoundManager::m_sfxPlayCnts
	Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 * ___m_sfxPlayCnts_9;

public:
	inline static int32_t get_offset_of_m_audios_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___m_audios_5)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get_m_audios_5() const { return ___m_audios_5; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of_m_audios_5() { return &___m_audios_5; }
	inline void set_m_audios_5(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		___m_audios_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_audios_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_bgmClips_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___m_bgmClips_6)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_m_bgmClips_6() const { return ___m_bgmClips_6; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_m_bgmClips_6() { return &___m_bgmClips_6; }
	inline void set_m_bgmClips_6(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___m_bgmClips_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_bgmClips_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_sfxClips_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___m_sfxClips_7)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_m_sfxClips_7() const { return ___m_sfxClips_7; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_m_sfxClips_7() { return &___m_sfxClips_7; }
	inline void set_m_sfxClips_7(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___m_sfxClips_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sfxClips_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sfxPlayCnts_9() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___m_sfxPlayCnts_9)); }
	inline Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 * get_m_sfxPlayCnts_9() const { return ___m_sfxPlayCnts_9; }
	inline Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 ** get_address_of_m_sfxPlayCnts_9() { return &___m_sfxPlayCnts_9; }
	inline void set_m_sfxPlayCnts_9(Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 * value)
	{
		___m_sfxPlayCnts_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sfxPlayCnts_9), (void*)value);
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


// T Singleton`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline (const RuntimeMethod* method);
// T Singleton_DontDestroy`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA931B0C8790EF07D8F8AC3F328DE919A753EF46E_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF30DA4177FE4CB9931A6DF746E1106CA8148526A_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m23E8096595C5A4DCB42BDC63234CFC52D92F7FDA_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, const RuntimeMethod* method);

// UnityEngine.WheelFrictionCurve UnityEngine.WheelCollider::get_forwardFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelCollider_get_forwardFriction_m430D5CCD9D463482275A9058352832DA8153B7DD (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// UnityEngine.WheelFrictionCurve UnityEngine.WheelCollider::get_sidewaysFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelCollider_get_sidewaysFriction_m85AA645570CAC61DF6BC5F9B8F70409A877F7DFE (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
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
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GameSettingManager::OnPressSettingButton(Setting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettingManager_OnPressSettingButton_mA3B8B99CFD6CC8ABC37980327F8C14DD36F89C41 (GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93 * __this, int32_t ___settingPanel0, const RuntimeMethod* method);
// T Singleton`1<InGameUiManager>::get_Instance()
inline InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline (const RuntimeMethod* method)
{
	return ((  InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// System.Collections.IEnumerator InGameUiManager::Coroutine_TextScaleFadeIn(UnityEngine.UI.Text,UnityEngine.AnimationCurve,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameUiManager_Coroutine_TextScaleFadeIn_mF2499A7C58A9D79C30223A90A06BAAC7E846DECB (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve1, float ___from2, float ___to3, int32_t ___repeatCnt4, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void InGameUiManager::SetActiveAllCanvas(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameUiManager_SetActiveAllCanvas_m87FEE572924E350996309176326A46B360FBFDED (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void InGameUiManager/FuncDel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncDel__ctor_m5B834188921D4D72168C3266160E9FCFF25AA205 (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.IEnumerator InGameUiManager::Coroutine_TextAlphaFadeout(UnityEngine.UI.Text,System.Single,InGameUiManager/FuncDel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameUiManager_Coroutine_TextAlphaFadeout_m1C389E0F5F1515959ED168DCFD7FABE464AE657F (InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text0, float ___duration1, FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * ___funcDel2, const RuntimeMethod* method);
// System.Void PlayerController::OnGameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnGameStart_m4CA5A7DD61F681E2D4C03382B90E9F794EEDF9B6 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.CanvasRenderer::GetAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasRenderer_GetAlpha_mB6F8668A0C6DBA85BC2A14F66276133FAA14A86B (CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * __this, const RuntimeMethod* method);
// System.Void InGameUiManager/FuncDel::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncDel_Invoke_mF7A2362A047D06012378F45363AB52B598EA8898 (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void KartSelectPanelController::OnPressKartButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartSelectPanelController_OnPressKartButton_m936805618286C3C2D78E2AD0CB965A44606D4214 (KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void KeySetting::OnPressKeyButton(Key)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeySetting_OnPressKeyButton_m8530B12F5A33F7893DFE33D9B3F2AD5F851CBC22 (KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void LobbyUIManager::OnPressButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyUIManager_OnPressButton_m3AAEE85039A8C84784BD86CAFCDBDEDB70F9AA14 (LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button0, const RuntimeMethod* method);
// System.Void Lobby_Shop::BuyButtonOnClickEventActiveToTrue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_Shop_BuyButtonOnClickEventActiveToTrue_m8B5AC9F114FADE799F969FB3A5DBA91E17A934DE (Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Lobby_Shop::BuyButtonOnClickEventActiveToFalse(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_Shop_BuyButtonOnClickEventActiveToFalse_mBB3A4C93B215CD79119CD549C94CD96476960000 (Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * __this, int32_t ___index0, const RuntimeMethod* method);
// T Singleton_DontDestroy`1<DataManager>::get_Instance()
inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_inline (const RuntimeMethod* method)
{
	return ((  DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * (*) (const RuntimeMethod*))Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline)(method);
}
// System.Void DataManager::DecreaseGold(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_DecreaseGold_m29D0AFA807FBF5E27F0D52D01268C68AA126D16A (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, uint32_t ___gold0, const RuntimeMethod* method);
// System.Void DataManager::UpdateKartToPlayable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_UpdateKartToPlayable_mDFD0A435F81BC4B7EBB541E30EB90387049EFD5B (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, int32_t ___index0, const RuntimeMethod* method);
// T Singleton`1<LobbyManager>::get_Instance()
inline LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * Singleton_1_get_Instance_m2A6A40AA1354EB6C8A7D6AF32187EB13BAE8BFFB_inline (const RuntimeMethod* method)
{
	return ((  LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// System.Void LobbyManager::UpdatePlayerGoldAmount(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_UpdatePlayerGoldAmount_m50FB9783DED261F5893ACA3B245A9489F4AB97FC (LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___goldText0, const RuntimeMethod* method);
// T Singleton_DontDestroy`1<PopupManager>::get_Instance()
inline PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * Singleton_DontDestroy_1_get_Instance_m0F6FF64DB0DFA29E42EFF64EB7BD342D67402D82_inline (const RuntimeMethod* method)
{
	return ((  PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * (*) (const RuntimeMethod*))Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline)(method);
}
// System.Void PopupManager::ClosePopup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupManager_ClosePopup_m9BB6F58A4F998B3A908F5AF3DEFA86DED7D2637A (PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * __this, const RuntimeMethod* method);
// System.Void PopupManager::CreatePopupOK(System.String,System.String,PopupFuncDel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupManager_CreatePopupOK_m45CC3EDDF402F43AC759266156086E1327018941 (PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * __this, String_t* ___titleText0, String_t* ___contentsText1, PopupFuncDel_t84BFE49CF0CB745576D16FE2900CBD1A1598725F * ___funcDel2, String_t* ___okText3, const RuntimeMethod* method);
// System.Void Lobby_Shop::OnPressSelectButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lobby_Shop_OnPressSelectButton_m0576D8F94B3009E87CC857FEE742D7705722A2FF (Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * __this, const RuntimeMethod* method);
// System.Int32 InputManager::Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputManager_Vertical_mA74DFA5E757821FE77E1D92881D04033FD8A22B9 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<SFXClip,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_mAB6D9C14E91DD1013DFC5B8CC45B29D2AEC00AE5 (Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mA931B0C8790EF07D8F8AC3F328DE919A753EF46E_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<SFXClip,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m093721AABC6E3EBCD3B85F2D674B027EA960A83F (Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mF30DA4177FE4CB9931A6DF746E1106CA8148526A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<SFXClip,System.Int32>::Remove(!0)
inline bool Dictionary_2_Remove_m1653510E8F29390038BFE9182D18470390681AEF (Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m23E8096595C5A4DCB42BDC63234CFC52D92F7FDA_gshared)(__this, ___key0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.WheelFrictionCurve WheelController::get_ForwardFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelController_get_ForwardFriction_m72D285AF5293DA147B698698C7E396DBDDCBC4C6 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_get_ForwardFriction_m72D285AF5293DA147B698698C7E396DBDDCBC4C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WheelController_get_ForwardFriction_m72D285AF5293DA147B698698C7E396DBDDCBC4C6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 590));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 591));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 592));
		// public WheelFrictionCurve ForwardFriction { get { return m_wheelCollider.forwardFriction; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 593));
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_m_wheelCollider_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 595));
		NullCheck(L_0);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_1;
		L_1 = WheelCollider_get_forwardFriction_m430D5CCD9D463482275A9058352832DA8153B7DD(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 595));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public WheelFrictionCurve ForwardFriction { get { return m_wheelCollider.forwardFriction; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 594));
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.WheelFrictionCurve WheelController::get_SideWayFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelController_get_SideWayFriction_m412F8BF6F797F35558E14C073C687054BCB69086 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_get_SideWayFriction_m412F8BF6F797F35558E14C073C687054BCB69086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WheelController_get_SideWayFriction_m412F8BF6F797F35558E14C073C687054BCB69086_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 596));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 597));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 598));
		// public WheelFrictionCurve SideWayFriction { get { return m_wheelCollider.sidewaysFriction; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 599));
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_m_wheelCollider_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 601));
		NullCheck(L_0);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_1;
		L_1 = WheelCollider_get_sidewaysFriction_m85AA645570CAC61DF6BC5F9B8F70409A877F7DFE(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 601));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public WheelFrictionCurve SideWayFriction { get { return m_wheelCollider.sidewaysFriction; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 600));
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_2 = V_0;
		return L_2;
	}
}
// System.Void WheelController::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Move_m6906837F76EC4BD1752AE2FE2814331400442F94 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, float ___speed0, float ___dir1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_Move_m6906837F76EC4BD1752AE2FE2814331400442F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___speed0), (&___dir1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WheelController_Move_m6906837F76EC4BD1752AE2FE2814331400442F94_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 602));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 603));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 604));
		// m_wheelCollider.motorTorque = (speed * 5) / 4 * dir * Time.fixedDeltaTime;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 605));
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_m_wheelCollider_4();
		float L_1 = ___speed0;
		float L_2 = ___dir1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 607));
		float L_3;
		L_3 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 607));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 608));
		NullCheck(L_0);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_0, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_1, (float)(5.0f)))/(float)(4.0f))), (float)L_2)), (float)L_3)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 608));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 606));
		return;
	}
}
// System.Void WheelController::Turn(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Turn_m5A63600BB178A54CCA2094144990EEBA086F3B40 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, float ___speed0, float ___dir1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_Turn_m5A63600BB178A54CCA2094144990EEBA086F3B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___speed0), (&___dir1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WheelController_Turn_m5A63600BB178A54CCA2094144990EEBA086F3B40_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 609));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 610));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 611));
		// m_wheelCollider.steerAngle = speed * dir * 10f * Time.fixedDeltaTime;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 612));
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_m_wheelCollider_4();
		float L_1 = ___speed0;
		float L_2 = ___dir1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 614));
		float L_3;
		L_3 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 614));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 615));
		NullCheck(L_0);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_0, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (float)(10.0f))), (float)L_3)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 615));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 613));
		return;
	}
}
// System.Void WheelController::Drift(UnityEngine.WheelFrictionCurve,UnityEngine.WheelFrictionCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Drift_mC4BDA672AE5C078A370EF926B8F4EB2DB39B0B24 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___forwardWheelFric0, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___sidewayWheelFric1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_Drift_mC4BDA672AE5C078A370EF926B8F4EB2DB39B0B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___forwardWheelFric0), (&___sidewayWheelFric1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WheelController_Drift_mC4BDA672AE5C078A370EF926B8F4EB2DB39B0B24_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 616));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 617));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 618));
		// m_wheelCollider.forwardFriction = forwardWheelFric;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 619));
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_m_wheelCollider_4();
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_1 = ___forwardWheelFric0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 622));
		NullCheck(L_0);
		WheelCollider_set_forwardFriction_mEC613D233431786260E97DA4B2D14C597A4390A8(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 622));
		// m_wheelCollider.sidewaysFriction = sidewayWheelFric;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 620));
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_2 = __this->get_m_wheelCollider_4();
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_3 = ___sidewayWheelFric1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 623));
		NullCheck(L_2);
		WheelCollider_set_sidewaysFriction_mEE0EFD1DFE53A0FA023F8D1E05840A58D69784C2(L_2, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 623));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 621));
		return;
	}
}
// System.Void WheelController::UpdatePos(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_UpdatePos_mE56D2D293F405C6A49FEB8DC46877FA3716D416E (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___wheel0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_UpdatePos_mE56D2D293F405C6A49FEB8DC46877FA3716D416E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___wheel0), (&___pos1), (&___rotation2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WheelController_UpdatePos_mE56D2D293F405C6A49FEB8DC46877FA3716D416E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 624));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 625));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 626));
		// wheel.position = pos;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 627));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___wheel0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___pos1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 630));
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 630));
		// wheel.rotation = rotation;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 628));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___wheel0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___rotation2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 631));
		NullCheck(L_2);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_2, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 631));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 629));
		return;
	}
}
// System.Void WheelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController__ctor_m29AF8F8DD974E854EDDFE98D524FA043D52EC134 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelController__ctor_m29AF8F8DD974E854EDDFE98D524FA043D52EC134_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WheelController__ctor_m29AF8F8DD974E854EDDFE98D524FA043D52EC134_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
// System.Void GameSettingManager/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_mEC1EFFC27FB022F7C2BEC65AE3C34D020559486B (U3CU3Ec__DisplayClass36_0_tFBBF87074F9B9E5776ABADF5A78E5D44B15A72CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0__ctor_mEC1EFFC27FB022F7C2BEC65AE3C34D020559486B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass36_0__ctor_mEC1EFFC27FB022F7C2BEC65AE3C34D020559486B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameSettingManager/<>c__DisplayClass36_0::<OnStart>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3COnStartU3Eb__0_m6E510B4F25494367F36F4861CBBC13F03C283C2D (U3CU3Ec__DisplayClass36_0_tFBBF87074F9B9E5776ABADF5A78E5D44B15A72CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_U3COnStartU3Eb__0_m6E510B4F25494367F36F4861CBBC13F03C283C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_tFBBF87074F9B9E5776ABADF5A78E5D44B15A72CC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass36_0_U3COnStartU3Eb__0_m6E510B4F25494367F36F4861CBBC13F03C283C2D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5039));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5040));
	{
		// m_settingButtons[i].onClick.AddListener(() => OnPressSettingButton(setting));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5041));
		GameSettingManager_t2CC72EBB1720D1F142C2A6CFA07B100D0BA69C93 * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_setting_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5042));
		NullCheck(L_0);
		GameSettingManager_OnPressSettingButton_mA3B8B99CFD6CC8ABC37980327F8C14DD36F89C41(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5042));
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
// System.Void GameSystemManager/<Coroutine_CountDown>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__44__ctor_m84E7675AB219847D55F866C0B21A8B6B57FBED8C (U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CountDownU3Ed__44__ctor_m84E7675AB219847D55F866C0B21A8B6B57FBED8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CountDownU3Ed__44__ctor_m84E7675AB219847D55F866C0B21A8B6B57FBED8C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameSystemManager/<Coroutine_CountDown>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__44_System_IDisposable_Dispose_m86AEAE6EE381B13EE98BBBC1C76FF31767FFECD1 (U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CountDownU3Ed__44_System_IDisposable_Dispose_m86AEAE6EE381B13EE98BBBC1C76FF31767FFECD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CountDownU3Ed__44_System_IDisposable_Dispose_m86AEAE6EE381B13EE98BBBC1C76FF31767FFECD1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Boolean GameSystemManager/<Coroutine_CountDown>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_CountDownU3Ed__44_MoveNext_mF4B9A75E0EE50A08ADAF0DB65150B7DC62ADAEE6 (U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSystemManager_U3CCoroutine_CountDownU3Eb__44_0_m4274CFA4E93C15778967CA754692B0A5E7A1F68F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CountDownU3Ed__44_MoveNext_mF4B9A75E0EE50A08ADAF0DB65150B7DC62ADAEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03A2B194F1456E87F9587B9E4AB3D9B3CC3C4B43);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CountDownU3Ed__44_MoveNext_mF4B9A75E0EE50A08ADAF0DB65150B7DC62ADAEE6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3862));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3863));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3864));
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_01b0;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3865));
		// float time = 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3866));
		__this->set_U3CtimeU3E5__1_3((0.0f));
		// int cnt = 3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3867));
		__this->set_U3CcntU3E5__2_4(3);
		// InGameUiManager.Instance.StartCoroutine(InGameUiManager.Instance.Coroutine_TextScaleFadeIn(m_countText, m_scaleCurve, m_minScale, m_maxScale, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3868));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3895));
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_3;
		L_3 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3895));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3896));
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_4;
		L_4 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3896));
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = L_5->get_m_countText_26();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = L_7->get_m_scaleCurve_24();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		float L_10 = L_9->get_m_minScale_33();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_11 = __this->get_U3CU3E4__this_2();
		NullCheck(L_11);
		float L_12 = L_11->get_m_maxScale_32();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3897));
		NullCheck(L_4);
		RuntimeObject* L_13;
		L_13 = InGameUiManager_Coroutine_TextScaleFadeIn_mF2499A7C58A9D79C30223A90A06BAAC7E846DECB(L_4, L_6, L_8, L_10, L_12, 4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3897));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3898));
		NullCheck(L_3);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_3, L_13, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3898));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3869));
		goto IL_01b8;
	}

IL_007c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3870));
		// m_sb.Clear();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3871));
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		StringBuilder_t * L_16 = L_15->get_m_sb_5();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3899));
		NullCheck(L_16);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3899));
		// m_sb.Append(cnt);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3872));
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		StringBuilder_t * L_19 = L_18->get_m_sb_5();
		int32_t L_20 = __this->get_U3CcntU3E5__2_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3900));
		NullCheck(L_19);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD(L_19, L_20, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3900));
		// m_countText.text = m_sb.ToString();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3873));
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_22 = __this->get_U3CU3E4__this_2();
		NullCheck(L_22);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = L_22->get_m_countText_26();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_24 = __this->get_U3CU3E4__this_2();
		NullCheck(L_24);
		StringBuilder_t * L_25 = L_24->get_m_sb_5();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3901));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3901));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3902));
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_26);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3902));
		// time += Time.deltaTime;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3874));
		float L_27 = __this->get_U3CtimeU3E5__1_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3903));
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3903));
		__this->set_U3CtimeU3E5__1_3(((float)il2cpp_codegen_add((float)L_27, (float)L_28)));
		// if (time > 1f)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3875));
		float L_29 = __this->get_U3CtimeU3E5__1_3();
		V_1 = (bool)((((float)L_29) > ((float)(1.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3876));
		bool L_30 = V_1;
		if (!L_30)
		{
			goto IL_0106;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3877));
		// cnt--;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3878));
		int32_t L_31 = __this->get_U3CcntU3E5__2_4();
		V_2 = L_31;
		int32_t L_32 = V_2;
		__this->set_U3CcntU3E5__2_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)));
		// time = 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3879));
		__this->set_U3CtimeU3E5__1_3((0.0f));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3880));
	}

IL_0106:
	{
		// if (cnt < 1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3881));
		int32_t L_33 = __this->get_U3CcntU3E5__2_4();
		V_3 = (bool)((((int32_t)L_33) < ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3882));
		bool L_34 = V_3;
		if (!L_34)
		{
			goto IL_01a0;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3883));
		// m_countText.text = "시작";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3884));
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = L_35->get_m_countText_26();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3904));
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, _stringLiteral03A2B194F1456E87F9587B9E4AB3D9B3CC3C4B43);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3904));
		// InGameUiManager.Instance.SetActiveAllCanvas(true);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3885));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3905));
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_37;
		L_37 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3905));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3906));
		NullCheck(L_37);
		InGameUiManager_SetActiveAllCanvas_m87FEE572924E350996309176326A46B360FBFDED(L_37, (bool)1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3906));
		// InGameUiManager.Instance.StartCoroutine(InGameUiManager.Instance.Coroutine_TextAlphaFadeout(m_countText, m_cntTextAlphaFadeOutduration, () => m_countCanvas.enabled = false));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3886));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3907));
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_38;
		L_38 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3907));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3908));
		InGameUiManager_tBC3197C163F72200C9C88365C1EC334624E53CEF * L_39;
		L_39 = Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_inline(/*hidden argument*/Singleton_1_get_Instance_mAA0D5293AF20A4095F2A667109F8F373B887538C_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3908));
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_40 = __this->get_U3CU3E4__this_2();
		NullCheck(L_40);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_41 = L_40->get_m_countText_26();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_42 = __this->get_U3CU3E4__this_2();
		NullCheck(L_42);
		float L_43 = L_42->get_m_cntTextAlphaFadeOutduration_28();
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_44 = __this->get_U3CU3E4__this_2();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3909));
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_45 = (FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 *)il2cpp_codegen_object_new(FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54_il2cpp_TypeInfo_var);
		FuncDel__ctor_m5B834188921D4D72168C3266160E9FCFF25AA205(L_45, L_44, (intptr_t)((intptr_t)GameSystemManager_U3CCoroutine_CountDownU3Eb__44_0_m4274CFA4E93C15778967CA754692B0A5E7A1F68F_RuntimeMethod_var), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3909));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3910));
		NullCheck(L_39);
		RuntimeObject* L_46;
		L_46 = InGameUiManager_Coroutine_TextAlphaFadeout_m1C389E0F5F1515959ED168DCFD7FABE464AE657F(L_39, L_41, L_43, L_45, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3910));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3911));
		NullCheck(L_38);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_47;
		L_47 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_38, L_46, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3911));
		// m_player.OnGameStart();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3887));
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_48 = __this->get_U3CU3E4__this_2();
		NullCheck(L_48);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_49 = L_48->get_m_player_23();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3912));
		NullCheck(L_49);
		PlayerController_OnGameStart_m4CA5A7DD61F681E2D4C03382B90E9F794EEDF9B6(L_49, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3912));
		// m_isStart = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3888));
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_50 = __this->get_U3CU3E4__this_2();
		NullCheck(L_50);
		L_50->set_m_isStart_19((bool)1);
		// m_isCanReset = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3889));
		GameSystemManager_tC6663578A0E305B520C36F98DF259B3CBF2F6617 * L_51 = __this->get_U3CU3E4__this_2();
		NullCheck(L_51);
		L_51->set_m_isCanReset_22((bool)1);
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3890));
		return (bool)0;
	}

IL_01a0:
	{
		// yield return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3891));
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01b0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3892));
		__this->set_U3CU3E1__state_0((-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3893));
	}

IL_01b8:
	{
		// while (true)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3894));
		V_4 = (bool)1;
		goto IL_007c;
	}
}
// System.Object GameSystemManager/<Coroutine_CountDown>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_CountDownU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE49121E3C90E94689035F60946AC3ECCB76B341E (U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CountDownU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE49121E3C90E94689035F60946AC3ECCB76B341E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CountDownU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE49121E3C90E94689035F60946AC3ECCB76B341E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameSystemManager/<Coroutine_CountDown>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__44_System_Collections_IEnumerator_Reset_mFE414276A300893275B944C922B52476CBAAD611 (U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CountDownU3Ed__44_System_Collections_IEnumerator_Reset_mFE414276A300893275B944C922B52476CBAAD611_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CountDownU3Ed__44_System_Collections_IEnumerator_Reset_mFE414276A300893275B944C922B52476CBAAD611_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_CountDownU3Ed__44_System_Collections_IEnumerator_Reset_mFE414276A300893275B944C922B52476CBAAD611_RuntimeMethod_var)));
	}
}
// System.Object GameSystemManager/<Coroutine_CountDown>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_CountDownU3Ed__44_System_Collections_IEnumerator_get_Current_m27A0F1955D36B66F21D15CCE11F126E70938BA62 (U3CCoroutine_CountDownU3Ed__44_t3F5AAD351A468179AC4E442C19542489AEBAC2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CountDownU3Ed__44_System_Collections_IEnumerator_get_Current_m27A0F1955D36B66F21D15CCE11F126E70938BA62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CountDownU3Ed__44_System_Collections_IEnumerator_get_Current_m27A0F1955D36B66F21D15CCE11F126E70938BA62_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextAlphaFadeoutU3Ed__27__ctor_m0A17ABA177FC3C97FCB86BDABF020C6E8AEE10B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextAlphaFadeoutU3Ed__27__ctor_m0A17ABA177FC3C97FCB86BDABF020C6E8AEE10B2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_IDisposable_Dispose_m7CF42A7671EA015EC9C46D7DB52CDFA3E81FBF41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_IDisposable_Dispose_m7CF42A7671EA015EC9C46D7DB52CDFA3E81FBF41_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Boolean InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_TextAlphaFadeoutU3Ed__27_MoveNext_m43D5E4979B10A7621F2066BCF8F616902B9BEA95 (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextAlphaFadeoutU3Ed__27_MoveNext_m43D5E4979B10A7621F2066BCF8F616902B9BEA95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextAlphaFadeoutU3Ed__27_MoveNext_m43D5E4979B10A7621F2066BCF8F616902B9BEA95_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5966));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5967));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5968));
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0084;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5969));
		// text.CrossFadeAlpha(0f, duration, false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5970));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_text_2();
		float L_4 = __this->get_duration_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5986));
		NullCheck(L_3);
		VirtActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_3, (0.0f), L_4, (bool)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5986));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5971));
		goto IL_008c;
	}

IL_003a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5972));
		// if (text.canvasRenderer.GetAlpha() == 0f)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5973));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_text_2();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5987));
		NullCheck(L_5);
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_6;
		L_6 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5987));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5988));
		NullCheck(L_6);
		float L_7;
		L_7 = CanvasRenderer_GetAlpha_mB6F8668A0C6DBA85BC2A14F66276133FAA14A86B(L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5988));
		V_1 = (bool)((((float)L_7) == ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5974));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5975));
		// if(funcDel != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5976));
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_9 = __this->get_funcDel_4();
		V_2 = (bool)((!(((RuntimeObject*)(FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5977));
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5978));
		// funcDel();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5979));
		FuncDel_t12BEBD3FA310CAFD51B5CE00058BB954974A9D54 * L_11 = __this->get_funcDel_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5989));
		NullCheck(L_11);
		FuncDel_Invoke_mF7A2362A047D06012378F45363AB52B598EA8898(L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5989));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5980));
	}

IL_0072:
	{
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5981));
		return (bool)0;
	}

IL_0074:
	{
		// yield return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5982));
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0084:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5983));
		__this->set_U3CU3E1__state_0((-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5984));
	}

IL_008c:
	{
		// while (true)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5985));
		V_3 = (bool)1;
		goto IL_003a;
	}
}
// System.Object InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m218A114EBD7D44D8DC1334ED01A28F0D9B72B92C (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m218A114EBD7D44D8DC1334ED01A28F0D9B72B92C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m218A114EBD7D44D8DC1334ED01A28F0D9B72B92C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_Reset_m5867E593122FC329808AA1C9161B79E3FBBB0270 (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_Reset_m5867E593122FC329808AA1C9161B79E3FBBB0270_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_Reset_m5867E593122FC329808AA1C9161B79E3FBBB0270_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_Reset_m5867E593122FC329808AA1C9161B79E3FBBB0270_RuntimeMethod_var)));
	}
}
// System.Object InGameUiManager/<Coroutine_TextAlphaFadeout>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_get_Current_m1142C6876D4DFA73F5A9A906014DBDF4CB4F155C (U3CCoroutine_TextAlphaFadeoutU3Ed__27_t3B90E8A766FA02B401AD75FE7445219CE48122B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_get_Current_m1142C6876D4DFA73F5A9A906014DBDF4CB4F155C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextAlphaFadeoutU3Ed__27_System_Collections_IEnumerator_get_Current_m1142C6876D4DFA73F5A9A906014DBDF4CB4F155C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
// System.Void InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextScaleFadeInU3Ed__28__ctor_mCD2237104992E6825E6C1DB0BD9881C7C7EA4C01 (U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextScaleFadeInU3Ed__28__ctor_mCD2237104992E6825E6C1DB0BD9881C7C7EA4C01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextScaleFadeInU3Ed__28__ctor_mCD2237104992E6825E6C1DB0BD9881C7C7EA4C01_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextScaleFadeInU3Ed__28_System_IDisposable_Dispose_mD7F67B1808A9DAD55BE60BDF73A06886F1FD36CE (U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextScaleFadeInU3Ed__28_System_IDisposable_Dispose_mD7F67B1808A9DAD55BE60BDF73A06886F1FD36CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextScaleFadeInU3Ed__28_System_IDisposable_Dispose_mD7F67B1808A9DAD55BE60BDF73A06886F1FD36CE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Boolean InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_TextScaleFadeInU3Ed__28_MoveNext_mFF1B3AEBD37E0977F16F66C0B600A8AC35475252 (U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextScaleFadeInU3Ed__28_MoveNext_mFF1B3AEBD37E0977F16F66C0B600A8AC35475252_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextScaleFadeInU3Ed__28_MoveNext_mFF1B3AEBD37E0977F16F66C0B600A8AC35475252_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5990));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5991));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5992));
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0105;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5993));
		// float time = 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5994));
		__this->set_U3CtimeU3E5__1_8((0.0f));
		// int cnt = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5995));
		__this->set_U3CcntU3E5__2_9(0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5996));
		goto IL_010d;
	}

IL_003a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5997));
		// var scaleValue = curve.Evaluate(time);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5998));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_curve_3();
		float L_4 = __this->get_U3CtimeU3E5__1_8();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6015));
		NullCheck(L_3);
		float L_5;
		L_5 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_3, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6015));
		__this->set_U3CscaleValueU3E5__3_10(L_5);
		// var scale = from * (1f - scaleValue) + to * scaleValue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5999));
		float L_6 = __this->get_from_4();
		float L_7 = __this->get_U3CscaleValueU3E5__3_10();
		float L_8 = __this->get_to_5();
		float L_9 = __this->get_U3CscaleValueU3E5__3_10();
		__this->set_U3CscaleU3E5__4_11(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_6, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))));
		// text.transform.localScale = new Vector3(scale, scale, scale);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6000));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_text_2();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6016));
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6016));
		float L_12 = __this->get_U3CscaleU3E5__4_11();
		float L_13 = __this->get_U3CscaleU3E5__4_11();
		float L_14 = __this->get_U3CscaleU3E5__4_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6017));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6017));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6018));
		NullCheck(L_11);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_11, L_15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6018));
		// time += Time.deltaTime;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6001));
		float L_16 = __this->get_U3CtimeU3E5__1_8();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6019));
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6019));
		__this->set_U3CtimeU3E5__1_8(((float)il2cpp_codegen_add((float)L_16, (float)L_17)));
		// if(time > 1f)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6002));
		float L_18 = __this->get_U3CtimeU3E5__1_8();
		V_1 = (bool)((((float)L_18) > ((float)(1.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6003));
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_00f5;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6004));
		// time = 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6005));
		__this->set_U3CtimeU3E5__1_8((0.0f));
		// cnt++;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6006));
		int32_t L_20 = __this->get_U3CcntU3E5__2_9();
		V_2 = L_20;
		int32_t L_21 = V_2;
		__this->set_U3CcntU3E5__2_9(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		// if (cnt > repeatCnt)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6007));
		int32_t L_22 = __this->get_U3CcntU3E5__2_9();
		int32_t L_23 = __this->get_repeatCnt_6();
		V_3 = (bool)((((int32_t)L_22) > ((int32_t)L_23))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6008));
		bool L_24 = V_3;
		if (!L_24)
		{
			goto IL_00f4;
		}
	}
	{
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6009));
		return (bool)0;
	}

IL_00f4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6010));
	}

IL_00f5:
	{
		// yield return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6011));
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0105:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6012));
		__this->set_U3CU3E1__state_0((-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6013));
	}

IL_010d:
	{
		// while (true)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6014));
		V_4 = (bool)1;
		goto IL_003a;
	}
}
// System.Object InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA00AE3CCA5998036AB3B36C4F676F1CF6CFB4DBD (U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA00AE3CCA5998036AB3B36C4F676F1CF6CFB4DBD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA00AE3CCA5998036AB3B36C4F676F1CF6CFB4DBD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_IEnumerator_Reset_m85B31B3F16026CB67F75E1EC8061FBC906B3CB47 (U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_IEnumerator_Reset_m85B31B3F16026CB67F75E1EC8061FBC906B3CB47_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_IEnumerator_Reset_m85B31B3F16026CB67F75E1EC8061FBC906B3CB47_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_IEnumerator_Reset_m85B31B3F16026CB67F75E1EC8061FBC906B3CB47_RuntimeMethod_var)));
	}
}
// System.Object InGameUiManager/<Coroutine_TextScaleFadeIn>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_IEnumerator_get_Current_m1B9A3DF2DD5296E1DDCCA3ED6FE3567569C81573 (U3CCoroutine_TextScaleFadeInU3Ed__28_tD5E27A2B0C4EE9ECCEA35A9433A549C818767562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_IEnumerator_get_Current_m1B9A3DF2DD5296E1DDCCA3ED6FE3567569C81573_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_TextScaleFadeInU3Ed__28_System_Collections_IEnumerator_get_Current_m1B9A3DF2DD5296E1DDCCA3ED6FE3567569C81573_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
// System.Void KartSelectPanelController/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mAA128EC636837E5D0A58F6C680EBB78A23966954 (U3CU3Ec__DisplayClass11_0_tBA52E074C240CFF6E9C789201922662D1C1F5B48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0__ctor_mAA128EC636837E5D0A58F6C680EBB78A23966954_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass11_0__ctor_mAA128EC636837E5D0A58F6C680EBB78A23966954_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KartSelectPanelController/<>c__DisplayClass11_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CStartU3Eb__0_m3DF0023474C4A45783985E24B9C24FDB67CAE8E7 (U3CU3Ec__DisplayClass11_0_tBA52E074C240CFF6E9C789201922662D1C1F5B48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CStartU3Eb__0_m3DF0023474C4A45783985E24B9C24FDB67CAE8E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_tBA52E074C240CFF6E9C789201922662D1C1F5B48_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass11_0_U3CStartU3Eb__0_m3DF0023474C4A45783985E24B9C24FDB67CAE8E7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 724));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 725));
	{
		// m_kartButtons[i].onClick.AddListener(() => OnPressKartButton(index));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 726));
		KartSelectPanelController_t7BA9975F0994BDA71427F5031BE1F6BA1F89AA3E * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_index_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 727));
		NullCheck(L_0);
		KartSelectPanelController_OnPressKartButton_m936805618286C3C2D78E2AD0CB965A44606D4214(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 727));
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
// System.Void KeySetting/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mEC49274F87EF638B729F6D002983550A5DEE5571 (U3CU3Ec__DisplayClass13_0_t032A4F043C0F216C8FEED7AD793692F7ECCE8A7F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0__ctor_mEC49274F87EF638B729F6D002983550A5DEE5571_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass13_0__ctor_mEC49274F87EF638B729F6D002983550A5DEE5571_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KeySetting/<>c__DisplayClass13_0::<Init>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CInitU3Eb__0_m919D7FE5E3DF7E4F6C532D3451632E69875B3D49 (U3CU3Ec__DisplayClass13_0_t032A4F043C0F216C8FEED7AD793692F7ECCE8A7F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CInitU3Eb__0_m919D7FE5E3DF7E4F6C532D3451632E69875B3D49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t032A4F043C0F216C8FEED7AD793692F7ECCE8A7F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass13_0_U3CInitU3Eb__0_m919D7FE5E3DF7E4F6C532D3451632E69875B3D49_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2669));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2670));
	{
		// m_keyButtons[i].onClick.AddListener(() => OnPressKeyButton(key));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2671));
		KeySetting_tC86FCB54532C615BA1A05F145F6C3E2504AF0CCF * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_key_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2672));
		NullCheck(L_0);
		KeySetting_OnPressKeyButton_m8530B12F5A33F7893DFE33D9B3F2AD5F851CBC22(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2672));
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
// System.Void LobbyUIManager/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mC74E965C3BF349192C3E3AA1E3129111F4F3A54E (U3CU3Ec__DisplayClass32_0_t463DAE5EBE2750DAE9A251FDBC0F343616607F98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0__ctor_mC74E965C3BF349192C3E3AA1E3129111F4F3A54E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass32_0__ctor_mC74E965C3BF349192C3E3AA1E3129111F4F3A54E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LobbyUIManager/<>c__DisplayClass32_0::<OnStart>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0_U3COnStartU3Eb__0_m23CB597101A86BB47EEA7D4F4A8B9E6F8C425A79 (U3CU3Ec__DisplayClass32_0_t463DAE5EBE2750DAE9A251FDBC0F343616607F98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3COnStartU3Eb__0_m23CB597101A86BB47EEA7D4F4A8B9E6F8C425A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_t463DAE5EBE2750DAE9A251FDBC0F343616607F98_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass32_0_U3COnStartU3Eb__0_m23CB597101A86BB47EEA7D4F4A8B9E6F8C425A79_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6209));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6210));
	{
		// m_lobbyButtons[i].onClick.AddListener(() => OnPressButton(button));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6211));
		LobbyUIManager_t0C43809B4C8DF80B0E933DC376ED35F89ADECC53 * L_0 = __this->get_U3CU3E4__this_1();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_button_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6212));
		NullCheck(L_0);
		LobbyUIManager_OnPressButton_m3AAEE85039A8C84784BD86CAFCDBDEDB70F9AA14(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6212));
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
// System.Void Lobby_Shop/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m69AA6F7C0C612BC80F6313A86CD6AA882F32DE29 (U3CU3Ec__DisplayClass16_0_tC13D48A61FD180DDADD2BF84E25A787A095A9274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0__ctor_m69AA6F7C0C612BC80F6313A86CD6AA882F32DE29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass16_0__ctor_m69AA6F7C0C612BC80F6313A86CD6AA882F32DE29_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lobby_Shop/<>c__DisplayClass16_0::<OnPressBuyButton>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3COnPressBuyButtonU3Eb__0_m81085A360ABB39863B370757BA3399766B195BAF (U3CU3Ec__DisplayClass16_0_tC13D48A61FD180DDADD2BF84E25A787A095A9274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2A6A40AA1354EB6C8A7D6AF32187EB13BAE8BFFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m0F6FF64DB0DFA29E42EFF64EB7BD342D67402D82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3COnPressBuyButtonU3Eb__0_m81085A360ABB39863B370757BA3399766B195BAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_tC13D48A61FD180DDADD2BF84E25A787A095A9274_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3814B25E6204CE3401AF7AFDAA9C86C78DD2A1C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49629EB0641054F97A143B9386ED8A542CF24002);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5E2660BCEAAA56759EB79265F8204E161B6EE7A);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass16_0_U3COnPressBuyButtonU3Eb__0_m81085A360ABB39863B370757BA3399766B195BAF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5686));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5687));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5688));
		// m_buyText.text = m_textSelected;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5689));
		Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0->get_m_buyText_10();
		Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_m_textSelected_14();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5698));
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5698));
		// BuyButtonOnClickEventActiveToTrue((int)BuyBtnOnClickEvent.Select);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5690));
		Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * L_4 = __this->get_U3CU3E4__this_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5699));
		NullCheck(L_4);
		Lobby_Shop_BuyButtonOnClickEventActiveToTrue_m8B5AC9F114FADE799F969FB3A5DBA91E17A934DE(L_4, 1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5699));
		// BuyButtonOnClickEventActiveToFalse((int)BuyBtnOnClickEvent.Buy);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5691));
		Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * L_5 = __this->get_U3CU3E4__this_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5700));
		NullCheck(L_5);
		Lobby_Shop_BuyButtonOnClickEventActiveToFalse_mBB3A4C93B215CD79119CD549C94CD96476960000(L_5, 0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5700));
		// DataManager.Instance.DecreaseGold((uint)kartPrice);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5692));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5701));
		DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * L_6;
		L_6 = Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5701));
		int32_t L_7 = __this->get_kartPrice_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5702));
		NullCheck(L_6);
		DataManager_DecreaseGold_m29D0AFA807FBF5E27F0D52D01268C68AA126D16A(L_6, L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5702));
		// DataManager.Instance.UpdateKartToPlayable(m_currSelectedKart);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5693));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5703));
		DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * L_8;
		L_8 = Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_mAD14EDBC13347F50DC80AABA2941C6D42143441D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5703));
		Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * L_9 = __this->get_U3CU3E4__this_0();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_m_currSelectedKart_16();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5704));
		NullCheck(L_8);
		DataManager_UpdateKartToPlayable_mDFD0A435F81BC4B7EBB541E30EB90387049EFD5B(L_8, L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5704));
		// LobbyManager.Instance.UpdatePlayerGoldAmount(m_goldText);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5694));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5705));
		LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * L_11;
		L_11 = Singleton_1_get_Instance_m2A6A40AA1354EB6C8A7D6AF32187EB13BAE8BFFB_inline(/*hidden argument*/Singleton_1_get_Instance_m2A6A40AA1354EB6C8A7D6AF32187EB13BAE8BFFB_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5705));
		Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * L_12 = __this->get_U3CU3E4__this_0();
		NullCheck(L_12);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = L_12->get_m_goldText_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5706));
		NullCheck(L_11);
		LobbyManager_UpdatePlayerGoldAmount_m50FB9783DED261F5893ACA3B245A9489F4AB97FC(L_11, L_13, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5706));
		// PopupManager.Instance.ClosePopup();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5695));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5707));
		PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * L_14;
		L_14 = Singleton_DontDestroy_1_get_Instance_m0F6FF64DB0DFA29E42EFF64EB7BD342D67402D82_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m0F6FF64DB0DFA29E42EFF64EB7BD342D67402D82_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5707));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5708));
		NullCheck(L_14);
		PopupManager_ClosePopup_m9BB6F58A4F998B3A908F5AF3DEFA86DED7D2637A(L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5708));
		// PopupManager.Instance.CreatePopupOK("���ž˸�", "���� �Ϸ�");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5696));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5709));
		PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * L_15;
		L_15 = Singleton_DontDestroy_1_get_Instance_m0F6FF64DB0DFA29E42EFF64EB7BD342D67402D82_inline(/*hidden argument*/Singleton_DontDestroy_1_get_Instance_m0F6FF64DB0DFA29E42EFF64EB7BD342D67402D82_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5709));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5710));
		NullCheck(L_15);
		PopupManager_CreatePopupOK_m45CC3EDDF402F43AC759266156086E1327018941(L_15, _stringLiteralE5E2660BCEAAA56759EB79265F8204E161B6EE7A, _stringLiteral3814B25E6204CE3401AF7AFDAA9C86C78DD2A1C4, (PopupFuncDel_t84BFE49CF0CB745576D16FE2900CBD1A1598725F *)NULL, _stringLiteral49629EB0641054F97A143B9386ED8A542CF24002, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5710));
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5697));
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
// System.Void Lobby_Shop/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m8056F4B162E71CCA0EEA48BD36027A1B41EF6486 (U3CU3Ec__DisplayClass24_0_t7E7BA8EED0A8B71950A10FFB5624B985C3FB93BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0__ctor_m8056F4B162E71CCA0EEA48BD36027A1B41EF6486_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass24_0__ctor_m8056F4B162E71CCA0EEA48BD36027A1B41EF6486_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lobby_Shop/<>c__DisplayClass24_0::<Awake>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CAwakeU3Eb__0_mCF0BA237CE3EE0FF238BFE57C2B1564E17B614FA (U3CU3Ec__DisplayClass24_0_t7E7BA8EED0A8B71950A10FFB5624B985C3FB93BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CAwakeU3Eb__0_mCF0BA237CE3EE0FF238BFE57C2B1564E17B614FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_t7E7BA8EED0A8B71950A10FFB5624B985C3FB93BF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass24_0_U3CAwakeU3Eb__0_mCF0BA237CE3EE0FF238BFE57C2B1564E17B614FA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5711));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5712));
	{
		// m_selectButtons[i].onClick.AddListener(() => OnPressSelectButton(index));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5713));
		Lobby_Shop_t4F9C238AE06B26EE719355CA505FEB772FAE8D35 * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_index_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5714));
		NullCheck(L_0);
		Lobby_Shop_OnPressSelectButton_m0576D8F94B3009E87CC857FEE742D7705722A2FF(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5714));
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
// System.Void PlayerController/<Coroutine_StartBoost>d__68::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_StartBoostU3Ed__68__ctor_m74814D518B6B3CEF337C17853BB5202FBFC5A1BF (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__68__ctor_m74814D518B6B3CEF337C17853BB5202FBFC5A1BF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_StartBoostU3Ed__68__ctor_m74814D518B6B3CEF337C17853BB5202FBFC5A1BF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__68_System_IDisposable_Dispose_m5CC5839A72BB075A37396006452076246EB473CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_StartBoostU3Ed__68_System_IDisposable_Dispose_m5CC5839A72BB075A37396006452076246EB473CF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__68_MoveNext_mE79640B65EE77935538490533BD148E4B44ABB4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_StartBoostU3Ed__68_MoveNext_mE79640B65EE77935538490533BD148E4B44ABB4A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 556));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 557));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 558));
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_006c;
	}

IL_001f:
	{
		goto IL_00f9;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 559));
		// float time = 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 560));
		__this->set_U3CtimeU3E5__1_3((0.0f));
		// WaitForFixedUpdate waitForFixedUpdate = new WaitForFixedUpdate();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 561));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 581));
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_2 = (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 *)il2cpp_codegen_object_new(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 581));
		__this->set_U3CwaitForFixedUpdateU3E5__2_4(L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 562));
		goto IL_0101;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 563));
		// if(InputManager.Vertical() > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 564));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 582));
		IL2CPP_RUNTIME_CLASS_INIT(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = InputManager_Vertical_mA74DFA5E757821FE77E1D92881D04033FD8A22B9(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 582));
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 565));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00bd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 566));
		// yield return waitForFixedUpdate;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 567));
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_5 = __this->get_U3CwaitForFixedUpdateU3E5__2_4();
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 568));
		__this->set_U3CU3E1__state_0((-1));
		// m_playerRb.velocity = Vector3.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 569));
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7 = L_6->get_m_playerRb_6();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 583));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 583));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 584));
		NullCheck(L_7);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_7, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 584));
		// m_playerRb.AddForce(transform.forward * m_startBoostSpeed, ForceMode.VelocityChange);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 570));
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10 = L_9->get_m_playerRb_6();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_11 = __this->get_U3CU3E4__this_2();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 585));
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 585));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 586));
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 586));
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_14 = __this->get_U3CU3E4__this_2();
		NullCheck(L_14);
		float L_15 = L_14->get_m_startBoostSpeed_27();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 587));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 587));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 588));
		NullCheck(L_10);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_10, L_16, 2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 588));
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 571));
		return (bool)0;
	}

IL_00bd:
	{
		// time += Time.deltaTime;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 572));
		float L_17 = __this->get_U3CtimeU3E5__1_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 589));
		float L_18;
		L_18 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 589));
		__this->set_U3CtimeU3E5__1_3(((float)il2cpp_codegen_add((float)L_17, (float)L_18)));
		// if (time > m_startBoostTime)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 573));
		float L_19 = __this->get_U3CtimeU3E5__1_3();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_20 = __this->get_U3CU3E4__this_2();
		NullCheck(L_20);
		float L_21 = L_20->get_m_startBoostTime_26();
		V_2 = (bool)((((float)L_19) > ((float)L_21))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 574));
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00e9;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 575));
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 576));
		return (bool)0;
	}

IL_00e9:
	{
		// yield return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 577));
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00f9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 578));
		__this->set_U3CU3E1__state_0((-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 579));
	}

IL_0101:
	{
		// while(true)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 580));
		V_3 = (bool)1;
		goto IL_0049;
	}
}
// System.Object PlayerController/<Coroutine_StartBoost>d__68::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_StartBoostU3Ed__68_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6EE28CC05C3FD5E858686B5026F021260C1A7F08 (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__68_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6EE28CC05C3FD5E858686B5026F021260C1A7F08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_StartBoostU3Ed__68_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6EE28CC05C3FD5E858686B5026F021260C1A7F08_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController/<Coroutine_StartBoost>d__68::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_Reset_m97C4078E7D63C2E9C6CD0E7314B8AA7250BE7A5F (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_Reset_m97C4078E7D63C2E9C6CD0E7314B8AA7250BE7A5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_Reset_m97C4078E7D63C2E9C6CD0E7314B8AA7250BE7A5F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_Reset_m97C4078E7D63C2E9C6CD0E7314B8AA7250BE7A5F_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Coroutine_StartBoost>d__68::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_get_Current_m6CDA841DA95811B213EA87803903EF5D46BCA539 (U3CCoroutine_StartBoostU3Ed__68_tD675E5AFA710E62D48FC2D648023141BAC7B181C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_get_Current_m6CDA841DA95811B213EA87803903EF5D46BCA539_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_StartBoostU3Ed__68_System_Collections_IEnumerator_get_Current_m6CDA841DA95811B213EA87803903EF5D46BCA539_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
// System.Void PopupManager/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m5058F492101314E2178B71F356CE7F32801309F2 (U3CU3Ec__DisplayClass17_0_tB6C61F4D1E175A7B5BD96533EA0942CE4C791CA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0__ctor_m5058F492101314E2178B71F356CE7F32801309F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass17_0__ctor_m5058F492101314E2178B71F356CE7F32801309F2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject PopupManager/<>c__DisplayClass17_0::<OnStart>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * U3CU3Ec__DisplayClass17_0_U3COnStartU3Eb__0_mAC91105E0EB0F949318FD47B2EE3EB24C8F97B07 (U3CU3Ec__DisplayClass17_0_tB6C61F4D1E175A7B5BD96533EA0942CE4C791CA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3COnStartU3Eb__0_mAC91105E0EB0F949318FD47B2EE3EB24C8F97B07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_tB6C61F4D1E175A7B5BD96533EA0942CE4C791CA8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass17_0_U3COnStartU3Eb__0_mAC91105E0EB0F949318FD47B2EE3EB24C8F97B07_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4708));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4709));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4710));
		// var obj = Instantiate(popupObj);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4711));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_popupObj_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4718));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4718));
		V_0 = L_1;
		// obj.transform.SetParent(m_popupCanvas.transform);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4712));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4719));
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4719));
		PopupManager_tC0DB0544D2439AF6BB7F8D022DED04501AE915F9 * L_4 = __this->get_U3CU3E4__this_1();
		NullCheck(L_4);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_5 = L_4->get_m_popupCanvas_8();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4720));
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4720));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4721));
		NullCheck(L_3);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_3, L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4721));
		// obj.transform.localPosition = Vector3.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4713));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4722));
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4722));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4723));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4723));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4724));
		NullCheck(L_8);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_8, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4724));
		// obj.transform.localScale = Vector3.one;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4714));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4725));
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4725));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4726));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4726));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4727));
		NullCheck(L_11);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_11, L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4727));
		// obj.SetActive(false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4715));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4728));
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4728));
		// return obj;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4716));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_0;
		V_1 = L_14;
		goto IL_0057;
	}

IL_0057:
	{
		// }));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4717));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_1;
		return L_15;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager/<Coroutine_CheckSFX>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CheckSFXU3Ed__5__ctor_mE9E978D97572E7387118BFA4550331D11E18DFFB (U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CheckSFXU3Ed__5__ctor_mE9E978D97572E7387118BFA4550331D11E18DFFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CheckSFXU3Ed__5__ctor_mE9E978D97572E7387118BFA4550331D11E18DFFB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SoundManager/<Coroutine_CheckSFX>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CheckSFXU3Ed__5_System_IDisposable_Dispose_m6820528EAFBC98C6F82056F740214E2E6201C54F (U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CheckSFXU3Ed__5_System_IDisposable_Dispose_m6820528EAFBC98C6F82056F740214E2E6201C54F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CheckSFXU3Ed__5_System_IDisposable_Dispose_m6820528EAFBC98C6F82056F740214E2E6201C54F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Boolean SoundManager/<Coroutine_CheckSFX>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_CheckSFXU3Ed__5_MoveNext_m9BCB2B84A6B4A5A96811C7C5304D6297ED12BBE4 (U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m1653510E8F29390038BFE9182D18470390681AEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAB6D9C14E91DD1013DFC5B8CC45B29D2AEC00AE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m093721AABC6E3EBCD3B85F2D674B027EA960A83F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SFXClip_t940FF34C57B327EABAF7998727EEFADF2E484846_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CheckSFXU3Ed__5_MoveNext_m9BCB2B84A6B4A5A96811C7C5304D6297ED12BBE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CheckSFXU3Ed__5_MoveNext_m9BCB2B84A6B4A5A96811C7C5304D6297ED12BBE4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5146));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5147));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5148));
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_004b;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5149));
		// WaitForSeconds waitForSeconds = new WaitForSeconds(audioClip.length);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5150));
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_audioClip_2();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5162));
		NullCheck(L_3);
		float L_4;
		L_4 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5162));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5163));
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5163));
		__this->set_U3CwaitForSecondsU3E5__1_5(L_5);
		// yield return waitForSeconds;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5151));
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = __this->get_U3CwaitForSecondsU3E5__1_5();
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5152));
		__this->set_U3CU3E1__state_0((-1));
		// if (m_sfxPlayCnts[sfx] > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5153));
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_7 = __this->get_U3CU3E4__this_4();
		NullCheck(L_7);
		Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 * L_8 = L_7->get_m_sfxPlayCnts_9();
		int32_t L_9 = __this->get_sfx_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5164));
		NullCheck(L_8);
		int32_t L_10;
		L_10 = Dictionary_2_get_Item_mAB6D9C14E91DD1013DFC5B8CC45B29D2AEC00AE5(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_mAB6D9C14E91DD1013DFC5B8CC45B29D2AEC00AE5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5164));
		V_1 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5154));
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5155));
		// m_sfxPlayCnts[sfx]--;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5156));
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_12 = __this->get_U3CU3E4__this_4();
		NullCheck(L_12);
		Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 * L_13 = L_12->get_m_sfxPlayCnts_9();
		int32_t L_14 = __this->get_sfx_3();
		V_2 = L_14;
		Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 * L_15 = L_13;
		int32_t L_16 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5165));
		NullCheck(L_15);
		int32_t L_17;
		L_17 = Dictionary_2_get_Item_mAB6D9C14E91DD1013DFC5B8CC45B29D2AEC00AE5(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_mAB6D9C14E91DD1013DFC5B8CC45B29D2AEC00AE5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5165));
		V_3 = L_17;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5166));
		NullCheck(L_15);
		Dictionary_2_set_Item_m093721AABC6E3EBCD3B85F2D674B027EA960A83F(L_15, L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/Dictionary_2_set_Item_m093721AABC6E3EBCD3B85F2D674B027EA960A83F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5166));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5157));
		goto IL_00b0;
	}

IL_0097:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5158));
		// m_sfxPlayCnts.Remove(sfx);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5159));
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_20 = __this->get_U3CU3E4__this_4();
		NullCheck(L_20);
		Dictionary_2_tCA367B0AD355F27193137BF0C0DCA898CAB9CC98 * L_21 = L_20->get_m_sfxPlayCnts_9();
		int32_t L_22 = __this->get_sfx_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5167));
		NullCheck(L_21);
		bool L_23;
		L_23 = Dictionary_2_Remove_m1653510E8F29390038BFE9182D18470390681AEF(L_21, L_22, /*hidden argument*/Dictionary_2_Remove_m1653510E8F29390038BFE9182D18470390681AEF_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5167));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5160));
	}

IL_00b0:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5161));
		return (bool)0;
	}
}
// System.Object SoundManager/<Coroutine_CheckSFX>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_CheckSFXU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEEB9D3BBD1A0FA428FDB0D0685D00A67CB89B8A1 (U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CheckSFXU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEEB9D3BBD1A0FA428FDB0D0685D00A67CB89B8A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CheckSFXU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEEB9D3BBD1A0FA428FDB0D0685D00A67CB89B8A1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SoundManager/<Coroutine_CheckSFX>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CheckSFXU3Ed__5_System_Collections_IEnumerator_Reset_m2AFC7716AE5B6C8A560CB82E3F25DCE1B6304BFD (U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CheckSFXU3Ed__5_System_Collections_IEnumerator_Reset_m2AFC7716AE5B6C8A560CB82E3F25DCE1B6304BFD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CheckSFXU3Ed__5_System_Collections_IEnumerator_Reset_m2AFC7716AE5B6C8A560CB82E3F25DCE1B6304BFD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_CheckSFXU3Ed__5_System_Collections_IEnumerator_Reset_m2AFC7716AE5B6C8A560CB82E3F25DCE1B6304BFD_RuntimeMethod_var)));
	}
}
// System.Object SoundManager/<Coroutine_CheckSFX>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_CheckSFXU3Ed__5_System_Collections_IEnumerator_get_Current_m2BC5045F566190B436E44F00082C45D13065C6D2 (U3CCoroutine_CheckSFXU3Ed__5_t321F02F0540FED7C242AEB3F0DCF5BB45B0A22C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CheckSFXU3Ed__5_System_Collections_IEnumerator_get_Current_m2BC5045F566190B436E44F00082C45D13065C6D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCoroutine_CheckSFXU3Ed__5_System_Collections_IEnumerator_get_Current_m2BC5045F566190B436E44F00082C45D13065C6D2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6315));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6316));
	{
		// public static T Instance { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6317));
		RuntimeObject * L_0 = ((Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_U3CInstanceU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_gshared_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Singleton_DontDestroy_1_get_Instance_m2360DCA7658CC612ACD0EFDD6082793D6A682B23_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6356));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6357));
	{
		// public static T Instance { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6358));
		RuntimeObject * L_0 = ((Singleton_DontDestroy_1_tE48FC4FE1D10644E7CF14F91ED91590D669A3C7A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_U3CInstanceU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
