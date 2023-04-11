// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VideoPlayerProject/VideoPlayerParent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoPlayerParent() {}
// Cross Module References
	VIDEOPLAYERPROJECT_API UClass* Z_Construct_UClass_AVideoPlayerParent_NoRegister();
	VIDEOPLAYERPROJECT_API UClass* Z_Construct_UClass_AVideoPlayerParent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VideoPlayerProject();
// End Cross Module References
	void AVideoPlayerParent::StaticRegisterNativesAVideoPlayerParent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVideoPlayerParent);
	UClass* Z_Construct_UClass_AVideoPlayerParent_NoRegister()
	{
		return AVideoPlayerParent::StaticClass();
	}
	struct Z_Construct_UClass_AVideoPlayerParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVideoPlayerParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VideoPlayerProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayerParent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VideoPlayerParent.h" },
		{ "ModuleRelativePath", "VideoPlayerParent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVideoPlayerParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVideoPlayerParent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVideoPlayerParent_Statics::ClassParams = {
		&AVideoPlayerParent::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVideoPlayerParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayerParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVideoPlayerParent()
	{
		if (!Z_Registration_Info_UClass_AVideoPlayerParent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVideoPlayerParent.OuterSingleton, Z_Construct_UClass_AVideoPlayerParent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVideoPlayerParent.OuterSingleton;
	}
	template<> VIDEOPLAYERPROJECT_API UClass* StaticClass<AVideoPlayerParent>()
	{
		return AVideoPlayerParent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVideoPlayerParent);
	struct Z_CompiledInDeferFile_FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVideoPlayerParent, AVideoPlayerParent::StaticClass, TEXT("AVideoPlayerParent"), &Z_Registration_Info_UClass_AVideoPlayerParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVideoPlayerParent), 220115619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_2768378677(TEXT("/Script/VideoPlayerProject"),
		Z_CompiledInDeferFile_FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
