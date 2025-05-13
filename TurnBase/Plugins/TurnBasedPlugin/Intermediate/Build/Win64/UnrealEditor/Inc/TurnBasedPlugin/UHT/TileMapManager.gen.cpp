// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPlugin/Public/TileMapManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileMapManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
TURNBASEDPLUGIN_API UClass* Z_Construct_UClass_ATileBase_NoRegister();
TURNBASEDPLUGIN_API UClass* Z_Construct_UClass_ATileMapManager();
TURNBASEDPLUGIN_API UClass* Z_Construct_UClass_ATileMapManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnBasedPlugin();
// End Cross Module References

// Begin Class ATileMapManager Function ClearTiles
struct Z_Construct_UFunction_ATileMapManager_ClearTiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileMapManager_ClearTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileMapManager, nullptr, "ClearTiles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_ClearTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATileMapManager_ClearTiles_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATileMapManager_ClearTiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATileMapManager_ClearTiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATileMapManager::execClearTiles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTiles();
	P_NATIVE_END;
}
// End Class ATileMapManager Function ClearTiles

// Begin Class ATileMapManager Function FindPath
struct Z_Construct_UFunction_ATileMapManager_FindPath_Statics
{
	struct TileMapManager_eventFindPath_Parms
	{
		FVector StartLocation;
		FVector EndLocation;
		TArray<ATileBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A Star" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATileMapManager_FindPath_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapManager_eventFindPath_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATileMapManager_FindPath_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapManager_eventFindPath_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATileMapManager_FindPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATileBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATileMapManager_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapManager_eventFindPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileMapManager_FindPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapManager_FindPath_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapManager_FindPath_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapManager_FindPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapManager_FindPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_FindPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileMapManager_FindPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileMapManager, nullptr, "FindPath", nullptr, nullptr, Z_Construct_UFunction_ATileMapManager_FindPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_FindPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATileMapManager_FindPath_Statics::TileMapManager_eventFindPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_FindPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATileMapManager_FindPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATileMapManager_FindPath_Statics::TileMapManager_eventFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATileMapManager_FindPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATileMapManager_FindPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATileMapManager::execFindPath)
{
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_EndLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ATileBase*>*)Z_Param__Result=P_THIS->FindPath(Z_Param_StartLocation,Z_Param_EndLocation);
	P_NATIVE_END;
}
// End Class ATileMapManager Function FindPath

// Begin Class ATileMapManager Function GenerateTileMap
struct Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics
{
	struct TileMapManager_eventGenerateTileMap_Parms
	{
		int32 MapWidth;
		int32 MapHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapManager_eventGenerateTileMap_Parms, MapWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapManager_eventGenerateTileMap_Parms, MapHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::NewProp_MapHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileMapManager, nullptr, "GenerateTileMap", nullptr, nullptr, Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::TileMapManager_eventGenerateTileMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::TileMapManager_eventGenerateTileMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATileMapManager_GenerateTileMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATileMapManager_GenerateTileMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATileMapManager::execGenerateTileMap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MapWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_MapHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateTileMap(Z_Param_MapWidth,Z_Param_MapHeight);
	P_NATIVE_END;
}
// End Class ATileMapManager Function GenerateTileMap

// Begin Class ATileMapManager Function GetTileAt
struct Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics
{
	struct TileMapManager_eventGetTileAt_Parms
	{
		FVector Location;
		ATileBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xc3\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xc3\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapManager_eventGetTileAt_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapManager_eventGetTileAt_Parms, ReturnValue), Z_Construct_UClass_ATileBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileMapManager, nullptr, "GetTileAt", nullptr, nullptr, Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::TileMapManager_eventGetTileAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::TileMapManager_eventGetTileAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATileMapManager_GetTileAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATileMapManager_GetTileAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATileMapManager::execGetTileAt)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ATileBase**)Z_Param__Result=P_THIS->GetTileAt(Z_Param_Location);
	P_NATIVE_END;
}
// End Class ATileMapManager Function GetTileAt

// Begin Class ATileMapManager Function GetTileAtIndex
struct Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics
{
	struct TileMapManager_eventGetTileAtIndex_Parms
	{
		int32 Index;
		ATileBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Map" },
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapManager_eventGetTileAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapManager_eventGetTileAtIndex_Parms, ReturnValue), Z_Construct_UClass_ATileBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileMapManager, nullptr, "GetTileAtIndex", nullptr, nullptr, Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::TileMapManager_eventGetTileAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::TileMapManager_eventGetTileAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATileMapManager_GetTileAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATileMapManager_GetTileAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATileMapManager::execGetTileAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ATileBase**)Z_Param__Result=P_THIS->GetTileAtIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class ATileMapManager Function GetTileAtIndex

// Begin Class ATileMapManager
void ATileMapManager::StaticRegisterNativesATileMapManager()
{
	UClass* Class = ATileMapManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearTiles", &ATileMapManager::execClearTiles },
		{ "FindPath", &ATileMapManager::execFindPath },
		{ "GenerateTileMap", &ATileMapManager::execGenerateTileMap },
		{ "GetTileAt", &ATileMapManager::execGetTileAt },
		{ "GetTileAtIndex", &ATileMapManager::execGetTileAtIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATileMapManager);
UClass* Z_Construct_UClass_ATileMapManager_NoRegister()
{
	return ATileMapManager::StaticClass();
}
struct Z_Construct_UClass_ATileMapManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TileMapManager.h" },
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Tile Map" },
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MapWidth_MetaData[] = {
		{ "Category", "Tile Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xc5\xa9\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xc5\xa9\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MapHeight_MetaData[] = {
		{ "Category", "Tile Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xba\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xba\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileClass_MetaData[] = {
		{ "Category", "Tile Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMap_MetaData[] = {
		{ "Category", "Tile Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad (\xef\xbf\xbd\xef\xbf\xbd)\n// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Tile Map\") <-- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// TArray<TArray<ATileBase*>> TileMap;\n" },
#endif
		{ "ModuleRelativePath", "Public/TileMapManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad (\xef\xbf\xbd\xef\xbf\xbd)\nUPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Tile Map\") <-- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nTArray<TArray<ATileBase*>> TileMap;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_MapWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_MapHeight;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TileMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATileMapManager_ClearTiles, "ClearTiles" }, // 2559144805
		{ &Z_Construct_UFunction_ATileMapManager_FindPath, "FindPath" }, // 1434026157
		{ &Z_Construct_UFunction_ATileMapManager_GenerateTileMap, "GenerateTileMap" }, // 884127402
		{ &Z_Construct_UFunction_ATileMapManager_GetTileAt, "GetTileAt" }, // 3850114261
		{ &Z_Construct_UFunction_ATileMapManager_GetTileAtIndex, "GetTileAtIndex" }, // 3337204474
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileMapManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATileMapManager_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileMapManager, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATileMapManager_Statics::NewProp_m_MapWidth = { "m_MapWidth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileMapManager, m_MapWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MapWidth_MetaData), NewProp_m_MapWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATileMapManager_Statics::NewProp_m_MapHeight = { "m_MapHeight", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileMapManager, m_MapHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MapHeight_MetaData), NewProp_m_MapHeight_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATileMapManager_Statics::NewProp_TileClass = { "TileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileMapManager, TileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileClass_MetaData), NewProp_TileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileMapManager_Statics::NewProp_TileMap_Inner = { "TileMap", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATileBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATileMapManager_Statics::NewProp_TileMap = { "TileMap", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileMapManager, TileMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMap_MetaData), NewProp_TileMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileMapManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileMapManager_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileMapManager_Statics::NewProp_m_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileMapManager_Statics::NewProp_m_MapHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileMapManager_Statics::NewProp_TileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileMapManager_Statics::NewProp_TileMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileMapManager_Statics::NewProp_TileMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileMapManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATileMapManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileMapManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATileMapManager_Statics::ClassParams = {
	&ATileMapManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATileMapManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATileMapManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATileMapManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATileMapManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATileMapManager()
{
	if (!Z_Registration_Info_UClass_ATileMapManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATileMapManager.OuterSingleton, Z_Construct_UClass_ATileMapManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATileMapManager.OuterSingleton;
}
template<> TURNBASEDPLUGIN_API UClass* StaticClass<ATileMapManager>()
{
	return ATileMapManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATileMapManager);
ATileMapManager::~ATileMapManager() {}
// End Class ATileMapManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATileMapManager, ATileMapManager::StaticClass, TEXT("ATileMapManager"), &Z_Registration_Info_UClass_ATileMapManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATileMapManager), 2346778300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_1290759059(TEXT("/Script/TurnBasedPlugin"),
	Z_CompiledInDeferFile_FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileMapManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
