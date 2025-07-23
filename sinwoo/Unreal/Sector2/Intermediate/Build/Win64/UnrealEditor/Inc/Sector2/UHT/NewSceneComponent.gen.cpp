// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sector2/NewSceneComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNewSceneComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
SECTOR2_API UClass* Z_Construct_UClass_UNewSceneComponent();
SECTOR2_API UClass* Z_Construct_UClass_UNewSceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sector2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNewSceneComponent *******************************************************
void UNewSceneComponent::StaticRegisterNativesUNewSceneComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNewSceneComponent;
UClass* UNewSceneComponent::GetPrivateStaticClass()
{
	using TClass = UNewSceneComponent;
	if (!Z_Registration_Info_UClass_UNewSceneComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NewSceneComponent"),
			Z_Registration_Info_UClass_UNewSceneComponent.InnerSingleton,
			StaticRegisterNativesUNewSceneComponent,
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
	return Z_Registration_Info_UClass_UNewSceneComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UNewSceneComponent_NoRegister()
{
	return UNewSceneComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNewSceneComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "NewSceneComponent.h" },
		{ "ModuleRelativePath", "NewSceneComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewSceneComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNewSceneComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Sector2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewSceneComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewSceneComponent_Statics::ClassParams = {
	&UNewSceneComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewSceneComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewSceneComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNewSceneComponent()
{
	if (!Z_Registration_Info_UClass_UNewSceneComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewSceneComponent.OuterSingleton, Z_Construct_UClass_UNewSceneComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNewSceneComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNewSceneComponent);
UNewSceneComponent::~UNewSceneComponent() {}
// ********** End Class UNewSceneComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector2_Source_Sector2_NewSceneComponent_h__Script_Sector2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewSceneComponent, UNewSceneComponent::StaticClass, TEXT("UNewSceneComponent"), &Z_Registration_Info_UClass_UNewSceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewSceneComponent), 862014207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector2_Source_Sector2_NewSceneComponent_h__Script_Sector2_2400718757(TEXT("/Script/Sector2"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector2_Source_Sector2_NewSceneComponent_h__Script_Sector2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector2_Source_Sector2_NewSceneComponent_h__Script_Sector2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
