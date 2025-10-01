#include "AssetTypeActions_FoodWeb.h"
#include "FoodWebAsset.h"
#include "FoodWebAssetEditor.h"

FText FAssetTypeActions_FoodWeb::GetName() const { return INVTEXT( "Food Web" ); }
UClass* FAssetTypeActions_FoodWeb::GetSupportedClass() const { return UFoodWebAsset::StaticClass(); }
FColor FAssetTypeActions_FoodWeb::GetTypeColor() const { return { 100,180,255 }; }
uint32 FAssetTypeActions_FoodWeb::GetCategories() { return (uint32)EAssetTypeCategories::Misc; }

void FAssetTypeActions_FoodWeb::OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> Host )
{
	for( UObject* Obj : InObjects )
	{
		UFoodWebAsset* Asset = Cast<UFoodWebAsset>( Obj );
		if( Asset )
		{
			TSharedRef<FFoodWebAssetEditor> Editor = MakeShared<FFoodWebAssetEditor>();
			Editor->InitFoodWebEditor( EToolkitMode::Standalone, Host, Asset );
		}
	}
}
