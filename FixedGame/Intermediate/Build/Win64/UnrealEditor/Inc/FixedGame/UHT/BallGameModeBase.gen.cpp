// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FixedGame/BallGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallGameModeBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FIXEDGAME_API UClass* Z_Construct_UClass_ABallGameModeBase();
FIXEDGAME_API UClass* Z_Construct_UClass_ABallGameModeBase_NoRegister();
FIXEDGAME_API UClass* Z_Construct_UClass_URollableWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FixedGame();
// End Cross Module References

// Begin Class ABallGameModeBase
void ABallGameModeBase::StaticRegisterNativesABallGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABallGameModeBase);
UClass* Z_Construct_UClass_ABallGameModeBase_NoRegister()
{
	return ABallGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ABallGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BallGameModeBase.h" },
		{ "ModuleRelativePath", "BallGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "BallGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BallGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_GameWidgetClass = { "GameWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallGameModeBase, GameWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URollableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameWidgetClass_MetaData), NewProp_GameWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_GameWidget = { "GameWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallGameModeBase, GameWidget), Z_Construct_UClass_URollableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameWidget_MetaData), NewProp_GameWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_GameWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_GameWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABallGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FixedGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallGameModeBase_Statics::ClassParams = {
	&ABallGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABallGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABallGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABallGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABallGameModeBase()
{
	if (!Z_Registration_Info_UClass_ABallGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABallGameModeBase.OuterSingleton, Z_Construct_UClass_ABallGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABallGameModeBase.OuterSingleton;
}
template<> FIXEDGAME_API UClass* StaticClass<ABallGameModeBase>()
{
	return ABallGameModeBase::StaticClass();
}
ABallGameModeBase::ABallGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABallGameModeBase);
ABallGameModeBase::~ABallGameModeBase() {}
// End Class ABallGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABallGameModeBase, ABallGameModeBase::StaticClass, TEXT("ABallGameModeBase"), &Z_Registration_Info_UClass_ABallGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallGameModeBase), 1997677691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallGameModeBase_h_811433089(TEXT("/Script/FixedGame"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
