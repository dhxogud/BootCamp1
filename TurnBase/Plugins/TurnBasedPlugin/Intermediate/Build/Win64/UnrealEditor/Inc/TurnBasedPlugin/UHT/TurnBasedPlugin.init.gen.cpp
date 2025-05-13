// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBasedPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TurnBasedPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TurnBasedPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_TurnBasedPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TurnBasedPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1D77D1AF,
				0xE95ABAB2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TurnBasedPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TurnBasedPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TurnBasedPlugin(Z_Construct_UPackage__Script_TurnBasedPlugin, TEXT("/Script/TurnBasedPlugin"), Z_Registration_Info_UPackage__Script_TurnBasedPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1D77D1AF, 0xE95ABAB2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
