// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Characters/WarriorHeroCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorHeroCharacter() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseCharacter();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroCharacter();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWarriorHeroCharacter ****************************************************
void AWarriorHeroCharacter::StaticRegisterNativesAWarriorHeroCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWarriorHeroCharacter;
UClass* AWarriorHeroCharacter::GetPrivateStaticClass()
{
	using TClass = AWarriorHeroCharacter;
	if (!Z_Registration_Info_UClass_AWarriorHeroCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorHeroCharacter"),
			Z_Registration_Info_UClass_AWarriorHeroCharacter.InnerSingleton,
			StaticRegisterNativesAWarriorHeroCharacter,
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
	return Z_Registration_Info_UClass_AWarriorHeroCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister()
{
	return AWarriorHeroCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWarriorHeroCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/WarriorHeroCharacter.h" },
		{ "ModuleRelativePath", "Characters/WarriorHeroCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorHeroCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::ClassParams = {
	&AWarriorHeroCharacter::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorHeroCharacter()
{
	if (!Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton, Z_Construct_UClass_AWarriorHeroCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton;
}
AWarriorHeroCharacter::AWarriorHeroCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroCharacter);
AWarriorHeroCharacter::~AWarriorHeroCharacter() {}
// ********** End Class AWarriorHeroCharacter ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Characters_WarriorHeroCharacter_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroCharacter, AWarriorHeroCharacter::StaticClass, TEXT("AWarriorHeroCharacter"), &Z_Registration_Info_UClass_AWarriorHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroCharacter), 3085271112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Characters_WarriorHeroCharacter_h__Script_Warrior_2079252704(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Characters_WarriorHeroCharacter_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Characters_WarriorHeroCharacter_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
