// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Component/Input/WarriorInputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorInputComponent() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorInputComponent();
WARRIOR_API UClass* Z_Construct_UClass_UWarriorInputComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWarriorInputComponent ***************************************************
void UWarriorInputComponent::StaticRegisterNativesUWarriorInputComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWarriorInputComponent;
UClass* UWarriorInputComponent::GetPrivateStaticClass()
{
	using TClass = UWarriorInputComponent;
	if (!Z_Registration_Info_UClass_UWarriorInputComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorInputComponent"),
			Z_Registration_Info_UClass_UWarriorInputComponent.InnerSingleton,
			StaticRegisterNativesUWarriorInputComponent,
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
	return Z_Registration_Info_UClass_UWarriorInputComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWarriorInputComponent_NoRegister()
{
	return UWarriorInputComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWarriorInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Component/Input/WarriorInputComponent.h" },
		{ "ModuleRelativePath", "Public/Component/Input/WarriorInputComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorInputComponent_Statics::ClassParams = {
	&UWarriorInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorInputComponent()
{
	if (!Z_Registration_Info_UClass_UWarriorInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorInputComponent.OuterSingleton, Z_Construct_UClass_UWarriorInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorInputComponent.OuterSingleton;
}
UWarriorInputComponent::UWarriorInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorInputComponent);
UWarriorInputComponent::~UWarriorInputComponent() {}
// ********** End Class UWarriorInputComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_Component_Input_WarriorInputComponent_h__Script_Warrior_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorInputComponent, UWarriorInputComponent::StaticClass, TEXT("UWarriorInputComponent"), &Z_Registration_Info_UClass_UWarriorInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorInputComponent), 3459562239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_Component_Input_WarriorInputComponent_h__Script_Warrior_2509341917(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_Component_Input_WarriorInputComponent_h__Script_Warrior_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Warrior_Source_Warrior_Public_Component_Input_WarriorInputComponent_h__Script_Warrior_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
