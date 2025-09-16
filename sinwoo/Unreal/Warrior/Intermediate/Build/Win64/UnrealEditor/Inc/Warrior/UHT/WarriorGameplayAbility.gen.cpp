// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystems/Abilitys/WarriorGameplayAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWarriorGameplayAbility **************************************************
void UWarriorGameplayAbility::StaticRegisterNativesUWarriorGameplayAbility()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorGameplayAbility;
UClass* UWarriorGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UWarriorGameplayAbility;
	if (!Z_Registration_Info_UClass_UWarriorGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorGameplayAbility"),
			Z_Registration_Info_UClass_UWarriorGameplayAbility.InnerSingleton,
			StaticRegisterNativesUWarriorGameplayAbility,
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
	return Z_Registration_Info_UClass_UWarriorGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister()
{
	return UWarriorGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystems/Abilitys/WarriorGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystems/Abilitys/WarriorGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorGameplayAbility_Statics::ClassParams = {
	&UWarriorGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton, Z_Construct_UClass_UWarriorGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton;
}
UWarriorGameplayAbility::UWarriorGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorGameplayAbility);
UWarriorGameplayAbility::~UWarriorGameplayAbility() {}
// ********** End Class UWarriorGameplayAbility ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_Abilitys_WarriorGameplayAbility_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorGameplayAbility, UWarriorGameplayAbility::StaticClass, TEXT("UWarriorGameplayAbility"), &Z_Registration_Info_UClass_UWarriorGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorGameplayAbility), 527347604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_Abilitys_WarriorGameplayAbility_h__Script_Warrior_4208942373(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_Abilitys_WarriorGameplayAbility_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_Abilitys_WarriorGameplayAbility_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
