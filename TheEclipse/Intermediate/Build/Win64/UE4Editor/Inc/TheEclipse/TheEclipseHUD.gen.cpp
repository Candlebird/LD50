// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheEclipse/TheEclipseHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheEclipseHUD() {}
// Cross Module References
	THEECLIPSE_API UClass* Z_Construct_UClass_ATheEclipseHUD_NoRegister();
	THEECLIPSE_API UClass* Z_Construct_UClass_ATheEclipseHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TheEclipse();
// End Cross Module References
	void ATheEclipseHUD::StaticRegisterNativesATheEclipseHUD()
	{
	}
	UClass* Z_Construct_UClass_ATheEclipseHUD_NoRegister()
	{
		return ATheEclipseHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATheEclipseHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheEclipseHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TheEclipse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheEclipseHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TheEclipseHUD.h" },
		{ "ModuleRelativePath", "TheEclipseHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheEclipseHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheEclipseHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheEclipseHUD_Statics::ClassParams = {
		&ATheEclipseHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATheEclipseHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheEclipseHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheEclipseHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheEclipseHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheEclipseHUD, 4051946328);
	template<> THEECLIPSE_API UClass* StaticClass<ATheEclipseHUD>()
	{
		return ATheEclipseHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheEclipseHUD(Z_Construct_UClass_ATheEclipseHUD, &ATheEclipseHUD::StaticClass, TEXT("/Script/TheEclipse"), TEXT("ATheEclipseHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheEclipseHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
