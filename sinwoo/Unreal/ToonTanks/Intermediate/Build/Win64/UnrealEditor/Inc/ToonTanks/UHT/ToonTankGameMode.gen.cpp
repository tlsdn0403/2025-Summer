// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/ToonTankGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeToonTankGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOONTANKS_API UClass* Z_Construct_UClass_AToonTankGameMode();
TOONTANKS_API UClass* Z_Construct_UClass_AToonTankGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AToonTankGameMode Function GameOver **************************************
struct ToonTankGameMode_eventGameOver_Parms
{
	bool bWonGame;
};
static FName NAME_AToonTankGameMode_GameOver = FName(TEXT("GameOver"));
void AToonTankGameMode::GameOver(bool bWonGame)
{
	ToonTankGameMode_eventGameOver_Parms Parms;
	Parms.bWonGame=bWonGame ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AToonTankGameMode_GameOver);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ToonTankGameMode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWonGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWonGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::NewProp_bWonGame_SetBit(void* Obj)
{
	((ToonTankGameMode_eventGameOver_Parms*)Obj)->bWonGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::NewProp_bWonGame = { "bWonGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToonTankGameMode_eventGameOver_Parms), &Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::NewProp_bWonGame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::NewProp_bWonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AToonTankGameMode, nullptr, "GameOver", Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::PropPointers), sizeof(ToonTankGameMode_eventGameOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ToonTankGameMode_eventGameOver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AToonTankGameMode_GameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToonTankGameMode_GameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AToonTankGameMode Function GameOver ****************************************

// ********** Begin Class AToonTankGameMode Function StartGame *************************************
static FName NAME_AToonTankGameMode_StartGame = FName(TEXT("StartGame"));
void AToonTankGameMode::StartGame()
{
	UFunction* Func = FindFunctionChecked(NAME_AToonTankGameMode_StartGame);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AToonTankGameMode_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "ToonTankGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToonTankGameMode_StartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AToonTankGameMode, nullptr, "StartGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTankGameMode_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToonTankGameMode_StartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AToonTankGameMode_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToonTankGameMode_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AToonTankGameMode Function StartGame ***************************************

// ********** Begin Class AToonTankGameMode ********************************************************
void AToonTankGameMode::StaticRegisterNativesAToonTankGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AToonTankGameMode;
UClass* AToonTankGameMode::GetPrivateStaticClass()
{
	using TClass = AToonTankGameMode;
	if (!Z_Registration_Info_UClass_AToonTankGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ToonTankGameMode"),
			Z_Registration_Info_UClass_AToonTankGameMode.InnerSingleton,
			StaticRegisterNativesAToonTankGameMode,
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
	return Z_Registration_Info_UClass_AToonTankGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AToonTankGameMode_NoRegister()
{
	return AToonTankGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AToonTankGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ToonTankGameMode.h" },
		{ "ModuleRelativePath", "ToonTankGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AToonTankGameMode_GameOver, "GameOver" }, // 2048613556
		{ &Z_Construct_UFunction_AToonTankGameMode_StartGame, "StartGame" }, // 1778218892
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToonTankGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AToonTankGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTankGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AToonTankGameMode_Statics::ClassParams = {
	&AToonTankGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTankGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AToonTankGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AToonTankGameMode()
{
	if (!Z_Registration_Info_UClass_AToonTankGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToonTankGameMode.OuterSingleton, Z_Construct_UClass_AToonTankGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AToonTankGameMode.OuterSingleton;
}
AToonTankGameMode::AToonTankGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AToonTankGameMode);
AToonTankGameMode::~AToonTankGameMode() {}
// ********** End Class AToonTankGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_ToonTanks_Source_ToonTanks_ToonTankGameMode_h__Script_ToonTanks_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AToonTankGameMode, AToonTankGameMode::StaticClass, TEXT("AToonTankGameMode"), &Z_Registration_Info_UClass_AToonTankGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToonTankGameMode), 1079643654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_ToonTanks_Source_ToonTanks_ToonTankGameMode_h__Script_ToonTanks_14080619(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_ToonTanks_Source_ToonTanks_ToonTankGameMode_h__Script_ToonTanks_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tlsdn_Desktop_2025_Summer_sinwoo_Unreal_ToonTanks_Source_ToonTanks_ToonTankGameMode_h__Script_ToonTanks_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
