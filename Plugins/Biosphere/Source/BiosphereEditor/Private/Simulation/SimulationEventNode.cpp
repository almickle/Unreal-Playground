#include "Simulation/SimulationEventNode.h"

USimulationEventNode::USimulationEventNode()
{
	// Node setup if needed
}

void USimulationEventNode::AllocateDefaultPins()
{
	// Example: Add an output execution pin
	CreatePin( EGPD_Output, TEXT( "Exec" ), FName(), nullptr, TEXT( "Tick" ) );
}
