#include "AssetTypeActions.h"
#include "BiosphereAssetEditor.h"
#include "SpeciesAssetEditor.h"

void FAssetTypeActions_Biosphere::OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> Host )
{
	for( UObject* Obj : InObjects )
	{
		UBiosphereAsset* Asset = Cast<UBiosphereAsset>( Obj );
		if( Asset )
		{
			TSharedRef<FBiosphereAssetEditor> Editor = MakeShared<FBiosphereAssetEditor>();
			Editor->InitBiosphereEditor( EToolkitMode::Standalone, Host, Asset );
		}
	}
}

void FAssetTypeActions_Species::OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> Host )
{
	for( UObject* Obj : InObjects )
	{
		USpeciesAsset* Species = Cast<USpeciesAsset>( Obj );
		if( Species )
		{
			TSharedRef<FSpeciesAssetEditor> Editor = MakeShared<FSpeciesAssetEditor>( EToolkitMode::Standalone, Host, Species );
			Editor->InitSpeciesEditor( EToolkitMode::Standalone, Host, Species );
		}
	}
}