#pragma once

#include "CoreMinimal.h"
#include "BiosphereSubEditor.h"
#include "Widgets/SWidget.h"
#include "SimulationGraph.h"

/**
 * Sub-editor for the Simulation Graph.
 */
class BIOSPHEREEDITOR_API SimulationGraphEditor : public FEditorSubModule
{
public:
	SimulationGraphEditor();
	virtual ~SimulationGraphEditor();
public:
	virtual TSharedRef<SWidget> GetContentWidget() override;
	virtual FText GetName() const override { return FText::FromString( "Simulation Graph" ); }
public:
	USimulationGraph* GetSimulationGraph() const;
private:
	USimulationGraph* SimulationGraph = nullptr;
};
