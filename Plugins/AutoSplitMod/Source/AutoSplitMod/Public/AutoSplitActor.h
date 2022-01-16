#pragma once
#include "CoreMinimal.h"
#include "Module/GameWorldModule.h"
#include "AutoSplitModModule.h"
#include "FGSchematicManager.h"
#include "FGSchematic.h"
#include "AutoSplitActor.generated.h"

/** World module initialized for normal game world only (e.g skipped for menu world) */
UCLASS(Blueprintable)
class AUTOSPLITMOD_API UAutoSplitActor : public UGameWorldModule {
    GENERATED_BODY()

public:
    UAutoSplitActor();

    void BeginDestroy() override;
};
