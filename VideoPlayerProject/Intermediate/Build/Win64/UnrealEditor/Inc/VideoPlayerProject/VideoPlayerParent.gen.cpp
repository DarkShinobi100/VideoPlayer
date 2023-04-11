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
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
// End Cross Module References
	DEFINE_FUNCTION(AVideoPlayerParent::execPauseVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseVideo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVideoPlayerParent::execPlayVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVideo();
		P_NATIVE_END;
	}
	void AVideoPlayerParent::StaticRegisterNativesAVideoPlayerParent()
	{
		UClass* Class = AVideoPlayerParent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PauseVideo", &AVideoPlayerParent::execPauseVideo },
			{ "PlayVideo", &AVideoPlayerParent::execPlayVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVideoPlayerParent_PauseVideo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVideoPlayerParent_PauseVideo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the player wants to pause video playback\n" },
		{ "ModuleRelativePath", "VideoPlayerParent.h" },
		{ "ToolTip", "Called when the player wants to pause video playback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVideoPlayerParent_PauseVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVideoPlayerParent, nullptr, "PauseVideo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVideoPlayerParent_PauseVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVideoPlayerParent_PauseVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVideoPlayerParent_PauseVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVideoPlayerParent_PauseVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVideoPlayerParent_PlayVideo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVideoPlayerParent_PlayVideo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the player wants to start video playback\n" },
		{ "ModuleRelativePath", "VideoPlayerParent.h" },
		{ "ToolTip", "Called when the player wants to start video playback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVideoPlayerParent_PlayVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVideoPlayerParent, nullptr, "PlayVideo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVideoPlayerParent_PlayVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVideoPlayerParent_PlayVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVideoPlayerParent_PlayVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVideoPlayerParent_PlayVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVideoPlayerParent);
	UClass* Z_Construct_UClass_AVideoPlayerParent_NoRegister()
	{
		return AVideoPlayerParent::StaticClass();
	}
	struct Z_Construct_UClass_AVideoPlayerParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVideoPlayerParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VideoPlayerProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVideoPlayerParent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVideoPlayerParent_PauseVideo, "PauseVideo" }, // 1296728426
		{ &Z_Construct_UFunction_AVideoPlayerParent_PlayVideo, "PlayVideo" }, // 972832574
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayerParent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VideoPlayerParent.h" },
		{ "ModuleRelativePath", "VideoPlayerParent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "VideoPlayerParent" },
		{ "Comment", "//VARIABLES\n// Stores the selected video to play\n" },
		{ "ModuleRelativePath", "VideoPlayerParent.h" },
		{ "ToolTip", "VARIABLES\n Stores the selected video to play" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVideoPlayerParent, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "VideoPlayerParent" },
		{ "Comment", "// Stores the media player in which to play the selected video with\n" },
		{ "ModuleRelativePath", "VideoPlayerParent.h" },
		{ "ToolTip", "Stores the media player in which to play the selected video with" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVideoPlayerParent, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "VideoPlayerParent" },
		{ "Comment", "// Stores the time at which to start the video from\n" },
		{ "ModuleRelativePath", "VideoPlayerParent.h" },
		{ "ToolTip", "Stores the time at which to start the video from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVideoPlayerParent, StartTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_StartTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVideoPlayerParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_MediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayerParent_Statics::NewProp_StartTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVideoPlayerParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVideoPlayerParent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVideoPlayerParent_Statics::ClassParams = {
		&AVideoPlayerParent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVideoPlayerParent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayerParent_Statics::PropPointers),
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
		{ Z_Construct_UClass_AVideoPlayerParent, AVideoPlayerParent::StaticClass, TEXT("AVideoPlayerParent"), &Z_Registration_Info_UClass_AVideoPlayerParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVideoPlayerParent), 3273972495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_2688377014(TEXT("/Script/VideoPlayerProject"),
		Z_CompiledInDeferFile_FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
