// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class IAssetTypeActions;

class FBiosphereEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	// Keep handles so we can unregister later
	TArray<TSharedPtr<IAssetTypeActions>> RegisteredAssetTypeActions;

	void RegisterAssetTypeActions();
	void UnregisterAssetTypeActions();
};
