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
	static uint32 GetBiosphereAssetCategoryBit() { return BiosphereAssetCategoryBit; }
private:
	void RegisterAssetTypeActions();
	void UnregisterAssetTypeActions();
private:
	// Keep handles so we can unregister later
	TArray<TSharedPtr<IAssetTypeActions>> RegisteredAssetTypeActions;
	static uint32 BiosphereAssetCategoryBit;
};
