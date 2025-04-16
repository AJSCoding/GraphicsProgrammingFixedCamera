// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFixedGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FixedGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FixedGame()
	{
		if (!Z_Registration_Info_UPackage__Script_FixedGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FixedGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1C128465,
				0x59E478D2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FixedGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FixedGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FixedGame(Z_Construct_UPackage__Script_FixedGame, TEXT("/Script/FixedGame"), Z_Registration_Info_UPackage__Script_FixedGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1C128465, 0x59E478D2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
