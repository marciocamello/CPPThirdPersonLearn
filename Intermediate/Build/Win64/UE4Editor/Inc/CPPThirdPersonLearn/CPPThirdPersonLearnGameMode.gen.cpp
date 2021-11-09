// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPThirdPersonLearn/CPPThirdPersonLearnGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPPThirdPersonLearnGameMode() {}
// Cross Module References
	CPPTHIRDPERSONLEARN_API UClass* Z_Construct_UClass_ACPPThirdPersonLearnGameMode_NoRegister();
	CPPTHIRDPERSONLEARN_API UClass* Z_Construct_UClass_ACPPThirdPersonLearnGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPPThirdPersonLearn();
// End Cross Module References
	void ACPPThirdPersonLearnGameMode::StaticRegisterNativesACPPThirdPersonLearnGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACPPThirdPersonLearnGameMode_NoRegister()
	{
		return ACPPThirdPersonLearnGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACPPThirdPersonLearnGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPPThirdPersonLearnGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPThirdPersonLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPThirdPersonLearnGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPPThirdPersonLearnGameMode.h" },
		{ "ModuleRelativePath", "CPPThirdPersonLearnGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPPThirdPersonLearnGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPThirdPersonLearnGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPPThirdPersonLearnGameMode_Statics::ClassParams = {
		&ACPPThirdPersonLearnGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPPThirdPersonLearnGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPPThirdPersonLearnGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPPThirdPersonLearnGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPPThirdPersonLearnGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPPThirdPersonLearnGameMode, 163721926);
	template<> CPPTHIRDPERSONLEARN_API UClass* StaticClass<ACPPThirdPersonLearnGameMode>()
	{
		return ACPPThirdPersonLearnGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPPThirdPersonLearnGameMode(Z_Construct_UClass_ACPPThirdPersonLearnGameMode, &ACPPThirdPersonLearnGameMode::StaticClass, TEXT("/Script/CPPThirdPersonLearn"), TEXT("ACPPThirdPersonLearnGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPThirdPersonLearnGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
