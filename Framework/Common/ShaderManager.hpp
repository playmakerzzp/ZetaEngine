#pragma once
#include <unordered_map>
#include <vcruntime.h>
#include "IShaderManager.hpp"

namespace std
{
    // Specialization for std::hash<Guid> -- this implementation
	// uses std::hash<std::string> on the stringification of the guid
	// to calculate the hash
    template <>
    struct hash<const ZetaEngine::DefaultShaderIndex>
    {
        using argument_type = ZetaEngine::DefaultShaderIndex;
        using result_type = std::size_t; 

        result_type operator()(argument_type const &index) const
        {
            std::hash<std::int32_t> hasher;
            return static_cast<result_type>(hasher((int32_t)index));
        }
    };
}

namespace ZetaEngine
{
    class ShaderManager: implements IShaderManager
    {
    public:
        ShaderManager() = default;
        ~ShaderManager() = default;

        virtual intptr_t GetDefaultShaderProgram(DefaultShaderIndex index) final
        {
            return m_DefaultShaders[index];
        }
    
    protected:
        std::unordered_map<const DefaultShaderIndex, intptr_t> m_DefaultShaders;
    };
}