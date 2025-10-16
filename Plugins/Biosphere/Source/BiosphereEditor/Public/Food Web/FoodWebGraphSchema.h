#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"
#include "FoodWebGraphSchema.generated.h"

UCLASS()
class BIOSPHEREEDITOR_API UFoodWebGraphSchema : public UEdGraphSchema
{
	GENERATED_BODY()
public:
	// Add "Add Species" to the context menu
	virtual void GetGraphContextActions( FGraphContextMenuBuilder& ContextMenuBuilder ) const override;

	// Allow any node.Out -> node.In
	virtual const FPinConnectionResponse CanCreateConnection( const UEdGraphPin* A, const UEdGraphPin* B ) const override;

	// Optionally, create default nodes for the graph
	virtual void CreateDefaultNodesForGraph( UEdGraph& Graph ) const override;
};

