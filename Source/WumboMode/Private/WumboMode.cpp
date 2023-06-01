// Copyright Epic Games, Inc. All Rights Reserved.

#include "WumboMode.h"
#include "ISettingsModule.h"

#define LOCTEXT_NAMESPACE "FWumboModeModule"

void FWumboModeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "WumboModeSettings",
			LOCTEXT("RuntimeSettingsName", "Wumbo Mode"), LOCTEXT("RuntimeSettingsDescription", "Did you try setting it to Wumbo?"),
			GetMutableDefault<UWumboModeSettings>());
	}
}

void FWumboModeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "WumboModeSettings");
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWumboModeModule, WumboMode)