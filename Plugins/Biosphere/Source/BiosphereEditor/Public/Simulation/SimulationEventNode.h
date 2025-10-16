#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "SimulationEventNode.generated.h"

UCLASS()
class BIOSPHEREEDITOR_API USimulationEventNode : public UEdGraphNode
{
	GENERATED_BODY()
public:
	USimulationEventNode();

	// Override for node title
	virtual FText GetNodeTitle( ENodeTitleType::Type TitleType ) const override
	{
		return FText::FromString( TEXT( "On Simulation Tick" ) );
	}

	// (Optional) Add pins, etc.
	virtual void AllocateDefaultPins() override;
};
