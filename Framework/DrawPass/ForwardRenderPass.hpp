#pragma once
#include "IDrawPass.hpp"

namespace ZetaEngine
{
    class ForwardRenderPass : implements IDrawPass
    {
    public:
        ~ForwardRenderPass() = default;
        void Draw(Frame& frame) final;    
    };
}