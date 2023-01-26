#pragma once
#include "IGameLogic.hpp"

namespace ZetaEngine {
    class BilliardGameLogic : implements IGameLogic
    {
        int Initialize();
        void Finalize();
        void Tick();

        void OnLeftKey();
    };
}