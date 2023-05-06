
#include "BuildableResourceNodesReduxModule.h"

#include "SML/Public/Patching/NativeHookManager.h"


DEFINE_LOG_CATEGORY(LogBuildableResourceNodesReduxCpp);

void FBuildableResourceNodesReduxModule::StartupModule() {
}

IMPLEMENT_GAME_MODULE(FBuildableResourceNodesReduxModule, BuildableResourceNodesRedux);
