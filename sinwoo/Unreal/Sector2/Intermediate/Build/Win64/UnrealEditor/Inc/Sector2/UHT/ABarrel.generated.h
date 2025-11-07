// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABarrel.h"

#ifdef SECTOR2_ABarrel_generated_h
#error "ABarrel.generated.h already included, missing '#pragma once' in ABarrel.h"
#endif
#define SECTOR2_ABarrel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABarrel ******************************************************************
#define FID_Sector2_Source_Sector2_ABarrel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeformMesh); \
	DECLARE_FUNCTION(execOnHit);


SECTOR2_API UClass* Z_Construct_UClass_ABarrel_NoRegister();

#define FID_Sector2_Source_Sector2_ABarrel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABarrel(); \
	friend struct Z_Construct_UClass_ABarrel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SECTOR2_API UClass* Z_Construct_UClass_ABarrel_NoRegister(); \
public: \
	DECLARE_CLASS2(ABarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sector2"), Z_Construct_UClass_ABarrel_NoRegister) \
	DECLARE_SERIALIZER(ABarrel)


#define FID_Sector2_Source_Sector2_ABarrel_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABarrel(ABarrel&&) = delete; \
	ABarrel(const ABarrel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABarrel) \
	NO_API virtual ~ABarrel();


#define FID_Sector2_Source_Sector2_ABarrel_h_11_PROLOG
#define FID_Sector2_Source_Sector2_ABarrel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sector2_Source_Sector2_ABarrel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sector2_Source_Sector2_ABarrel_h_14_INCLASS_NO_PURE_DECLS \
	FID_Sector2_Source_Sector2_ABarrel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABarrel;

// ********** End Class ABarrel ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sector2_Source_Sector2_ABarrel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
