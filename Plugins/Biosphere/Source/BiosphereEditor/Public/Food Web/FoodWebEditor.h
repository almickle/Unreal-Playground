#pragma once

#include "CoreMinimal.h"
#include "BiosphereSubEditor.h"
#include "Widgets/SWidget.h"
#include "FoodWebAsset.h"
#include "FoodWebGraph.h"

/**
 * Sub-editor for the Food Web.
 */
class BIOSPHEREEDITOR_API FoodWebEditor : public FEditorSubModule
{
public:
	FoodWebEditor();
	virtual ~FoodWebEditor();
public:
	virtual TSharedRef<SWidget> GetContentWidget() override;
	virtual FText GetName() const override { return FText::FromString( "Food Web" ); }
public:
	UFoodWebAsset* GetAsset() const { return Asset; }
	UFoodWebGraph* GetFoodWebGraph() const { return FoodWebGraph; }

private:
	UFoodWebAsset* Asset = nullptr;
	UFoodWebGraph* FoodWebGraph = nullptr;
};




