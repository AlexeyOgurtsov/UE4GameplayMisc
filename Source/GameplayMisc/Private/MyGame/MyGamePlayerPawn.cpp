#include "MyGamePlayerPawn.h"
#include "MyGamePC.h"
#include "MyGameConfig.h"

#include "Util/Core/LogUtilLib.h"

#include "GameFramework/FloatingPawnMovement.h"

namespace
{
	namespace Config
	{
		constexpr float MAX_SPEED = 300.0F;
		constexpr float ACCELERATION = 100.0F;
		constexpr float DECELERATION = 100.0F;
	} // Config
} // anonymous

MyPawnType::AMyGamePlayerPawn()
{
	InitMovement();
}
void MyPawnType::MyBeginPlay_Implementation()
{
	M_LOGFUNC();

	Super::MyBeginPlay_Implementation();
	// Custom actions here
}

void MyPawnType::InitMovement()
{
	M_LOGFUNC();
	UFloatingPawnMovement* const MyMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
	MyMovement->Acceleration = Config::ACCELERATION;
	MyMovement->Deceleration = Config::DECELERATION;
	MyMovement->MaxSpeed = Config::MAX_SPEED;
	MyMovement->bEditableWhenInherited = true;
	Movement = MyMovement;
}

MyPCType* MyPawnType::GetMyPC() const
{
	return Cast<MyPCType>(GetController());
}

MyPCType* MyPawnType::GetMyPCLogged(ELogFlags InLogFlags) const
{
	MyPCType* const PC = GetMyPC();
	if(PC == nullptr)
	{
		M_LOG_ERROR_IF_FLAGS(InLogFlags, TEXT("GetMyPC() returned NULL"));
	}
	return PC;
}

MyPCType* MyPawnType::GetMyPCChecked() const
{
	MyPCType* const PC = GetMyPC();
	checkf(PC, TEXT("GetMyPawn must return non-NULL pawn!"));
	return PC;
}
