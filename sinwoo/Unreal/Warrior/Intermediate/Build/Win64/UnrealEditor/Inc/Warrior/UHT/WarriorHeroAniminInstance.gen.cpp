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
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister();
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
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AniminInstances/Hero/WarriorHeroAniminInstance.h" },
		{ "ModuleRelativePath", "Public/AniminInstances/Hero/WarriorHeroAniminInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroCharacter_MetaData[] = {
		{ "Category", "AnimiData|References" },
		{ "ModuleRelativePath", "Public/AniminInstances/Hero/WarriorHeroAniminInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldEnterRelaxState_MetaData[] = {
		{ "Category", "AnimiData|LocomotionData" },
		{ "ModuleRelativePath", "Public/AniminInstances/Hero/WarriorHeroAniminInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterRelaxStateDelay_MetaData[] = {
		{ "Category", "AnimiData|LocomotionData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xde\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xee\xb0\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/AniminInstances/Hero/WarriorHeroAniminInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xde\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xee\xb0\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroCharacter;
	static void NewProp_bShouldEnterRelaxState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldEnterRelaxState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterRelaxStateDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorHeroAniminInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::NewProp_OwningHeroCharacter = { "OwningHeroCharacter", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorHeroAniminInstance, OwningHeroCharacter), Z_Construct_UClass_AWarriorHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningHeroCharacter_MetaData), NewProp_OwningHeroCharacter_MetaData) };
void Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::NewProp_bShouldEnterRelaxState_SetBit(void* Obj)
{
	((UWarriorHeroAniminInstance*)Obj)->bShouldEnterRelaxState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::NewProp_bShouldEnterRelaxState = { "bShouldEnterRelaxState", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWarriorHeroAniminInstance), &Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::NewProp_bShouldEnterRelaxState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldEnterRelaxState_MetaData), NewProp_bShouldEnterRelaxState_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::NewProp_EnterRelaxStateDelay = { "EnterRelaxStateDelay", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorHeroAniminInstance, EnterRelaxStateDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterRelaxStateDelay_MetaData), NewProp_EnterRelaxStateDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::NewProp_OwningHeroCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::NewProp_bShouldEnterRelaxState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::NewProp_EnterRelaxStateDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroAniminInstance_Statics::PropPointers),
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
		{ Z_Construct_UClass_UWarriorHeroAniminInstance, UWarriorHeroAniminInstance::StaticClass, TEXT("UWarriorHeroAniminInstance"), &Z_Registration_Info_UClass_UWarriorHeroAniminInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorHeroAniminInstance), 3489314811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroAniminInstance_h__Script_Warrior_581176417(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroAniminInstance_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_Hero_WarriorHeroAniminInstance_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
