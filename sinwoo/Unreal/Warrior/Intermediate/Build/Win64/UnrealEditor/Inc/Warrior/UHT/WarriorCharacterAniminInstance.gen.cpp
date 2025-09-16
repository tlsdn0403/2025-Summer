// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AniminInstances/WarriorCharacterAniminInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorCharacterAniminInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorBaseCharacter_NoRegister();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorBaseAniminInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorCharacterAniminInstance();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorCharacterAniminInstance_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWarriorCharacterAniminInstance ******************************************
void UWarriorCharacterAniminInstance::StaticRegisterNativesUWarriorCharacterAniminInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorCharacterAniminInstance;
UClass* UWarriorCharacterAniminInstance::GetPrivateStaticClass()
{
	using TClass = UWarriorCharacterAniminInstance;
	if (!Z_Registration_Info_UClass_UWarriorCharacterAniminInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorCharacterAniminInstance"),
			Z_Registration_Info_UClass_UWarriorCharacterAniminInstance.InnerSingleton,
			StaticRegisterNativesUWarriorCharacterAniminInstance,
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
	return Z_Registration_Info_UClass_UWarriorCharacterAniminInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorCharacterAniminInstance_NoRegister()
{
	return UWarriorCharacterAniminInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AniminInstances/WarriorCharacterAniminInstance.h" },
		{ "ModuleRelativePath", "Public/AniminInstances/WarriorCharacterAniminInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd UPROPERTY \xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xce\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xc5\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd1\xb4\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/AniminInstances/WarriorCharacterAniminInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd UPROPERTY \xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xce\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xc5\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd1\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AniminInstances/WarriorCharacterAniminInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "AnimiData|LocomotionData" },
		{ "ModuleRelativePath", "Public/AniminInstances/WarriorCharacterAniminInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAcceleration_MetaData[] = {
		{ "Category", "AnimiData|LocomotionData" },
		{ "ModuleRelativePath", "Public/AniminInstances/WarriorCharacterAniminInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningMovementComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static void NewProp_bHasAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorCharacterAniminInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorCharacterAniminInstance, OwningCharacter), Z_Construct_UClass_AWarriorBaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningCharacter_MetaData), NewProp_OwningCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::NewProp_OwningMovementComponent = { "OwningMovementComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorCharacterAniminInstance, OwningMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningMovementComponent_MetaData), NewProp_OwningMovementComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorCharacterAniminInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
void Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::NewProp_bHasAcceleration_SetBit(void* Obj)
{
	((UWarriorCharacterAniminInstance*)Obj)->bHasAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::NewProp_bHasAcceleration = { "bHasAcceleration", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWarriorCharacterAniminInstance), &Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::NewProp_bHasAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAcceleration_MetaData), NewProp_bHasAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::NewProp_OwningCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::NewProp_OwningMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::NewProp_bHasAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorBaseAniminInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::ClassParams = {
	&UWarriorCharacterAniminInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorCharacterAniminInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorCharacterAniminInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorCharacterAniminInstance.OuterSingleton, Z_Construct_UClass_UWarriorCharacterAniminInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorCharacterAniminInstance.OuterSingleton;
}
UWarriorCharacterAniminInstance::UWarriorCharacterAniminInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorCharacterAniminInstance);
UWarriorCharacterAniminInstance::~UWarriorCharacterAniminInstance() {}
// ********** End Class UWarriorCharacterAniminInstance ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_WarriorCharacterAniminInstance_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorCharacterAniminInstance, UWarriorCharacterAniminInstance::StaticClass, TEXT("UWarriorCharacterAniminInstance"), &Z_Registration_Info_UClass_UWarriorCharacterAniminInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorCharacterAniminInstance), 35924407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_WarriorCharacterAniminInstance_h__Script_Warrior_2279860498(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_WarriorCharacterAniminInstance_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_AniminInstances_WarriorCharacterAniminInstance_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
