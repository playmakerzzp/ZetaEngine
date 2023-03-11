#include "GfxConfiguration.hpp"
#include "EditorLogic.hpp"
#include "My/MyPhysicsManager.hpp"

namespace ZetaEngine {
    GfxConfiguration config(8, 8, 8, 8, 24, 8, 0, 1920, 1080, "ZetaEngine Editor");
    IGameLogic*       g_pGameLogic       = static_cast<IGameLogic*>(new EditorLogic);
    IPhysicsManager*  g_pPhysicsManager  = static_cast<IPhysicsManager*>(new MyPhysicsManager);
}