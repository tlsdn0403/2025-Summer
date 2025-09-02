// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystems/WarriorAttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorAttributeSet();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorAttributeSet_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWarriorAttributeSet *****************************************************
void UWarriorAttributeSet::StaticRegisterNativesUWarriorAttributeSet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorAttributeSet;
UClass* UWarriorAttributeSet::GetPrivateStaticClass()
{
	using TClass = UWarriorAttributeSet;
	if (!Z_Registration_Info_UClass_UWarriorAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorAttributeSet"),
			Z_Registration_Info_UClass_UWarriorAttributeSet.InnerSingleton,
			StaticRegisterNativesUWarriorAttributeSet,
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
	return Z_Registration_Info_UClass_UWarriorAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorAttributeSet_NoRegister()
{
	return UWarriorAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystems/WarriorAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystems/WarriorAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorAttributeSet_Statics::ClassParams = {
	&UWarriorAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorAttributeSet()
{
	if (!Z_Registration_Info_UClass_UWarriorAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorAttributeSet.OuterSingleton, Z_Construct_UClass_UWarriorAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorAttributeSet.OuterSingleton;
}
UWarriorAttributeSet::UWarriorAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorAttributeSet);
UWarriorAttributeSet::~UWarriorAttributeSet() {}
// ********** End Class UWarriorAttributeSet *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_WarriorAttributeSet_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorAttributeSet, UWarriorAttributeSet::StaticClass, TEXT("UWarriorAttributeSet"), &Z_Registration_Info_UClass_UWarriorAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorAttributeSet), 523037287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_WarriorAttributeSet_h__Script_Warrior_3368464977(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_WarriorAttributeSet_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AbilitySystems_WarriorAttributeSet_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
