#pragma once

#include "CoreMinimal.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "BiosphereAsset.h"
#include "Simulation/SimulationGraph.h"
#include "Simulation/SimulationGraphEditor.h"
#include "BiosphereSubEditor.h"
#include "Templates/SharedPointer.h"

/**
 * Top-level Biosphere asset editor, hosts tabs for various asset editors (e.g., Food Web)
 */
class BIOSPHEREEDITOR_API FBiosphereAssetEditor : public FAssetEditorToolkit, public FGCObject
{
public:
	FBiosphereAssetEditor();
	virtual ~FBiosphereAssetEditor();
public:
	void InitBiosphereEditor( const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& Host, UBiosphereAsset* InAsset );
public:
	virtual void RegisterTabSpawners( const TSharedRef<FTabManager>& TabManager ) override;
	virtual void UnregisterTabSpawners( const TSharedRef<FTabManager>& TabManager ) override;
public:
	// Toolkit required overrides
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual FText GetToolkitToolTipText() const override;
	virtual FString GetWorldCentricTabPrefix() const override;
	virtual FLinearColor GetWorldCentricTabColorScale() const override;
public:
	// FGCObject
	virtual void AddReferencedObjects( FReferenceCollector& Collector ) override;
	virtual FString GetReferencerName() const override { return TEXT( "FBiosphereAssetEditor" ); }
private:
	TObjectPtr<UBiosphereAsset> BiosphereAsset = nullptr;
	TArray<TSharedPtr<FEditorSubModule>> SubEditors;
};
