#include "Simulation/SimulationGraphEditor.h"


SimulationGraphEditor::SimulationGraphEditor()
{
	SimulationGraph = NewObject<USimulationGraph>( GetTransientPackage(), USimulationGraph::StaticClass(), NAME_None, RF_Transactional );
}

SimulationGraphEditor::~SimulationGraphEditor()
{
}

TSharedRef<SWidget> SimulationGraphEditor::GetContentWidget()
{
	if( !ContentWidget.IsValid() )
	{
		ContentWidget = SNew( SGraphEditor ).GraphToEdit( SimulationGraph );
	}
	return ContentWidget.ToSharedRef();
}

USimulationGraph* SimulationGraphEditor::GetSimulationGraph() const
{
	return SimulationGraph;
}