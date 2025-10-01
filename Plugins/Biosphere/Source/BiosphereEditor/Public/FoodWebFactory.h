#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "FoodWebFactory.generated.h"

UCLASS()
class BIOSPHEREEDITOR_API UFoodWebFactory : public UFactory {
	GENERATED_BODY()
public:
	UFoodWebFactory();
	virtual UObject* FactoryCreateNew( UClass* Class, UObject* Parent, FName Name,
									   EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn ) override;
};
