#include "SpeciesAssetEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Text/STextBlock.h"
#include "SpeciesAsset.h"

FSpeciesAssetEditor::FSpeciesAssetEditor( const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& Host, USpeciesAsset* InAsset )
{
	Assets.Empty();
	SubEditors.Empty();

	Assets.Add( InAsset );
}

FSpeciesAssetEditor::~FSpeciesAssetEditor()
{
}

void FSpeciesAssetEditor::InitSpeciesEditor( const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& Host, USpeciesAsset* InAsset )
{
	// Build layout with sub-editor tabs
	TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout( "SpeciesAssetEditor_Layout_v1" )
		->AddArea(
			FTabManager::NewPrimaryArea()->SetOrientation( Orient_Horizontal )
			->Split(
			[&]()
			{
				TSharedRef<FTabManager::FStack> Stack = FTabManager::NewStack()->SetHideTabWell( false );
				for( int32 i = 0; i < SubEditors.Num(); ++i )
				{
					FName TabId = FName( *FString::Printf( TEXT( "SubEditorTab_%d" ), i ) );
					Stack->AddTab( TabId, ETabState::OpenedTab );
				}
				return Stack;
			}()
				)
		);

	InitAssetEditor( Mode, Host, TEXT( "SpeciesAssetEditor" ), Layout, true, true, InAsset );
}

FName FSpeciesAssetEditor::GetToolkitFName() const { return FName( "SpeciesAssetEditor" ); }
FText FSpeciesAssetEditor::GetBaseToolkitName() const { return FText::FromString( "Species Editor" ); }
FText FSpeciesAssetEditor::GetToolkitToolTipText() const { return FText::FromString( "Edit a Species asset" ); }
FString FSpeciesAssetEditor::GetWorldCentricTabPrefix() const { return TEXT( "Species" ); }
FLinearColor FSpeciesAssetEditor::GetWorldCentricTabColorScale() const { return FLinearColor::White; }
