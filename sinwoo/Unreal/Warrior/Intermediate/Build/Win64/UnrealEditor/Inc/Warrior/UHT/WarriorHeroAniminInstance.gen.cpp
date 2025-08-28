// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AniminInstances/Hero/WarriorHeroAniminInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorHeroAniminInstance() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorCharacterAniminInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroAniminInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroAniminInstance_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWarriorHeroAniminInstance ***********************************************
void UWarriorHeroAniminInstance::StaticRegisterNativesUWarriorHeroAniminInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorHeroAniminInstance;
UClass* UWarriorHeroAniminInstance::GetPrivateStaticClass()
{
	using TClass = UWarriorHeroAniminInstance;
	if (!Z_Registration_Info_UClass_UWarriorHeroAniminInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorHeroAniminInstance"),
			Z_Registration_Info_UClass_UWarriorHeroAniminInstance.InnerSingleton,
			StaticRegisterNativesUWarriorHeroAniminInstance,
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
	return Z_Registration_Info_UClass_UWarriorHeroAniminInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorHeroAniminInstance_NoRegister()
{
	return UWarriorHeroAniminInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorHeroAniminInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AniminInstances/Hero/WarriorHeroAniminInstance.h" },
		{ "ModuleRelativePath", "Public/AniminInstances/Hero/WarriorHeroAniminInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorHeroAniminInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorCharacterAniminInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::ClassParams = {
	&UWarriorHeroAniminInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorHeroAniminInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorHeroAniminInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorHeroAniminInstance.OuterSingleton, Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorHeroAniminInstance.OuterSingleton;
}
UWarriorHeroAniminInstance::UWarriorHeroAniminInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorHeroAniminInstance);
UWarriorHeroAniminInstance::~UWarriorHeroAniminInstance() {}
// ********** End Class UWarriorHeroAniminInstance *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroAniminInstance_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorHeroAniminInstance, UWarriorHeroAniminInstance::StaticClass, TEXT("UWarriorHeroAniminInstance"), &Z_Registration_Info_UClass_UWarriorHeroAniminInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorHeroAniminInstance), 1648687851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroAniminInstance_h__Script_Warrior_517389412(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroAniminInstance_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroAniminInstance_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
