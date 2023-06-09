// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIDEOPLAYERPROJECT_VideoPlayerParent_generated_h
#error "VideoPlayerParent.generated.h already included, missing '#pragma once' in VideoPlayerParent.h"
#endif
#define VIDEOPLAYERPROJECT_VideoPlayerParent_generated_h

#define FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_SPARSE_DATA
#define FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPauseVideo); \
	DECLARE_FUNCTION(execPlayVideo);


#define FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPauseVideo); \
	DECLARE_FUNCTION(execPlayVideo);


#define FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVideoPlayerParent(); \
	friend struct Z_Construct_UClass_AVideoPlayerParent_Statics; \
public: \
	DECLARE_CLASS(AVideoPlayerParent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VideoPlayerProject"), NO_API) \
	DECLARE_SERIALIZER(AVideoPlayerParent)


#define FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAVideoPlayerParent(); \
	friend struct Z_Construct_UClass_AVideoPlayerParent_Statics; \
public: \
	DECLARE_CLASS(AVideoPlayerParent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VideoPlayerProject"), NO_API) \
	DECLARE_SERIALIZER(AVideoPlayerParent)


#define FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVideoPlayerParent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVideoPlayerParent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVideoPlayerParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVideoPlayerParent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVideoPlayerParent(AVideoPlayerParent&&); \
	NO_API AVideoPlayerParent(const AVideoPlayerParent&); \
public:


#define FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVideoPlayerParent(AVideoPlayerParent&&); \
	NO_API AVideoPlayerParent(const AVideoPlayerParent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVideoPlayerParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVideoPlayerParent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVideoPlayerParent)


#define FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_9_PROLOG
#define FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_SPARSE_DATA \
	FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_RPC_WRAPPERS \
	FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_INCLASS \
	FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_SPARSE_DATA \
	FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_INCLASS_NO_PURE_DECLS \
	FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIDEOPLAYERPROJECT_API UClass* StaticClass<class AVideoPlayerParent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VideoPlayerProject_Source_VideoPlayerProject_VideoPlayerParent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
