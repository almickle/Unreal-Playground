#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "SpeciesAsset.h"
#include "SpeciesAssetFactory.generated.h"

/**
 * Factory for creating USpeciesAsset assets in the Content Browser.
 */
UCLASS()
class BIOSPHEREEDITOR_API USpeciesAssetFactory : public UFactory
{
	GENERATED_BODY()
public:
	USpeciesAssetFactory();

	virtual UObject* FactoryCreateNew( UClass* Class, UObject* Parent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn ) override;
};
