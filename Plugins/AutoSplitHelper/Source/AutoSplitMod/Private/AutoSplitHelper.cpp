#include "AutoSplitHelper.h"

#include "Patching/NativeHookManager.h"
#include "FGSchematicManager.h"
#include "FGTutorialIntroManager.h"
#include "FGGamePhaseManager.h"
#include "Registry/ModContentRegistry.h"

bool UAutoSplitHelper::HasSubscribed = false;

UAutoSplitHelper::UAutoSplitHelper()
{
    bRootModule = true;
}

void UAutoSplitHelper::DispatchLifecycleEvent(ELifecyclePhase Phase)
{
    if (Phase == ELifecyclePhase::POST_INITIALIZATION)
    {
        AFGTutorialIntroManager* TutorialIntroManager = AFGTutorialIntroManager::Get(this);
        if (TutorialIntroManager && TutorialIntroManager->GetIsTutorialCompleted())
        {
            UE_LOG(LogAutoSplitHelper, Display, TEXT("Intro Done (skipped)"));
        }

        if (!HasSubscribed)
        {
            SUBSCRIBE_METHOD(AFGTutorialIntroManager::IntroDone, [](auto&, AFGTutorialIntroManager*) {
                UE_LOG(LogAutoSplitHelper, Display, TEXT("Intro Done"));
                });

            SUBSCRIBE_METHOD(AModContentRegistry::OnSchematicPurchased, [](auto&, AModContentRegistry*, TSubclassOf<UFGSchematic> schematic) {
                UE_LOG(LogAutoSplitHelper, Display, TEXT("Schematic Purchased: %s"), *schematic->GetName());
                });

            SUBSCRIBE_METHOD(AFGGamePhaseManager::SetGamePhase, [](auto&, AFGGamePhaseManager*, EGamePhase newPhase) {
                UE_LOG(LogAutoSplitHelper, Display, TEXT("SetGamePhase: %d"), newPhase);
                });

            HasSubscribed = true;
        }
    }
}

void UAutoSplitHelper::BeginDestroy()
{
    UE_LOG(LogAutoSplitHelper, Display, TEXT("Game session ending"));

    Super::BeginDestroy();
}
