// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedPlugin/Public/TileBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TURNBASEDPLUGIN_API UClass* Z_Construct_UClass_ATileBase();
TURNBASEDPLUGIN_API UClass* Z_Construct_UClass_ATileBase_NoRegister();
TURNBASEDPLUGIN_API UClass* Z_Construct_UClass_ATileMapManager_NoRegister();
TURNBASEDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSearchTileData();
UPackage* Z_Construct_UPackage__Script_TurnBasedPlugin();
// End Cross Module References

// Begin ScriptStruct FSearchTileData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchTileData;
class UScriptStruct* FSearchTileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchTileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchTileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchTileData, (UObject*)Z_Construct_UPackage__Script_TurnBasedPlugin(), TEXT("SearchTileData"));
	}
	return Z_Registration_Info_UScriptStruct_SearchTileData.OuterSingleton;
}
template<> TURNBASEDPLUGIN_API UScriptStruct* StaticStruct<FSearchTileData>()
{
	return FSearchTileData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSearchTileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GCost_MetaData[] = {
		{ "Category", "Pathfinding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HCost_MetaData[] = {
		{ "Category", "Pathfinding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc7\xa5 \xc5\xb8\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc7\xa5 \xc5\xb8\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FCost_MetaData[] = {
		{ "Category", "Pathfinding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GCost\xef\xbf\xbd\xef\xbf\xbd HCost\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GCost\xef\xbf\xbd\xef\xbf\xbd HCost\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/TileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HCost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FCost;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchTileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchTileData, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchTileData, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_GCost = { "GCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchTileData, GCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GCost_MetaData), NewProp_GCost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_HCost = { "HCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchTileData, HCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HCost_MetaData), NewProp_HCost_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_FCost = { "FCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchTileData, FCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FCost_MetaData), NewProp_FCost_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchTileData, Parent), Z_Construct_UClass_ATileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchTileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_GCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_HCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_FCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchTileData_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchTileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchTileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPlugin,
	nullptr,
	&NewStructOps,
	"SearchTileData",
	Z_Construct_UScriptStruct_FSearchTileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchTileData_Statics::PropPointers),
	sizeof(FSearchTileData),
	alignof(FSearchTileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchTileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSearchTileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSearchTileData()
{
	if (!Z_Registration_Info_UScriptStruct_SearchTileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchTileData.InnerSingleton, Z_Construct_UScriptStruct_FSearchTileData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SearchTileData.InnerSingleton;
}
// End ScriptStruct FSearchTileData

// Begin Class ATileBase Function GetTileSize
struct TileBase_eventGetTileSize_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	TileBase_eventGetTileSize_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_ATileBase_GetTileSize = FName(TEXT("GetTileSize"));
float ATileBase::GetTileSize()
{
	UFunction* Func = FindFunctionChecked(NAME_ATileBase_GetTileSize);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		TileBase_eventGetTileSize_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetTileSize_Implementation();
	}
}
struct Z_Construct_UFunction_ATileBase_GetTileSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/TileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATileBase_GetTileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileBase_eventGetTileSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileBase_GetTileSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileBase_GetTileSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileBase_GetTileSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileBase_GetTileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileBase, nullptr, "GetTileSize", nullptr, nullptr, Z_Construct_UFunction_ATileBase_GetTileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATileBase_GetTileSize_Statics::PropPointers), sizeof(TileBase_eventGetTileSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileBase_GetTileSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATileBase_GetTileSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(TileBase_eventGetTileSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATileBase_GetTileSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATileBase_GetTileSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATileBase::execGetTileSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTileSize_Implementation();
	P_NATIVE_END;
}
// End Class ATileBase Function GetTileSize

// Begin Class ATileBase
void ATileBase::StaticRegisterNativesATileBase()
{
	UClass* Class = ATileBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTileSize", &ATileBase::execGetTileSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATileBase);
UClass* Z_Construct_UClass_ATileBase_NoRegister()
{
	return ATileBase::StaticClass();
}
struct Z_Construct_UClass_ATileBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TileBase.h" },
		{ "ModuleRelativePath", "Public/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMapManager_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchTileData_MetaData[] = {
		{ "Category", "Pathfinding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWalkable_MetaData[] = {
		{ "Category", "Pathfinding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainCost_MetaData[] = {
		{ "Category", "Pathfinding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd: \xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/TileBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd: \xef\xbf\xbd\xef\xbf\xbd\xd6\xb9\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMapManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchTileData;
	static void NewProp_bIsWalkable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWalkable;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TerrainCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATileBase_GetTileSize, "GetTileSize" }, // 4073938358
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_TileMapManager = { "TileMapManager", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, TileMapManager), Z_Construct_UClass_ATileMapManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMapManager_MetaData), NewProp_TileMapManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_SearchTileData = { "SearchTileData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, SearchTileData), Z_Construct_UScriptStruct_FSearchTileData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchTileData_MetaData), NewProp_SearchTileData_MetaData) }; // 985965346
void Z_Construct_UClass_ATileBase_Statics::NewProp_bIsWalkable_SetBit(void* Obj)
{
	((ATileBase*)Obj)->bIsWalkable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_bIsWalkable = { "bIsWalkable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATileBase), &Z_Construct_UClass_ATileBase_Statics::NewProp_bIsWalkable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWalkable_MetaData), NewProp_bIsWalkable_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_TerrainCost = { "TerrainCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, TerrainCost), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainCost_MetaData), NewProp_TerrainCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_TileMapManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_SearchTileData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_bIsWalkable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_TerrainCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATileBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATileBase_Statics::ClassParams = {
	&ATileBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATileBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATileBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATileBase()
{
	if (!Z_Registration_Info_UClass_ATileBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATileBase.OuterSingleton, Z_Construct_UClass_ATileBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATileBase.OuterSingleton;
}
template<> TURNBASEDPLUGIN_API UClass* StaticClass<ATileBase>()
{
	return ATileBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATileBase);
ATileBase::~ATileBase() {}
// End Class ATileBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSearchTileData::StaticStruct, Z_Construct_UScriptStruct_FSearchTileData_Statics::NewStructOps, TEXT("SearchTileData"), &Z_Registration_Info_UScriptStruct_SearchTileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchTileData), 985965346U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATileBase, ATileBase::StaticClass, TEXT("ATileBase"), &Z_Registration_Info_UClass_ATileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATileBase), 1769111212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_4291666362(TEXT("/Script/TurnBasedPlugin"),
	Z_CompiledInDeferFile_FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TurnBasedTemplate_Plugins_TurnBasedPlugin_Source_TurnBasedPlugin_Public_TileBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
