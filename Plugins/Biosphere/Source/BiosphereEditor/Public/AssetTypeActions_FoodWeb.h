#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"   // FAssetTypeActions_Base
#include "FoodWebAsset.h" 

class FAssetTypeActions_FoodWeb : public FAssetTypeActions_Base
{
public:
	FText GetName() const override;
	UClass* GetSupportedClass() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;
	void OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> Host ) override;
};
