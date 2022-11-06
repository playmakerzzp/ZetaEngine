#pragma once
#include "geommath.hpp"
#include "IRuntimeModule.hpp"
#include "SceneNode.hpp"

namespace ZetaEngine {
    class SceneManager : implements IRuntimeModule
    {
    public:
        virtual ~SceneManager() override;

        virtual int Initialize() override;
        virtual void Finalize() override;

        virtual void Tick() override;
    
    protected:
        SceneEmptyNode m_RootNode;
    };
}