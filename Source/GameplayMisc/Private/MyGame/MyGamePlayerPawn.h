#pragma once

#include "Util/TestUtil/TUPawn.h"
#include "Util/Core/Log/MyLoggingTypes.h"
#include "MyGamePlayerPawn.generated.h"

UCLASS()
class AMyGamePlayerPawn : public ATUPawn
{
	GENERATED_BODY()

	// ~Framework Begin
	virtual void MyBeginPlay_Implementation() override;
	// ~Framework End

	// ~Access helpers Begin
	UFUNCTION(BlueprintPure, Category = Controller)
	AMyGamePC* GetMyPC() const;

	UFUNCTION(BlueprintPure, Category = Controller)
	AMyGamePC* GetMyPCLogged(ELogFlags InLogFlags = ELogFlags::None) const;

	/**
	* Checks that the given pawn NOT null.
	*/
	UFUNCTION(BlueprintPure, Category = Controller)
	AMyGamePC* GetMyPCChecked() const;
	// ~Access helpers End

public:
	AMyGamePlayerPawn();

private:
	// ~Motion Begin
	void InitMovement();
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Motion, Meta=(AllowPrivateAccess = true))
	UPawnMovementComponent *Movement = nullptr;
	// ~Motion End
};
