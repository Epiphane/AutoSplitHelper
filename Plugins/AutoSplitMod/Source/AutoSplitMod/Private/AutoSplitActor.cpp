#include "Patching/NativeHookManager.h"
#include "FGSchematicManager.h"
#include "FGTutorialIntroManager.h"
#include "FGGamePhaseManager.h"
#include "Registry/ModContentRegistry.h"

#include "AutoSplitActor.h"

UAutoSplitActor::UAutoSplitActor()
{
    SUBSCRIBE_METHOD(AFGTutorialIntroManager::IntroDone, [](auto& scope, AFGTutorialIntroManager*) {
        UE_LOG(LogAutoSplitMod, Display, TEXT("[Thomas] Intro Done"));
        });

    SUBSCRIBE_METHOD(AModContentRegistry::OnSchematicPurchased, [](auto& scope, AModContentRegistry* registry, TSubclassOf<UFGSchematic> schematic) {
        UE_LOG(LogAutoSplitMod, Display, TEXT("[Thomas] Schematic Purchased: %s"), *schematic->GetName());
        });

    SUBSCRIBE_METHOD(AFGGamePhaseManager::SetGamePhase, [](auto& scope, AFGGamePhaseManager* phaser, EGamePhase newPhase) {
        UE_LOG(LogAutoSplitMod, Display, TEXT("[Thomas] SetGamePhase"));
        UE_LOG(LogAutoSplitMod, Display, TEXT("[Thomas] SetGamePhase: %d"), newPhase);
        UE_LOG(LogAutoSplitMod, Display, TEXT("[Thomas] SetGamePhase: %s"), *phaser->GetGamePhaseName(newPhase).ToString());
        });

    /*
    SUBSCRIBE_METHOD(AGameModeBase::StartToLeaveMap, [](auto& scope, AGameModeBase*) {
        UE_LOG(LogAutoSplitMod, Display, TEXT("[Thomas] StartToLeaveMap"));
        });
    */

    bRootModule = true;
}

void UAutoSplitActor::BeginDestroy()
{
    UE_LOG(LogAutoSplitMod, Display, TEXT("[Thomas] Game session ending"));

    Super::BeginDestroy();
}
