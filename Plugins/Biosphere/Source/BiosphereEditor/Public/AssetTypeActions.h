#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "BiosphereAsset.h" 
#include "SpeciesAsset.h"
#include "BiosphereEditor.h"

class FAssetTypeActions_Biosphere : public FAssetTypeActions_Base
{
public:
	FText GetName() const override { return INVTEXT( "Biosphere" ); };
	UClass* GetSupportedClass() const override { return UBiosphereAsset::StaticClass(); };
	FColor GetTypeColor() const override { return { 100, 255, 180 }; };
	uint32 GetCategories() override { return FBiosphereEditorModule::GetBiosphereAssetCategoryBit(); };
	void OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> Host ) override;
};

class FAssetTypeActions_Species : public FAssetTypeActions_Base
{
public:
	FText GetName() const override { return INVTEXT( "Species" ); }
	UClass* GetSupportedClass() const override { return USpeciesAsset::StaticClass(); }
	FColor GetTypeColor() const override { return { 255, 100, 180 }; }
	uint32 GetCategories() override { return FBiosphereEditorModule::GetBiosphereAssetCategoryBit(); };
	void OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> Host ) override;
};
