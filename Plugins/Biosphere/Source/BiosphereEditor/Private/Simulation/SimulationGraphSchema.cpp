#include "Simulation/SimulationGraphSchema.h"
#include "Simulation/SimulationEventNode.h"
#include "EdGraph/EdGraph.h"

UEdGraphNode* FEdGraphSchemaAction_AddSimulationTickEvent::PerformAction(
	UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode )

{
	USimulationEventNode* NewNode = NewObject<USimulationEventNode>( ParentGraph );
	NewNode->SetFlags( RF_Transactional );
	NewNode->CreateNewGuid();
	NewNode->PostPlacedNewNode();
	NewNode->AllocateDefaultPins();
	NewNode->NodePosX = Location.X;
	NewNode->NodePosY = Location.Y;
	NewNode->SnapToGrid( 16 );
	ParentGraph->AddNode( NewNode, true, bSelectNewNode );
	if( FromPin )
	{
		NewNode->AutowireNewNode( FromPin );
	}
	return NewNode;
}

void USimulationGraphSchema::GetGraphContextActions( FGraphContextMenuBuilder& ContextMenuBuilder ) const
{
	TSharedPtr<FEdGraphSchemaAction> AddEventNodeAction = MakeShareable( new FEdGraphSchemaAction_AddSimulationTickEvent() );
	ContextMenuBuilder.AddAction( AddEventNodeAction );
}
