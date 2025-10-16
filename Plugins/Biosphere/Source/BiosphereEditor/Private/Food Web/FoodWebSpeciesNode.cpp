#include "Food Web/FoodWebSpeciesNode.h"
#include "EdGraph/EdGraphPin.h"

void UFoodWebSpeciesNode::AllocateDefaultPins()
{
	// Output pin: "Eats"
	CreatePin( EGPD_Output, TEXT( "FoodWebPin" ), TEXT( "Eats" ) );
	// Input pin: "EatenBy"
	CreatePin( EGPD_Input, TEXT( "FoodWebPin" ), TEXT( "EatenBy" ) );
}

FText UFoodWebSpeciesNode::GetNodeTitle( ENodeTitleType::Type ) const
{
	return FText::FromString( TEXT( "Species" ) );
}
