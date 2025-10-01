#pragma once

#include "CoreMinimal.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "FoodWebGraph.h"
#include "FoodWebSpeciesNode.h"
#include "FoodWebSchema.h"
#include "FoodWebAsset.h"
#include "Templates/SharedPointer.h"

class FFoodWebAssetEditor : public FAssetEditorToolkit, public FGCObject
{
	TSharedPtr<SGraphEditor> Graph;
	TObjectPtr<UFoodWebAsset> Asset = nullptr;
	TObjectPtr<UFoodWebEdGraph> EdGraph = nullptr;

public:
	void InitFoodWebEditor( const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& Host, UFoodWebAsset* InAsset );
	void AddReferencedObjects( FReferenceCollector& C ) override { C.AddReferencedObject( Asset ); C.AddReferencedObject( EdGraph ); }
	FString GetReferencerName() const override { return TEXT( "FFoodWebAssetEditor" ); }

	FName GetToolkitFName() const override { return FName( "FoodWebAssetEditor" ); }
	FText GetBaseToolkitName() const override { return FText::FromString( "Food Web Editor" ); }
	FText GetToolkitToolTipText() const override { return FText::FromString( "Edit a Food Web asset" ); }
	FString GetWorldCentricTabPrefix() const override { return TEXT( "FoodWeb" ); }
	FLinearColor GetWorldCentricTabColorScale() const override { return FLinearColor::White; }
};




