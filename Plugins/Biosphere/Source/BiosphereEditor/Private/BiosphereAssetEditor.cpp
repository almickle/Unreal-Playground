#include "BiosphereAssetEditor.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "Widgets/Docking/SDockTab.h"
#include "Food Web/FoodWebEditor.h"
#include "BiosphereAsset.h"

#define LOCTEXT_NAMESPACE "FBiosphereAssetEditor"

void FBiosphereAssetEditor::InitBiosphereEditor( const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& Host, UBiosphereAsset* InAsset )
{
	BiosphereAsset = InAsset;

	// Clear any existing sub-editors
	SubEditors.Empty();

	// Add your sub-editors here
	SubEditors.Add( MakeShared<SimulationGraphEditor>() );
	SubEditors.Add( MakeShared<FoodWebEditor>() );
	// SubEditors.Add(MakeShared<ExtentMapEditor>());

	// Build the layout using the sub-editor tab IDs
	TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout( "BiosphereAssetEditor_Layout_v5" )
		->AddArea(
			FTabManager::NewPrimaryArea()->SetOrientation( Orient_Horizontal )
			// Left panel
			->Split(
			FTabManager::NewStack()
			->AddTab( "LeftPanel", ETabState::OpenedTab )
			->SetSizeCoefficient( 0.2f )
			->SetHideTabWell( true )
		)
			// Center workspace (subeditors)
			->Split(
			[&]()
			{
				TSharedRef<FTabManager::FStack> Stack = FTabManager::NewStack()->SetHideTabWell( false )->SetSizeCoefficient( 0.6f );
				for( int32 i = 0; i < SubEditors.Num(); ++i )
				{
					FName TabId = FName( SubEditors[i]->GetName().ToString() );
					Stack->AddTab( TabId, ETabState::OpenedTab );
				}
				return Stack;
			}()
				)
			// Right panel
			->Split(
			FTabManager::NewStack()
			->AddTab( "RightPanel", ETabState::OpenedTab )
			->SetSizeCoefficient( 0.2f )
			->SetHideTabWell( true )
		)
		);


	// Call the base class to initialize the asset editor
	InitAssetEditor( Mode, Host, TEXT( "BiosphereAssetEditor" ), StandaloneDefaultLayout, true, true, InAsset );
}

void FBiosphereAssetEditor::RegisterTabSpawners( const TSharedRef<FTabManager>& InTabManager )
{
	FAssetEditorToolkit::RegisterTabSpawners( InTabManager );

	// Register left and right panel tabs
	InTabManager->RegisterTabSpawner( "LeftPanel", FOnSpawnTab::CreateLambda(
		[]( const FSpawnTabArgs& ) {
			return SNew( SDockTab )
				.TabRole( ETabRole::DocumentTab )
				[
					SNew( STextBlock ).Text( FText::FromString( "Left Panel" ) )
				];
		} ) )
		.SetDisplayName( FText::FromString( "Left Panel" ) )
		.SetGroup( WorkspaceMenuCategory.ToSharedRef() );

	InTabManager->RegisterTabSpawner( "RightPanel", FOnSpawnTab::CreateLambda(
		[]( const FSpawnTabArgs& ) {
			return SNew( SDockTab )
				.TabRole( ETabRole::DocumentTab )
				[
					SNew( STextBlock ).Text( FText::FromString( "Right Panel" ) )
				];
		} ) )
		.SetDisplayName( FText::FromString( "Right Panel" ) )
		.SetGroup( WorkspaceMenuCategory.ToSharedRef() );

	// Register subeditor tabs (center workspace)
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

void FBiosphereAssetEditor::UnregisterTabSpawners( const TSharedRef<FTabManager>& InTabManager )
{
	FAssetEditorToolkit::UnregisterTabSpawners( InTabManager );
	for( int32 i = 0; i < SubEditors.Num(); ++i )
	{
		FName TabId = FName( SubEditors[i]->GetName().ToString() );
		InTabManager->UnregisterTabSpawner( TabId );
	}
}

FName FBiosphereAssetEditor::GetToolkitFName() const { return FName( "BiosphereAssetEditor" ); }
FText FBiosphereAssetEditor::GetBaseToolkitName() const { return LOCTEXT( "AppLabel", "Biosphere Editor" ); }
FText FBiosphereAssetEditor::GetToolkitToolTipText() const { return LOCTEXT( "ToolTip", "Edit a Biosphere asset" ); }
FString FBiosphereAssetEditor::GetWorldCentricTabPrefix() const { return TEXT( "Biosphere" ); }
FLinearColor FBiosphereAssetEditor::GetWorldCentricTabColorScale() const { return FLinearColor::White; }

void FBiosphereAssetEditor::AddReferencedObjects( FReferenceCollector& Collector )
{
	Collector.AddReferencedObject( BiosphereAsset );
}

FBiosphereAssetEditor::FBiosphereAssetEditor() {}
FBiosphereAssetEditor::~FBiosphereAssetEditor() {}

#undef LOCTEXT_NAMESPACE
