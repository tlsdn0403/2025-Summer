// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sector4/Grabber.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGrabber() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
SECTOR4_API UClass* Z_Construct_UClass_UGrabber();
SECTOR4_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sector4();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGrabber *****************************************************************
void UGrabber::StaticRegisterNativesUGrabber()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGrabber;
UClass* UGrabber::GetPrivateStaticClass()
{
	using TClass = UGrabber;
	if (!Z_Registration_Info_UClass_UGrabber.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Grabber"),
			Z_Registration_Info_UClass_UGrabber.InnerSingleton,
			StaticRegisterNativesUGrabber,
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
	return Z_Registration_Info_UClass_UGrabber.InnerSingleton;
}
UClass* Z_Construct_UClass_UGrabber_NoRegister()
{
	return UGrabber::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGrabber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Grabber.h" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxGrabDistance_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxGrabDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_maxGrabDistance = { "maxGrabDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrabber, maxGrabDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxGrabDistance_MetaData), NewProp_maxGrabDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_maxGrabDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGrabber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Sector4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrabber_Statics::ClassParams = {
	&UGrabber::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGrabber_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrabber()
{
	if (!Z_Registration_Info_UClass_UGrabber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrabber.OuterSingleton, Z_Construct_UClass_UGrabber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrabber.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber);
UGrabber::~UGrabber() {}
// ********** End Class UGrabber *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Grabber_h__Script_Sector4_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGrabber, UGrabber::StaticClass, TEXT("UGrabber"), &Z_Registration_Info_UClass_UGrabber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabber), 2423251336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Grabber_h__Script_Sector4_2202316659(TEXT("/Script/Sector4"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Grabber_h__Script_Sector4_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Grabber_h__Script_Sector4_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
