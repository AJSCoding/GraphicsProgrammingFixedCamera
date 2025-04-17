// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BallPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIXEDGAME_BallPlayer_generated_h
#error "BallPlayer.generated.h already included, missing '#pragma once' in BallPlayer.h"
#endif
#define FIXEDGAME_BallPlayer_generated_h

#define FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallPlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallPlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallPlayer(); \
	friend struct Z_Construct_UClass_ABallPlayer_Statics; \
public: \
	DECLARE_CLASS(ABallPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FixedGame"), NO_API) \
	DECLARE_SERIALIZER(ABallPlayer)


#define FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABallPlayer(ABallPlayer&&); \
	ABallPlayer(const ABallPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallPlayer) \
	NO_API virtual ~ABallPlayer();


#define FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallPlayer_h_13_PROLOG
#define FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallPlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallPlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallPlayer_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIXEDGAME_API UClass* StaticClass<class ABallPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Jasons_GraphicsProgrammingFixedCamera_FixedGame_Source_FixedGame_BallPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
