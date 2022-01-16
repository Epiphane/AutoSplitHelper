#pragma once
#include "CoreMinimal.h"
#include "Module/GameWorldModule.h"
#include "AutoSplitHelperModule.h"
#include "FGSchematicManager.h"
#include "FGSchematic.h"
#include "AutoSplitHelper.generated.h"

/** World module initialized for normal game world only (e.g skipped for menu world) */
UCLASS(Blueprintable)
class AUTOSPLITHELPER_API UAutoSplitHelper : public UGameWorldModule {
    GENERATED_BODY()

public:
    UAutoSplitHelper();

    void DispatchLifecycleEvent(ELifecyclePhase Phase) override;
    void BeginDestroy() override;

    static bool HasSubscribed;
};
