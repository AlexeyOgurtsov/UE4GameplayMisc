#include "MyGameMode.h"
#include "MyGamePC.h"
#include "MyGamePlayerPawn.h"
#include "MyGameConfig.h"
#include "Util/Core/LogUtilLib.h"

MyGameModeType::AMyGameMode()
{
	DefaultPawnClass = MyPawnType::StaticClass();
	PlayerControllerClass = MyPCType::StaticClass();
}
