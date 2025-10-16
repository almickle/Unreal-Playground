#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"
#include "SimulationGraphSchema.generated.h"

UCLASS()
class BIOSPHEREEDITOR_API USimulationGraphSchema : public UEdGraphSchema
{
	GENERATED_BODY()
public:
	virtual void GetGraphContextActions( FGraphContextMenuBuilder& ContextMenuBuilder ) const override;
};

class FEdGraphSchemaAction_AddSimulationTickEvent : public FEdGraphSchemaAction_NewNode
{
public:
	FEdGraphSchemaAction_AddSimulationTickEvent()
		: FEdGraphSchemaAction_NewNode(
			NSLOCTEXT( "Biosphere", "SimulationEvents", "Simulation Events" ),
			NSLOCTEXT( "Biosphere", "SimulationTickEvent", "Simulation Tick" ),
			FText::GetEmpty(),
			0 )
	{
	}

	virtual UEdGraphNode* PerformAction( UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode ) override;
};
