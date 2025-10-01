#include "FoodWebAssetEditor.h"
#include "FoodWebAsset.h"
#include "FoodWebGraph.h"
#include "FoodWebSchema.h"
#include "Toolkits/AssetEditorToolkit.h"

void FFoodWebAssetEditor::InitFoodWebEditor( const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& Host, UFoodWebAsset* InAsset )
{
	Asset = InAsset;
	EdGraph = NewObject<UFoodWebEdGraph>( Asset, UFoodWebEdGraph::StaticClass(), NAME_None, RF_Transactional );
	EdGraph->Schema = UFoodWebSchema::StaticClass();
	EdGraph->RebuildFromAsset( Asset );

	Graph = SNew( SGraphEditor ).GraphToEdit( EdGraph );

	// Minimal: just open a window with the graph (no tabs/toolbars yet)
	InitAssetEditor( Mode, Host, TEXT( "FoodWebAssetEditor" ), FTabManager::FLayout::NullLayout, true, true, InAsset );
}