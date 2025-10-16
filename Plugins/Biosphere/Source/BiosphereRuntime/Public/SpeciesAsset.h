#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpeciesAsset.generated.h"

/**
 * Asset representing a species in the biosphere simulation.
 */
UCLASS( BlueprintType )
class BIOSPHERERUNTIME_API USpeciesAsset : public UObject
{
	GENERATED_BODY()
public:
	USpeciesAsset();
	~USpeciesAsset();
public:
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Species" )
	FName SpeciesName;
};
