#pragma once
#include "GameLogic.hpp"

namespace ZetaEngine {
    class BilliardGameLogic : public GameLogic
    {
        virtual int Initialize();
        virtual void Finalize();
        virtual void Tick();

        virtual void OnLeftKey();
    };
}