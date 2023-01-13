#include "GfxConfiguration.hpp"
#include "article_41_logic.hpp"
#include "My/MyPhysicsManager.hpp"

namespace ZetaEngine {
    GfxConfiguration config(8, 8, 8, 8, 24, 8, 0, 960, 540, "article 41");
    GameLogic*       g_pGameLogic       = static_cast<GameLogic*>(new article_41_logic);
    IPhysicsManager*  g_pPhysicsManager  = static_cast<IPhysicsManager*>(new MyPhysicsManager);
}
