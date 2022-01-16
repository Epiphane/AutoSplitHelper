// Copyright Epic Games, Inc. All Rights Reserved.

#include "SatisfactoryModLoader.h"
#include "AutoSplitModModule.h"
#include "SML/Public/Patching/NativeHookManager.h"
#include "FGSchematic.h"
#include "FGSchematicManager.h"

#define LOCTEXT_NAMESPACE "FAutoSplitModModule"

DEFINE_LOG_CATEGORY(LogAutoSplitMod);

void FAutoSplitModModule::StartupModule()
{

    UE_LOG(LogAutoSplitMod, Display, TEXT("Hello Thomas you sexy motherfucker 3"));

    //SUBSCRIBE_METHOD(AFGSchematicManager::LaunchShip,
        //[](auto& Call, AFGSchematicManager*) { Call.Cancel(); });
    //UE_LOG(LogInit, Error, TEXT("Hello Thomas (test message)"));
    /*
    SUBSCRIBE_METHOD(AFGSchematicManager::LaunchShip,
        [](auto& Call, AFGSchematicManager*) { Call.Cancel(); });
    SUBSCRIBE_METHOD(AFGSchematicManager::LaunchShip, [](auto& scope, AFGSchematicManager* schematicManager) {
        int* abc = nullptr;
        *abc = 100;
        });
        */
        //// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FAutoSplitModModule::ShutdownModule()
{
    UE_LOG(LogAutoSplitMod, Display, TEXT("Hello Thomas you sexy motherfucker 4"));
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.
}

void FAutoSplitModModule::DoTheThing()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAutoSplitModModule, AutoSplitMod)