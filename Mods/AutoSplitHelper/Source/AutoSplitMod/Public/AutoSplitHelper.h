#pragma once
#include "CoreMinimal.h"
#include "Module/GameWorldModule.h"
#include "AutoSplitHelperModule.h"
#include "FGSchematicManager.h"
#include "FGSchematic.h"
#include "Blueprint/UserWidget.h"
#include "AutoSplitHelper.generated.h"

class UUserWidget;

/** World module initialized for normal game world only (e.g skipped for menu world) */
UCLASS(Blueprintable, Config=Game)
class AUTOSPLITHELPER_API UAutoSplitHelper : public UGameWorldModule {
    GENERATED_BODY()

public:
    UAutoSplitHelper();

    void DispatchLifecycleEvent(ELifecyclePhase Phase) override;
    void BeginDestroy() override;

    static bool HasSubscribed;

    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UUserWidget> NextRecipesWidget;

    UFUNCTION()
    void OnIntroSkipped();
};
