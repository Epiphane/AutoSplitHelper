// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResourceSettings.h"
#include "FGItemPickup_Spawnable.h"

#if WITH_EDITORONLY_DATA && WITH_EDITOR
const FItemSettings& UFGResourceSettings::GetResourceSettings(TSubclassOf<  UFGItemDescriptor > resourceClass){ return *(new FItemSettings); }
#endif 
UFGResourceSettings::UFGResourceSettings() : Super() {
	this->mResourceAmount.Emplace();
	this->mResourceAmount[0].Min = 500;
	this->mResourceAmount[0].Max = 1000;
	this->mResourceAmount.Emplace();
	this->mResourceAmount[1].Min = 1500;
	this->mResourceAmount[1].Max = 3000;
	this->mResourceAmount.Emplace();
	this->mResourceAmount[2].Min = 4000;
	this->mResourceAmount[2].Max = 6000;
	this->mResourceAmount.Emplace();
	this->mResourceAmount[3].Min = INT_MAX;
	this->mResourceAmount[3].Max = INT_MIN;
	this->mPurityMultiplier.Add(0.3);
	this->mPurityMultiplier.Add(0.75);
	this->mPurityMultiplier.Add(1.0);
	this->mWaterResourceDescriptor = nullptr;
	this->mDefaultItemMesh = nullptr;
	this->mStackSizes.Add(1, EStackSize::SS_ONE);
	this->mStackSizes.Add(10, EStackSize::SS_SMALL);
	this->mStackSizes.Add(50, EStackSize::SS_MEDIUM);
	this->mStackSizes.Add(100, EStackSize::SS_BIG);
	this->mStackSizes.Add(200, EStackSize::SS_HUGE);
	this->mItemDropClass = AFGItemPickup_Spawnable::StaticClass();
}
UFGResourceSettings* UFGResourceSettings::Get(){ return nullptr; }
const FResourceDepositPackage& UFGResourceSettings::GetRandomResourceDepositData(int32& out_resourceDepositPackageIdx, AActor* worldContext){ return *(new FResourceDepositPackage); }
const FResourceDepositPackage& UFGResourceSettings::GetResourceDepositDataFromClass(TSubclassOf<  UFGResourceDescriptor > desiredResourceClass, int32& out_resourceDepositPackageIdx, AActor* worldContext){ return *(new FResourceDepositPackage); }
int32 UFGResourceSettings::GetStackSizeFromEnum(EStackSize stackSize) const{ return int32(); }
