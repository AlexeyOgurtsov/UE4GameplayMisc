#pragma once

#include "Util/TestUtil/TUPlayerController.h"
#include "Util/Core/Log/MyLoggingTypes.h"
#include "MyGamePC.generated.h"

class AMyGamePlayerPawn;

UCLASS()
class AMyGamePC : public ATUPlayerController
{
	GENERATED_BODY()

public:
	AMyGamePC();

	// ~AActor Begin
	virtual void BeginPlay() override;
	// ~AActor End

	// ~Access helpers Begin
	UFUNCTION(BlueprintPure, Category = Pawn)
	AMyGamePlayerPawn* GetMyPawn() const;

	UFUNCTION(BlueprintPure, Category = Pawn)
	AMyGamePlayerPawn* GetMyPawnLogged(ELogFlags InLogFlags = ELogFlags::None) const;

	/**
	* Checks that the given pawn NOT null.
	*/
	UFUNCTION(BlueprintPure, Category = Pawn)
	AMyGamePlayerPawn* GetMyPawnChecked() const;
	// ~Access helpers End

private:
};
