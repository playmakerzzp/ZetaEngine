#pragma once
#include "WindowsApplication.hpp"

namespace ZetaEngine {
    class D3d12Application : public WindowsApplication 
    {
        public:
            using WindowsApplication::WindowsApplication;
            void Tick();
    };
}
