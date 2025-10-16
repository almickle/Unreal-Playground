#pragma once

#include "CoreMinimal.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "SpeciesAsset.h"
#include "BiosphereSubEditor.h"
#include "AssetEditor.h"
#include "Templates/SharedPointer.h"

/**
 * Top-level Species asset editor, hosts tabs for various sub-editors.
 */
class BIOSPHEREEDITOR_API FSpeciesAssetEditor : public FAssetEditor
{
public:
	FSpeciesAssetEditor( const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& Host, USpeciesAsset* InAsset );
	~FSpeciesAssetEditor();
public:

	void InitSpeciesEditor( const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& Host, USpeciesAsset* InAsset );
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual FText GetToolkitToolTipText() const override;
	virtual FString GetWorldCentricTabPrefix() const override;
	virtual FLinearColor GetWorldCentricTabColorScale() const override;
	virtual FString GetReferencerName() const override { return TEXT( "FSpeciesAssetEditor" ); }
};
