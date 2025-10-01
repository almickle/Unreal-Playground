// Copyright Epic Games, Inc. All Rights Reserved.

#include "BiosphereEditor.h"
#include "AssetToolsModule.h"                 // IAssetTools, FAssetToolsModule
#include "IAssetTools.h"
#include "AssetTypeActions_FoodWeb.h"

#define LOCTEXT_NAMESPACE "FBiosphereEditorModule"

void FBiosphereEditorModule::StartupModule()
{
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
		// Create and register your action(s)
		TSharedPtr<IAssetTypeActions> FoodWebActions = MakeShared<FAssetTypeActions_FoodWeb>();
		AssetTools.RegisterAssetTypeActions( FoodWebActions.ToSharedRef() );
		RegisteredAssetTypeActions.Add( FoodWebActions );
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