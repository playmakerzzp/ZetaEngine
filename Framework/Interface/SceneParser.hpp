#pragma once
#include <memory>
#include <string>
#include <unordered_map>
#include "Interface.hpp"
#include "SceneNode.hpp"
#include "SceneObject.hpp"
#include "Scene.hpp"

namespace ZetaEngine
{
    Interface SceneParser
    {
        public:
            virtual std::unique_ptr<Scene> Parse(const std::string& buf) = 0;
    };
}