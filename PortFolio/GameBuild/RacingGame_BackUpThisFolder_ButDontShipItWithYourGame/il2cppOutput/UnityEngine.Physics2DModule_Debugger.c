#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[64] = 
{
	{ 0, 0 } /* 0x06000001 System.String UnityEngine.PhysicsScene2D::ToString() */,
	{ 0, 0 } /* 0x06000002 System.Int32 UnityEngine.PhysicsScene2D::GetHashCode() */,
	{ 0, 0 } /* 0x06000003 System.Boolean UnityEngine.PhysicsScene2D::Equals(System.Object) */,
	{ 0, 0 } /* 0x06000004 System.Boolean UnityEngine.PhysicsScene2D::Equals(UnityEngine.PhysicsScene2D) */,
	{ 0, 0 } /* 0x06000005 UnityEngine.RaycastHit2D UnityEngine.PhysicsScene2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000006 UnityEngine.RaycastHit2D UnityEngine.PhysicsScene2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D) */,
	{ 0, 0 } /* 0x06000007 UnityEngine.RaycastHit2D UnityEngine.PhysicsScene2D::Raycast_Internal(UnityEngine.PhysicsScene2D,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D) */,
	{ 0, 0 } /* 0x06000008 System.Int32 UnityEngine.PhysicsScene2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0 } /* 0x06000009 System.Int32 UnityEngine.PhysicsScene2D::RaycastArray_Internal(UnityEngine.PhysicsScene2D,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0 } /* 0x0600000A System.Int32 UnityEngine.PhysicsScene2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>) */,
	{ 0, 0 } /* 0x0600000B System.Int32 UnityEngine.PhysicsScene2D::RaycastList_Internal(UnityEngine.PhysicsScene2D,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>) */,
	{ 0, 0 } /* 0x0600000C System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersection(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit2D[],System.Int32) */,
	{ 0, 0 } /* 0x0600000D System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersectionArray_Internal(UnityEngine.PhysicsScene2D,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.PhysicsScene2D::Raycast_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&) */,
	{ 0, 0 } /* 0x0600000F System.Int32 UnityEngine.PhysicsScene2D::RaycastArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0 } /* 0x06000010 System.Int32 UnityEngine.PhysicsScene2D::RaycastList_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>) */,
	{ 0, 0 } /* 0x06000011 System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersectionArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0 } /* 0x06000012 UnityEngine.PhysicsScene2D UnityEngine.Physics2D::get_defaultPhysicsScene() */,
	{ 0, 0 } /* 0x06000013 System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers() */,
	{ 0, 0 } /* 0x06000014 UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2) */,
	{ 0, 0 } /* 0x06000015 UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single) */,
	{ 0, 0 } /* 0x06000016 UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000017 UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single) */,
	{ 0, 0 } /* 0x06000018 UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single) */,
	{ 0, 0 } /* 0x06000019 System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0 } /* 0x0600001A System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[],System.Single) */,
	{ 0, 0 } /* 0x0600001B System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>,System.Single) */,
	{ 0, 0 } /* 0x0600001C UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray) */,
	{ 0, 0 } /* 0x0600001D UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single) */,
	{ 0, 0 } /* 0x0600001E UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x0600001F UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll_Internal(UnityEngine.PhysicsScene2D,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000020 System.Int32 UnityEngine.Physics2D::GetRayIntersectionNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0 } /* 0x06000021 System.Int32 UnityEngine.Physics2D::GetRayIntersectionNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit2D[],System.Single) */,
	{ 0, 0 } /* 0x06000022 System.Int32 UnityEngine.Physics2D::GetRayIntersectionNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit2D[],System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000023 System.Void UnityEngine.Physics2D::.cctor() */,
	{ 0, 0 } /* 0x06000024 UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000025 System.Void UnityEngine.ContactFilter2D::CheckConsistency() */,
	{ 0, 0 } /* 0x06000026 System.Void UnityEngine.ContactFilter2D::SetLayerMask(UnityEngine.LayerMask) */,
	{ 0, 0 } /* 0x06000027 System.Void UnityEngine.ContactFilter2D::SetDepth(System.Single,System.Single) */,
	{ 0, 0 } /* 0x06000028 UnityEngine.ContactFilter2D UnityEngine.ContactFilter2D::CreateLegacyFilter(System.Int32,System.Single,System.Single) */,
	{ 0, 0 } /* 0x06000029 System.Void UnityEngine.ContactFilter2D::CheckConsistency_Injected(UnityEngine.ContactFilter2D&) */,
	{ 0, 0 } /* 0x0600002A UnityEngine.Collider2D UnityEngine.Collision2D::get_collider() */,
	{ 0, 0 } /* 0x0600002B UnityEngine.Rigidbody2D UnityEngine.Collision2D::get_rigidbody() */,
	{ 0, 0 } /* 0x0600002C UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject() */,
	{ 0, 0 } /* 0x0600002D UnityEngine.Vector2 UnityEngine.Collision2D::get_relativeVelocity() */,
	{ 0, 0 } /* 0x0600002E UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point() */,
	{ 0, 0 } /* 0x0600002F UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal() */,
	{ 0, 0 } /* 0x06000030 System.Single UnityEngine.RaycastHit2D::get_distance() */,
	{ 0, 0 } /* 0x06000031 UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider() */,
	{ 0, 0 } /* 0x06000032 UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity() */,
	{ 0, 0 } /* 0x06000033 System.Single UnityEngine.Rigidbody2D::get_mass() */,
	{ 0, 0 } /* 0x06000034 System.Void UnityEngine.Rigidbody2D::.ctor() */,
	{ 0, 0 } /* 0x06000035 System.Void UnityEngine.Rigidbody2D::get_velocity_Injected(UnityEngine.Vector2&) */,
	{ 0, 0 } /* 0x06000036 UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody() */,
	{ 0, 0 } /* 0x06000037 System.Boolean UnityEngine.Collider2D::OverlapPoint(UnityEngine.Vector2) */,
	{ 0, 0 } /* 0x06000038 System.Boolean UnityEngine.Collider2D::OverlapPoint_Injected(UnityEngine.Vector2&) */,
	{ 0, 0 } /* 0x06000039 System.Int32 UnityEngine.PolygonCollider2D::GetTotalPointCount() */,
	{ 0, 0 } /* 0x0600003A System.Int32 UnityEngine.PolygonCollider2D::get_pathCount() */,
	{ 0, 0 } /* 0x0600003B UnityEngine.Vector2[] UnityEngine.PolygonCollider2D::GetPath(System.Int32) */,
	{ 0, 0 } /* 0x0600003C UnityEngine.Vector2[] UnityEngine.PolygonCollider2D::GetPath_Internal(System.Int32) */,
	{ 0, 0 } /* 0x0600003D System.Int32 UnityEngine.CompositeCollider2D::get_pathCount() */,
	{ 0, 0 } /* 0x0600003E System.Int32 UnityEngine.CompositeCollider2D::get_pointCount() */,
	{ 0, 0 } /* 0x0600003F System.Int32 UnityEngine.CompositeCollider2D::GetPath(System.Int32,UnityEngine.Vector2[]) */,
	{ 0, 0 } /* 0x06000040 System.Int32 UnityEngine.CompositeCollider2D::GetPathArray_Internal(System.Int32,UnityEngine.Vector2[]) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsUnityEngine_Physics2DModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_Physics2DModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_Physics2DModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_Physics2DModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[64] = 
{
	{ 0, 0, 0 } /* System.String UnityEngine.PhysicsScene2D::ToString() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PhysicsScene2D::GetHashCode() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.PhysicsScene2D::Equals(System.Object) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.PhysicsScene2D::Equals(UnityEngine.PhysicsScene2D) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D UnityEngine.PhysicsScene2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D UnityEngine.PhysicsScene2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D UnityEngine.PhysicsScene2D::Raycast_Internal(UnityEngine.PhysicsScene2D,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PhysicsScene2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PhysicsScene2D::RaycastArray_Internal(UnityEngine.PhysicsScene2D,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PhysicsScene2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PhysicsScene2D::RaycastList_Internal(UnityEngine.PhysicsScene2D,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersection(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit2D[],System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersectionArray_Internal(UnityEngine.PhysicsScene2D,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.PhysicsScene2D::Raycast_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PhysicsScene2D::RaycastArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PhysicsScene2D::RaycastList_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersectionArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0, 0 } /* UnityEngine.PhysicsScene2D UnityEngine.Physics2D::get_defaultPhysicsScene() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers() */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[],System.Single) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>,System.Single) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll_Internal(UnityEngine.PhysicsScene2D,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Physics2D::GetRayIntersectionNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit2D[]) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Physics2D::GetRayIntersectionNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit2D[],System.Single) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Physics2D::GetRayIntersectionNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit2D[],System.Single,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Physics2D::.cctor() */,
	{ 0, 0, 0 } /* UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ContactFilter2D::CheckConsistency() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ContactFilter2D::SetLayerMask(UnityEngine.LayerMask) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ContactFilter2D::SetDepth(System.Single,System.Single) */,
	{ 0, 0, 0 } /* UnityEngine.ContactFilter2D UnityEngine.ContactFilter2D::CreateLegacyFilter(System.Int32,System.Single,System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ContactFilter2D::CheckConsistency_Injected(UnityEngine.ContactFilter2D&) */,
	{ 0, 0, 0 } /* UnityEngine.Collider2D UnityEngine.Collision2D::get_collider() */,
	{ 0, 0, 0 } /* UnityEngine.Rigidbody2D UnityEngine.Collision2D::get_rigidbody() */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject() */,
	{ 0, 0, 0 } /* UnityEngine.Vector2 UnityEngine.Collision2D::get_relativeVelocity() */,
	{ 0, 0, 0 } /* UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point() */,
	{ 0, 0, 0 } /* UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal() */,
	{ 0, 0, 0 } /* System.Single UnityEngine.RaycastHit2D::get_distance() */,
	{ 0, 0, 0 } /* UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider() */,
	{ 0, 0, 0 } /* UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity() */,
	{ 0, 0, 0 } /* System.Single UnityEngine.Rigidbody2D::get_mass() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Rigidbody2D::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Rigidbody2D::get_velocity_Injected(UnityEngine.Vector2&) */,
	{ 0, 0, 0 } /* UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Collider2D::OverlapPoint(UnityEngine.Vector2) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Collider2D::OverlapPoint_Injected(UnityEngine.Vector2&) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PolygonCollider2D::GetTotalPointCount() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.PolygonCollider2D::get_pathCount() */,
	{ 0, 0, 0 } /* UnityEngine.Vector2[] UnityEngine.PolygonCollider2D::GetPath(System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.Vector2[] UnityEngine.PolygonCollider2D::GetPath_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.CompositeCollider2D::get_pathCount() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.CompositeCollider2D::get_pointCount() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.CompositeCollider2D::GetPath(System.Int32,UnityEngine.Vector2[]) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.CompositeCollider2D::GetPathArray_Internal(System.Int32,UnityEngine.Vector2[]) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_Physics2DModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_Physics2DModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_Physics2DModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
