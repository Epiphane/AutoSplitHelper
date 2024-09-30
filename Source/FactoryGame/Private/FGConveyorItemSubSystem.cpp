// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGConveyorItemSubSystem.h"
#include "Components/SceneComponent.h"

UFGConveyorInstanceMeshBucket* FItemContainer::CreateComponent(AActor* Outer, UStaticMesh* Mesh){ return nullptr; }
#if WITH_PIE_SUPPORT
#endif 
AFGConveyorItemSubsystem::AFGConveyorItemSubsystem() : Super() {
	this->mLiftHandleItemDesc = nullptr;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_DuringPhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = false;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->SetHidden(false);
	this->bAllowTickBeforeBeginPlay = false;
	this->bReplicates = false;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}
AFGConveyorItemSubsystem* AFGConveyorItemSubsystem::Get(UWorld* world){ return nullptr; }
void AFGConveyorItemSubsystem::LazyAddConveyorItemOfClass(UClass* Descriptor){ }
void AFGConveyorItemSubsystem::AddLookupTable(AFGConveyorChainActor* Actor, const TArray<FVector3f>& Position, const TArray<FQuat4f>& Quats){ }
void AFGConveyorItemSubsystem::RemoveChainActorFromLookupTable(AFGConveyorChainActor* ChainActor){ }
void AFGConveyorItemSubsystem::Tick(float DeltaSeconds){ }
void AFGConveyorItemSubsystem::BeginPlay(){ }
void AFGConveyorItemSubsystem::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGConveyorItemSubsystem::InitializeConveyorItems(){ }
void AFGConveyorItemSubsystem::Update(){ }
void AFGConveyorItemSubsystem::CleanupLookupTables(){ }
void AFGConveyorItemSubsystem::AddNewLookupTables(){ }
bool AFGConveyorItemSubsystem::mIsConveyorRendererActive = bool();
