#pragma once
#include "IRuntimeModule.hpp"

namespace ZetaEngine {
    class DebugManager : implements IRuntimeModule
    {
    public:
        int Initialize();
        void Finalize();
        void Tick();

        void ToggleDebugInfo();

        void DrawDebugInfo();

    protected:
        bool m_bDrawDebugInfo = false;
    };

    extern DebugManager* g_pDebugManager;
}