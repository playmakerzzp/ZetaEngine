#pragma once
#include <iostream>
#include "Interface.hpp"
#include "GfxStructures.hpp"

namespace ZetaEngine
{
    Interface IDrawPass
    {
    public:
        IDrawPass() = default;
        virtual ~IDrawPass() {}

        virtual void Draw(Frame& frame) = 0;
    };
}