#pragma once
#include <vector>
#include <string>
#include "SceneObject.hpp"

namespace ZetaEngine
{
    struct BaseSceneNode
    {
        std::string name;
        std::vector<BaseSceneNode> children;
    };

    template <typename T>
    struct SceneNode : public BaseSceneNode
    {
        T *t;
    };

    using SceneEmptyNode = BaseSceneNode;
    using SceneGeometryNode = SceneNode<SceneObjectMesh>;
    using SceneMaterialNode = SceneNode<SceneObjectMaterial>;
    using SceneLightNode = SceneNode<SceneObjectLight>;
    using SceneCameraNode = SceneNode<SceneObjectCamera>;

}