/*
	ArduinoKit 1.0.0

*/
#include "ArduinoKitPCH.h"
#include "ArduinoKitModule.h"

IMPLEMENT_MODULE(ArduinoKitModule, ArduinoKit);

DEFINE_LOG_CATEGORY(ModuleLog)

#define LOCTEXT_NAMESPACE "ArduinoKit"

ArduinoKitModule::ArduinoKitModule()
{
}

void ArduinoKitModule::StartupModule()
{
	UE_LOG(ModuleLog, Warning, TEXT("ArduinoKit: Plugin Started"));
}

void ArduinoKitModule::ShutdownModule()
{
	UE_LOG(ModuleLog, Warning, TEXT("ArduinoKit: Plugin Ended"));
}