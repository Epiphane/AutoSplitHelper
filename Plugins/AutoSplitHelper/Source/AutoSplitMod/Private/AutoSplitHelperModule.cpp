// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutoSplitHelperModule.h"
#include "SatisfactoryModLoader.h"
#include "SML/Public/Patching/NativeHookManager.h"
#include "FGSchematic.h"
#include "FGSchematicManager.h"

#define LOCTEXT_NAMESPACE "FAutoSplitHelperModule"

DEFINE_LOG_CATEGORY(LogAutoSplitHelper);

void FAutoSplitHelperModule::StartupModule()
{
}

void FAutoSplitHelperModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAutoSplitHelperModule, AutoSplitHelper)
