// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNBASEDPLUGIN_TileBase_generated_h
#error "TileBase.generated.h already included, missing '#pragma once' in TileBase.h"
#endif
#define TURNBASEDPLUGIN_TileBase_generated_h

#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSearchTileData_Statics; \
	TURNBASEDPLUGIN_API static class UScriptStruct* StaticStruct();


template<> TURNBASEDPLUGIN_API UScriptStruct* StaticStruct<struct FSearchTileData>();

#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetTileSize_Implementation(); \
	DECLARE_FUNCTION(execGetTileSize);


#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_42_CALLBACK_WRAPPERS
#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATileBase(); \
	friend struct Z_Construct_UClass_ATileBase_Statics; \
public: \
	DECLARE_CLASS(ATileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnBasedPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATileBase)


#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATileBase(ATileBase&&); \
	ATileBase(const ATileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATileBase) \
	NO_API virtual ~ATileBase();


#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_39_PROLOG
#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_42_CALLBACK_WRAPPERS \
	FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_42_INCLASS_NO_PURE_DECLS \
	FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPLUGIN_API UClass* StaticClass<class ATileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
