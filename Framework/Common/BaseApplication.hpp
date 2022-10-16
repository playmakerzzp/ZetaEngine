#pragma once
#include "IApplication.hpp"

namespace ZetaEngine
{
    class BaseApplication : implements IApplication
    {
    public:
        virtual int Initialize() override;
        virtual void Finalize() override;

        virtual void Tick() override;

        virtual bool IsQuit() override;

    protected:

        bool m_bQuit;
    };
}
