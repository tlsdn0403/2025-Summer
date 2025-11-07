// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystems/WarriorAbilitySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWarriorAbilitySystemComponent *******************************************
void UWarriorAbilitySystemComponent::StaticRegisterNativesUWarriorAbilitySystemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorAbilitySystemComponent;
UClass* UWarriorAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UWarriorAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorAbilitySystemComponent"),
			Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUWarriorAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent_NoRegister()
{
	return UWarriorAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystems/WarriorAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystems/WarriorAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::ClassParams = {
	&UWarriorAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UWarriorAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorAbilitySystemComponent.OuterSingleton;
}
UWarriorAbilitySystemComponent::UWarriorAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorAbilitySystemComponent);
UWarriorAbilitySystemComponent::~UWarriorAbilitySystemComponent() {}
// ********** End Class UWarriorAbilitySystemComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_WarriorAbilitySystemComponent_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorAbilitySystemComponent, UWarriorAbilitySystemComponent::StaticClass, TEXT("UWarriorAbilitySystemComponent"), &Z_Registration_Info_UClass_UWarriorAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorAbilitySystemComponent), 3154532396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_WarriorAbilitySystemComponent_h__Script_Warrior_3010423395(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_WarriorAbilitySystemComponent_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_WarriorAbilitySystemComponent_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
