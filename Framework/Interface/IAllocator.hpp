#pragma once
#include <cstdint>
#include <cstdlib>
#include <stdint.h>
#include "Interface.hpp"

namespace ZetaEngine
{
    Interface IAllocator
    {
        public:
            // debug pattterns
            const uint8_t PATTERN_ALIGN = 0xFC;
            const uint8_t PATTERN_ALLOC = 0xFD;
            const uint8_t PATTERN_FREE  = 0xFE;

            virtual ~IAllocator();

            virtual void*   Allocate(size_t size) = 0;
            virtual void    Free(void* p) = 0;
            virtual void    FreeAll() = 0;
    };
}