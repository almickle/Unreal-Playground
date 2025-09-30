// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualStudioToolsCommandlet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVisualStudioToolsCommandlet() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VisualStudioTools();
VISUALSTUDIOTOOLS_API UClass* Z_Construct_UClass_UVisualStudioToolsCommandlet();
VISUALSTUDIOTOOLS_API UClass* Z_Construct_UClass_UVisualStudioToolsCommandlet_NoRegister();
VISUALSTUDIOTOOLS_API UClass* Z_Construct_UClass_UVisualStudioToolsCommandletBase();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVisualStudioToolsCommandlet *********************************************
void UVisualStudioToolsCommandlet::StaticRegisterNativesUVisualStudioToolsCommandlet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVisualStudioToolsCommandlet;
UClass* UVisualStudioToolsCommandlet::GetPrivateStaticClass()
{
	using TClass = UVisualStudioToolsCommandlet;
	if (!Z_Registration_Info_UClass_UVisualStudioToolsCommandlet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VisualStudioToolsCommandlet"),
			Z_Registration_Info_UClass_UVisualStudioToolsCommandlet.InnerSingleton,
			StaticRegisterNativesUVisualStudioToolsCommandlet,
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
	return Z_Registration_Info_UClass_UVisualStudioToolsCommandlet.InnerSingleton;
}
UClass* Z_Construct_UClass_UVisualStudioToolsCommandlet_NoRegister()
{
	return UVisualStudioToolsCommandlet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVisualStudioToolsCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VisualStudioToolsCommandlet.h" },
		{ "ModuleRelativePath", "Private/VisualStudioToolsCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualStudioToolsCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVisualStudioToolsCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVisualStudioToolsCommandletBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VisualStudioTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualStudioToolsCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualStudioToolsCommandlet_Statics::ClassParams = {
	&UVisualStudioToolsCommandlet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualStudioToolsCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UVisualStudioToolsCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVisualStudioToolsCommandlet()
{
	if (!Z_Registration_Info_UClass_UVisualStudioToolsCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualStudioToolsCommandlet.OuterSingleton, Z_Construct_UClass_UVisualStudioToolsCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVisualStudioToolsCommandlet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualStudioToolsCommandlet);
UVisualStudioToolsCommandlet::~UVisualStudioToolsCommandlet() {}
// ********** End Class UVisualStudioToolsCommandlet ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_source_unreal_Playground_Plugins_VisualStudioTools_Source_VisualStudioTools_Private_VisualStudioToolsCommandlet_h__Script_VisualStudioTools_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVisualStudioToolsCommandlet, UVisualStudioToolsCommandlet::StaticClass, TEXT("UVisualStudioToolsCommandlet"), &Z_Registration_Info_UClass_UVisualStudioToolsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualStudioToolsCommandlet), 2702461840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_source_unreal_Playground_Plugins_VisualStudioTools_Source_VisualStudioTools_Private_VisualStudioToolsCommandlet_h__Script_VisualStudioTools_2037812338(TEXT("/Script/VisualStudioTools"),
	Z_CompiledInDeferFile_FID_source_unreal_Playground_Plugins_VisualStudioTools_Source_VisualStudioTools_Private_VisualStudioToolsCommandlet_h__Script_VisualStudioTools_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_source_unreal_Playground_Plugins_VisualStudioTools_Source_VisualStudioTools_Private_VisualStudioToolsCommandlet_h__Script_VisualStudioTools_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
