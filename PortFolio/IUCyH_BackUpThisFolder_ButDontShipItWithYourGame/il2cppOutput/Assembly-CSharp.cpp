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

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// Singleton_DontDestroy`1<GameSettings>
struct Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657;
// Singleton_DontDestroy`1<System.Object>
struct Singleton_DontDestroy_1_tE48FC4FE1D10644E7CF14F91ED91590D669A3C7A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
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
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameSettings
struct GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// KartDemoMovement
struct KartDemoMovement_t238CAB17FE847DCDC9BC70A6FA7F8C9BFB24045E;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
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
// UnityStandardAssets.Water.WaterBasic
struct WaterBasic_t31D38CDFB35AB79D7A15D7B50462BDDB7B6915F6;
// UnityEngine.WheelCollider
struct WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779;
// WheelController
struct WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerController/<Coroutine_CountDown>d__56
struct U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143;
// PlayerController/<Coroutine_Fadeout>d__57
struct U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B;
// PlayerController/<Coroutine_StartBoost>d__58
struct U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_t2803B13ECCB73671BA815CC1794684DC3D33E3F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09648194F4DAEE1925FA3A2FFCDA65FB619B10EC;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral27D60A12D6822F2279196258CD85BE267A20958F;
IL2CPP_EXTERN_C String_t* _stringLiteral31003880CBAF84EF30B5E85A7DF016C5DE3EC47B;
IL2CPP_EXTERN_C String_t* _stringLiteral78F66AE37BE6E59ACD48A247E54B845C440C126B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral943A4DDC00F559292AF00760794ECFAA88617795;
IL2CPP_EXTERN_C String_t* _stringLiteralA32C1AFACE29F1A357A537AE57DEDB7B01E84EA3;
IL2CPP_EXTERN_C String_t* _stringLiteralECBCAB4D0B142B5A92A89606D5ABA69A26112C74;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisWheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_m17413F9808DE4439423E099650601D9332D77756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779_mA24D5DC9C60C0CEF50D9E3B3BE1966D8610EA617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_DontDestroy_1__ctor_m8C15519BEA644C759C8915FEA98097675E2E65E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_CountDownU3Ed__56_System_Collections_IEnumerator_Reset_m338CD3D545D09EC50C287990F8A231A4D13488DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_FadeoutU3Ed__57_System_Collections_IEnumerator_Reset_mB1185F67DAB05D64E3257D823097024BCBE09C77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutine_StartBoostU3Ed__58_System_Collections_IEnumerator_Reset_m93FDA0D5761CA8ADBA2C28048096321D1F1CB800_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
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


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// PlayerController/<Coroutine_CountDown>d__56
struct U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143  : public RuntimeObject
{
public:
	// System.Int32 PlayerController/<Coroutine_CountDown>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Coroutine_CountDown>d__56::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Coroutine_CountDown>d__56::<>4__this
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___U3CU3E4__this_2;
	// System.Single PlayerController/<Coroutine_CountDown>d__56::<time>5__2
	float ___U3CtimeU3E5__2_3;
	// System.Int32 PlayerController/<Coroutine_CountDown>d__56::<cnt>5__3
	int32_t ___U3CcntU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143, ___U3CU3E4__this_2)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143, ___U3CtimeU3E5__2_3)); }
	inline float get_U3CtimeU3E5__2_3() const { return ___U3CtimeU3E5__2_3; }
	inline float* get_address_of_U3CtimeU3E5__2_3() { return &___U3CtimeU3E5__2_3; }
	inline void set_U3CtimeU3E5__2_3(float value)
	{
		___U3CtimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CcntU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143, ___U3CcntU3E5__3_4)); }
	inline int32_t get_U3CcntU3E5__3_4() const { return ___U3CcntU3E5__3_4; }
	inline int32_t* get_address_of_U3CcntU3E5__3_4() { return &___U3CcntU3E5__3_4; }
	inline void set_U3CcntU3E5__3_4(int32_t value)
	{
		___U3CcntU3E5__3_4 = value;
	}
};


// PlayerController/<Coroutine_Fadeout>d__57
struct U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B  : public RuntimeObject
{
public:
	// System.Int32 PlayerController/<Coroutine_Fadeout>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Coroutine_Fadeout>d__57::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Coroutine_Fadeout>d__57::<>4__this
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___U3CU3E4__this_2;
	// System.Single PlayerController/<Coroutine_Fadeout>d__57::<time>5__2
	float ___U3CtimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B, ___U3CU3E4__this_2)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B, ___U3CtimeU3E5__2_3)); }
	inline float get_U3CtimeU3E5__2_3() const { return ___U3CtimeU3E5__2_3; }
	inline float* get_address_of_U3CtimeU3E5__2_3() { return &___U3CtimeU3E5__2_3; }
	inline void set_U3CtimeU3E5__2_3(float value)
	{
		___U3CtimeU3E5__2_3 = value;
	}
};


// PlayerController/<Coroutine_StartBoost>d__58
struct U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46  : public RuntimeObject
{
public:
	// System.Int32 PlayerController/<Coroutine_StartBoost>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Coroutine_StartBoost>d__58::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Coroutine_StartBoost>d__58::<>4__this
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___U3CU3E4__this_2;
	// System.Single PlayerController/<Coroutine_StartBoost>d__58::<time>5__2
	float ___U3CtimeU3E5__2_3;
	// UnityEngine.WaitForFixedUpdate PlayerController/<Coroutine_StartBoost>d__58::<waitForFixedUpdate>5__3
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ___U3CwaitForFixedUpdateU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46, ___U3CU3E4__this_2)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46, ___U3CtimeU3E5__2_3)); }
	inline float get_U3CtimeU3E5__2_3() const { return ___U3CtimeU3E5__2_3; }
	inline float* get_address_of_U3CtimeU3E5__2_3() { return &___U3CtimeU3E5__2_3; }
	inline void set_U3CtimeU3E5__2_3(float value)
	{
		___U3CtimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CwaitForFixedUpdateU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46, ___U3CwaitForFixedUpdateU3E5__3_4)); }
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


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
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

// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
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


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
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


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// KartDemoMovement
struct KartDemoMovement_t238CAB17FE847DCDC9BC70A6FA7F8C9BFB24045E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 KartDemoMovement::CurrentWaypoint
	int32_t ___CurrentWaypoint_4;
	// System.Collections.Generic.List`1<UnityEngine.Transform> KartDemoMovement::Waypoints
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___Waypoints_5;
	// UnityEngine.RaycastHit KartDemoMovement::hit
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___hit_6;
	// UnityEngine.AI.NavMeshAgent KartDemoMovement::agent
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___agent_7;

public:
	inline static int32_t get_offset_of_CurrentWaypoint_4() { return static_cast<int32_t>(offsetof(KartDemoMovement_t238CAB17FE847DCDC9BC70A6FA7F8C9BFB24045E, ___CurrentWaypoint_4)); }
	inline int32_t get_CurrentWaypoint_4() const { return ___CurrentWaypoint_4; }
	inline int32_t* get_address_of_CurrentWaypoint_4() { return &___CurrentWaypoint_4; }
	inline void set_CurrentWaypoint_4(int32_t value)
	{
		___CurrentWaypoint_4 = value;
	}

	inline static int32_t get_offset_of_Waypoints_5() { return static_cast<int32_t>(offsetof(KartDemoMovement_t238CAB17FE847DCDC9BC70A6FA7F8C9BFB24045E, ___Waypoints_5)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_Waypoints_5() const { return ___Waypoints_5; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_Waypoints_5() { return &___Waypoints_5; }
	inline void set_Waypoints_5(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___Waypoints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Waypoints_5), (void*)value);
	}

	inline static int32_t get_offset_of_hit_6() { return static_cast<int32_t>(offsetof(KartDemoMovement_t238CAB17FE847DCDC9BC70A6FA7F8C9BFB24045E, ___hit_6)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_hit_6() const { return ___hit_6; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_hit_6() { return &___hit_6; }
	inline void set_hit_6(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___hit_6 = value;
	}

	inline static int32_t get_offset_of_agent_7() { return static_cast<int32_t>(offsetof(KartDemoMovement_t238CAB17FE847DCDC9BC70A6FA7F8C9BFB24045E, ___agent_7)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_7() const { return ___agent_7; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_7() { return &___agent_7; }
	inline void set_agent_7(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_7), (void*)value);
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Text.StringBuilder PlayerController::m_sb
	StringBuilder_t * ___m_sb_4;
	// PlayerController/State PlayerController::m_state
	int32_t ___m_state_5;
	// UnityEngine.Transform PlayerController::m_center
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_center_6;
	// UnityEngine.Rigidbody PlayerController::m_playerRb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_playerRb_7;
	// UnityEngine.GameObject[] PlayerController::m_wheels
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___m_wheels_8;
	// UnityEngine.WheelCollider[] PlayerController::m_wheelCollider
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* ___m_wheelCollider_9;
	// WheelController[] PlayerController::m_wheelColliderCtr
	WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* ___m_wheelColliderCtr_10;
	// UnityEngine.WheelFrictionCurve PlayerController::m_fFricBackLeftWheel
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___m_fFricBackLeftWheel_11;
	// UnityEngine.WheelFrictionCurve PlayerController::m_sFricBackLeftWheel
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___m_sFricBackLeftWheel_12;
	// UnityEngine.WheelFrictionCurve PlayerController::m_fFricBackRightWheel
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___m_fFricBackRightWheel_13;
	// UnityEngine.WheelFrictionCurve PlayerController::m_sFricBackRightWheel
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___m_sFricBackRightWheel_14;
	// UnityEngine.Vector3 PlayerController::m_wheelColliderPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_wheelColliderPos_15;
	// UnityEngine.Quaternion PlayerController::m_wheelColliderRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_wheelColliderRotation_16;
	// System.Single PlayerController::m_antiRollVal
	float ___m_antiRollVal_17;
	// System.Single PlayerController::m_travelL
	float ___m_travelL_18;
	// System.Single PlayerController::m_travelR
	float ___m_travelR_19;
	// System.Boolean PlayerController::m_isGroundL
	bool ___m_isGroundL_20;
	// System.Boolean PlayerController::m_isGroundR
	bool ___m_isGroundR_21;
	// System.Single PlayerController::m_startBoostTime
	float ___m_startBoostTime_22;
	// System.Single PlayerController::m_startBoostSpeed
	float ___m_startBoostSpeed_23;
	// System.Single PlayerController::m_forceValue
	float ___m_forceValue_24;
	// System.Single PlayerController::m_maxSpeed
	float ___m_maxSpeed_25;
	// System.Single PlayerController::m_normalMaxSpeed
	float ___m_normalMaxSpeed_26;
	// System.Single PlayerController::m_normalMaxReSpeed
	float ___m_normalMaxReSpeed_27;
	// System.Single PlayerController::m_boosterMaxSpeed
	float ___m_boosterMaxSpeed_28;
	// System.Single PlayerController::m_currSpeed
	float ___m_currSpeed_29;
	// System.Single PlayerController::m_turnPower
	float ___m_turnPower_30;
	// System.Single PlayerController::m_slipRate
	float ___m_slipRate_31;
	// System.Single PlayerController::m_driftSlipRate
	float ___m_driftSlipRate_32;
	// System.Single PlayerController::m_speedUpVal
	float ___m_speedUpVal_33;
	// System.Single PlayerController::m_speedDownVal
	float ___m_speedDownVal_34;
	// System.Boolean PlayerController::m_isDrift
	bool ___m_isDrift_35;
	// System.Boolean PlayerController::m_isStart
	bool ___m_isStart_36;
	// UnityEngine.AnimationCurve PlayerController::m_scaleCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_scaleCurve_37;
	// UnityEngine.AnimationCurve PlayerController::m_alphaCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_alphaCurve_38;
	// UnityEngine.Canvas PlayerController::m_countCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_countCanvas_39;
	// UnityEngine.UI.Text PlayerController::m_countText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_countText_40;
	// UnityEngine.UI.Text PlayerController::m_speedText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_speedText_41;
	// UnityEngine.UI.Text PlayerController::m_timerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_timerText_42;
	// UnityEngine.UI.Slider PlayerController::m_boosterBar
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___m_boosterBar_43;
	// UnityEngine.Canvas PlayerController::m_dashBoardCanvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_dashBoardCanvas_44;
	// UnityEngine.UI.Image[] PlayerController::m_boosterIcons
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___m_boosterIcons_45;
	// System.Boolean PlayerController::m_isBooster
	bool ___m_isBooster_46;
	// System.Single PlayerController::m_defultChargingValue
	float ___m_defultChargingValue_47;
	// System.Single PlayerController::m_boostChargingValue
	float ___m_boostChargingValue_48;
	// System.Single PlayerController::m_time
	float ___m_time_49;
	// System.Single PlayerController::m_boosterTime
	float ___m_boosterTime_50;
	// System.Single PlayerController::m_duration
	float ___m_duration_51;
	// System.Single PlayerController::m_timer
	float ___m_timer_52;
	// System.Int32 PlayerController::m_boosterMaxCnt
	int32_t ___m_boosterMaxCnt_53;
	// System.Int32 PlayerController::m_boosterCnt
	int32_t ___m_boosterCnt_54;
	// System.Single PlayerController::m_maxScale
	float ___m_maxScale_55;
	// System.Single PlayerController::m_minScale
	float ___m_minScale_56;
	// System.Single PlayerController::m_alphaFrom
	float ___m_alphaFrom_57;
	// System.Single PlayerController::m_alphaTo
	float ___m_alphaTo_58;

public:
	inline static int32_t get_offset_of_m_sb_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_sb_4)); }
	inline StringBuilder_t * get_m_sb_4() const { return ___m_sb_4; }
	inline StringBuilder_t ** get_address_of_m_sb_4() { return &___m_sb_4; }
	inline void set_m_sb_4(StringBuilder_t * value)
	{
		___m_sb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sb_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_state_5)); }
	inline int32_t get_m_state_5() const { return ___m_state_5; }
	inline int32_t* get_address_of_m_state_5() { return &___m_state_5; }
	inline void set_m_state_5(int32_t value)
	{
		___m_state_5 = value;
	}

	inline static int32_t get_offset_of_m_center_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_center_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_center_6() const { return ___m_center_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_center_6() { return &___m_center_6; }
	inline void set_m_center_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_center_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_center_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_playerRb_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_playerRb_7)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_playerRb_7() const { return ___m_playerRb_7; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_playerRb_7() { return &___m_playerRb_7; }
	inline void set_m_playerRb_7(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_playerRb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerRb_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_wheels_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheels_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_m_wheels_8() const { return ___m_wheels_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_m_wheels_8() { return &___m_wheels_8; }
	inline void set_m_wheels_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___m_wheels_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wheels_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_wheelCollider_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelCollider_9)); }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* get_m_wheelCollider_9() const { return ___m_wheelCollider_9; }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6** get_address_of_m_wheelCollider_9() { return &___m_wheelCollider_9; }
	inline void set_m_wheelCollider_9(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* value)
	{
		___m_wheelCollider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wheelCollider_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_wheelColliderCtr_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelColliderCtr_10)); }
	inline WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* get_m_wheelColliderCtr_10() const { return ___m_wheelColliderCtr_10; }
	inline WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11** get_address_of_m_wheelColliderCtr_10() { return &___m_wheelColliderCtr_10; }
	inline void set_m_wheelColliderCtr_10(WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* value)
	{
		___m_wheelColliderCtr_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wheelColliderCtr_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_fFricBackLeftWheel_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_fFricBackLeftWheel_11)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_m_fFricBackLeftWheel_11() const { return ___m_fFricBackLeftWheel_11; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_m_fFricBackLeftWheel_11() { return &___m_fFricBackLeftWheel_11; }
	inline void set_m_fFricBackLeftWheel_11(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___m_fFricBackLeftWheel_11 = value;
	}

	inline static int32_t get_offset_of_m_sFricBackLeftWheel_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_sFricBackLeftWheel_12)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_m_sFricBackLeftWheel_12() const { return ___m_sFricBackLeftWheel_12; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_m_sFricBackLeftWheel_12() { return &___m_sFricBackLeftWheel_12; }
	inline void set_m_sFricBackLeftWheel_12(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___m_sFricBackLeftWheel_12 = value;
	}

	inline static int32_t get_offset_of_m_fFricBackRightWheel_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_fFricBackRightWheel_13)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_m_fFricBackRightWheel_13() const { return ___m_fFricBackRightWheel_13; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_m_fFricBackRightWheel_13() { return &___m_fFricBackRightWheel_13; }
	inline void set_m_fFricBackRightWheel_13(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___m_fFricBackRightWheel_13 = value;
	}

	inline static int32_t get_offset_of_m_sFricBackRightWheel_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_sFricBackRightWheel_14)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_m_sFricBackRightWheel_14() const { return ___m_sFricBackRightWheel_14; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_m_sFricBackRightWheel_14() { return &___m_sFricBackRightWheel_14; }
	inline void set_m_sFricBackRightWheel_14(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___m_sFricBackRightWheel_14 = value;
	}

	inline static int32_t get_offset_of_m_wheelColliderPos_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelColliderPos_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_wheelColliderPos_15() const { return ___m_wheelColliderPos_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_wheelColliderPos_15() { return &___m_wheelColliderPos_15; }
	inline void set_m_wheelColliderPos_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_wheelColliderPos_15 = value;
	}

	inline static int32_t get_offset_of_m_wheelColliderRotation_16() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_wheelColliderRotation_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_wheelColliderRotation_16() const { return ___m_wheelColliderRotation_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_wheelColliderRotation_16() { return &___m_wheelColliderRotation_16; }
	inline void set_m_wheelColliderRotation_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_wheelColliderRotation_16 = value;
	}

	inline static int32_t get_offset_of_m_antiRollVal_17() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_antiRollVal_17)); }
	inline float get_m_antiRollVal_17() const { return ___m_antiRollVal_17; }
	inline float* get_address_of_m_antiRollVal_17() { return &___m_antiRollVal_17; }
	inline void set_m_antiRollVal_17(float value)
	{
		___m_antiRollVal_17 = value;
	}

	inline static int32_t get_offset_of_m_travelL_18() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_travelL_18)); }
	inline float get_m_travelL_18() const { return ___m_travelL_18; }
	inline float* get_address_of_m_travelL_18() { return &___m_travelL_18; }
	inline void set_m_travelL_18(float value)
	{
		___m_travelL_18 = value;
	}

	inline static int32_t get_offset_of_m_travelR_19() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_travelR_19)); }
	inline float get_m_travelR_19() const { return ___m_travelR_19; }
	inline float* get_address_of_m_travelR_19() { return &___m_travelR_19; }
	inline void set_m_travelR_19(float value)
	{
		___m_travelR_19 = value;
	}

	inline static int32_t get_offset_of_m_isGroundL_20() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isGroundL_20)); }
	inline bool get_m_isGroundL_20() const { return ___m_isGroundL_20; }
	inline bool* get_address_of_m_isGroundL_20() { return &___m_isGroundL_20; }
	inline void set_m_isGroundL_20(bool value)
	{
		___m_isGroundL_20 = value;
	}

	inline static int32_t get_offset_of_m_isGroundR_21() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isGroundR_21)); }
	inline bool get_m_isGroundR_21() const { return ___m_isGroundR_21; }
	inline bool* get_address_of_m_isGroundR_21() { return &___m_isGroundR_21; }
	inline void set_m_isGroundR_21(bool value)
	{
		___m_isGroundR_21 = value;
	}

	inline static int32_t get_offset_of_m_startBoostTime_22() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_startBoostTime_22)); }
	inline float get_m_startBoostTime_22() const { return ___m_startBoostTime_22; }
	inline float* get_address_of_m_startBoostTime_22() { return &___m_startBoostTime_22; }
	inline void set_m_startBoostTime_22(float value)
	{
		___m_startBoostTime_22 = value;
	}

	inline static int32_t get_offset_of_m_startBoostSpeed_23() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_startBoostSpeed_23)); }
	inline float get_m_startBoostSpeed_23() const { return ___m_startBoostSpeed_23; }
	inline float* get_address_of_m_startBoostSpeed_23() { return &___m_startBoostSpeed_23; }
	inline void set_m_startBoostSpeed_23(float value)
	{
		___m_startBoostSpeed_23 = value;
	}

	inline static int32_t get_offset_of_m_forceValue_24() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_forceValue_24)); }
	inline float get_m_forceValue_24() const { return ___m_forceValue_24; }
	inline float* get_address_of_m_forceValue_24() { return &___m_forceValue_24; }
	inline void set_m_forceValue_24(float value)
	{
		___m_forceValue_24 = value;
	}

	inline static int32_t get_offset_of_m_maxSpeed_25() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_maxSpeed_25)); }
	inline float get_m_maxSpeed_25() const { return ___m_maxSpeed_25; }
	inline float* get_address_of_m_maxSpeed_25() { return &___m_maxSpeed_25; }
	inline void set_m_maxSpeed_25(float value)
	{
		___m_maxSpeed_25 = value;
	}

	inline static int32_t get_offset_of_m_normalMaxSpeed_26() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_normalMaxSpeed_26)); }
	inline float get_m_normalMaxSpeed_26() const { return ___m_normalMaxSpeed_26; }
	inline float* get_address_of_m_normalMaxSpeed_26() { return &___m_normalMaxSpeed_26; }
	inline void set_m_normalMaxSpeed_26(float value)
	{
		___m_normalMaxSpeed_26 = value;
	}

	inline static int32_t get_offset_of_m_normalMaxReSpeed_27() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_normalMaxReSpeed_27)); }
	inline float get_m_normalMaxReSpeed_27() const { return ___m_normalMaxReSpeed_27; }
	inline float* get_address_of_m_normalMaxReSpeed_27() { return &___m_normalMaxReSpeed_27; }
	inline void set_m_normalMaxReSpeed_27(float value)
	{
		___m_normalMaxReSpeed_27 = value;
	}

	inline static int32_t get_offset_of_m_boosterMaxSpeed_28() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterMaxSpeed_28)); }
	inline float get_m_boosterMaxSpeed_28() const { return ___m_boosterMaxSpeed_28; }
	inline float* get_address_of_m_boosterMaxSpeed_28() { return &___m_boosterMaxSpeed_28; }
	inline void set_m_boosterMaxSpeed_28(float value)
	{
		___m_boosterMaxSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_currSpeed_29() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_currSpeed_29)); }
	inline float get_m_currSpeed_29() const { return ___m_currSpeed_29; }
	inline float* get_address_of_m_currSpeed_29() { return &___m_currSpeed_29; }
	inline void set_m_currSpeed_29(float value)
	{
		___m_currSpeed_29 = value;
	}

	inline static int32_t get_offset_of_m_turnPower_30() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_turnPower_30)); }
	inline float get_m_turnPower_30() const { return ___m_turnPower_30; }
	inline float* get_address_of_m_turnPower_30() { return &___m_turnPower_30; }
	inline void set_m_turnPower_30(float value)
	{
		___m_turnPower_30 = value;
	}

	inline static int32_t get_offset_of_m_slipRate_31() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_slipRate_31)); }
	inline float get_m_slipRate_31() const { return ___m_slipRate_31; }
	inline float* get_address_of_m_slipRate_31() { return &___m_slipRate_31; }
	inline void set_m_slipRate_31(float value)
	{
		___m_slipRate_31 = value;
	}

	inline static int32_t get_offset_of_m_driftSlipRate_32() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_driftSlipRate_32)); }
	inline float get_m_driftSlipRate_32() const { return ___m_driftSlipRate_32; }
	inline float* get_address_of_m_driftSlipRate_32() { return &___m_driftSlipRate_32; }
	inline void set_m_driftSlipRate_32(float value)
	{
		___m_driftSlipRate_32 = value;
	}

	inline static int32_t get_offset_of_m_speedUpVal_33() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_speedUpVal_33)); }
	inline float get_m_speedUpVal_33() const { return ___m_speedUpVal_33; }
	inline float* get_address_of_m_speedUpVal_33() { return &___m_speedUpVal_33; }
	inline void set_m_speedUpVal_33(float value)
	{
		___m_speedUpVal_33 = value;
	}

	inline static int32_t get_offset_of_m_speedDownVal_34() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_speedDownVal_34)); }
	inline float get_m_speedDownVal_34() const { return ___m_speedDownVal_34; }
	inline float* get_address_of_m_speedDownVal_34() { return &___m_speedDownVal_34; }
	inline void set_m_speedDownVal_34(float value)
	{
		___m_speedDownVal_34 = value;
	}

	inline static int32_t get_offset_of_m_isDrift_35() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isDrift_35)); }
	inline bool get_m_isDrift_35() const { return ___m_isDrift_35; }
	inline bool* get_address_of_m_isDrift_35() { return &___m_isDrift_35; }
	inline void set_m_isDrift_35(bool value)
	{
		___m_isDrift_35 = value;
	}

	inline static int32_t get_offset_of_m_isStart_36() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isStart_36)); }
	inline bool get_m_isStart_36() const { return ___m_isStart_36; }
	inline bool* get_address_of_m_isStart_36() { return &___m_isStart_36; }
	inline void set_m_isStart_36(bool value)
	{
		___m_isStart_36 = value;
	}

	inline static int32_t get_offset_of_m_scaleCurve_37() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_scaleCurve_37)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_scaleCurve_37() const { return ___m_scaleCurve_37; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_scaleCurve_37() { return &___m_scaleCurve_37; }
	inline void set_m_scaleCurve_37(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_scaleCurve_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_scaleCurve_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_alphaCurve_38() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_alphaCurve_38)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_alphaCurve_38() const { return ___m_alphaCurve_38; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_alphaCurve_38() { return &___m_alphaCurve_38; }
	inline void set_m_alphaCurve_38(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_alphaCurve_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_alphaCurve_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_countCanvas_39() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_countCanvas_39)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_countCanvas_39() const { return ___m_countCanvas_39; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_countCanvas_39() { return &___m_countCanvas_39; }
	inline void set_m_countCanvas_39(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_countCanvas_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_countCanvas_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_countText_40() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_countText_40)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_countText_40() const { return ___m_countText_40; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_countText_40() { return &___m_countText_40; }
	inline void set_m_countText_40(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_countText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_countText_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_speedText_41() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_speedText_41)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_speedText_41() const { return ___m_speedText_41; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_speedText_41() { return &___m_speedText_41; }
	inline void set_m_speedText_41(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_speedText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_speedText_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_timerText_42() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_timerText_42)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_timerText_42() const { return ___m_timerText_42; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_timerText_42() { return &___m_timerText_42; }
	inline void set_m_timerText_42(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_timerText_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timerText_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_boosterBar_43() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterBar_43)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_m_boosterBar_43() const { return ___m_boosterBar_43; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_m_boosterBar_43() { return &___m_boosterBar_43; }
	inline void set_m_boosterBar_43(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___m_boosterBar_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boosterBar_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_dashBoardCanvas_44() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_dashBoardCanvas_44)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_dashBoardCanvas_44() const { return ___m_dashBoardCanvas_44; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_dashBoardCanvas_44() { return &___m_dashBoardCanvas_44; }
	inline void set_m_dashBoardCanvas_44(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_dashBoardCanvas_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dashBoardCanvas_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_boosterIcons_45() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterIcons_45)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_m_boosterIcons_45() const { return ___m_boosterIcons_45; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_m_boosterIcons_45() { return &___m_boosterIcons_45; }
	inline void set_m_boosterIcons_45(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___m_boosterIcons_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boosterIcons_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_isBooster_46() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_isBooster_46)); }
	inline bool get_m_isBooster_46() const { return ___m_isBooster_46; }
	inline bool* get_address_of_m_isBooster_46() { return &___m_isBooster_46; }
	inline void set_m_isBooster_46(bool value)
	{
		___m_isBooster_46 = value;
	}

	inline static int32_t get_offset_of_m_defultChargingValue_47() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_defultChargingValue_47)); }
	inline float get_m_defultChargingValue_47() const { return ___m_defultChargingValue_47; }
	inline float* get_address_of_m_defultChargingValue_47() { return &___m_defultChargingValue_47; }
	inline void set_m_defultChargingValue_47(float value)
	{
		___m_defultChargingValue_47 = value;
	}

	inline static int32_t get_offset_of_m_boostChargingValue_48() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boostChargingValue_48)); }
	inline float get_m_boostChargingValue_48() const { return ___m_boostChargingValue_48; }
	inline float* get_address_of_m_boostChargingValue_48() { return &___m_boostChargingValue_48; }
	inline void set_m_boostChargingValue_48(float value)
	{
		___m_boostChargingValue_48 = value;
	}

	inline static int32_t get_offset_of_m_time_49() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_time_49)); }
	inline float get_m_time_49() const { return ___m_time_49; }
	inline float* get_address_of_m_time_49() { return &___m_time_49; }
	inline void set_m_time_49(float value)
	{
		___m_time_49 = value;
	}

	inline static int32_t get_offset_of_m_boosterTime_50() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterTime_50)); }
	inline float get_m_boosterTime_50() const { return ___m_boosterTime_50; }
	inline float* get_address_of_m_boosterTime_50() { return &___m_boosterTime_50; }
	inline void set_m_boosterTime_50(float value)
	{
		___m_boosterTime_50 = value;
	}

	inline static int32_t get_offset_of_m_duration_51() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_duration_51)); }
	inline float get_m_duration_51() const { return ___m_duration_51; }
	inline float* get_address_of_m_duration_51() { return &___m_duration_51; }
	inline void set_m_duration_51(float value)
	{
		___m_duration_51 = value;
	}

	inline static int32_t get_offset_of_m_timer_52() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_timer_52)); }
	inline float get_m_timer_52() const { return ___m_timer_52; }
	inline float* get_address_of_m_timer_52() { return &___m_timer_52; }
	inline void set_m_timer_52(float value)
	{
		___m_timer_52 = value;
	}

	inline static int32_t get_offset_of_m_boosterMaxCnt_53() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterMaxCnt_53)); }
	inline int32_t get_m_boosterMaxCnt_53() const { return ___m_boosterMaxCnt_53; }
	inline int32_t* get_address_of_m_boosterMaxCnt_53() { return &___m_boosterMaxCnt_53; }
	inline void set_m_boosterMaxCnt_53(int32_t value)
	{
		___m_boosterMaxCnt_53 = value;
	}

	inline static int32_t get_offset_of_m_boosterCnt_54() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_boosterCnt_54)); }
	inline int32_t get_m_boosterCnt_54() const { return ___m_boosterCnt_54; }
	inline int32_t* get_address_of_m_boosterCnt_54() { return &___m_boosterCnt_54; }
	inline void set_m_boosterCnt_54(int32_t value)
	{
		___m_boosterCnt_54 = value;
	}

	inline static int32_t get_offset_of_m_maxScale_55() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_maxScale_55)); }
	inline float get_m_maxScale_55() const { return ___m_maxScale_55; }
	inline float* get_address_of_m_maxScale_55() { return &___m_maxScale_55; }
	inline void set_m_maxScale_55(float value)
	{
		___m_maxScale_55 = value;
	}

	inline static int32_t get_offset_of_m_minScale_56() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_minScale_56)); }
	inline float get_m_minScale_56() const { return ___m_minScale_56; }
	inline float* get_address_of_m_minScale_56() { return &___m_minScale_56; }
	inline void set_m_minScale_56(float value)
	{
		___m_minScale_56 = value;
	}

	inline static int32_t get_offset_of_m_alphaFrom_57() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_alphaFrom_57)); }
	inline float get_m_alphaFrom_57() const { return ___m_alphaFrom_57; }
	inline float* get_address_of_m_alphaFrom_57() { return &___m_alphaFrom_57; }
	inline void set_m_alphaFrom_57(float value)
	{
		___m_alphaFrom_57 = value;
	}

	inline static int32_t get_offset_of_m_alphaTo_58() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___m_alphaTo_58)); }
	inline float get_m_alphaTo_58() const { return ___m_alphaTo_58; }
	inline float* get_address_of_m_alphaTo_58() { return &___m_alphaTo_58; }
	inline void set_m_alphaTo_58(float value)
	{
		___m_alphaTo_58 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityStandardAssets.Water.WaterBasic
struct WaterBasic_t31D38CDFB35AB79D7A15D7B50462BDDB7B6915F6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
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


// GameSettings
struct GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4  : public Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657
{
public:
	// System.Text.StringBuilder GameSettings::m_sb
	StringBuilder_t * ___m_sb_5;
	// UnityEngine.Color GameSettings::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_6;
	// UnityEngine.Rect GameSettings::m_rect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_rect_7;
	// System.Single GameSettings::m_fps
	float ___m_fps_8;
	// System.Single GameSettings::m_ms
	float ___m_ms_9;
	// UnityEngine.GUIStyle GameSettings::m_guiStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_guiStyle_10;
	// System.Int32 GameSettings::m_fontSize
	int32_t ___m_fontSize_11;

public:
	inline static int32_t get_offset_of_m_sb_5() { return static_cast<int32_t>(offsetof(GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4, ___m_sb_5)); }
	inline StringBuilder_t * get_m_sb_5() const { return ___m_sb_5; }
	inline StringBuilder_t ** get_address_of_m_sb_5() { return &___m_sb_5; }
	inline void set_m_sb_5(StringBuilder_t * value)
	{
		___m_sb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sb_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontColor_6() { return static_cast<int32_t>(offsetof(GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4, ___m_fontColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_6() const { return ___m_fontColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_6() { return &___m_fontColor_6; }
	inline void set_m_fontColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_6 = value;
	}

	inline static int32_t get_offset_of_m_rect_7() { return static_cast<int32_t>(offsetof(GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4, ___m_rect_7)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_rect_7() const { return ___m_rect_7; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_rect_7() { return &___m_rect_7; }
	inline void set_m_rect_7(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_rect_7 = value;
	}

	inline static int32_t get_offset_of_m_fps_8() { return static_cast<int32_t>(offsetof(GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4, ___m_fps_8)); }
	inline float get_m_fps_8() const { return ___m_fps_8; }
	inline float* get_address_of_m_fps_8() { return &___m_fps_8; }
	inline void set_m_fps_8(float value)
	{
		___m_fps_8 = value;
	}

	inline static int32_t get_offset_of_m_ms_9() { return static_cast<int32_t>(offsetof(GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4, ___m_ms_9)); }
	inline float get_m_ms_9() const { return ___m_ms_9; }
	inline float* get_address_of_m_ms_9() { return &___m_ms_9; }
	inline void set_m_ms_9(float value)
	{
		___m_ms_9 = value;
	}

	inline static int32_t get_offset_of_m_guiStyle_10() { return static_cast<int32_t>(offsetof(GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4, ___m_guiStyle_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_guiStyle_10() const { return ___m_guiStyle_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_guiStyle_10() { return &___m_guiStyle_10; }
	inline void set_m_guiStyle_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_guiStyle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_guiStyle_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontSize_11() { return static_cast<int32_t>(offsetof(GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4, ___m_fontSize_11)); }
	inline int32_t get_m_fontSize_11() const { return ___m_fontSize_11; }
	inline int32_t* get_address_of_m_fontSize_11() { return &___m_fontSize_11; }
	inline void set_m_fontSize_11(int32_t value)
	{
		___m_fontSize_11 = value;
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


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
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
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void Singleton_DontDestroy`1<GameSettings>::.ctor()
inline void Singleton_DontDestroy_1__ctor_m8C15519BEA644C759C8915FEA98097675E2E65E2 (Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_DontDestroy_1_tE2F74D8B29AEC1CB01FB62C06652682190F7F657 *, const RuntimeMethod*))Singleton_DontDestroy_1__ctor_mFD2D777AA83F22AEDE8235B9E8D6FC837B56FA88_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_steeringTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NavMeshAgent_get_steeringTarget_m82AF7C05CF7AED6ACE1CF3BA7BA072E1E4B5ABA3 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE84D30EEFE59DA28DA172342068F092A35B2BE4A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void PlayerController/<Coroutine_CountDown>d__56::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__56__ctor_mC8C1CAC3171604C7811AD435C834430C35458E57 (U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void PlayerController/<Coroutine_Fadeout>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_FadeoutU3Ed__57__ctor_m46396A5F1B841B289F58B40ED0E90BD6C6D46781 (U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void PlayerController/<Coroutine_StartBoost>d__58::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_StartBoostU3Ed__58__ctor_m0E60E40A1373C84129346A5E5F7F8ADD738DA2E8 (U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_GetWorldPose_m227D45061C7734F3ED4A43B7F89605A398BE8BB5 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___quat1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void WheelController::UpdatePos(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_UpdatePos_mE56D2D293F405C6A49FEB8DC46877FA3716D416E (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___wheel0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void PlayerController::SetState(PlayerController/State)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void WheelController::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Move_m6906837F76EC4BD1752AE2FE2814331400442F94 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, float ___speed0, float ___dir1, const RuntimeMethod* method);
// System.Void WheelController::Turn(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelController_Turn_m5A63600BB178A54CCA2094144990EEBA086F3B40 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, float ___speed0, float ___dir1, const RuntimeMethod* method);
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
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m5190249D95CE1882B37481C5BFD2ABF201902BA5 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m3648BC8C77CEA688F3B90C7D79007CEDE85947E3 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_centerOfMass_m3B13BE412D99CE5133606643F14501CF5C63CCEC (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<WheelController>()
inline WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* Component_GetComponentsInChildren_TisWheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_m17413F9808DE4439423E099650601D9332D77756 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.WheelCollider>()
inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * GameObject_GetComponent_TisWheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779_mA24D5DC9C60C0CEF50D9E3B3BE1966D8610EA617 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.WheelFrictionCurve WheelController::get_ForwardFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelController_get_ForwardFriction_m72D285AF5293DA147B698698C7E396DBDDCBC4C6 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, const RuntimeMethod* method);
// UnityEngine.WheelFrictionCurve WheelController::get_SideWayFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelController_get_SideWayFriction_m412F8BF6F797F35558E14C073C687054BCB69086 (WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerController::Coroutine_CountDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Coroutine_CountDown_m3F3761F2415DA0D90B84751B5818BB538AB3123B (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void PlayerController::InitWheelPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_InitWheelPos_m0C4AB2AE283811EC6F074EFCFA24B3231443836C (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::Timer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Timer_m0C977B19760FB5FC635218C6FA4148C50867653E (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_mB16F20D8A54197A9CB7648A10810E68038A49E5D (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::Booster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Booster_m2C531E49E596ED1BE5B7C963CFB70145ECAF4B11 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::StabilizerBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StabilizerBar_m3E3FD952177FA3F571B9AAC5615F4E6C26F1F41B (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE (float ___t0, float ___length1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
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
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerController::Coroutine_StartBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Coroutine_StartBoost_m37C3D0BAF50DF3D1742F9229DBF708BDB8419E01 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerController::Coroutine_Fadeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Coroutine_Fadeout_m188941170AC4BAC631B32778E63E7B37F232E637 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
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
// System.Void GameSettings::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_OnStart_mC32283F3CED0B59D4673091DFD20EEF5EAC4D682 (GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_rect = new Rect(0, 0, 150, 100);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_0), (0.0f), (0.0f), (150.0f), (100.0f), /*hidden argument*/NULL);
		__this->set_m_rect_7(L_0);
		// m_guiStyle = new GUIStyle();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_1, /*hidden argument*/NULL);
		__this->set_m_guiStyle_10(L_1);
		// }
		return;
	}
}
// System.Void GameSettings::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_Update_m4324286B178D1964624B391004F8B4B68BABB6EE (GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var time = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = L_0;
		// m_fps = 1f / time;
		float L_1 = V_0;
		__this->set_m_fps_8(((float)((float)(1.0f)/(float)L_1)));
		// m_ms = time * 1000f;
		float L_2 = V_0;
		__this->set_m_ms_9(((float)il2cpp_codegen_multiply((float)L_2, (float)(1000.0f))));
		// }
		return;
	}
}
// System.Void GameSettings::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_OnGUI_m4CAF6C420AE15BD2FF8C57A9656D736452A651C9 (GameSettings_t61FBE597016141867271E3F947802F9C46F2F1E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral943A4DDC00F559292AF00760794ECFAA88617795);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_sb.Clear();
		StringBuilder_t * L_0 = __this->get_m_sb_5();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_0, /*hidden argument*/NULL);
		// m_guiStyle.fontSize = m_fontSize;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = __this->get_m_guiStyle_10();
		int32_t L_3 = __this->get_m_fontSize_11();
		NullCheck(L_2);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_2, L_3, /*hidden argument*/NULL);
		// m_guiStyle.normal.textColor = m_fontColor;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = __this->get_m_guiStyle_10();
		NullCheck(L_4);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_5;
		L_5 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_4, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get_m_fontColor_6();
		NullCheck(L_5);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_5, L_6, /*hidden argument*/NULL);
		// m_sb.AppendFormat("{0:N1} FPS ({1:N1}ms)", m_fps, m_ms);
		StringBuilder_t * L_7 = __this->get_m_sb_5();
		float L_8 = __this->get_m_fps_8();
		float L_9 = L_8;
		RuntimeObject * L_10 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_9);
		float L_11 = __this->get_m_ms_9();
		float L_12 = L_11;
		RuntimeObject * L_13 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_7);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_7, _stringLiteral943A4DDC00F559292AF00760794ECFAA88617795, L_10, L_13, /*hidden argument*/NULL);
		// GUI.Label(m_rect, m_sb.ToString(), m_guiStyle);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15 = __this->get_m_rect_7();
		StringBuilder_t * L_16 = __this->get_m_sb_5();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_18 = __this->get_m_guiStyle_10();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_15, L_17, L_18, /*hidden argument*/NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder m_sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_m_sb_5(L_0);
		// Color m_fontColor = new Color(0f, 0f, 0f, 1f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_1), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_fontColor_6(L_1);
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
// System.Void KartDemoMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartDemoMovement_Awake_m729433701AEE2E38E5EF13E762B207BAA75981F8 (KartDemoMovement_t238CAB17FE847DCDC9BC70A6FA7F8C9BFB24045E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = this.GetComponent<NavMeshAgent>();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		__this->set_agent_7(L_0);
		// agent.speed = Random.Range(6f, 8f);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_1 = __this->get_agent_7();
		float L_2;
		L_2 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((6.0f), (8.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void KartDemoMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartDemoMovement_Update_mE8D07502718FF02C067E77FC16E1E3DD33D43842 (KartDemoMovement_t238CAB17FE847DCDC9BC70A6FA7F8C9BFB24045E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 lookrotation = agent.steeringTarget - transform.position;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0 = __this->get_agent_7();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = NavMeshAgent_get_steeringTarget_m82AF7C05CF7AED6ACE1CF3BA7BA072E1E4B5ABA3(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(lookrotation), 10 * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_8, /*hidden argument*/NULL);
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_7, L_9, ((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_5, L_11, /*hidden argument*/NULL);
		// if (Vector3.Distance(Waypoints[CurrentWaypoint].position, transform.position) < 1f)
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_12 = __this->get_Waypoints_5();
		int32_t L_13 = __this->get_CurrentWaypoint_4();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18;
		L_18 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_15, L_17, /*hidden argument*/NULL);
		if ((!(((float)L_18) < ((float)(1.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// CurrentWaypoint++;
		int32_t L_19 = __this->get_CurrentWaypoint_4();
		__this->set_CurrentWaypoint_4(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
	}

IL_0083:
	{
		// if (Physics.Raycast(transform.position, Vector3.down, out hit))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_23 = __this->get_address_of_hit_6();
		bool L_24;
		L_24 = Physics_Raycast_mE84D30EEFE59DA28DA172342068F092A35B2BE4A(L_21, L_22, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00d6;
		}
	}
	{
		// transform.rotation = Quaternion.FromToRotation(transform.up, hit.normal) * transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_26, /*hidden argument*/NULL);
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_28 = __this->get_address_of_hit_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_28, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_27, L_29, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_31, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_30, L_32, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_25, L_33, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// if (CurrentWaypoint >= Waypoints.Count)
		int32_t L_34 = __this->get_CurrentWaypoint_4();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_35 = __this->get_Waypoints_5();
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_35, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_00f0;
		}
	}
	{
		// CurrentWaypoint = 0;
		__this->set_CurrentWaypoint_4(0);
	}

IL_00f0:
	{
		// agent.SetDestination(Waypoints[CurrentWaypoint].position);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_37 = __this->get_agent_7();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_38 = __this->get_Waypoints_5();
		int32_t L_39 = __this->get_CurrentWaypoint_4();
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		NullCheck(L_37);
		bool L_42;
		L_42 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_37, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void KartDemoMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KartDemoMovement__ctor_mDC9CA12DEDFA1C800E38F9E78EE8F7628906FCD6 (KartDemoMovement_t238CAB17FE847DCDC9BC70A6FA7F8C9BFB24045E * __this, const RuntimeMethod* method)
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
// System.Collections.IEnumerator PlayerController::Coroutine_CountDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Coroutine_CountDown_m3F3761F2415DA0D90B84751B5818BB538AB3123B (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143 * L_0 = (U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143 *)il2cpp_codegen_object_new(U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143_il2cpp_TypeInfo_var);
		U3CCoroutine_CountDownU3Ed__56__ctor_mC8C1CAC3171604C7811AD435C834430C35458E57(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::Coroutine_Fadeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Coroutine_Fadeout_m188941170AC4BAC631B32778E63E7B37F232E637 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B * L_0 = (U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B *)il2cpp_codegen_object_new(U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B_il2cpp_TypeInfo_var);
		U3CCoroutine_FadeoutU3Ed__57__ctor_m46396A5F1B841B289F58B40ED0E90BD6C6D46781(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::Coroutine_StartBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Coroutine_StartBoost_m37C3D0BAF50DF3D1742F9229DBF708BDB8419E01 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46 * L_0 = (U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46 *)il2cpp_codegen_object_new(U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46_il2cpp_TypeInfo_var);
		U3CCoroutine_StartBoostU3Ed__58__ctor_m0E60E40A1373C84129346A5E5F7F8ADD738DA2E8(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerController::SetState(PlayerController/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// m_state = state;
		int32_t L_0 = ___state0;
		__this->set_m_state_5(L_0);
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
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_m_wheelCollider_9();
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// for (int i = 0; i < wLength; i++)
		V_1 = 0;
		goto IL_0050;
	}

IL_000d:
	{
		// m_wheelCollider[i].GetWorldPose(out m_wheelColliderPos, out m_wheelColliderRotation);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_1 = __this->get_m_wheelCollider_9();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_m_wheelColliderPos_15();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_6 = __this->get_address_of_m_wheelColliderRotation_16();
		NullCheck(L_4);
		WheelCollider_GetWorldPose_m227D45061C7734F3ED4A43B7F89605A398BE8BB5(L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_6, /*hidden argument*/NULL);
		// m_wheelColliderCtr[i].UpdatePos(m_wheels[i].transform, m_wheelColliderPos, m_wheelColliderRotation);
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_7 = __this->get_m_wheelColliderCtr_10();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_m_wheels_8();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_m_wheelColliderPos_15();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = __this->get_m_wheelColliderRotation_16();
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
// System.Void PlayerController::Booster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Booster_m2C531E49E596ED1BE5B7C963CFB70145ECAF4B11 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_isDrift && m_boosterBar.value == 1f)
		bool L_0 = __this->get_m_isDrift_35();
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_m_boosterBar_43();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		if ((!(((float)L_2) == ((float)(1.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// m_boosterBar.value = 0f;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_3 = __this->get_m_boosterBar_43();
		NullCheck(L_3);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, (0.0f));
		// if (m_boosterCnt < m_boosterMaxCnt - 1)
		int32_t L_4 = __this->get_m_boosterCnt_54();
		int32_t L_5 = __this->get_m_boosterMaxCnt_53();
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))))
		{
			goto IL_0048;
		}
	}
	{
		// m_boosterCnt++;
		int32_t L_6 = __this->get_m_boosterCnt_54();
		__this->set_m_boosterCnt_54(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
	}

IL_0048:
	{
		// m_boosterIcons[m_boosterCnt].enabled = true;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_7 = __this->get_m_boosterIcons_45();
		int32_t L_8 = __this->get_m_boosterCnt_54();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_10, (bool)1, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// if(Input.GetKeyDown(KeyCode.LeftControl) && !m_isBooster && m_boosterCnt >= 0)
		bool L_11;
		L_11 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)306), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a7;
		}
	}
	{
		bool L_12 = __this->get_m_isBooster_46();
		if (L_12)
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_13 = __this->get_m_boosterCnt_54();
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_00a7;
		}
	}
	{
		// SetState(State.Booster);
		PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5_inline(__this, 1, /*hidden argument*/NULL);
		// m_boosterIcons[m_boosterCnt].enabled = false;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_14 = __this->get_m_boosterIcons_45();
		int32_t L_15 = __this->get_m_boosterCnt_54();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_17, (bool)0, /*hidden argument*/NULL);
		// m_boosterCnt--;
		int32_t L_18 = __this->get_m_boosterCnt_54();
		__this->set_m_boosterCnt_54(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)));
		// m_isBooster = true;
		__this->set_m_isBooster_46((bool)1);
	}

IL_00a7:
	{
		// if (m_isDrift && Input.GetAxis("Horizontal") != 0)
		bool L_19 = __this->get_m_isDrift_35();
		if (!L_19)
		{
			goto IL_00d8;
		}
	}
	{
		float L_20;
		L_20 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if ((((float)L_20) == ((float)(0.0f))))
		{
			goto IL_00d8;
		}
	}
	{
		// m_boosterBar.value += m_boostChargingValue;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_21 = __this->get_m_boosterBar_43();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_22 = L_21;
		NullCheck(L_22);
		float L_23;
		L_23 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_22);
		float L_24 = __this->get_m_boostChargingValue_48();
		NullCheck(L_22);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_22, ((float)il2cpp_codegen_add((float)L_23, (float)L_24)));
	}

IL_00d8:
	{
		// if(!m_isBooster)
		bool L_25 = __this->get_m_isBooster_46();
		if (L_25)
		{
			goto IL_00f8;
		}
	}
	{
		// m_boosterBar.value += m_defultChargingValue;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_26 = __this->get_m_boosterBar_43();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_27 = L_26;
		NullCheck(L_27);
		float L_28;
		L_28 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_27);
		float L_29 = __this->get_m_defultChargingValue_47();
		NullCheck(L_27);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_27, ((float)il2cpp_codegen_add((float)L_28, (float)L_29)));
	}

IL_00f8:
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var dir = Input.GetAxis("Vertical");
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_0 = L_0;
		// var currTurnPower = Mathf.Abs(m_turnPower - m_playerRb.velocity.magnitude);
		float L_1 = __this->get_m_turnPower_30();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2 = __this->get_m_playerRb_7();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4;
		L_4 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		float L_5;
		L_5 = fabsf(((float)il2cpp_codegen_subtract((float)L_1, (float)L_4)));
		V_1 = L_5;
		// if (dir >= 0)
		float L_6 = V_0;
		if ((!(((float)L_6) >= ((float)(0.0f)))))
		{
			goto IL_00a9;
		}
	}
	{
		// dir = 1;
		V_0 = (1.0f);
		// foreach (WheelController w in m_wheelColliderCtr)
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_7 = __this->get_m_wheelColliderCtr_10();
		V_3 = L_7;
		V_4 = 0;
		goto IL_005b;
	}

IL_0045:
	{
		// foreach (WheelController w in m_wheelColliderCtr)
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_8 = V_3;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		// w.Move(m_currSpeed, dir);
		float L_12 = __this->get_m_currSpeed_29();
		float L_13 = V_0;
		NullCheck(L_11);
		WheelController_Move_m6906837F76EC4BD1752AE2FE2814331400442F94(L_11, L_12, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005b:
	{
		// foreach (WheelController w in m_wheelColliderCtr)
		int32_t L_15 = V_4;
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_16 = V_3;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		// if(m_currSpeed < m_maxSpeed)
		float L_17 = __this->get_m_currSpeed_29();
		float L_18 = __this->get_m_maxSpeed_25();
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_0083;
		}
	}
	{
		// m_currSpeed += m_speedUpVal;
		float L_19 = __this->get_m_currSpeed_29();
		float L_20 = __this->get_m_speedUpVal_33();
		__this->set_m_currSpeed_29(((float)il2cpp_codegen_add((float)L_19, (float)L_20)));
	}

IL_0083:
	{
		// if (m_currSpeed > m_maxSpeed)
		float L_21 = __this->get_m_currSpeed_29();
		float L_22 = __this->get_m_maxSpeed_25();
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_011c;
		}
	}
	{
		// m_currSpeed -= m_speedDownVal;
		float L_23 = __this->get_m_currSpeed_29();
		float L_24 = __this->get_m_speedDownVal_34();
		__this->set_m_currSpeed_29(((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)));
		// }
		goto IL_011c;
	}

IL_00a9:
	{
		// else if(dir < 0)
		float L_25 = V_0;
		if ((!(((float)L_25) < ((float)(0.0f)))))
		{
			goto IL_011c;
		}
	}
	{
		// foreach(WheelController w in m_wheelColliderCtr)
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_26 = __this->get_m_wheelColliderCtr_10();
		V_3 = L_26;
		V_4 = 0;
		goto IL_00d3;
	}

IL_00bd:
	{
		// foreach(WheelController w in m_wheelColliderCtr)
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_27 = V_3;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		// w.Move(m_currSpeed, dir);
		float L_31 = __this->get_m_currSpeed_29();
		float L_32 = V_0;
		NullCheck(L_30);
		WheelController_Move_m6906837F76EC4BD1752AE2FE2814331400442F94(L_30, L_31, L_32, /*hidden argument*/NULL);
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00d3:
	{
		// foreach(WheelController w in m_wheelColliderCtr)
		int32_t L_34 = V_4;
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_35 = V_3;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00bd;
		}
	}
	{
		// if (m_currSpeed < m_normalMaxReSpeed)
		float L_36 = __this->get_m_currSpeed_29();
		float L_37 = __this->get_m_normalMaxReSpeed_27();
		if ((!(((float)L_36) < ((float)L_37))))
		{
			goto IL_00fb;
		}
	}
	{
		// m_currSpeed += m_speedUpVal;
		float L_38 = __this->get_m_currSpeed_29();
		float L_39 = __this->get_m_speedUpVal_33();
		__this->set_m_currSpeed_29(((float)il2cpp_codegen_add((float)L_38, (float)L_39)));
	}

IL_00fb:
	{
		// if (m_currSpeed > m_normalMaxReSpeed)
		float L_40 = __this->get_m_currSpeed_29();
		float L_41 = __this->get_m_normalMaxReSpeed_27();
		if ((!(((float)L_40) > ((float)L_41))))
		{
			goto IL_011c;
		}
	}
	{
		// m_currSpeed -= m_speedDownVal;
		float L_42 = __this->get_m_currSpeed_29();
		float L_43 = __this->get_m_speedDownVal_34();
		__this->set_m_currSpeed_29(((float)il2cpp_codegen_subtract((float)L_42, (float)L_43)));
	}

IL_011c:
	{
		// for (int i = 0; i < 2; i++)
		V_5 = 0;
		goto IL_0140;
	}

IL_0121:
	{
		// m_wheelColliderCtr[i].Turn(currTurnPower, Input.GetAxis("Horizontal"));
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_44 = __this->get_m_wheelColliderCtr_10();
		int32_t L_45 = V_5;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		float L_48 = V_1;
		float L_49;
		L_49 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		NullCheck(L_47);
		WheelController_Turn_m5A63600BB178A54CCA2094144990EEBA086F3B40(L_47, L_48, L_49, /*hidden argument*/NULL);
		// for (int i = 0; i < 2; i++)
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_0140:
	{
		// for (int i = 0; i < 2; i++)
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) < ((int32_t)2)))
		{
			goto IL_0121;
		}
	}
	{
		// if(m_isDrift)
		bool L_52 = __this->get_m_isDrift_35();
		if (!L_52)
		{
			goto IL_0193;
		}
	}
	{
		// m_fFricBackLeftWheel.stiffness = m_driftSlipRate;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_53 = __this->get_address_of_m_fFricBackLeftWheel_11();
		float L_54 = __this->get_m_driftSlipRate_32();
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)L_53, L_54, /*hidden argument*/NULL);
		// m_sFricBackLeftWheel.stiffness = m_driftSlipRate;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_55 = __this->get_address_of_m_sFricBackLeftWheel_12();
		float L_56 = __this->get_m_driftSlipRate_32();
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)L_55, L_56, /*hidden argument*/NULL);
		// m_fFricBackRightWheel.stiffness = m_driftSlipRate;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_57 = __this->get_address_of_m_fFricBackRightWheel_13();
		float L_58 = __this->get_m_driftSlipRate_32();
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)L_57, L_58, /*hidden argument*/NULL);
		// m_sFricBackRightWheel.stiffness = m_driftSlipRate;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_59 = __this->get_address_of_m_sFricBackRightWheel_14();
		float L_60 = __this->get_m_driftSlipRate_32();
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)L_59, L_60, /*hidden argument*/NULL);
		// }
		goto IL_01d7;
	}

IL_0193:
	{
		// m_fFricBackLeftWheel.stiffness = m_slipRate;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_61 = __this->get_address_of_m_fFricBackLeftWheel_11();
		float L_62 = __this->get_m_slipRate_31();
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)L_61, L_62, /*hidden argument*/NULL);
		// m_sFricBackLeftWheel.stiffness = m_slipRate;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_63 = __this->get_address_of_m_sFricBackLeftWheel_12();
		float L_64 = __this->get_m_slipRate_31();
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)L_63, L_64, /*hidden argument*/NULL);
		// m_fFricBackRightWheel.stiffness = m_slipRate;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_65 = __this->get_address_of_m_fFricBackRightWheel_13();
		float L_66 = __this->get_m_slipRate_31();
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)L_65, L_66, /*hidden argument*/NULL);
		// m_sFricBackRightWheel.stiffness = m_slipRate;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_67 = __this->get_address_of_m_sFricBackRightWheel_14();
		float L_68 = __this->get_m_slipRate_31();
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)L_67, L_68, /*hidden argument*/NULL);
	}

IL_01d7:
	{
		// m_wheelColliderCtr[2].Drift(m_fFricBackLeftWheel, m_sFricBackLeftWheel);
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_69 = __this->get_m_wheelColliderCtr_10();
		NullCheck(L_69);
		int32_t L_70 = 2;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_72 = __this->get_m_fFricBackLeftWheel_11();
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_73 = __this->get_m_sFricBackLeftWheel_12();
		NullCheck(L_71);
		WheelController_Drift_mC4BDA672AE5C078A370EF926B8F4EB2DB39B0B24(L_71, L_72, L_73, /*hidden argument*/NULL);
		// m_wheelColliderCtr[3].Drift(m_fFricBackRightWheel, m_sFricBackRightWheel);
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_74 = __this->get_m_wheelColliderCtr_10();
		NullCheck(L_74);
		int32_t L_75 = 3;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_77 = __this->get_m_fFricBackRightWheel_13();
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_78 = __this->get_m_sFricBackRightWheel_14();
		NullCheck(L_76);
		WheelController_Drift_mC4BDA672AE5C078A370EF926B8F4EB2DB39B0B24(L_76, L_77, L_78, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::StabilizerBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StabilizerBar_m3E3FD952177FA3F571B9AAC5615F4E6C26F1F41B (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// m_isGroundL = m_wheelCollider[2].GetGroundHit(out hit);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_m_wheelCollider_9();
		NullCheck(L_0);
		int32_t L_1 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		bool L_3;
		L_3 = WheelCollider_GetGroundHit_mDCD55AC74710E685DBA37F02C904B8F8F3E59DB9(L_2, (WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_isGroundL_20(L_3);
		// if(m_isGroundL)
		bool L_4 = __this->get_m_isGroundL_20();
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		// m_travelL = (-m_wheelCollider[2].transform.InverseTransformPoint(hit.point).y - m_wheelCollider[2].radius) / m_wheelCollider[2].suspensionDistance;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_5 = __this->get_m_wheelCollider_9();
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
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_12 = __this->get_m_wheelCollider_9();
		NullCheck(L_12);
		int32_t L_13 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		float L_15;
		L_15 = WheelCollider_get_radius_mDB04C14DAB0BB1D5D7A2D160C5EE3F159CE3FA26(L_14, /*hidden argument*/NULL);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_16 = __this->get_m_wheelCollider_9();
		NullCheck(L_16);
		int32_t L_17 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		float L_19;
		L_19 = WheelCollider_get_suspensionDistance_m716BAA97103E158AAD36ECA2D775047D41ADB368(L_18, /*hidden argument*/NULL);
		__this->set_m_travelL_18(((float)((float)((float)il2cpp_codegen_subtract((float)((-L_11)), (float)L_15))/(float)L_19)));
	}

IL_005e:
	{
		// m_isGroundR = m_wheelCollider[3].GetGroundHit(out hit);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_20 = __this->get_m_wheelCollider_9();
		NullCheck(L_20);
		int32_t L_21 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		bool L_23;
		L_23 = WheelCollider_GetGroundHit_mDCD55AC74710E685DBA37F02C904B8F8F3E59DB9(L_22, (WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_isGroundR_21(L_23);
		// if(m_isGroundR)
		bool L_24 = __this->get_m_isGroundR_21();
		if (!L_24)
		{
			goto IL_00bc;
		}
	}
	{
		// m_travelR = (-m_wheelCollider[3].transform.InverseTransformPoint(hit.point).y - m_wheelCollider[3].radius) / m_wheelCollider[3].suspensionDistance;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_25 = __this->get_m_wheelCollider_9();
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
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_32 = __this->get_m_wheelCollider_9();
		NullCheck(L_32);
		int32_t L_33 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		float L_35;
		L_35 = WheelCollider_get_radius_mDB04C14DAB0BB1D5D7A2D160C5EE3F159CE3FA26(L_34, /*hidden argument*/NULL);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_36 = __this->get_m_wheelCollider_9();
		NullCheck(L_36);
		int32_t L_37 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		float L_39;
		L_39 = WheelCollider_get_suspensionDistance_m716BAA97103E158AAD36ECA2D775047D41ADB368(L_38, /*hidden argument*/NULL);
		__this->set_m_travelR_19(((float)((float)((float)il2cpp_codegen_subtract((float)((-L_31)), (float)L_35))/(float)L_39)));
	}

IL_00bc:
	{
		// var force = (m_travelL - m_travelR) * m_antiRollVal;
		float L_40 = __this->get_m_travelL_18();
		float L_41 = __this->get_m_travelR_19();
		float L_42 = __this->get_m_antiRollVal_17();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_40, (float)L_41)), (float)L_42));
		// if(m_isGroundL)
		bool L_43 = __this->get_m_isGroundL_20();
		if (!L_43)
		{
			goto IL_0113;
		}
	}
	{
		// m_playerRb.AddForceAtPosition(-m_wheelCollider[2].transform.up * force, m_wheelCollider[2].transform.position);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_44 = __this->get_m_playerRb_7();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_45 = __this->get_m_wheelCollider_9();
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
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_53 = __this->get_m_wheelCollider_9();
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
		bool L_58 = __this->get_m_isGroundR_21();
		if (!L_58)
		{
			goto IL_0150;
		}
	}
	{
		// m_playerRb.AddForceAtPosition(m_wheelCollider[3].transform.up * force, m_wheelCollider[3].transform.position);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_59 = __this->get_m_playerRb_7();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_60 = __this->get_m_wheelCollider_9();
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
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_67 = __this->get_m_wheelCollider_9();
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
// System.Void PlayerController::Timer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Timer_m0C977B19760FB5FC635218C6FA4148C50867653E (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D60A12D6822F2279196258CD85BE267A20958F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// m_sb.Clear();
		StringBuilder_t * L_0 = __this->get_m_sb_4();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_0, /*hidden argument*/NULL);
		// m_timer += Time.deltaTime;
		float L_2 = __this->get_m_timer_52();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_m_timer_52(((float)il2cpp_codegen_add((float)L_2, (float)L_3)));
		// int minute = Mathf.FloorToInt(m_timer / 60f);
		float L_4 = __this->get_m_timer_52();
		int32_t L_5;
		L_5 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)((float)L_4/(float)(60.0f))), /*hidden argument*/NULL);
		V_0 = L_5;
		// int second = (int)m_timer % 60;
		float L_6 = __this->get_m_timer_52();
		V_1 = ((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_6)%(int32_t)((int32_t)60)));
		// int millisecond = (int)(m_timer * 100) % 100;
		float L_7 = __this->get_m_timer_52();
		V_2 = ((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)L_7, (float)(100.0f))))%(int32_t)((int32_t)100)));
		// m_sb.AppendFormat("<b>TIME</b>  /  {0:00}:{1:00}:{2:00}", minute, second, millisecond);
		StringBuilder_t * L_8 = __this->get_m_sb_4();
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_8);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_AppendFormat_m3648BC8C77CEA688F3B90C7D79007CEDE85947E3(L_8, _stringLiteral27D60A12D6822F2279196258CD85BE267A20958F, L_11, L_14, L_17, /*hidden argument*/NULL);
		// m_timerText.text = m_sb.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_m_timerText_42();
		StringBuilder_t * L_20 = __this->get_m_sb_4();
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_21);
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
	{
		// m_playerRb.centerOfMass = m_center.localPosition;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_m_playerRb_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_m_center_6();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_centerOfMass_m3B13BE412D99CE5133606643F14501CF5C63CCEC(L_0, L_2, /*hidden argument*/NULL);
		// m_wheelColliderCtr = GetComponentsInChildren<WheelController>();
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_3;
		L_3 = Component_GetComponentsInChildren_TisWheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_m17413F9808DE4439423E099650601D9332D77756(__this, /*hidden argument*/Component_GetComponentsInChildren_TisWheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946_m17413F9808DE4439423E099650601D9332D77756_RuntimeMethod_var);
		__this->set_m_wheelColliderCtr_10(L_3);
		// for (int i = 0; i < m_wheelColliderCtr.Length; i++)
		V_0 = 0;
		goto IL_0044;
	}

IL_0026:
	{
		// m_wheelCollider[i] = m_wheelColliderCtr[i].gameObject.GetComponent<WheelCollider>();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_4 = __this->get_m_wheelCollider_9();
		int32_t L_5 = V_0;
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_6 = __this->get_m_wheelColliderCtr_10();
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
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_14 = __this->get_m_wheelColliderCtr_10();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		// m_fFricBackLeftWheel = m_wheelColliderCtr[2].ForwardFriction;
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_15 = __this->get_m_wheelColliderCtr_10();
		NullCheck(L_15);
		int32_t L_16 = 2;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_18;
		L_18 = WheelController_get_ForwardFriction_m72D285AF5293DA147B698698C7E396DBDDCBC4C6(L_17, /*hidden argument*/NULL);
		__this->set_m_fFricBackLeftWheel_11(L_18);
		// m_sFricBackLeftWheel = m_wheelColliderCtr[2].SideWayFriction;
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_19 = __this->get_m_wheelColliderCtr_10();
		NullCheck(L_19);
		int32_t L_20 = 2;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_22;
		L_22 = WheelController_get_SideWayFriction_m412F8BF6F797F35558E14C073C687054BCB69086(L_21, /*hidden argument*/NULL);
		__this->set_m_sFricBackLeftWheel_12(L_22);
		// m_fFricBackRightWheel = m_wheelColliderCtr[3].ForwardFriction;
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_23 = __this->get_m_wheelColliderCtr_10();
		NullCheck(L_23);
		int32_t L_24 = 3;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_26;
		L_26 = WheelController_get_ForwardFriction_m72D285AF5293DA147B698698C7E396DBDDCBC4C6(L_25, /*hidden argument*/NULL);
		__this->set_m_fFricBackRightWheel_13(L_26);
		// m_sFricBackRightWheel = m_wheelColliderCtr[3].SideWayFriction;
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_27 = __this->get_m_wheelColliderCtr_10();
		NullCheck(L_27);
		int32_t L_28 = 3;
		WheelController_t3B83F60B158CD8D42E93C4FEFE7681C4EE6D9946 * L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_30;
		L_30 = WheelController_get_SideWayFriction_m412F8BF6F797F35558E14C073C687054BCB69086(L_29, /*hidden argument*/NULL);
		__this->set_m_sFricBackRightWheel_14(L_30);
		// m_dashBoardCanvas.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_31 = __this->get_m_dashBoardCanvas_44();
		NullCheck(L_31);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_31, (bool)0, /*hidden argument*/NULL);
		// m_boosterIcons[0].enabled = m_boosterIcons[1].enabled = false;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_32 = __this->get_m_boosterIcons_45();
		NullCheck(L_32);
		int32_t L_33 = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_35 = __this->get_m_boosterIcons_45();
		NullCheck(L_35);
		int32_t L_36 = 1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = 0;
		V_1 = (bool)L_38;
		NullCheck(L_37);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_37, (bool)L_38, /*hidden argument*/NULL);
		bool L_39 = V_1;
		NullCheck(L_34);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_34, L_39, /*hidden argument*/NULL);
		// m_state = State.Defult;
		__this->set_m_state_5(0);
		// StartCoroutine(Coroutine_CountDown());
		RuntimeObject* L_40;
		L_40 = PlayerController_Coroutine_CountDown_m3F3761F2415DA0D90B84751B5818BB538AB3123B(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_41;
		L_41 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_40, /*hidden argument*/NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t2803B13ECCB73671BA815CC1794684DC3D33E3F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA32C1AFACE29F1A357A537AE57DEDB7B01E84EA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBCAB4D0B142B5A92A89606D5ABA69A26112C74);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// Timer();
		PlayerController_Timer_m0C977B19760FB5FC635218C6FA4148C50867653E(__this, /*hidden argument*/NULL);
		// Debug.Log("State : " + m_state);
		int32_t* L_0 = __this->get_address_of_m_state_5();
		RuntimeObject * L_1 = Box(State_t2803B13ECCB73671BA815CC1794684DC3D33E3F5_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		*L_0 = *(int32_t*)UnBox(L_1);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA32C1AFACE29F1A357A537AE57DEDB7B01E84EA3, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// var speed = m_playerRb.velocity.magnitude * 3.6f;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_4 = __this->get_m_playerRb_7();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_6, (float)(3.5999999f)));
		// m_sb.Clear();
		StringBuilder_t * L_7 = __this->get_m_sb_4();
		NullCheck(L_7);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_7, /*hidden argument*/NULL);
		// m_sb.AppendFormat("{0:0.0} km / h", speed);
		StringBuilder_t * L_9 = __this->get_m_sb_4();
		float L_10 = V_0;
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		StringBuilder_t * L_13;
		L_13 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_9, _stringLiteralECBCAB4D0B142B5A92A89606D5ABA69A26112C74, L_12, /*hidden argument*/NULL);
		// m_speedText.text = m_sb.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_m_speedText_41();
		StringBuilder_t * L_15 = __this->get_m_sb_4();
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		// switch(m_state)
		int32_t L_17 = __this->get_m_state_5();
		V_2 = L_17;
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			goto IL_0097;
		}
	}
	{
		goto IL_00dc;
	}

IL_0089:
	{
		// m_maxSpeed = m_normalMaxSpeed;
		float L_20 = __this->get_m_normalMaxSpeed_26();
		__this->set_m_maxSpeed_25(L_20);
		// break;
		goto IL_00dc;
	}

IL_0097:
	{
		// m_maxSpeed = m_boosterMaxSpeed;
		float L_21 = __this->get_m_boosterMaxSpeed_28();
		__this->set_m_maxSpeed_25(L_21);
		// m_time += Time.deltaTime;
		float L_22 = __this->get_m_time_49();
		float L_23;
		L_23 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_m_time_49(((float)il2cpp_codegen_add((float)L_22, (float)L_23)));
		// if(m_time > m_boosterTime)
		float L_24 = __this->get_m_time_49();
		float L_25 = __this->get_m_boosterTime_50();
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_00dc;
		}
	}
	{
		// SetState(State.Defult);
		PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5_inline(__this, 0, /*hidden argument*/NULL);
		// m_isBooster = false;
		__this->set_m_isBooster_46((bool)0);
		// m_time = 0f;
		__this->set_m_time_49((0.0f));
	}

IL_00dc:
	{
		// if (Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift))
		bool L_26;
		L_26 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)304), /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00f4;
		}
	}
	{
		bool L_27;
		L_27 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)303), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}

IL_00f4:
	{
		// m_isDrift = true;
		__this->set_m_isDrift_35((bool)1);
	}

IL_00fb:
	{
		// if(Input.GetKeyUp(KeyCode.LeftShift) || Input.GetKeyUp(KeyCode.RightShift))
		bool L_28;
		L_28 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)304), /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0113;
		}
	}
	{
		bool L_29;
		L_29 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)303), /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_011a;
		}
	}

IL_0113:
	{
		// m_isDrift = false;
		__this->set_m_isDrift_35((bool)0);
	}

IL_011a:
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
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_m_playerRb_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		float L_2 = __this->get_m_forceValue_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_4 = __this->get_m_playerRb_7();
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
		bool L_8 = __this->get_m_isStart_36();
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// Move();
		PlayerController_Move_mB16F20D8A54197A9CB7648A10810E68038A49E5D(__this, /*hidden argument*/NULL);
		// Booster();
		PlayerController_Booster_m2C531E49E596ED1BE5B7C963CFB70145ECAF4B11(__this, /*hidden argument*/NULL);
		// InitWheelPos();
		PlayerController_InitWheelPos_m0C4AB2AE283811EC6F074EFCFA24B3231443836C(__this, /*hidden argument*/NULL);
		// StabilizerBar();
		PlayerController_StabilizerBar_m3E3FD952177FA3F571B9AAC5615F4E6C26F1F41B(__this, /*hidden argument*/NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder m_sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_m_sb_4(L_0);
		// GameObject[] m_wheels = new GameObject[4]; //�����Ž� �迭
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_m_wheels_8(L_1);
		// WheelCollider[] m_wheelCollider = new WheelCollider[4];
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_2 = (WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6*)(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6*)SZArrayNew(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_m_wheelCollider_9(L_2);
		// WheelController[] m_wheelColliderCtr = new WheelController[4]; //�� �ݶ��̴� �迭
		WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11* L_3 = (WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11*)(WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11*)SZArrayNew(WheelControllerU5BU5D_t59FE60AF955C7581C09C5B83BEC5A099EC19CB11_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_m_wheelColliderCtr_10(L_3);
		// float m_antiRollVal = 5000f;
		__this->set_m_antiRollVal_17((5000.0f));
		// float m_travelL = 1f;
		__this->set_m_travelL_18((1.0f));
		// float m_travelR = 1f;
		__this->set_m_travelR_19((1.0f));
		// float m_startBoostTime = 0.5f;
		__this->set_m_startBoostTime_22((0.5f));
		// float m_startBoostSpeed = 5f;
		__this->set_m_startBoostSpeed_23((5.0f));
		// float m_normalMaxSpeed = 150f; //�ڵ����� ���� �ִ�ӵ�
		__this->set_m_normalMaxSpeed_26((150.0f));
		// float m_normalMaxReSpeed = 15f; //�ڵ����� ���� �ְ��ӵ�
		__this->set_m_normalMaxReSpeed_27((15.0f));
		// float m_turnPower = 3f; //�ڵ����� ȸ���ӵ�
		__this->set_m_turnPower_30((3.0f));
		// float m_slipRate = 1.0f; //���� �������
		__this->set_m_slipRate_31((1.0f));
		// float m_driftSlipRate = 0.3f; //�帮��Ʈ �� �������
		__this->set_m_driftSlipRate_32((0.300000012f));
		// float m_speedUpVal = 3f;
		__this->set_m_speedUpVal_33((3.0f));
		// float m_speedDownVal = 1f;
		__this->set_m_speedDownVal_34((1.0f));
		// AnimationCurve m_scaleCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4;
		L_4 = AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_scaleCurve_37(L_4);
		// AnimationCurve m_alphaCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5;
		L_5 = AnimationCurve_Linear_mE61D9A684B81B47365C299B6B9C5D744FC9DFBFA((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_alphaCurve_38(L_5);
		// Image[] m_boosterIcons = new Image[2];
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_6 = (ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224*)(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224*)SZArrayNew(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_boosterIcons_45(L_6);
		// float m_defultChargingValue = 0.0001f;
		__this->set_m_defultChargingValue_47((9.99999975E-05f));
		// float m_boostChargingValue = 0.005f;
		__this->set_m_boostChargingValue_48((0.00499999989f));
		// float m_boosterTime = 2f;
		__this->set_m_boosterTime_50((2.0f));
		// float m_duration = 0.5f;
		__this->set_m_duration_51((0.5f));
		// int m_boosterMaxCnt = 2;
		__this->set_m_boosterMaxCnt_53(2);
		// float m_maxScale = 1f;
		__this->set_m_maxScale_55((1.0f));
		// float m_minScale = 0.5f;
		__this->set_m_minScale_56((0.5f));
		// float m_alphaFrom = 1f;
		__this->set_m_alphaFrom_57((1.0f));
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
// System.Void UnityStandardAssets.Water.WaterBasic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBasic_Update_m79AE15CDF47AA396823D10220EBA44C34CD6F569 (WaterBasic_t31D38CDFB35AB79D7A15D7B50462BDDB7B6915F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09648194F4DAEE1925FA3A2FFCDA65FB619B10EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31003880CBAF84EF30B5E85A7DF016C5DE3EC47B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F66AE37BE6E59ACD48A247E54B845C440C126B);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_1 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Renderer r = GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		V_0 = L_0;
		// if (!r)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// Material mat = r.sharedMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_3 = V_0;
		NullCheck(L_3);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4;
		L_4 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (!mat)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		return;
	}

IL_0020:
	{
		// Vector4 waveSpeed = mat.GetVector("WaveSpeed");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = V_1;
		NullCheck(L_7);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		L_8 = Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F(L_7, _stringLiteral09648194F4DAEE1925FA3A2FFCDA65FB619B10EC, /*hidden argument*/NULL);
		V_2 = L_8;
		// float waveScale = mat.GetFloat("_WaveScale");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = V_1;
		NullCheck(L_9);
		float L_10;
		L_10 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_9, _stringLiteral31003880CBAF84EF30B5E85A7DF016C5DE3EC47B, /*hidden argument*/NULL);
		V_3 = L_10;
		// float t = Time.time / 20.0f;
		float L_11;
		L_11 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_4 = ((float)((float)L_11/(float)(20.0f)));
		// Vector4 offset4 = waveSpeed * (t * waveScale);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = V_2;
		float L_13 = V_4;
		float L_14 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15;
		L_15 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		V_5 = L_15;
		// Vector4 offsetClamped = new Vector4(Mathf.Repeat(offset4.x, 1.0f), Mathf.Repeat(offset4.y, 1.0f),
		//     Mathf.Repeat(offset4.z, 1.0f), Mathf.Repeat(offset4.w, 1.0f));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_16 = V_5;
		float L_17 = L_16.get_x_1();
		float L_18;
		L_18 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(L_17, (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_19 = V_5;
		float L_20 = L_19.get_y_2();
		float L_21;
		L_21 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(L_20, (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_22 = V_5;
		float L_23 = L_22.get_z_3();
		float L_24;
		L_24 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(L_23, (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_25 = V_5;
		float L_26 = L_25.get_w_4();
		float L_27;
		L_27 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(L_26, (1.0f), /*hidden argument*/NULL);
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_6), L_18, L_21, L_24, L_27, /*hidden argument*/NULL);
		// mat.SetVector("_WaveOffset", offsetClamped);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_29 = V_6;
		NullCheck(L_28);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_28, _stringLiteral78F66AE37BE6E59ACD48A247E54B845C440C126B, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBasic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBasic__ctor_mF258EB45327E0929D2CB72B5266080C3F2E9CF4A (WaterBasic_t31D38CDFB35AB79D7A15D7B50462BDDB7B6915F6 * __this, const RuntimeMethod* method)
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
// System.Void PlayerController/<Coroutine_CountDown>d__56::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__56__ctor_mC8C1CAC3171604C7811AD435C834430C35458E57 (U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerController/<Coroutine_CountDown>d__56::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__56_System_IDisposable_Dispose_m948E56207900E9B386BF53A8597A3EDE36532118 (U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Coroutine_CountDown>d__56::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_CountDownU3Ed__56_MoveNext_m6DFB1E643BEA8B4B76256C97453A72AD5CB4A852 (U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0121;
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
	}

IL_0033:
	{
		// var scaleValue = m_scaleCurve.Evaluate(time);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_4 = V_1;
		NullCheck(L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = L_4->get_m_scaleCurve_37();
		float L_6 = __this->get_U3CtimeU3E5__2_3();
		NullCheck(L_5);
		float L_7;
		L_7 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// var scale = m_minScale * (1f - scaleValue) + m_maxScale * scaleValue;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_m_minScale_56();
		float L_10 = V_2;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_m_maxScale_55();
		float L_13 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_9, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_10)))), (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13))));
		// m_countText.text = cnt.ToString();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_14 = V_1;
		NullCheck(L_14);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = L_14->get_m_countText_40();
		int32_t* L_16 = __this->get_address_of_U3CcntU3E5__3_4();
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_17);
		// m_countText.transform.localScale = new Vector3(scale, scale, scale);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_18 = V_1;
		NullCheck(L_18);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = L_18->get_m_countText_40();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		float L_21 = V_3;
		float L_22 = V_3;
		float L_23 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), L_21, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_20, L_24, /*hidden argument*/NULL);
		// time += Time.deltaTime;
		float L_25 = __this->get_U3CtimeU3E5__2_3();
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
		// if(time > 1f)
		float L_27 = __this->get_U3CtimeU3E5__2_3();
		if ((!(((float)L_27) > ((float)(1.0f)))))
		{
			goto IL_00c7;
		}
	}
	{
		// cnt--;
		int32_t L_28 = __this->get_U3CcntU3E5__3_4();
		V_4 = L_28;
		int32_t L_29 = V_4;
		__this->set_U3CcntU3E5__3_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)));
		// time = 0f;
		__this->set_U3CtimeU3E5__2_3((0.0f));
	}

IL_00c7:
	{
		// if(cnt < 1)
		int32_t L_30 = __this->get_U3CcntU3E5__3_4();
		if ((((int32_t)L_30) >= ((int32_t)1)))
		{
			goto IL_0111;
		}
	}
	{
		// m_timer -= 3f;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_31 = V_1;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_32 = V_1;
		NullCheck(L_32);
		float L_33 = L_32->get_m_timer_52();
		NullCheck(L_31);
		L_31->set_m_timer_52(((float)il2cpp_codegen_subtract((float)L_33, (float)(3.0f))));
		// m_isStart = true;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_34 = V_1;
		NullCheck(L_34);
		L_34->set_m_isStart_36((bool)1);
		// m_dashBoardCanvas.enabled = true;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_35 = V_1;
		NullCheck(L_35);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_36 = L_35->get_m_dashBoardCanvas_44();
		NullCheck(L_36);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_36, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(Coroutine_StartBoost());
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_37 = V_1;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_38 = V_1;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = PlayerController_Coroutine_StartBoost_m37C3D0BAF50DF3D1742F9229DBF708BDB8419E01(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_40;
		L_40 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_37, L_39, /*hidden argument*/NULL);
		// StartCoroutine(Coroutine_Fadeout());
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_41 = V_1;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_42 = V_1;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = PlayerController_Coroutine_Fadeout_m188941170AC4BAC631B32778E63E7B37F232E637(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_44;
		L_44 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_41, L_43, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_0111:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0121:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while(true)
		goto IL_0033;
	}
}
// System.Object PlayerController/<Coroutine_CountDown>d__56::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_CountDownU3Ed__56_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0CA0E2DC6F96A366FE126A91045B94662BA5E7F0 (U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController/<Coroutine_CountDown>d__56::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_CountDownU3Ed__56_System_Collections_IEnumerator_Reset_m338CD3D545D09EC50C287990F8A231A4D13488DD (U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_CountDownU3Ed__56_System_Collections_IEnumerator_Reset_m338CD3D545D09EC50C287990F8A231A4D13488DD_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Coroutine_CountDown>d__56::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_CountDownU3Ed__56_System_Collections_IEnumerator_get_Current_mF685289AA053E19468C3D96C63D59CCD20AC2D58 (U3CCoroutine_CountDownU3Ed__56_t83300EF4B7211B03965849426050452600414143 * __this, const RuntimeMethod* method)
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
// System.Void PlayerController/<Coroutine_Fadeout>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_FadeoutU3Ed__57__ctor_m46396A5F1B841B289F58B40ED0E90BD6C6D46781 (U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerController/<Coroutine_Fadeout>d__57::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_FadeoutU3Ed__57_System_IDisposable_Dispose_m8574116131BA99EF0C702DDB1CC48F8A83302BDA (U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Coroutine_Fadeout>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_FadeoutU3Ed__57_MoveNext_mF779CC56A1703590DE90AAFDC1DBD24CC3DC9612 (U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_00ba;
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
	}

IL_002c:
	{
		// var alphaValue = m_alphaCurve.Evaluate(time);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_4 = V_1;
		NullCheck(L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = L_4->get_m_alphaCurve_38();
		float L_6 = __this->get_U3CtimeU3E5__2_3();
		NullCheck(L_5);
		float L_7;
		L_7 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// var alpha = m_alphaFrom * (1f - alphaValue) + m_alphaTo * alphaValue;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_m_alphaFrom_57();
		float L_10 = V_2;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_m_alphaTo_58();
		float L_13 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_9, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_10)))), (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13))));
		// m_countText.color = new Color(1f, 1f, 1f, alpha);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_14 = V_1;
		NullCheck(L_14);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = L_14->get_m_countText_40();
		float L_16 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_17), (1.0f), (1.0f), (1.0f), L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_17);
		// time += Time.deltaTime / m_duration;
		float L_18 = __this->get_U3CtimeU3E5__2_3();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->get_m_duration_51();
		__this->set_U3CtimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_18, (float)((float)((float)L_19/(float)L_21)))));
		// if (time > 1f)
		float L_22 = __this->get_U3CtimeU3E5__2_3();
		if ((!(((float)L_22) > ((float)(1.0f)))))
		{
			goto IL_00aa;
		}
	}
	{
		// m_countCanvas.enabled = false;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_23 = V_1;
		NullCheck(L_23);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_24 = L_23->get_m_countCanvas_39();
		NullCheck(L_24);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_24, (bool)0, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_00aa:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ba:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_002c;
	}
}
// System.Object PlayerController/<Coroutine_Fadeout>d__57::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_FadeoutU3Ed__57_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m276D53EA9D0F740EE80C7D93E3383A807D0E01C4 (U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController/<Coroutine_Fadeout>d__57::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_FadeoutU3Ed__57_System_Collections_IEnumerator_Reset_mB1185F67DAB05D64E3257D823097024BCBE09C77 (U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_FadeoutU3Ed__57_System_Collections_IEnumerator_Reset_mB1185F67DAB05D64E3257D823097024BCBE09C77_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Coroutine_Fadeout>d__57::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_FadeoutU3Ed__57_System_Collections_IEnumerator_get_Current_mC45806DC2619A0356F413B1E746AFE8968353F9F (U3CCoroutine_FadeoutU3Ed__57_t6012AC9FAAAF9CD9C41161133AE05C58931BE81B * __this, const RuntimeMethod* method)
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
// System.Void PlayerController/<Coroutine_StartBoost>d__58::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_StartBoostU3Ed__58__ctor_m0E60E40A1373C84129346A5E5F7F8ADD738DA2E8 (U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerController/<Coroutine_StartBoost>d__58::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_StartBoostU3Ed__58_System_IDisposable_Dispose_m021524F0DD0B843AAA993E027ACD2E73E2581BB9 (U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Coroutine_StartBoost>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutine_StartBoostU3Ed__58_MoveNext_m06320D55DBBDABDECAFA43A8C2FDF326B0A1FA84 (U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
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
				goto IL_00b0;
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
		// if(Input.GetAxis("Vertical") > 0)
		float L_4;
		L_4 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0090;
		}
	}
	{
		// yield return waitForFixedUpdate;
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_5 = __this->get_U3CwaitForFixedUpdateU3E5__3_4();
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_playerRb.AddForce(transform.forward * m_startBoostSpeed, ForceMode.VelocityChange);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_6 = V_1;
		NullCheck(L_6);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7 = L_6->get_m_playerRb_7();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_8 = V_1;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_9, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_m_startBoostSpeed_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_7, L_13, 2, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_0090:
	{
		// if (time > m_startBoostTime)
		float L_14 = __this->get_U3CtimeU3E5__2_3();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get_m_startBoostTime_22();
		if ((!(((float)L_14) > ((float)L_16))))
		{
			goto IL_00a0;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_00a0:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while(true)
		goto IL_003f;
	}
}
// System.Object PlayerController/<Coroutine_StartBoost>d__58::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_StartBoostU3Ed__58_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m27935857275E67D3534193F683AE39F974DBA64A (U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController/<Coroutine_StartBoost>d__58::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutine_StartBoostU3Ed__58_System_Collections_IEnumerator_Reset_m93FDA0D5761CA8ADBA2C28048096321D1F1CB800 (U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutine_StartBoostU3Ed__58_System_Collections_IEnumerator_Reset_m93FDA0D5761CA8ADBA2C28048096321D1F1CB800_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Coroutine_StartBoost>d__58::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutine_StartBoostU3Ed__58_System_Collections_IEnumerator_get_Current_m4FA41506D2AD1D678F58F74BF653AB03BBF46275 (U3CCoroutine_StartBoostU3Ed__58_t99F9E2A38EB6B5F555B97575F6C92A1E66160D46 * __this, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_SetState_m5507C3CBB297F4E0B15271B60E155B3E7CBB02E5_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// m_state = state;
		int32_t L_0 = ___state0;
		__this->set_m_state_5(L_0);
		// }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		float L_2 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___a0;
		float L_4 = L_3.get_y_2();
		float L_5 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___a0;
		float L_7 = L_6.get_z_3();
		float L_8 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___a0;
		float L_10 = L_9.get_w_4();
		float L_11 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
