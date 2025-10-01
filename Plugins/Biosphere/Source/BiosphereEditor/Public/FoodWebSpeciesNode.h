#pragma once

#include "CoreMinimal.h"
#include "FoodWebSpeciesNode.generated.h"

UCLASS()
class UFoodWebSpeciesNode : public UEdGraphNode {
	GENERATED_BODY()
public:
	int32 SpeciesIndex = INDEX_NONE; // maps to asset Species[idx]
	virtual void AllocateDefaultPins() override; // CreatePin( EGPD_Output, … "Eats"), CreatePin( EGPD_Input, … "EatenBy")
	virtual FText GetNodeTitle( ENodeTitleType::Type ) const override;
};

