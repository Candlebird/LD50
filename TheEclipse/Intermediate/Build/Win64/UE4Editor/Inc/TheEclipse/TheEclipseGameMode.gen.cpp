// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheEclipse/TheEclipseGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheEclipseGameMode() {}
// Cross Module References
	THEECLIPSE_API UClass* Z_Construct_UClass_ATheEclipseGameMode_NoRegister();
	THEECLIPSE_API UClass* Z_Construct_UClass_ATheEclipseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheEclipse();
// End Cross Module References
	void ATheEclipseGameMode::StaticRegisterNativesATheEclipseGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATheEclipseGameMode_NoRegister()
	{
		return ATheEclipseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATheEclipseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheEclipseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheEclipse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheEclipseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TheEclipseGameMode.h" },
		{ "ModuleRelativePath", "TheEclipseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheEclipseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheEclipseGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheEclipseGameMode_Statics::ClassParams = {
		&ATheEclipseGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATheEclipseGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheEclipseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheEclipseGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheEclipseGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheEclipseGameMode, 822226623);
	template<> THEECLIPSE_API UClass* StaticClass<ATheEclipseGameMode>()
	{
		return ATheEclipseGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheEclipseGameMode(Z_Construct_UClass_ATheEclipseGameMode, &ATheEclipseGameMode::StaticClass, TEXT("/Script/TheEclipse"), TEXT("ATheEclipseGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheEclipseGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
