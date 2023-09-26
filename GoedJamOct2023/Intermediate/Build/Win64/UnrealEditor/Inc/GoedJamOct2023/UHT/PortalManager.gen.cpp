// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoedJamOct2023/PortalManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	GOEDJAMOCT2023_API UClass* Z_Construct_UClass_APortal_NoRegister();
	GOEDJAMOCT2023_API UClass* Z_Construct_UClass_APortalManager();
	GOEDJAMOCT2023_API UClass* Z_Construct_UClass_APortalManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoedJamOct2023();
// End Cross Module References
	void APortalManager::StaticRegisterNativesAPortalManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortalManager);
	UClass* Z_Construct_UClass_APortalManager_NoRegister()
	{
		return APortalManager::StaticClass();
	}
	struct Z_Construct_UClass_APortalManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSource_MetaData[];
#endif
		static void NewProp_ActiveSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ActiveSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTarget_MetaData[];
#endif
		static void NewProp_ActiveTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ActiveTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PCM;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortalManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GoedJamOct2023,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortalManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PortalManager.h" },
		{ "ModuleRelativePath", "PortalManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalManager_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Portals" },
		{ "ModuleRelativePath", "PortalManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalManager_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalManager, Source), Z_Construct_UClass_APortal_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalManager_Statics::NewProp_Source_MetaData), Z_Construct_UClass_APortalManager_Statics::NewProp_Source_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalManager_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Portals" },
		{ "ModuleRelativePath", "PortalManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalManager_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalManager, Target), Z_Construct_UClass_APortal_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalManager_Statics::NewProp_Target_MetaData), Z_Construct_UClass_APortalManager_Statics::NewProp_Target_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveSource_MetaData[] = {
		{ "Category", "Portals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If true will enable relative motion on Source camera\n" },
#endif
		{ "ModuleRelativePath", "PortalManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will enable relative motion on Source camera" },
#endif
	};
#endif
	void Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveSource_SetBit(void* Obj)
	{
		((APortalManager*)Obj)->ActiveSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveSource = { "ActiveSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APortalManager), &Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveSource_MetaData), Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveTarget_MetaData[] = {
		{ "Category", "Portals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If true will enable relative motion on Target camera\n" },
#endif
		{ "ModuleRelativePath", "PortalManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will enable relative motion on Target camera" },
#endif
	};
#endif
	void Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveTarget_SetBit(void* Obj)
	{
		((APortalManager*)Obj)->ActiveTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveTarget = { "ActiveTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APortalManager), &Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveTarget_MetaData), Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalManager_Statics::NewProp_PCM_MetaData[] = {
		{ "ModuleRelativePath", "PortalManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalManager_Statics::NewProp_PCM = { "PCM", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalManager, PCM), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalManager_Statics::NewProp_PCM_MetaData), Z_Construct_UClass_APortalManager_Statics::NewProp_PCM_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortalManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalManager_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalManager_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalManager_Statics::NewProp_ActiveTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalManager_Statics::NewProp_PCM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortalManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APortalManager_Statics::ClassParams = {
		&APortalManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APortalManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APortalManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APortalManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortalManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APortalManager()
	{
		if (!Z_Registration_Info_UClass_APortalManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortalManager.OuterSingleton, Z_Construct_UClass_APortalManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APortalManager.OuterSingleton;
	}
	template<> GOEDJAMOCT2023_API UClass* StaticClass<APortalManager>()
	{
		return APortalManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortalManager);
	APortalManager::~APortalManager() {}
	struct Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_GoedJamOct2023_GoedJamOct2023_Source_GoedJamOct2023_PortalManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_GoedJamOct2023_GoedJamOct2023_Source_GoedJamOct2023_PortalManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APortalManager, APortalManager::StaticClass, TEXT("APortalManager"), &Z_Registration_Info_UClass_APortalManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortalManager), 3906648709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_GoedJamOct2023_GoedJamOct2023_Source_GoedJamOct2023_PortalManager_h_3661340296(TEXT("/Script/GoedJamOct2023"),
		Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_GoedJamOct2023_GoedJamOct2023_Source_GoedJamOct2023_PortalManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Steve_Documents_Unreal_Projects_GoedJamOct2023_GoedJamOct2023_Source_GoedJamOct2023_PortalManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
