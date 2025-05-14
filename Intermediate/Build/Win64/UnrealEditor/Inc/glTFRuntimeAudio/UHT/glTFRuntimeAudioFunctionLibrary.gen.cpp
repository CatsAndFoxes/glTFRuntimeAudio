// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntimeAudio/Public/glTFRuntimeAudioFunctionLibrary.h"
#include "glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeAudioFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister();
GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeSoundWave_NoRegister();
GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeAudioConfig();
GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimePathItem();
GLTFRUNTIMEAUDIO_API UClass* Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary();
GLTFRUNTIMEAUDIO_API UClass* Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary_NoRegister();
GLTFRUNTIMEAUDIO_API UEnum* Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder();
UPackage* Z_Construct_UPackage__Script_glTFRuntimeAudio();
// End Cross Module References

// Begin Enum EglTFRuntimeAudioDecoder
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EglTFRuntimeAudioDecoder;
static UEnum* EglTFRuntimeAudioDecoder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EglTFRuntimeAudioDecoder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EglTFRuntimeAudioDecoder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder, (UObject*)Z_Construct_UPackage__Script_glTFRuntimeAudio(), TEXT("EglTFRuntimeAudioDecoder"));
	}
	return Z_Registration_Info_UEnum_EglTFRuntimeAudioDecoder.OuterSingleton;
}
template<> GLTFRUNTIMEAUDIO_API UEnum* StaticEnum<EglTFRuntimeAudioDecoder>()
{
	return EglTFRuntimeAudioDecoder_StaticEnum();
}
struct Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Name", "EglTFRuntimeAudioDecoder::Auto" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAudioFunctionLibrary.h" },
		{ "Mp3.Name", "EglTFRuntimeAudioDecoder::Mp3" },
		{ "OggOpus.Name", "EglTFRuntimeAudioDecoder::OggOpus" },
		{ "OggVorbis.Name", "EglTFRuntimeAudioDecoder::OggVorbis" },
		{ "Wav.Name", "EglTFRuntimeAudioDecoder::Wav" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EglTFRuntimeAudioDecoder::Auto", (int64)EglTFRuntimeAudioDecoder::Auto },
		{ "EglTFRuntimeAudioDecoder::OggOpus", (int64)EglTFRuntimeAudioDecoder::OggOpus },
		{ "EglTFRuntimeAudioDecoder::OggVorbis", (int64)EglTFRuntimeAudioDecoder::OggVorbis },
		{ "EglTFRuntimeAudioDecoder::Mp3", (int64)EglTFRuntimeAudioDecoder::Mp3 },
		{ "EglTFRuntimeAudioDecoder::Wav", (int64)EglTFRuntimeAudioDecoder::Wav },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_glTFRuntimeAudio,
	nullptr,
	"EglTFRuntimeAudioDecoder",
	"EglTFRuntimeAudioDecoder",
	Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder()
{
	if (!Z_Registration_Info_UEnum_EglTFRuntimeAudioDecoder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EglTFRuntimeAudioDecoder.InnerSingleton, Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EglTFRuntimeAudioDecoder.InnerSingleton;
}
// End Enum EglTFRuntimeAudioDecoder

// Begin Class UglTFRuntimeAudioFunctionLibrary Function LoadSoundFromBlob
struct Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics
{
	struct glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromBlob_Parms
	{
		UglTFRuntimeAsset* Asset;
		EglTFRuntimeAudioDecoder AudioDecoder;
		FglTFRuntimeAudioConfig AudioConfig;
		UglTFRuntimeSoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AudioConfig" },
		{ "AutoCreateRefTerm", "AudioConfig" },
		{ "Category", "glTFRuntimeAudio" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAudioFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioDecoder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioDecoder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromBlob_Parms, Asset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::NewProp_AudioDecoder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::NewProp_AudioDecoder = { "AudioDecoder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromBlob_Parms, AudioDecoder), Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder, METADATA_PARAMS(0, nullptr) }; // 188479755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::NewProp_AudioConfig = { "AudioConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromBlob_Parms, AudioConfig), Z_Construct_UScriptStruct_FglTFRuntimeAudioConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioConfig_MetaData), NewProp_AudioConfig_MetaData) }; // 2837767465
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromBlob_Parms, ReturnValue), Z_Construct_UClass_UglTFRuntimeSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::NewProp_AudioDecoder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::NewProp_AudioDecoder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::NewProp_AudioConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary, nullptr, "LoadSoundFromBlob", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromBlob_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromBlob_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UglTFRuntimeAudioFunctionLibrary::execLoadSoundFromBlob)
{
	P_GET_OBJECT(UglTFRuntimeAsset,Z_Param_Asset);
	P_GET_ENUM(EglTFRuntimeAudioDecoder,Z_Param_AudioDecoder);
	P_GET_STRUCT_REF(FglTFRuntimeAudioConfig,Z_Param_Out_AudioConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UglTFRuntimeSoundWave**)Z_Param__Result=UglTFRuntimeAudioFunctionLibrary::LoadSoundFromBlob(Z_Param_Asset,EglTFRuntimeAudioDecoder(Z_Param_AudioDecoder),Z_Param_Out_AudioConfig);
	P_NATIVE_END;
}
// End Class UglTFRuntimeAudioFunctionLibrary Function LoadSoundFromBlob

// Begin Class UglTFRuntimeAudioFunctionLibrary Function LoadSoundFromPath
struct Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics
{
	struct glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromPath_Parms
	{
		UglTFRuntimeAsset* Asset;
		TArray<FglTFRuntimePathItem> Path;
		EglTFRuntimeAudioDecoder AudioDecoder;
		FglTFRuntimeAudioConfig AudioConfig;
		UglTFRuntimeSoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AudioConfig" },
		{ "AutoCreateRefTerm", "Path,AudioConfig" },
		{ "Category", "glTFRuntimeAudio" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAudioFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioDecoder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioDecoder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromPath_Parms, Asset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimePathItem, METADATA_PARAMS(0, nullptr) }; // 2063093434
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) }; // 2063093434
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_AudioDecoder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_AudioDecoder = { "AudioDecoder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromPath_Parms, AudioDecoder), Z_Construct_UEnum_glTFRuntimeAudio_EglTFRuntimeAudioDecoder, METADATA_PARAMS(0, nullptr) }; // 188479755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_AudioConfig = { "AudioConfig", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromPath_Parms, AudioConfig), Z_Construct_UScriptStruct_FglTFRuntimeAudioConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioConfig_MetaData), NewProp_AudioConfig_MetaData) }; // 2837767465
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromPath_Parms, ReturnValue), Z_Construct_UClass_UglTFRuntimeSoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_AudioDecoder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_AudioDecoder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_AudioConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary, nullptr, "LoadSoundFromPath", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::glTFRuntimeAudioFunctionLibrary_eventLoadSoundFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UglTFRuntimeAudioFunctionLibrary::execLoadSoundFromPath)
{
	P_GET_OBJECT(UglTFRuntimeAsset,Z_Param_Asset);
	P_GET_TARRAY_REF(FglTFRuntimePathItem,Z_Param_Out_Path);
	P_GET_ENUM(EglTFRuntimeAudioDecoder,Z_Param_AudioDecoder);
	P_GET_STRUCT_REF(FglTFRuntimeAudioConfig,Z_Param_Out_AudioConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UglTFRuntimeSoundWave**)Z_Param__Result=UglTFRuntimeAudioFunctionLibrary::LoadSoundFromPath(Z_Param_Asset,Z_Param_Out_Path,EglTFRuntimeAudioDecoder(Z_Param_AudioDecoder),Z_Param_Out_AudioConfig);
	P_NATIVE_END;
}
// End Class UglTFRuntimeAudioFunctionLibrary Function LoadSoundFromPath

// Begin Class UglTFRuntimeAudioFunctionLibrary
void UglTFRuntimeAudioFunctionLibrary::StaticRegisterNativesUglTFRuntimeAudioFunctionLibrary()
{
	UClass* Class = UglTFRuntimeAudioFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadSoundFromBlob", &UglTFRuntimeAudioFunctionLibrary::execLoadSoundFromBlob },
		{ "LoadSoundFromPath", &UglTFRuntimeAudioFunctionLibrary::execLoadSoundFromPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UglTFRuntimeAudioFunctionLibrary);
UClass* Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary_NoRegister()
{
	return UglTFRuntimeAudioFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "glTFRuntimeAudioFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeAudioFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromBlob, "LoadSoundFromBlob" }, // 2484171542
		{ &Z_Construct_UFunction_UglTFRuntimeAudioFunctionLibrary_LoadSoundFromPath, "LoadSoundFromPath" }, // 4276863468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFRuntimeAudioFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntimeAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary_Statics::ClassParams = {
	&UglTFRuntimeAudioFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UglTFRuntimeAudioFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UglTFRuntimeAudioFunctionLibrary.OuterSingleton, Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UglTFRuntimeAudioFunctionLibrary.OuterSingleton;
}
template<> GLTFRUNTIMEAUDIO_API UClass* StaticClass<UglTFRuntimeAudioFunctionLibrary>()
{
	return UglTFRuntimeAudioFunctionLibrary::StaticClass();
}
UglTFRuntimeAudioFunctionLibrary::UglTFRuntimeAudioFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFRuntimeAudioFunctionLibrary);
UglTFRuntimeAudioFunctionLibrary::~UglTFRuntimeAudioFunctionLibrary() {}
// End Class UglTFRuntimeAudioFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EglTFRuntimeAudioDecoder_StaticEnum, TEXT("EglTFRuntimeAudioDecoder"), &Z_Registration_Info_UEnum_EglTFRuntimeAudioDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 188479755U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UglTFRuntimeAudioFunctionLibrary, UglTFRuntimeAudioFunctionLibrary::StaticClass, TEXT("UglTFRuntimeAudioFunctionLibrary"), &Z_Registration_Info_UClass_UglTFRuntimeAudioFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UglTFRuntimeAudioFunctionLibrary), 1419602541U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_3778410903(TEXT("/Script/glTFRuntimeAudio"),
	Z_CompiledInDeferFile_FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenny_Documents_GitHub_VirtualSociety_Plugins_glTFRuntimeAudio_Source_glTFRuntimeAudio_Public_glTFRuntimeAudioFunctionLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
