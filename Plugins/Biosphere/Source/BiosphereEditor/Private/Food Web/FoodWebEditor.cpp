#include "Food Web/FoodWebEditor.h"
#include "FoodWebAsset.h"
#include "Food Web/FoodWebGraph.h"
#include "Food Web/FoodWebGraphSchema.h"
#include "Toolkits/AssetEditorToolkit.h"

FoodWebEditor::FoodWebEditor()
{
	Asset = nullptr;
	FoodWebGraph = NewObject<UFoodWebGraph>( GetTransientPackage(), UFoodWebGraph::StaticClass(), NAME_None, RF_Transactional );
}

FoodWebEditor::~FoodWebEditor()
{
}

TSharedRef<SWidget> FoodWebEditor::GetContentWidget()
{
	if( !ContentWidget.IsValid() )
	{
		ContentWidget = SNew( SGraphEditor ).GraphToEdit( FoodWebGraph );
	}
	return ContentWidget.ToSharedRef();
}