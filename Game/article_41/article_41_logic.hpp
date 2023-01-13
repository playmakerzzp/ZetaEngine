#pragma once
#include "GameLogic.hpp"

namespace ZetaEngine {
    class article_41_logic : public GameLogic
    {
        int Initialize();
        void Finalize();
        void Tick();

        void OnLeftKey();
        void OnRightKey();
        void OnUpKey();
        void OnDownKey();
    };
}