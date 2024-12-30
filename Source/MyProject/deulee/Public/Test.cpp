#include "Test.h"

ATest::ATest()
{
	// Viewport에 메시지를 출력
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Test started"));
	}
	
	UE_LOG(LogTemp, Display, TEXT("Test started"));
}
