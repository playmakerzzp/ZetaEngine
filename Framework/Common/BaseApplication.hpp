#pragma once
#include "IApplication.hpp"
#include "GfxConfiguration.hpp"

namespace ZetaEngine
{
    class BaseApplication : implements IApplication
    {
    public:
        BaseApplication(GfxConfiguration& cfg);
        BaseApplication() = delete;
        virtual int Initialize() override;
        virtual void Finalize() override;

        virtual void Tick() override;

        virtual bool IsQuit() override;

    protected:
        // Flag if need quit the main loop of the application
        static bool m_bQuit;
        GfxConfiguration m_Config;
    };
}
