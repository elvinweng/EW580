// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTobiiGazeFocusData;
#ifdef TOBIIGTOM_TobiiGazeFocusManagerComponent_generated_h
#error "TobiiGazeFocusManagerComponent.generated.h already included, missing '#pragma once' in TobiiGazeFocusManagerComponent.h"
#endif
#define TOBIIGTOM_TobiiGazeFocusManagerComponent_generated_h

#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllFilteredFocusData) \
	{ \
		P_GET_TARRAY_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllFilteredFocusData(Z_Param_Out_OutFocusData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBestFilteredWidgetComponentFocusData) \
	{ \
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBestFilteredWidgetComponentFocusData(Z_Param_Out_OutFocusData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBestFilteredPrimitiveComponentFocusData) \
	{ \
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBestFilteredPrimitiveComponentFocusData(Z_Param_Out_OutFocusData); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllFilteredFocusData) \
	{ \
		P_GET_TARRAY_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllFilteredFocusData(Z_Param_Out_OutFocusData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBestFilteredWidgetComponentFocusData) \
	{ \
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBestFilteredWidgetComponentFocusData(Z_Param_Out_OutFocusData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBestFilteredPrimitiveComponentFocusData) \
	{ \
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBestFilteredPrimitiveComponentFocusData(Z_Param_Out_OutFocusData); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusManagerComponent(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusManagerComponent)


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusManagerComponent(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusManagerComponent)


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGazeFocusManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGazeFocusManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusManagerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusManagerComponent(UTobiiGazeFocusManagerComponent&&); \
	NO_API UTobiiGazeFocusManagerComponent(const UTobiiGazeFocusManagerComponent&); \
public:


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusManagerComponent(UTobiiGazeFocusManagerComponent&&); \
	NO_API UTobiiGazeFocusManagerComponent(const UTobiiGazeFocusManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusManagerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTobiiGazeFocusManagerComponent)


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_PRIVATE_PROPERTY_OFFSET
#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_21_PROLOG
#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_RPC_WRAPPERS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_INCLASS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_INCLASS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIGTOM_API UClass* StaticClass<class UTobiiGazeFocusManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGazeFocusManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
