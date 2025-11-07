// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AniminInstances/Hero/WarriorHeroLinkedAnimLayer.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorHeroLinkedAnimLayer() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorBaseAniminInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWarriorHeroLinkedAnimLayer **********************************************
void UWarriorHeroLinkedAnimLayer::StaticRegisterNativesUWarriorHeroLinkedAnimLayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer;
UClass* UWarriorHeroLinkedAnimLayer::GetPrivateStaticClass()
{
	using TClass = UWarriorHeroLinkedAnimLayer;
	if (!Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorHeroLinkedAnimLayer"),
			Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.InnerSingleton,
			StaticRegisterNativesUWarriorHeroLinkedAnimLayer,
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
	return Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister()
{
	return UWarriorHeroLinkedAnimLayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AniminInstances/Hero/WarriorHeroLinkedAnimLayer.h" },
		{ "ModuleRelativePath", "Public/AniminInstances/Hero/WarriorHeroLinkedAnimLayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorHeroLinkedAnimLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorBaseAniminInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::ClassParams = {
	&UWarriorHeroLinkedAnimLayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer()
{
	if (!Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.OuterSingleton, Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer.OuterSingleton;
}
UWarriorHeroLinkedAnimLayer::UWarriorHeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorHeroLinkedAnimLayer);
UWarriorHeroLinkedAnimLayer::~UWarriorHeroLinkedAnimLayer() {}
// ********** End Class UWarriorHeroLinkedAnimLayer ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroLinkedAnimLayer_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorHeroLinkedAnimLayer, UWarriorHeroLinkedAnimLayer::StaticClass, TEXT("UWarriorHeroLinkedAnimLayer"), &Z_Registration_Info_UClass_UWarriorHeroLinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorHeroLinkedAnimLayer), 2078136428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroLinkedAnimLayer_h__Script_Warrior_3325977316(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroLinkedAnimLayer_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroLinkedAnimLayer_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
