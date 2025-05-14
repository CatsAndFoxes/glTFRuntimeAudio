// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "glTFRuntimeAudioFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UglTFRuntimeAsset;
class UglTFRuntimeSoundWave;
enum class EglTFRuntimeAudioDecoder : uint8;
struct FglTFRuntimeAudioConfig;
struct FglTFRuntimePathItem;
#ifdef GLTFRUNTIMEAUDIO_glTFRuntimeAudioFunctionLibrary_generated_h
#error "glTFRuntimeAudioFunctionLibrary.generated.h already included, missing '#pragma once' in glTFRuntimeAudioFunctionLibrary.h"
#endif
#define GLTFRUNTIMEAUDIO_glTFRuntimeAudioFunctionLibrary_generated_h

#define FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadSoundFromPath); \
	DECLARE_FUNCTION(execLoadSoundFromBlob);


#define FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUglTFRuntimeAudioFunctionLibrary(); \
	friend struct Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UglTFRuntimeAudioFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/glTFRuntimeAudio"), NO_API) \
	DECLARE_SERIALIZER(UglTFRuntimeAudioFunctionLibrary)


#define FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UglTFRuntimeAudioFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UglTFRuntimeAudioFunctionLibrary(UglTFRuntimeAudioFunctionLibrary&&); \
	UglTFRuntimeAudioFunctionLibrary(const UglTFRuntimeAudioFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UglTFRuntimeAudioFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UglTFRuntimeAudioFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UglTFRuntimeAudioFunctionLibrary) \
	NO_API virtual ~UglTFRuntimeAudioFunctionLibrary();


#define FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_24_PROLOG
#define FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLTFRUNTIMEAUDIO_API UClass* StaticClass<class UglTFRuntimeAudioFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h


#define FOREACH_ENUM_EGLTFRUNTIMEAUDIODECODER(op) \
	op(EglTFRuntimeAudioDecoder::Auto) \
	op(EglTFRuntimeAudioDecoder::OggOpus) \
	op(EglTFRuntimeAudioDecoder::OggVorbis) \
	op(EglTFRuntimeAudioDecoder::Mp3) \
	op(EglTFRuntimeAudioDecoder::Wav) 

enum class EglTFRuntimeAudioDecoder : uint8;
template<> struct TIsUEnumClass<EglTFRuntimeAudioDecoder> { enum { Value = true }; };
template<> GLTFRUNTIMEAUDIO_API UEnum* StaticEnum<EglTFRuntimeAudioDecoder>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
