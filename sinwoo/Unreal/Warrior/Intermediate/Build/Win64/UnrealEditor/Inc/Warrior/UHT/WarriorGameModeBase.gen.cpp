// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/GameModes/WarriorGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorGameModeBase();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorGameModeBase_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWarriorGameModeBase *****************************************************
void AWarriorGameModeBase::StaticRegisterNativesAWarriorGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWarriorGameModeBase;
UClass* AWarriorGameModeBase::GetPrivateStaticClass()
{
	using TClass = AWarriorGameModeBase;
	if (!Z_Registration_Info_UClass_AWarriorGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorGameModeBase"),
			Z_Registration_Info_UClass_AWarriorGameModeBase.InnerSingleton,
			StaticRegisterNativesAWarriorGameModeBase,
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
	return Z_Registration_Info_UClass_AWarriorGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AWarriorGameModeBase_NoRegister()
{
	return AWarriorGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWarriorGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/WarriorGameModeBase.h" },
		{ "ModuleRelativePath", "GameModes/WarriorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorGameModeBase_Statics::ClassParams = {
	&AWarriorGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorGameModeBase()
{
	if (!Z_Registration_Info_UClass_AWarriorGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorGameModeBase.OuterSingleton, Z_Construct_UClass_AWarriorGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorGameModeBase.OuterSingleton;
}
AWarriorGameModeBase::AWarriorGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorGameModeBase);
AWarriorGameModeBase::~AWarriorGameModeBase() {}
// ********** End Class AWarriorGameModeBase *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_GameModes_WarriorGameModeBase_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorGameModeBase, AWarriorGameModeBase::StaticClass, TEXT("AWarriorGameModeBase"), &Z_Registration_Info_UClass_AWarriorGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorGameModeBase), 3541591881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_GameModes_WarriorGameModeBase_h__Script_Warrior_2173125939(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_GameModes_WarriorGameModeBase_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_GameModes_WarriorGameModeBase_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
