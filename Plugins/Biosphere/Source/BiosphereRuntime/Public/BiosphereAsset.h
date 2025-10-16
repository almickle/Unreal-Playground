#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BiosphereAsset.generated.h"

// Forward declare any classes we need to reference
class UFoodWebAsset;

/**
 * Top-level biosphere asset, can reference sub-assets like FoodWeb
 */
UCLASS( BlueprintType )
class BIOSPHERERUNTIME_API UBiosphereAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Biosphere" )
	TObjectPtr<UFoodWebAsset> FoodWeb;
	// Add other sub-assets or properties as needed
};
