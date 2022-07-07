// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "FGAnimNotify.h"
#include "FGAnimNotify_Landed.generated.h"

UCLASS()
class FACTORYGAME_API UFGAnimNotify_Landed : public UFGAnimNotify
{
	GENERATED_BODY()
public:
	/** ctor */
	UFGAnimNotify_Landed();

	//~ Begin UAnimNotify interface
	virtual FString GetNotifyName_Implementation() const override;
	virtual void Notify( USkeletalMeshComponent* meshComp, UAnimSequenceBase* animation ) override;
	//~ End UAnimNotify interface
};