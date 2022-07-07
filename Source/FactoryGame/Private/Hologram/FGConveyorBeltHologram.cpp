// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGConveyorBeltHologram.h"

AFGConveyorBeltHologram::AFGConveyorBeltHologram() : Super() {
	this->mChildPoleHologram = nullptr;
	this->mConnectionComponents[0] = nullptr;
	this->mConnectionComponents[1] = nullptr;
	this->mSnappedConnectionComponents[0] = nullptr;
	this->mSnappedConnectionComponents[1] = nullptr;
	this->mUpgradedConveyorBelt = nullptr;
	this->mDefaultConveyorPoleRecipe = nullptr;
	this->mBendRadius = 199.0;
	this->mMaxSplineLength = 5600.1;
	this->mMaxIncline = 35.0;
	this->mConnectionArrowComponentDirection = EFactoryConnectionDirection::FCD_ANY;
	this->mConnectionArrowComponent = nullptr;
	this->mConstructionPoleLocations[0] = FVector::ZeroVector;
	this->mConstructionPoleLocations[1] = FVector::ZeroVector;
	this->mConstructionPoleRotations[0] = FRotator::ZeroRotator;
	this->mConstructionPoleRotations[1] = FRotator::ZeroRotator;
	this->mMesh = nullptr;
	this->mNeedsValidFloor = false;
	this->mUseBuildClearanceOverlapSnapp = false;
}
void AFGConveyorBeltHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGConveyorBeltHologram, mChildPoleHologram);
	DOREPLIFETIME(AFGConveyorBeltHologram, mConnectionArrowComponentDirection);
}
void AFGConveyorBeltHologram::BeginPlay(){ }
bool AFGConveyorBeltHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
void AFGConveyorBeltHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGConveyorBeltHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
int32 AFGConveyorBeltHologram::GetBaseCostMultiplier() const{ return int32(); }
AActor* AFGConveyorBeltHologram::GetUpgradedActor() const{ return nullptr; }
void AFGConveyorBeltHologram::OnInvalidHitResult(){ }
void AFGConveyorBeltHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
bool AFGConveyorBeltHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
void AFGConveyorBeltHologram::AdjustForGround(FVector& out_adjustedLocation, FRotator& out_adjustedRotation){ }
void AFGConveyorBeltHologram::PreHologramPlacement(){ }
void AFGConveyorBeltHologram::PostHologramPlacement(){ }
bool AFGConveyorBeltHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGConveyorBeltHologram::Scroll(int32 delta){ }
void AFGConveyorBeltHologram::GetSupportedScrollModes(TArray<EHologramScrollMode>* out_modes) const{ }
float AFGConveyorBeltHologram::GetHologramHoverHeight() const{ return float(); }
void AFGConveyorBeltHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGConveyorBeltHologram::ClientPreConstructMessageSerialization(){ }
void AFGConveyorBeltHologram::ServerPostConstructMessageDeserialization(){ }
EFactoryConnectionDirection AFGConveyorBeltHologram::GetActiveConnectionDirection() const{ return EFactoryConnectionDirection(); }
TArray<AFGBuildable*> AFGConveyorBeltHologram::GetAnyConnectedBuildables(){ return TArray<AFGBuildable*>(); }
void AFGConveyorBeltHologram::CheckValidFloor(){ }
void AFGConveyorBeltHologram::CheckValidPlacement(){ }
void AFGConveyorBeltHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGConveyorBeltHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGConveyorBeltHologram::CheckClearance(const FVector& locationOffset){ }
void AFGConveyorBeltHologram::SetupConveyorClearanceDetector(){ }
void AFGConveyorBeltHologram::UpdateSplineComponent(){ }
void AFGConveyorBeltHologram::OnRep_ConnectionArrowComponentDirection(){ }
void AFGConveyorBeltHologram::AutoRouteSpline(const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
bool AFGConveyorBeltHologram::ValidateIncline(){ return bool(); }
bool AFGConveyorBeltHologram::ValidateMinLength(){ return bool(); }
