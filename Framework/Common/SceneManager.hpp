#pragma once
#include "geommath.hpp"
#include "IRuntimeModule.hpp"
#include "SceneParser.hpp"

namespace ZetaEngine {
    class SceneManager : implements IRuntimeModule
    {
    public:
        virtual ~SceneManager() override;

        virtual int Initialize() override;
        virtual void Finalize() override;

        virtual void Tick() override;
        
        void LoadScene(const char* scene_file_name);

        const Scene& GetSceneForRendering();

    protected:
        void LoadOgexScene(const char* scene_file_name);
    protected:
        std::unique_ptr<Scene> m_pScene;
    };

    extern SceneManager* g_pSceneManager;
}