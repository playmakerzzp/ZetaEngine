#pragma once
#include "Interface.hpp"
#include "IRuntimeModule.hpp"
#include "GfxConfiguration.hpp"

namespace ZetaEngine
{
    Interface IApplication : implements IRuntimeModule
    {
public:
    virtual int Initialize() override = 0;
    virtual void Finalize() override = 0;

    virtual void Tick() override = 0;

    virtual bool IsQuit() = 0;

    virtual GfxConfiguration& GetConfiguration() = 0;
    };

    extern IApplication* g_pApp;
}

