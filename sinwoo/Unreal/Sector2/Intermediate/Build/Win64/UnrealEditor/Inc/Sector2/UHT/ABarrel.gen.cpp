// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sector2/ABarrel.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeABarrel() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
SECTOR2_API UClass* Z_Construct_UClass_ABarrel();
SECTOR2_API UClass* Z_Construct_UClass_ABarrel_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sector2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABarrel Function DeformMesh **********************************************
struct Z_Construct_UFunction_ABarrel_DeformMesh_Statics
{
	struct Barrel_eventDeformMesh_Parms
	{
		FVector HitLocation;
		FVector HitDirection;
		float Radius;
		float Strength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "ABarrel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABarrel_DeformMesh_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Barrel_eventDeformMesh_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABarrel_DeformMesh_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Barrel_eventDeformMesh_Parms, HitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitDirection_MetaData), NewProp_HitDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABarrel_DeformMesh_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Barrel_eventDeformMesh_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABarrel_DeformMesh_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Barrel_eventDeformMesh_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABarrel_DeformMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarrel_DeformMesh_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarrel_DeformMesh_Statics::NewProp_HitDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarrel_DeformMesh_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarrel_DeformMesh_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABarrel_DeformMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarrel_DeformMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABarrel, nullptr, "DeformMesh", Z_Construct_UFunction_ABarrel_DeformMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarrel_DeformMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABarrel_DeformMesh_Statics::Barrel_eventDeformMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABarrel_DeformMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABarrel_DeformMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABarrel_DeformMesh_Statics::Barrel_eventDeformMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABarrel_DeformMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABarrel_DeformMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABarrel::execDeformMesh)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeformMesh(Z_Param_Out_HitLocation,Z_Param_Out_HitDirection,Z_Param_Radius,Z_Param_Strength);
	P_NATIVE_END;
}
// ********** End Class ABarrel Function DeformMesh ************************************************

// ********** Begin Class ABarrel Function OnHit ***************************************************
struct Z_Construct_UFunction_ABarrel_OnHit_Statics
{
	struct Barrel_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "ABarrel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdf\xbb\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABarrel_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Barrel_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABarrel_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Barrel_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABarrel_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Barrel_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABarrel_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Barrel_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABarrel_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Barrel_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABarrel_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarrel_OnHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarrel_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarrel_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarrel_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarrel_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABarrel_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarrel_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABarrel, nullptr, "OnHit", Z_Construct_UFunction_ABarrel_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarrel_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABarrel_OnHit_Statics::Barrel_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABarrel_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABarrel_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABarrel_OnHit_Statics::Barrel_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABarrel_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABarrel_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABarrel::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ABarrel Function OnHit *****************************************************

// ********** Begin Class ABarrel ******************************************************************
void ABarrel::StaticRegisterNativesABarrel()
{
	UClass* Class = ABarrel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeformMesh", &ABarrel::execDeformMesh },
		{ "OnHit", &ABarrel::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABarrel;
UClass* ABarrel::GetPrivateStaticClass()
{
	using TClass = ABarrel;
	if (!Z_Registration_Info_UClass_ABarrel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Barrel"),
			Z_Registration_Info_UClass_ABarrel.InnerSingleton,
			StaticRegisterNativesABarrel,
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
	return Z_Registration_Info_UClass_ABarrel.InnerSingleton;
}
UClass* Z_Construct_UClass_ABarrel_NoRegister()
{
	return ABarrel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABarrel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ABarrel.h" },
		{ "ModuleRelativePath", "ABarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarrelMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ABarrel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStaticMesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SM_Barrel\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb4\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "ABarrel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SM_Barrel\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformRadius_MetaData[] = {
		{ "Category", "Deformation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "ABarrel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformStrength_MetaData[] = {
		{ "Category", "Deformation" },
		{ "ModuleRelativePath", "ABarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BarrelMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStaticMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeformRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeformStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABarrel_DeformMesh, "DeformMesh" }, // 2055638816
		{ &Z_Construct_UFunction_ABarrel_OnHit, "OnHit" }, // 569607019
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarrel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarrel_Statics::NewProp_BarrelMesh = { "BarrelMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABarrel, BarrelMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarrelMesh_MetaData), NewProp_BarrelMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarrel_Statics::NewProp_SourceStaticMesh = { "SourceStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABarrel, SourceStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStaticMesh_MetaData), NewProp_SourceStaticMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarrel_Statics::NewProp_DeformRadius = { "DeformRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABarrel, DeformRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformRadius_MetaData), NewProp_DeformRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarrel_Statics::NewProp_DeformStrength = { "DeformStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABarrel, DeformStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformStrength_MetaData), NewProp_DeformStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarrel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarrel_Statics::NewProp_BarrelMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarrel_Statics::NewProp_SourceStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarrel_Statics::NewProp_DeformRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarrel_Statics::NewProp_DeformStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABarrel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABarrel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Sector2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABarrel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABarrel_Statics::ClassParams = {
	&ABarrel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABarrel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABarrel_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABarrel_Statics::Class_MetaDataParams), Z_Construct_UClass_ABarrel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABarrel()
{
	if (!Z_Registration_Info_UClass_ABarrel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABarrel.OuterSingleton, Z_Construct_UClass_ABarrel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABarrel.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABarrel);
ABarrel::~ABarrel() {}
// ********** End Class ABarrel ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Sector2_Source_Sector2_ABarrel_h__Script_Sector2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABarrel, ABarrel::StaticClass, TEXT("ABarrel"), &Z_Registration_Info_UClass_ABarrel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABarrel), 3847137869U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sector2_Source_Sector2_ABarrel_h__Script_Sector2_2344580947(TEXT("/Script/Sector2"),
	Z_CompiledInDeferFile_FID_Sector2_Source_Sector2_ABarrel_h__Script_Sector2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sector2_Source_Sector2_ABarrel_h__Script_Sector2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
