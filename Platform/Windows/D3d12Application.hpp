#pragma once
#inclue "WindowsApplication.hpp"

namespace ZetaEngine {
    class D3d12Application : public WindowsApplication
    {
        using WindowsApplication::WindowsApplication;
        void Tick();
    };
}