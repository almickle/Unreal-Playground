#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraph.h"
#include "FoodWebAsset.h"
#include "FoodWebGraphSchema.h"
#include "FoodWebGraph.generated.h"

UCLASS()
class BIOSPHEREEDITOR_API UFoodWebGraph : public UEdGraph
{
	GENERATED_BODY()

public:
	UFoodWebGraph()
	{
		Schema = UFoodWebGraphSchema::StaticClass();
		bEditable = true;
		SetFlags( RF_Transactional );
	}

	UFUNCTION()
	void OnSimulationTick( float DeltaTime )
	{
		UE_LOG( LogTemp, Log, TEXT( "UFoodWebGraph::OnSimulationTick called with DeltaTime: %f" ), DeltaTime );
	}
};
