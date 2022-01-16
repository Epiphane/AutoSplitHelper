// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AutoSplitHelper : ModuleRules
{
    public AutoSplitHelper(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "OnlineSubsystemNULL",
            "SignificanceManager",
            "PhysX",
            "APEX",
            "PhysXVehicles",
            "ApexDestruction",
            "AkAudio",
            "ReplicationGraph",
            "UMG",
            "AIModule",
            "NavigationSystem",
            "AssetRegistry",
            "GameplayTasks",
            "AnimGraphRuntime",
            "Slate",
            "SlateCore",
            "Json",
            "FactoryGame",
            "SML"
        });
    }
}
