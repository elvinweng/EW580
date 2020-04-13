// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FTobiiProjectileTraceData;
struct FVector;
struct FHitResult;
struct FTobiiBallisticData;
struct FTobiiBallisticResult;
struct FTobiiAccelerationBasedHomingData;
struct FTobiiAccelerationBasedHomingResult;
struct FRotator;
#ifdef TOBIIINTERACTIONS_TobiiInteractionsBlueprintLibrary_generated_h
#error "TobiiInteractionsBlueprintLibrary.generated.h already included, missing '#pragma once' in TobiiInteractionsBlueprintLibrary.h"
#endif
#define TOBIIINTERACTIONS_TobiiInteractionsBlueprintLibrary_generated_h

#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTraceBallisticProjectilePath) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTobiiProjectileTraceData,Z_Param_Out_InputData); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutTracedPath); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::TraceBallisticProjectilePath(Z_Param_WorldContextObject,Z_Param_Out_InputData,Z_Param_Out_OutTracedPath,Z_Param_Out_OutHitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNeededInitialVelocityForBallisticProjectile) \
	{ \
		P_GET_STRUCT_REF(FTobiiBallisticData,Z_Param_Out_InputData); \
		P_GET_TARRAY_REF(FTobiiBallisticResult,Z_Param_Out_Results); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::FindNeededInitialVelocityForBallisticProjectile(Z_Param_Out_InputData,Z_Param_Out_Results); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNeededAccelerationForAccelerationBasedHomingProjectile) \
	{ \
		P_GET_STRUCT_REF(FTobiiAccelerationBasedHomingData,Z_Param_Out_InputData); \
		P_GET_STRUCT_REF(FTobiiAccelerationBasedHomingResult,Z_Param_Out_BestResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::FindNeededAccelerationForAccelerationBasedHomingProjectile(Z_Param_Out_InputData,Z_Param_Out_BestResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRealQuarticRoots) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_C); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_E); \
		P_GET_TARRAY_REF(float,Z_Param_Out_OutRealRoots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiInteractionsBlueprintLibrary::FindRealQuarticRoots(Z_Param_A,Z_Param_B,Z_Param_C,Z_Param_D,Z_Param_E,Z_Param_Out_OutRealRoots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRealCubicRoots) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_C); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_D); \
		P_GET_TARRAY_REF(float,Z_Param_Out_OutRealRoots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiInteractionsBlueprintLibrary::FindRealCubicRoots(Z_Param_A,Z_Param_B,Z_Param_C,Z_Param_D,Z_Param_Out_OutRealRoots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRealSquareRoots) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_C); \
		P_GET_TARRAY_REF(float,Z_Param_Out_OutRealRoots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiInteractionsBlueprintLibrary::FindRealSquareRoots(Z_Param_A,Z_Param_B,Z_Param_C,Z_Param_Out_OutRealRoots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeInfiniteScreenCameraRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_OriginalCameraRotation); \
		P_GET_STRUCT(FRotator,Z_Param_InfiniteScreenAngles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::MakeInfiniteScreenCameraRotator(Z_Param_OriginalCameraRotation,Z_Param_InfiniteScreenAngles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateSmoothPitchStep) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ViewPitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::CalculateSmoothPitchStep(Z_Param_ViewPitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsThrowAtGazeEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsThrowAtGazeEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFireAtGazeEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsFireAtGazeEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAimAtGazeEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsAimAtGazeEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCleanUIEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsCleanUIEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInfiniteScreenEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsInfiniteScreenEnabled(); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceBallisticProjectilePath) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTobiiProjectileTraceData,Z_Param_Out_InputData); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutTracedPath); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::TraceBallisticProjectilePath(Z_Param_WorldContextObject,Z_Param_Out_InputData,Z_Param_Out_OutTracedPath,Z_Param_Out_OutHitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNeededInitialVelocityForBallisticProjectile) \
	{ \
		P_GET_STRUCT_REF(FTobiiBallisticData,Z_Param_Out_InputData); \
		P_GET_TARRAY_REF(FTobiiBallisticResult,Z_Param_Out_Results); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::FindNeededInitialVelocityForBallisticProjectile(Z_Param_Out_InputData,Z_Param_Out_Results); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNeededAccelerationForAccelerationBasedHomingProjectile) \
	{ \
		P_GET_STRUCT_REF(FTobiiAccelerationBasedHomingData,Z_Param_Out_InputData); \
		P_GET_STRUCT_REF(FTobiiAccelerationBasedHomingResult,Z_Param_Out_BestResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::FindNeededAccelerationForAccelerationBasedHomingProjectile(Z_Param_Out_InputData,Z_Param_Out_BestResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRealQuarticRoots) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_C); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_D); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_E); \
		P_GET_TARRAY_REF(float,Z_Param_Out_OutRealRoots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiInteractionsBlueprintLibrary::FindRealQuarticRoots(Z_Param_A,Z_Param_B,Z_Param_C,Z_Param_D,Z_Param_E,Z_Param_Out_OutRealRoots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRealCubicRoots) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_C); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_D); \
		P_GET_TARRAY_REF(float,Z_Param_Out_OutRealRoots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiInteractionsBlueprintLibrary::FindRealCubicRoots(Z_Param_A,Z_Param_B,Z_Param_C,Z_Param_D,Z_Param_Out_OutRealRoots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRealSquareRoots) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_C); \
		P_GET_TARRAY_REF(float,Z_Param_Out_OutRealRoots); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTobiiInteractionsBlueprintLibrary::FindRealSquareRoots(Z_Param_A,Z_Param_B,Z_Param_C,Z_Param_Out_OutRealRoots); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeInfiniteScreenCameraRotator) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_OriginalCameraRotation); \
		P_GET_STRUCT(FRotator,Z_Param_InfiniteScreenAngles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::MakeInfiniteScreenCameraRotator(Z_Param_OriginalCameraRotation,Z_Param_InfiniteScreenAngles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateSmoothPitchStep) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ViewPitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::CalculateSmoothPitchStep(Z_Param_ViewPitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsThrowAtGazeEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsThrowAtGazeEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFireAtGazeEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsFireAtGazeEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAimAtGazeEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsAimAtGazeEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCleanUIEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsCleanUIEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInfiniteScreenEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsInfiniteScreenEnabled(); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiInteractionsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiInteractionsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiInteractionsBlueprintLibrary)


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiInteractionsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiInteractionsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiInteractionsBlueprintLibrary)


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiInteractionsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiInteractionsBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiInteractionsBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiInteractionsBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiInteractionsBlueprintLibrary(UTobiiInteractionsBlueprintLibrary&&); \
	NO_API UTobiiInteractionsBlueprintLibrary(const UTobiiInteractionsBlueprintLibrary&); \
public:


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiInteractionsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiInteractionsBlueprintLibrary(UTobiiInteractionsBlueprintLibrary&&); \
	NO_API UTobiiInteractionsBlueprintLibrary(const UTobiiInteractionsBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiInteractionsBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiInteractionsBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiInteractionsBlueprintLibrary)


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET
#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_20_PROLOG
#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_RPC_WRAPPERS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_INCLASS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiInteractionsBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIINTERACTIONS_API UClass* StaticClass<class UTobiiInteractionsBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
