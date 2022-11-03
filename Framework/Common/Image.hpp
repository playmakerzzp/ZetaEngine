#pragma once
#include "geommath.hpp"
#include <stdint.h>

namespace ZetaEngine
{
    using Image = struct _Image 
    {
        uint32_t Width;
        uint32_t Height;
        R8G8B8A8Unorm* data;
        uint32_t bitcount;
        uint32_t pitch;
        size_t data_size;
    };
}