// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintReferencesCommandlet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlueprintReferencesCommandlet() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VisualStudioTools();
VISUALSTUDIOTOOLS_API UClass* Z_Construct_UClass_UVisualStudioToolsCommandletBase();
VISUALSTUDIOTOOLS_API UClass* Z_Construct_UClass_UVsBlueprintReferencesCommandlet();
VISUALSTUDIOTOOLS_API UClass* Z_Construct_UClass_UVsBlueprintReferencesCommandlet_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVsBlueprintReferencesCommandlet *****************************************
void UVsBlueprintReferencesCommandlet::StaticRegisterNativesUVsBlueprintReferencesCommandlet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVsBlueprintReferencesCommandlet;
UClass* UVsBlueprintReferencesCommandlet::GetPrivateStaticClass()
{
	using TClass = UVsBlueprintReferencesCommandlet;
	if (!Z_Registration_Info_UClass_UVsBlueprintReferencesCommandlet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VsBlueprintReferencesCommandlet"),
			Z_Registration_Info_UClass_UVsBlueprintReferencesCommandlet.InnerSingleton,
			StaticRegisterNativesUVsBlueprintReferencesCommandlet,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVsBlueprintReferencesCommandlet.InnerSingleton;
}
UClass* Z_Construct_UClass_UVsBlueprintReferencesCommandlet_NoRegister()
{
	return UVsBlueprintReferencesCommandlet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVsBlueprintReferencesCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintReferencesCommandlet.h" },
		{ "ModuleRelativePath", "Private/BlueprintReferencesCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVsBlueprintReferencesCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVsBlueprintReferencesCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVisualStudioToolsCommandletBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VisualStudioTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVsBlueprintReferencesCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVsBlueprintReferencesCommandlet_Statics::ClassParams = {
	&UVsBlueprintReferencesCommandlet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVsBlueprintReferencesCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UVsBlueprintReferencesCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVsBlueprintReferencesCommandlet()
{
	if (!Z_Registration_Info_UClass_UVsBlueprintReferencesCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVsBlueprintReferencesCommandlet.OuterSingleton, Z_Construct_UClass_UVsBlueprintReferencesCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVsBlueprintReferencesCommandlet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVsBlueprintReferencesCommandlet);
UVsBlueprintReferencesCommandlet::~UVsBlueprintReferencesCommandlet() {}
// ********** End Class UVsBlueprintReferencesCommandlet *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_source_unreal_Playground_Plugins_VisualStudioTools_Source_VisualStudioTools_Private_BlueprintReferencesCommandlet_h__Script_VisualStudioTools_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVsBlueprintReferencesCommandlet, UVsBlueprintReferencesCommandlet::StaticClass, TEXT("UVsBlueprintReferencesCommandlet"), &Z_Registration_Info_UClass_UVsBlueprintReferencesCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVsBlueprintReferencesCommandlet), 3588560280U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_source_unreal_Playground_Plugins_VisualStudioTools_Source_VisualStudioTools_Private_BlueprintReferencesCommandlet_h__Script_VisualStudioTools_468257732(TEXT("/Script/VisualStudioTools"),
	Z_CompiledInDeferFile_FID_source_unreal_Playground_Plugins_VisualStudioTools_Source_VisualStudioTools_Private_BlueprintReferencesCommandlet_h__Script_VisualStudioTools_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_source_unreal_Playground_Plugins_VisualStudioTools_Source_VisualStudioTools_Private_BlueprintReferencesCommandlet_h__Script_VisualStudioTools_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
