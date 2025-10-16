#pragma once

#include "CoreMinimal.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "Simulation/SimulationGraph.h"
#include "Simulation/SimulationGraphEditor.h"
#include "BiosphereSubEditor.h"
#include "Templates/SharedPointer.h"

/**
 * Top-level Biosphere asset editor, hosts tabs for various asset editors (e.g., Food Web)
 */
class BIOSPHEREEDITOR_API FAssetEditor : public FAssetEditorToolkit, public FGCObject
{
public:
	FAssetEditor();
	virtual ~FAssetEditor();
public:
	void RegisterTabSpawners( const TSharedRef<FTabManager>& TabManager ) override;
	void UnregisterTabSpawners( const TSharedRef<FTabManager>& TabManager ) override;
public:
	// Toolkit required overrides
	virtual FName GetToolkitFName() const override = 0;
	virtual FText GetBaseToolkitName() const override = 0;
	virtual FText GetToolkitToolTipText() const override = 0;
	virtual FString GetWorldCentricTabPrefix() const override = 0;
	virtual FLinearColor GetWorldCentricTabColorScale() const override = 0;
public:
	void AddReferencedObjects( FReferenceCollector& Collector ) override;
	virtual FString GetReferencerName() const override { return TEXT( "FAssetEditor" ); }
protected:
	TArray<TSharedPtr<FEditorSubModule>> SubEditors;
	TArray<TObjectPtr<UObject>> Assets;
};

