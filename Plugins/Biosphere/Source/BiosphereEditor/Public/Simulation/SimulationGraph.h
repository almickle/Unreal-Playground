#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraph.h"
#include "SimulationGraphSchema.h"
#include "SimulationGraph.generated.h"

UCLASS()
class BIOSPHEREEDITOR_API USimulationGraph : public UEdGraph
{
	GENERATED_BODY()

public:
	USimulationGraph()
	{
		Schema = USimulationGraphSchema::StaticClass();
		bEditable = true;
		SetFlags( RF_Transactional );
	}

	UFUNCTION()
	void OnSimulationTick( float DeltaTime )
	{
		UE_LOG( LogTemp, Log, TEXT( "USimulationGraph::OnSimulationTick called with DeltaTime: %f" ), DeltaTime );
	}
};
