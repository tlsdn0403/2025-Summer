// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AniminInstances/WarriorBaseAniminInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorBaseAniminInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorBaseAniminInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorBaseAniminInstance_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWarriorBaseAniminInstance ***********************************************
void UWarriorBaseAniminInstance::StaticRegisterNativesUWarriorBaseAniminInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorBaseAniminInstance;
UClass* UWarriorBaseAniminInstance::GetPrivateStaticClass()
{
	using TClass = UWarriorBaseAniminInstance;
	if (!Z_Registration_Info_UClass_UWarriorBaseAniminInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorBaseAniminInstance"),
			Z_Registration_Info_UClass_UWarriorBaseAniminInstance.InnerSingleton,
			StaticRegisterNativesUWarriorBaseAniminInstance,
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
	return Z_Registration_Info_UClass_UWarriorBaseAniminInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorBaseAniminInstance_NoRegister()
{
	return UWarriorBaseAniminInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorBaseAniminInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AniminInstances/WarriorBaseAniminInstance.h" },
		{ "ModuleRelativePath", "Public/AniminInstances/WarriorBaseAniminInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorBaseAniminInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorBaseAniminInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorBaseAniminInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorBaseAniminInstance_Statics::ClassParams = {
	&UWarriorBaseAniminInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorBaseAniminInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorBaseAniminInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorBaseAniminInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorBaseAniminInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorBaseAniminInstance.OuterSingleton, Z_Construct_UClass_UWarriorBaseAniminInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorBaseAniminInstance.OuterSingleton;
}
UWarriorBaseAniminInstance::UWarriorBaseAniminInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorBaseAniminInstance);
UWarriorBaseAniminInstance::~UWarriorBaseAniminInstance() {}
// ********** End Class UWarriorBaseAniminInstance *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_WarriorBaseAniminInstance_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorBaseAniminInstance, UWarriorBaseAniminInstance::StaticClass, TEXT("UWarriorBaseAniminInstance"), &Z_Registration_Info_UClass_UWarriorBaseAniminInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorBaseAniminInstance), 1750474381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_WarriorBaseAniminInstance_h__Script_Warrior_3130496396(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_WarriorBaseAniminInstance_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_WarriorBaseAniminInstance_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
