#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "BiosphereAsset.h"
#include "BiosphereAssetFactory.generated.h"

/**
 * Factory for creating UBiosphereAsset assets in the Content Browser
 */
UCLASS()
class BIOSPHEREEDITOR_API UBiosphereFactory : public UFactory
{
	GENERATED_BODY()
public:
	UBiosphereFactory();
	virtual UObject* FactoryCreateNew( UClass* Class, UObject* Parent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn ) override;
};
