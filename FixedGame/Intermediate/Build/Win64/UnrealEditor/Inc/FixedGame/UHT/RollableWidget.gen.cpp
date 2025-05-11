// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FixedGame/RollableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollableWidget() {}

// Begin Cross Module References
FIXEDGAME_API UClass* Z_Construct_UClass_URollableWidget();
FIXEDGAME_API UClass* Z_Construct_UClass_URollableWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_FixedGame();
// End Cross Module References

// Begin Class URollableWidget Function SetItemText
struct RollableWidget_eventSetItemText_Parms
{
	int32 ItemsCollected;
	int32 ItemsInLevel;
};
static const FName NAME_URollableWidget_SetItemText = FName(TEXT("SetItemText"));
void URollableWidget::SetItemText(int32 ItemsCollected, int32 ItemsInLevel)
{
	RollableWidget_eventSetItemText_Parms Parms;
	Parms.ItemsCollected=ItemsCollected;
	Parms.ItemsInLevel=ItemsInLevel;
	UFunction* Func = FindFunctionChecked(NAME_URollableWidget_SetItemText);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_URollableWidget_SetItemText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RollableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsCollected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsInLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URollableWidget_SetItemText_Statics::NewProp_ItemsCollected = { "ItemsCollected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollableWidget_eventSetItemText_Parms, ItemsCollected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URollableWidget_SetItemText_Statics::NewProp_ItemsInLevel = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollableWidget_eventSetItemText_Parms, ItemsInLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URollableWidget_SetItemText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URollableWidget_SetItemText_Statics::NewProp_ItemsCollected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URollableWidget_SetItemText_Statics::NewProp_ItemsInLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URollableWidget_SetItemText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URollableWidget_SetItemText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URollableWidget, nullptr, "SetItemText", nullptr, nullptr, Z_Construct_UFunction_URollableWidget_SetItemText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URollableWidget_SetItemText_Statics::PropPointers), sizeof(RollableWidget_eventSetItemText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URollableWidget_SetItemText_Statics::Function_MetaDataParams), Z_Construct_UFunction_URollableWidget_SetItemText_Statics::Function_MetaDataParams) };
static_assert(sizeof(RollableWidget_eventSetItemText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URollableWidget_SetItemText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URollableWidget_SetItemText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URollableWidget Function SetItemText

// Begin Class URollableWidget
void URollableWidget::StaticRegisterNativesURollableWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URollableWidget);
UClass* Z_Construct_UClass_URollableWidget_NoRegister()
{
	return URollableWidget::StaticClass();
}
struct Z_Construct_UClass_URollableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RollableWidget.h" },
		{ "ModuleRelativePath", "RollableWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URollableWidget_SetItemText, "SetItemText" }, // 2862921032
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URollableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URollableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FixedGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URollableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URollableWidget_Statics::ClassParams = {
	&URollableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URollableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_URollableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URollableWidget()
{
	if (!Z_Registration_Info_UClass_URollableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URollableWidget.OuterSingleton, Z_Construct_UClass_URollableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URollableWidget.OuterSingleton;
}
template<> FIXEDGAME_API UClass* StaticClass<URollableWidget>()
{
	return URollableWidget::StaticClass();
}
URollableWidget::URollableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URollableWidget);
URollableWidget::~URollableWidget() {}
// End Class URollableWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_RollableWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URollableWidget, URollableWidget::StaticClass, TEXT("URollableWidget"), &Z_Registration_Info_UClass_URollableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URollableWidget), 3940938318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_RollableWidget_h_2939143077(TEXT("/Script/FixedGame"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_RollableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_RollableWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
