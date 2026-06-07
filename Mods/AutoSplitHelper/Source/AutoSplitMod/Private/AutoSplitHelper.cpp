#include "AutoSplitHelper.h"

#include "Patching/NativeHookManager.h"
#include "FGSchematicManager.h"
#include "FGTutorialIntroManager.h"
#include "FGCharacterPlayer.h"
#include "FGGamePhaseManager.h"
#include "FGBuildableSpaceElevator.h"
#include "FGGamePhase.h"
#include "FGResearchManager.h"
#include "Registry/ModContentRegistry.h"
#include "Patching/BlueprintHookManager.h"

bool UAutoSplitHelper::HasSubscribed = false;

UAutoSplitHelper::UAutoSplitHelper()
{
    bRootModule = true;
}

void UAutoSplitHelper::DispatchLifecycleEvent(ELifecyclePhase Phase)
{
    /*
    NextRecipesWidget = LoadClass<UUserWidget>(this, TEXT("/AutoSplitHelper/WBP_NextRecipes.WBP_NextRecipes"));
    UE_LOG(LogAutoSplitHelper, Display, TEXT("Found %s"), *NextRecipesWidget->GetPathName());
    */
     
    if (Phase == ELifecyclePhase::POST_INITIALIZATION)
    {
        AFGTutorialIntroManager* TutorialIntroManager = AFGTutorialIntroManager::Get(this);
        if (TutorialIntroManager && TutorialIntroManager->GetIsTutorialCompleted())
        {
            UE_LOG(LogAutoSplitHelper, Display, TEXT("Intro Done (skipped)"));
        }

        if (!HasSubscribed)
        {
            /*
            UClass* SomeClass = LoadClass<UUserWidget>(this, TEXT("/Game/FactoryGame/Buildable/Factory/SpaceElevator/UI/PA_Launch/BPW_ProjectAssemblyLaunch.BPW_ProjectAssemblyLaunch"));
            UFunction* SomeFunc = SomeClass->FindFunctionByName(TEXT("SetState"));

            HookBlueprintFunction(SomeFunc, [](FBlueprintHookHelper& helper) {
                UE_LOG(LogTemp, Log, TEXT("SetState called"));
                UObject* ctx = helper.GetContext(); // the object this function got called onto
                int* localStr = helper.GetLocalVarPtr<int>("mSpaceElevatorStateNew"); // getting the pointer to a local variable
                if (localStr)
                {
                    UE_LOG(LogTemp, Log, TEXT("SetState called: %s"), *StaticEnum<ESpaceElevatorState>()->GetValueAsString((ESpaceElevatorState)*localStr));
                }
                else
                {
                    UE_LOG(LogTemp, Log, TEXT("Oh not"));
                }
                //FString* output = helper.GetOutVariablePtr<FString>("OutValue"); // getting the pointer to a output variable
                // do some nice stuff there
            });
            */

            SUBSCRIBE_METHOD(AFGBuildableSpaceElevator::SetSpaceElevatorState, [](auto&, AFGBuildableSpaceElevator* Elevator, ESpaceElevatorState spaceElevatorState, APlayerController*) {
                if (spaceElevatorState != ESpaceElevatorState::ESES_Send)
                {
                    return;
                }

                AFGGamePhaseManager* GPM = AFGGamePhaseManager::Get(Elevator->GetWorld());
                if (GPM)
                {
                    UE_LOG(LogAutoSplitHelper, Display, TEXT("Sending Space Elevator: %s"), *GPM->GetCurrentGamePhase()->GetName());
                }
            });

            SUBSCRIBE_METHOD(AFGTutorialIntroManager::IntroDone, [](auto&, AFGTutorialIntroManager*) {
                UE_LOG(LogAutoSplitHelper, Display, TEXT("Intro Done"));
            });

            SUBSCRIBE_METHOD(UModContentRegistry::OnSchematicPurchased, [](auto&, UModContentRegistry*, TSubclassOf<UFGSchematic> schematic) {
                UE_LOG(LogAutoSplitHelper, Display, TEXT("Schematic Purchased: %s"), *schematic->GetName());
            });

            SUBSCRIBE_METHOD(AFGGamePhaseManager::UpdateCurrentGamePhase, [](auto&, AFGGamePhaseManager*, class UFGGamePhase* inPhase, bool) {
                UE_LOG(LogAutoSplitHelper, Display, TEXT("SetGamePhase: %s"), *inPhase->GetName());
            });

            SUBSCRIBE_METHOD(AFGGamePhaseManager::SetGameIsCompleted, [](auto&, AFGGamePhaseManager*, bool) {
                UE_LOG(LogAutoSplitHelper, Display, TEXT("SetGameIsCompleted"));
            }); 

            /*

            SUBSCRIBE_METHOD(AFGTutorialIntroManager::OnIntroDone, [](auto&, AFGTutorialIntroManager*) {
                UE_LOG(LogAutoSplitHelper, Display, TEXT("OnIntro Done"));
                });
            */
            SUBSCRIBE_METHOD(AFGTutorialIntroManager::EndSkipIntroSequence, [](auto&, AFGTutorialIntroManager*) {
                UE_LOG(LogAutoSplitHelper, Display, TEXT("Intro Done (skipped in menu)"));

                //Manager->OnIntroSkipped.AddDynamic(this, &UAutoSplitHelper::OnIntroSkipped);
                });

            /*
            SUBSCRIBE_METHOD_AFTER(AFGResearchManager::InitiateResearch, [this](auto&, AFGResearchManager* Manager, UFGInventoryComponent* playerInventory, TSubclassOf<class UFGSchematic> schematic, TSubclassOf<class UFGResearchTree> initiatingResearchTree)
                {
                    FString Info;
                    for (FResearchTime& rsch : Manager->mOngoingResearch)
                    {
                        for (auto& rwd : rsch.ResearchData.PendingRewards)
                        {
                            Info += FString::Printf(TEXT("%s"), *rwd->GetName());
                        }
                    }
                    UE_LOG(LogAutoSplitHelper, Display, TEXT("InitiateResearch: %s"), *Info);
                    GEngine->AddOnScreenDebugMessage(54637281, 20.0f, FColor::Green, Info);

                    if (NextRecipesWidget)
                    {
                        UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), NextRecipesWidget);
                        Widget->AddToViewport();
                    }
            });

            if (TutorialIntroManager)
            {
                AFGCharacterPlayer* player = TutorialIntroManager->GetWorld()->SpawnActor<AFGCharacterPlayer>();
                SUBSCRIBE_METHOD_VIRTUAL(AFGCharacterPlayer::Died, player, [](auto&, AFGCharacterPlayer*, AActor*) {
                    UE_LOG(LogAutoSplitHelper, Display, TEXT("Player Died"));
                });
                player->Destroy();
            }
            */

            HasSubscribed = true;
        }
    }
}

void UAutoSplitHelper::BeginDestroy()
{
    UE_LOG(LogAutoSplitHelper, Display, TEXT("Game session ending"));
    Super::BeginDestroy();
}

void UAutoSplitHelper::OnIntroSkipped()
{
    UE_LOG(LogAutoSplitHelper, Display, TEXT("Intro done (skipped)"));
}
