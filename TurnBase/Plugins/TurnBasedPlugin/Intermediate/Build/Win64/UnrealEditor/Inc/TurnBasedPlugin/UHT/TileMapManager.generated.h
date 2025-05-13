// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileMapManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATileBase;
#ifdef TURNBASEDPLUGIN_TileMapManager_generated_h
#error "TileMapManager.generated.h already included, missing '#pragma once' in TileMapManager.h"
#endif
#define TURNBASEDPLUGIN_TileMapManager_generated_h

#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindPath); \
	DECLARE_FUNCTION(execGetTileAt); \
	DECLARE_FUNCTION(execGetTileAtIndex); \
	DECLARE_FUNCTION(execClearTiles); \
	DECLARE_FUNCTION(execGenerateTileMap);


#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATileMapManager(); \
	friend struct Z_Construct_UClass_ATileMapManager_Statics; \
public: \
	DECLARE_CLASS(ATileMapManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnBasedPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATileMapManager)


#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATileMapManager(ATileMapManager&&); \
	ATileMapManager(const ATileMapManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileMapManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileMapManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATileMapManager) \
	NO_API virtual ~ATileMapManager();


#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_9_PROLOG
#define FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPLUGIN_API UClass* StaticClass<class ATileMapManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
