#include "Food Web/FoodWebGraphSchema.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "ToolMenus.h"

// Add "Add Species" to the context menu
void UFoodWebGraphSchema::GetGraphContextActions( FGraphContextMenuBuilder& ContextMenuBuilder ) const
{
	// Placeholder: Add a simple menu entry
	ContextMenuBuilder.AddAction( MakeShareable( new FEdGraphSchemaAction(
		FText::FromString( "Food Web" ),
		FText::FromString( "Add Species" ),
		FText::FromString( "Add a new species node to the graph." ),
		0
	) ) );
}

// Allow any node.Out -> node.In
const FPinConnectionResponse UFoodWebGraphSchema::CanCreateConnection( const UEdGraphPin* A, const UEdGraphPin* B ) const
{
	if( A->Direction == EGPD_Output && B->Direction == EGPD_Input )
	{
		return FPinConnectionResponse( CONNECT_RESPONSE_MAKE, TEXT( "Predator to Prey connection allowed" ) );
	}
	if( A->Direction == EGPD_Input && B->Direction == EGPD_Output )
	{
		return FPinConnectionResponse( CONNECT_RESPONSE_MAKE, TEXT( "Prey to Predator connection allowed" ) );
	}
	return FPinConnectionResponse( CONNECT_RESPONSE_DISALLOW, TEXT( "Only output to input allowed" ) );
}

// Optionally, create default nodes for the graph
void UFoodWebGraphSchema::CreateDefaultNodesForGraph( UEdGraph& Graph ) const
{
	// Placeholder: No default nodes
}
