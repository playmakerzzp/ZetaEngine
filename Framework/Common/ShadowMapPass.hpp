#pragma once
#include "IDrawPass.hpp"

namespace ZetaEngine
{
    class ShadowMapPass: implements IDrawPass
    {
    public:
        ~ShadowMapPass() = default;
        void Draw(Frame& frame);
    };
}