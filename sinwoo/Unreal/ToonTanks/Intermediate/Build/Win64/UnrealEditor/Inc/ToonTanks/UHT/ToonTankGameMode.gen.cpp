// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/ToonTankGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeToonTankGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOONTANKS_API UClass* Z_Construct_UClass_AToonTankGameMode();
TOONTANKS_API UClass* Z_Construct_UClass_AToonTankGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AToonTankGameMode ********************************************************
void AToonTankGameMode::StaticRegisterNativesAToonTankGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AToonTankGameMode;
UClass* AToonTankGameMode::GetPrivateStaticClass()
{
	using TClass = AToonTankGameMode;
	if (!Z_Registration_Info_UClass_AToonTankGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ToonTankGameMode"),
			Z_Registration_Info_UClass_AToonTankGameMode.InnerSingleton,
			StaticRegisterNativesAToonTankGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AToonTankGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AToonTankGameMode_NoRegister()
{
	return AToonTankGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AToonTankGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ToonTankGameMode.h" },
		{ "ModuleRelativePath", "ToonTankGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToonTankGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AToonTankGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTankGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AToonTankGameMode_Statics::ClassParams = {
	&AToonTankGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTankGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AToonTankGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AToonTankGameMode()
{
	if (!Z_Registration_Info_UClass_AToonTankGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToonTankGameMode.OuterSingleton, Z_Construct_UClass_AToonTankGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AToonTankGameMode.OuterSingleton;
}
AToonTankGameMode::AToonTankGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AToonTankGameMode);
AToonTankGameMode::~AToonTankGameMode() {}
// ********** End Class AToonTankGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_ToonTanks_Source_ToonTanks_ToonTankGameMode_h__Script_ToonTanks_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AToonTankGameMode, AToonTankGameMode::StaticClass, TEXT("AToonTankGameMode"), &Z_Registration_Info_UClass_AToonTankGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToonTankGameMode), 2891475440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_ToonTanks_Source_ToonTanks_ToonTankGameMode_h__Script_ToonTanks_1297816990(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_ToonTanks_Source_ToonTanks_ToonTankGameMode_h__Script_ToonTanks_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_ToonTanks_Source_ToonTanks_ToonTankGameMode_h__Script_ToonTanks_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
