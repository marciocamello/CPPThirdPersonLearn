// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPThirdPersonLearn/Public/AdvancedCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedCharacter() {}
// Cross Module References
	CPPTHIRDPERSONLEARN_API UClass* Z_Construct_UClass_AAdvancedCharacter_NoRegister();
	CPPTHIRDPERSONLEARN_API UClass* Z_Construct_UClass_AAdvancedCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CPPThirdPersonLearn();
// End Cross Module References
	void AAdvancedCharacter::StaticRegisterNativesAAdvancedCharacter()
	{
	}
	UClass* Z_Construct_UClass_AAdvancedCharacter_NoRegister()
	{
		return AAdvancedCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAdvancedCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyesSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EyesSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvancedCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPThirdPersonLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AdvancedCharacter.h" },
		{ "ModuleRelativePath", "Public/AdvancedCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedCharacter_Statics::NewProp_EyesSocketName_MetaData[] = {
		{ "Category", "AdvancedCharacter" },
		{ "ModuleRelativePath", "Public/AdvancedCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAdvancedCharacter_Statics::NewProp_EyesSocketName = { "EyesSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedCharacter, EyesSocketName), METADATA_PARAMS(Z_Construct_UClass_AAdvancedCharacter_Statics::NewProp_EyesSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedCharacter_Statics::NewProp_EyesSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvancedCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedCharacter_Statics::NewProp_EyesSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvancedCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedCharacter_Statics::ClassParams = {
		&AAdvancedCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdvancedCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvancedCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvancedCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvancedCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvancedCharacter, 1480944486);
	template<> CPPTHIRDPERSONLEARN_API UClass* StaticClass<AAdvancedCharacter>()
	{
		return AAdvancedCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvancedCharacter(Z_Construct_UClass_AAdvancedCharacter, &AAdvancedCharacter::StaticClass, TEXT("/Script/CPPThirdPersonLearn"), TEXT("AAdvancedCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
