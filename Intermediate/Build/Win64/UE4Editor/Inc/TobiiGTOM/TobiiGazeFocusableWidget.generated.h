// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTobiiGazeFocusableWidget;
class UWidgetComponent;
#ifdef TOBIIGTOM_TobiiGazeFocusableWidget_generated_h
#error "TobiiGazeFocusableWidget.generated.h already included, missing '#pragma once' in TobiiGazeFocusableWidget.h"
#endif
#define TOBIIGTOM_TobiiGazeFocusableWidget_generated_h

#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_23_DELEGATE \
struct _Script_TobiiGTOM_eventWidgetHoverSignature_Parms \
{ \
	UTobiiGazeFocusableWidget* FocusedWidget; \
}; \
static inline void FWidgetHoverSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetHoverSignature, UTobiiGazeFocusableWidget* FocusedWidget) \
{ \
	_Script_TobiiGTOM_eventWidgetHoverSignature_Parms Parms; \
	Parms.FocusedWidget=FocusedWidget; \
	WidgetHoverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_22_DELEGATE \
struct _Script_TobiiGTOM_eventWidgetGazeFocusSignature_Parms \
{ \
	UTobiiGazeFocusableWidget* FocusedWidget; \
}; \
static inline void FWidgetGazeFocusSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetGazeFocusSignature, UTobiiGazeFocusableWidget* FocusedWidget) \
{ \
	_Script_TobiiGTOM_eventWidgetGazeFocusSignature_Parms Parms; \
	Parms.FocusedWidget=FocusedWidget; \
	WidgetGazeFocusSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveGazeFocusableWidgetToPollHitsFrom) \
	{ \
		P_GET_OBJECT(UTobiiGazeFocusableWidget,Z_Param_GazeFocusableWidgetToStopPolling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGazeFocusableWidgetToPollHitsFrom(Z_Param_GazeFocusableWidgetToStopPolling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGazeFocusableWidgetToPollHitsFrom) \
	{ \
		P_GET_OBJECT(UTobiiGazeFocusableWidget,Z_Param_GazeFocusableWidgetToPoll); \
		P_GET_UBOOL(Z_Param_PollGazeHits); \
		P_GET_UBOOL(Z_Param_PollMouseHits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGazeFocusableWidgetToPollHitsFrom(Z_Param_GazeFocusableWidgetToPoll,Z_Param_PollGazeHits,Z_Param_PollMouseHits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCleanUIAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCleanUIAlpha(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInFocusCollection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInFocusCollection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWorldSpaceWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWorldSpaceWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHoveredByPointer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHoveredByPointer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldSpaceHostWidgetComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidgetComponent**)Z_Param__Result=P_THIS->GetWorldSpaceHostWidgetComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWidgetToGTOM) \
	{ \
		P_GET_OBJECT(UWidgetComponent,Z_Param_HostWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterWidgetToGTOM(Z_Param_HostWidget); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveGazeFocusableWidgetToPollHitsFrom) \
	{ \
		P_GET_OBJECT(UTobiiGazeFocusableWidget,Z_Param_GazeFocusableWidgetToStopPolling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGazeFocusableWidgetToPollHitsFrom(Z_Param_GazeFocusableWidgetToStopPolling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGazeFocusableWidgetToPollHitsFrom) \
	{ \
		P_GET_OBJECT(UTobiiGazeFocusableWidget,Z_Param_GazeFocusableWidgetToPoll); \
		P_GET_UBOOL(Z_Param_PollGazeHits); \
		P_GET_UBOOL(Z_Param_PollMouseHits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGazeFocusableWidgetToPollHitsFrom(Z_Param_GazeFocusableWidgetToPoll,Z_Param_PollGazeHits,Z_Param_PollMouseHits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCleanUIAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCleanUIAlpha(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInFocusCollection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInFocusCollection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWorldSpaceWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWorldSpaceWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHoveredByPointer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHoveredByPointer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldSpaceHostWidgetComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidgetComponent**)Z_Param__Result=P_THIS->GetWorldSpaceHostWidgetComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWidgetToGTOM) \
	{ \
		P_GET_OBJECT(UWidgetComponent,Z_Param_HostWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterWidgetToGTOM(Z_Param_HostWidget); \
		P_NATIVE_END; \
	}


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusableWidget(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusableWidget_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusableWidget, USizeBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusableWidget)


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusableWidget(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusableWidget_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusableWidget, USizeBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusableWidget)


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGazeFocusableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGazeFocusableWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusableWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusableWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusableWidget(UTobiiGazeFocusableWidget&&); \
	NO_API UTobiiGazeFocusableWidget(const UTobiiGazeFocusableWidget&); \
public:


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGazeFocusableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusableWidget(UTobiiGazeFocusableWidget&&); \
	NO_API UTobiiGazeFocusableWidget(const UTobiiGazeFocusableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusableWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGazeFocusableWidget)


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_PRIVATE_PROPERTY_OFFSET
#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_37_PROLOG
#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_RPC_WRAPPERS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_INCLASS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_PRIVATE_PROPERTY_OFFSET \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_INCLASS_NO_PURE_DECLS \
	D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiGazeFocusableWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIGTOM_API UClass* StaticClass<class UTobiiGazeFocusableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__jenkins_UE4_Stage_4_22_Package_HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
