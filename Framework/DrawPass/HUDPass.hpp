#pragma once
#include "IDrawPass.hpp"

namespace ZetaEngine
{
    class HUDPass : implements IDrawPass
    {
    public:
        ~HUDPass() = default;
        void Draw(Frame& frame) final;    
    };
}