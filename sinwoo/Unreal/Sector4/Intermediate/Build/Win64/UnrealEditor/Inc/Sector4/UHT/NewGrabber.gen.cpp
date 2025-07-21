// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sector4/NewGrabber.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNewGrabber() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
SECTOR4_API UClass* Z_Construct_UClass_UNewGrabber();
SECTOR4_API UClass* Z_Construct_UClass_UNewGrabber_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sector4();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNewGrabber **************************************************************
void UNewGrabber::StaticRegisterNativesUNewGrabber()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNewGrabber;
UClass* UNewGrabber::GetPrivateStaticClass()
{
	using TClass = UNewGrabber;
	if (!Z_Registration_Info_UClass_UNewGrabber.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NewGrabber"),
			Z_Registration_Info_UClass_UNewGrabber.InnerSingleton,
			StaticRegisterNativesUNewGrabber,
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
	return Z_Registration_Info_UClass_UNewGrabber.InnerSingleton;
}
UClass* Z_Construct_UClass_UNewGrabber_NoRegister()
{
	return UNewGrabber::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNewGrabber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "NewGrabber.h" },
		{ "ModuleRelativePath", "NewGrabber.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewGrabber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNewGrabber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Sector4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewGrabber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewGrabber_Statics::ClassParams = {
	&UNewGrabber::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewGrabber_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewGrabber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNewGrabber()
{
	if (!Z_Registration_Info_UClass_UNewGrabber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewGrabber.OuterSingleton, Z_Construct_UClass_UNewGrabber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNewGrabber.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNewGrabber);
UNewGrabber::~UNewGrabber() {}
// ********** End Class UNewGrabber ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_NewGrabber_h__Script_Sector4_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewGrabber, UNewGrabber::StaticClass, TEXT("UNewGrabber"), &Z_Registration_Info_UClass_UNewGrabber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewGrabber), 2234809071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_NewGrabber_h__Script_Sector4_876916318(TEXT("/Script/Sector4"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_NewGrabber_h__Script_Sector4_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_NewGrabber_h__Script_Sector4_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
