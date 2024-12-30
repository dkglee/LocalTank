#include "Test2.h"

ATest2::ATest2()
{
	// Viewport에 메시지를 출력
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Test2 started!"));
	}
}

