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

// ********** Begin Class UGrabber Function Release ************************************************
struct Z_Construct_UFunction_UGrabber_Release_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabber_Release_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrabber, nullptr, "Release", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrabber_Release_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGrabber_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrabber_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrabber::execRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Release();
	P_NATIVE_END;
}
// ********** End Class UGrabber Function Release **************************************************

// ********** Begin Class UGrabber *****************************************************************
void UGrabber::StaticRegisterNativesUGrabber()
{
	UClass* Class = UGrabber::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Release", &UGrabber::execRelease },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grabRadius_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxGrabDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_grabRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabber_Release, "Release" }, // 2135617456
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_maxGrabDistance = { "maxGrabDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrabber, maxGrabDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxGrabDistance_MetaData), NewProp_maxGrabDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_grabRadius = { "grabRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrabber, grabRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grabRadius_MetaData), NewProp_grabRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_maxGrabDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_grabRadius,
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
	FuncInfo,
	Z_Construct_UClass_UGrabber_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UGrabber, UGrabber::StaticClass, TEXT("UGrabber"), &Z_Registration_Info_UClass_UGrabber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabber), 629557333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Grabber_h__Script_Sector4_2297887873(TEXT("/Script/Sector4"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Grabber_h__Script_Sector4_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_Sector4_Source_Sector4_Grabber_h__Script_Sector4_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
