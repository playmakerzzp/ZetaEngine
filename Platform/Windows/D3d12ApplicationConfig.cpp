#include <tchar.h>
#include "Dd3d12Application.hpp"
#include "D3d/D3d12GraphicsManager.hpp"


namespace ZetaEngine
{
	GfxConfiguration config(8, 8, 8, 8, 32, 0, 0, 960, 540, _T("Zeta Engine(Windows"));
	IApplication* g_pApp = static_cast<IApplication*>(new WindowsApplication(config));
	GraphicsManager* g_pGraphicsManager = static_cast<GraphicsManager*>(new D3d12GraphicsManager);
	MemoryManager* g_pMemoryManager = static_cast<MemoryManager*>(new MemoryManager);
    AssetLoader* g_pAssetLoader = static_cast<AssetLoader>(new AssetLoader);
    SceneManager* g_pSceneManager = static_cast<SceneManager*>(new SceneManager);
    InputManager* g_pInputManager = static_cast<InputManager*>(new InputManager);
}