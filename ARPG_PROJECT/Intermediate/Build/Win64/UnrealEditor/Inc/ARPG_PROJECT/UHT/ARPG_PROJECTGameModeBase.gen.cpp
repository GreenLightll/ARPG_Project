// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG_PROJECT/ARPG_PROJECTGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPG_PROJECTGameModeBase() {}
// Cross Module References
	ARPG_PROJECT_API UClass* Z_Construct_UClass_AARPG_PROJECTGameModeBase();
	ARPG_PROJECT_API UClass* Z_Construct_UClass_AARPG_PROJECTGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ARPG_PROJECT();
// End Cross Module References
	void AARPG_PROJECTGameModeBase::StaticRegisterNativesAARPG_PROJECTGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARPG_PROJECTGameModeBase);
	UClass* Z_Construct_UClass_AARPG_PROJECTGameModeBase_NoRegister()
	{
		return AARPG_PROJECTGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AARPG_PROJECTGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPG_PROJECTGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG_PROJECT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPG_PROJECTGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ARPG_PROJECTGameModeBase.h" },
		{ "ModuleRelativePath", "ARPG_PROJECTGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPG_PROJECTGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPG_PROJECTGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARPG_PROJECTGameModeBase_Statics::ClassParams = {
		&AARPG_PROJECTGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AARPG_PROJECTGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARPG_PROJECTGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPG_PROJECTGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AARPG_PROJECTGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARPG_PROJECTGameModeBase.OuterSingleton, Z_Construct_UClass_AARPG_PROJECTGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARPG_PROJECTGameModeBase.OuterSingleton;
	}
	template<> ARPG_PROJECT_API UClass* StaticClass<AARPG_PROJECTGameModeBase>()
	{
		return AARPG_PROJECTGameModeBase::StaticClass();
	}
	AARPG_PROJECTGameModeBase::AARPG_PROJECTGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPG_PROJECTGameModeBase);
	AARPG_PROJECTGameModeBase::~AARPG_PROJECTGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_GIT_UE5_ARPG_Project_Repository_ARPG_PROJECT_Source_ARPG_PROJECT_ARPG_PROJECTGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_UE5_ARPG_Project_Repository_ARPG_PROJECT_Source_ARPG_PROJECT_ARPG_PROJECTGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARPG_PROJECTGameModeBase, AARPG_PROJECTGameModeBase::StaticClass, TEXT("AARPG_PROJECTGameModeBase"), &Z_Registration_Info_UClass_AARPG_PROJECTGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARPG_PROJECTGameModeBase), 3840982472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_UE5_ARPG_Project_Repository_ARPG_PROJECT_Source_ARPG_PROJECT_ARPG_PROJECTGameModeBase_h_4050150106(TEXT("/Script/ARPG_PROJECT"),
		Z_CompiledInDeferFile_FID_GIT_UE5_ARPG_Project_Repository_ARPG_PROJECT_Source_ARPG_PROJECT_ARPG_PROJECTGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_UE5_ARPG_Project_Repository_ARPG_PROJECT_Source_ARPG_PROJECT_ARPG_PROJECTGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
