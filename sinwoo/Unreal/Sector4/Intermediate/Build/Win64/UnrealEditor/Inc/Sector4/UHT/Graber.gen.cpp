// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sector4/Graber.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGraber() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
SECTOR4_API UClass* Z_Construct_UClass_UGraber();
SECTOR4_API UClass* Z_Construct_UClass_UGraber_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sector4();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGraber ******************************************************************
void UGraber::StaticRegisterNativesUGraber()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGraber;
UClass* UGraber::GetPrivateStaticClass()
{
	using TClass = UGraber;
	if (!Z_Registration_Info_UClass_UGraber.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Graber"),
			Z_Registration_Info_UClass_UGraber.InnerSingleton,
			StaticRegisterNativesUGraber,
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
	return Z_Registration_Info_UClass_UGraber.InnerSingleton;
}
UClass* Z_Construct_UClass_UGraber_NoRegister()
{
	return UGraber::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGraber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Graber.h" },
		{ "ModuleRelativePath", "Graber.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGraber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Sector4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraber_Statics::ClassParams = {
	&UGraber::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraber_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraber()
{
	if (!Z_Registration_Info_UClass_UGraber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraber.OuterSingleton, Z_Construct_UClass_UGraber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraber.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraber);
UGraber::~UGraber() {}
// ********** End Class UGraber ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Graber_h__Script_Sector4_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraber, UGraber::StaticClass, TEXT("UGraber"), &Z_Registration_Info_UClass_UGraber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraber), 1200225661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Graber_h__Script_Sector4_1660615971(TEXT("/Script/Sector4"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Graber_h__Script_Sector4_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Graber_h__Script_Sector4_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
