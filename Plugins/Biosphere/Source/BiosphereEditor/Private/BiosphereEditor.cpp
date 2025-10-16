// Copyright Epic Games, Inc. All Rights Reserved.

#include "BiosphereEditor.h"
#include "AssetToolsModule.h"                 // IAssetTools, FAssetToolsModule
#include "IAssetTools.h"
#include "AssetTypeActions.h"

#define LOCTEXT_NAMESPACE "FBiosphereEditorModule"

uint32 FBiosphereEditorModule::BiosphereAssetCategoryBit = EAssetTypeCategories::Misc; // fallback

void FBiosphereEditorModule::StartupModule()
{
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>( "AssetTools" ).Get();
	const FText CategoryName = LOCTEXT( "BiosphereAssetCategory", "Biosphere" );
	BiosphereAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory( FName( "Biosphere" ), CategoryName );

	RegisterAssetTypeActions();
}

void FBiosphereEditorModule::ShutdownModule()
{
	UnregisterAssetTypeActions();
}

void FBiosphereEditorModule::RegisterAssetTypeActions()
{
	// AssetTools may not exist in commandlets; guard it
	if( FModuleManager::Get().IsModuleLoaded( "AssetTools" ) )
	{
		IAssetTools& AssetTools = FAssetToolsModule::GetModule().Get();
		// Biosphere asset type actions
		TSharedPtr<IAssetTypeActions> BiosphereActions = MakeShared<FAssetTypeActions_Biosphere>();
		AssetTools.RegisterAssetTypeActions( BiosphereActions.ToSharedRef() );
		RegisteredAssetTypeActions.Add( BiosphereActions );
		// Species asset type actions
		TSharedPtr<IAssetTypeActions> SpeciesActions = MakeShared<FAssetTypeActions_Species>();
		AssetTools.RegisterAssetTypeActions( SpeciesActions.ToSharedRef() );
		RegisteredAssetTypeActions.Add( SpeciesActions );
	}
}

void FBiosphereEditorModule::UnregisterAssetTypeActions()
{
	if( FModuleManager::Get().IsModuleLoaded( "AssetTools" ) )
	{
		IAssetTools& AssetTools = FAssetToolsModule::GetModule().Get();
		for( const TSharedPtr<IAssetTypeActions>& Actions : RegisteredAssetTypeActions )
		{
			if( Actions.IsValid() )
			{
				AssetTools.UnregisterAssetTypeActions( Actions.ToSharedRef() );
			}
		}
	}
	RegisteredAssetTypeActions.Empty();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE( FBiosphereEditorModule, BiosphereEditor )