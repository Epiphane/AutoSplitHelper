// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRainOcclusionActor.h"
#include "Components/SceneComponent.h"

FSimpleBuildingInfo FSimpleBuildingInfo::DefaultSquareFoundation(AFGBuildable* Source){ return FSimpleBuildingInfo(); }
FSimpleBuildingInfo::FSimpleBuildingInfo(AFGBuildable* Source){ }
AFGRainOcclusionActor::AFGRainOcclusionActor() : Super() {
	this->mBoxShapedOccluder = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Box Shapes"));
	this->mRampShapeOccluder = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Ramp Shapes"));
	this->mTriangleShapeOccluder = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Triangle Shapes"));
	this->mNumEntriesToHandlePerFrame = 200;
	this->bIsActive = false;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->mBoxShapedOccluder->SetupAttachment(RootComponent);
	this->mRampShapeOccluder->SetupAttachment(RootComponent);
	this->mTriangleShapeOccluder->SetupAttachment(RootComponent);
}
void AFGRainOcclusionActor::Tick(float DeltaSeconds){ }
void AFGRainOcclusionActor::BeginPlay(){ }
void AFGRainOcclusionActor::ForceUpdateOcclusionShapes(const FVector& Location, const float& Range){ }
void AFGRainOcclusionActor::OnTraceCompleted(const FTraceHandle& Handle, FOverlapDatum& Data){ }
void AFGRainOcclusionActor::AddShape(AFGBuildable* Buildable){ }
void AFGRainOcclusionActor::RemoveShape(AFGBuildable* Buildable){ }
void AFGRainOcclusionActor::SetupStaticMeshComponentFlags(UStaticMeshComponent* Component){ }
void AFGRainOcclusionActor::ResolveTracedEntries(){ }
void AFGRainOcclusionActor::SetUpdateRainOccluders(bool bActive){ }
UInstancedStaticMeshComponent* AFGRainOcclusionActor::SetupDefaultOccluderMeshComponent(FName Name){ return nullptr; }
FTransform AFGRainOcclusionActor::GenerateLocation(const FSimpleComponentInfo& componentInfo, const EFGRainOcclusionShape& shape){ return FTransform(); }
void FFGBuildingGatheringWorker::DoWork(){ }
