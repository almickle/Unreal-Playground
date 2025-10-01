#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
#include "FoodWebAsset.generated.h"

USTRUCT( BlueprintType )
struct FSpecies {
	GENERATED_BODY()
	UPROPERTY( EditAnywhere ) FName Id;
	UPROPERTY( EditAnywhere ) FText Name;
};

USTRUCT( BlueprintType )
struct FFoodLink {
	GENERATED_BODY()
	UPROPERTY( EditAnywhere ) int32 FromIdx = 0; // index into Species
	UPROPERTY( EditAnywhere ) int32 ToIdx = 0;
	UPROPERTY( EditAnywhere ) float Strength = 1.f;
};

UCLASS( BlueprintType )
class BIOSPHERERUNTIME_API UFoodWebAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY( EditAnywhere ) TArray<FSpecies> Species;
	UPROPERTY( EditAnywhere ) TArray<FFoodLink> Links;
};
