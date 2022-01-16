// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogAutoSplitMod, Log, All);

class FAutoSplitModModule : public FDefaultGameModuleImpl
{
public:

    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    static void DoTheThing();

    virtual bool IsGameModule() const override { return true; }
};
