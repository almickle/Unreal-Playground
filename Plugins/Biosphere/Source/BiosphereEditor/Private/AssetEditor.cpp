#include "AssetEditor.h"

FAssetEditor::FAssetEditor()
{

}

FAssetEditor::~FAssetEditor()
{
	UnregisterTabSpawners( GetTabManager().ToSharedRef() );
}

void FAssetEditor::AddReferencedObjects( FReferenceCollector& Collector )
{
	Collector.AddReferencedObjects( Assets );
}

void FAssetEditor::RegisterTabSpawners( const TSharedRef<FTabManager>& InTabManager )
{
	FAssetEditorToolkit::RegisterTabSpawners( InTabManager );

	// Register editor submodule tabs
	for( int32 i = 0; i < SubEditors.Num(); ++i )
	{
		const TSharedPtr<FEditorSubModule>& SubEditor = SubEditors[i];
		if( SubEditor.IsValid() )
		{
			FName TabId = FName( SubEditors[i]->GetName().ToString() );
			FText TabDisplayName = SubEditor->GetName();

			InTabManager->RegisterTabSpawner(
				TabId,
				FOnSpawnTab::CreateLambda( [this, i]( const FSpawnTabArgs& Args )
				{
					return SubEditors[i]->SpawnTab( Args );
				} ) )
				.SetDisplayName( TabDisplayName )
				.SetGroup( WorkspaceMenuCategory.ToSharedRef() );
		}
	}
}

void FAssetEditor::UnregisterTabSpawners( const TSharedRef<FTabManager>& InTabManager )
{
	FAssetEditorToolkit::UnregisterTabSpawners( InTabManager );
	for( int32 i = 0; i < SubEditors.Num(); ++i )
	{
		FName TabId = FName( SubEditors[i]->GetName().ToString() );
		InTabManager->UnregisterTabSpawner( TabId );
	}
}