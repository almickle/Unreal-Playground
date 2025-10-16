#pragma once

#include "CoreMinimal.h"
#include "Widgets/SWidget.h"
#include "Widgets/Docking/SDockTab.h"

/**
 * Base class for all sub-editors in the Biosphere asset editor.
 */
class BIOSPHEREEDITOR_API FEditorSubModule
{
public:
	virtual ~FEditorSubModule() {}

	/**
	 * Returns the main content widget for this sub-editor.
	 */
	virtual TSharedRef<SWidget> GetContentWidget() = 0;

	/**
	 * Returns the display name for this sub-editor (for tab titles, etc).
	 */
	virtual FText GetName() const { return FText::FromString( "SubEditor" ); }

	/**
	 * Spawns the tab for this sub-editor.
	 */
	virtual TSharedRef<SDockTab> SpawnTab( const FSpawnTabArgs& Args )
	{
		return SNew( SDockTab )
			.TabRole( ETabRole::DocumentTab )
			[
				GetContentWidget()
			];
	}
protected:
	TSharedPtr<SWidget> ContentWidget;
};
