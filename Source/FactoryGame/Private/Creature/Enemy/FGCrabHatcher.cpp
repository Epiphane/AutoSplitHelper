// This file has been automatically generated by the Unreal Header Implementation tool

#include "Creature/Enemy/FGCrabHatcher.h"

AFGCrabHatcher::AFGCrabHatcher() : Super() {
	this->mCurrentHealth = 20.0;
	this->bReplicates = true;
}
void AFGCrabHatcher::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrabHatcher::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrabHatcher::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrabHatcher::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrabHatcher::GatherDependencies_Implementation(TArray<UObject*>& out_dependentObjects){ }
bool AFGCrabHatcher::NeedTransform_Implementation(){ return bool(); }
bool AFGCrabHatcher::ShouldSave_Implementation() const{ return bool(); }
void AFGCrabHatcher::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGCrabHatcher, mCurrentHealth);
}
