#include "WindowsApplication.hpp"
#include "D3d/D3d12GraphicsManager.hpp"
#include "MemoryManager.hpp"
#include <tchar.h>

using namespace ZetaEngine;

namespace ZetaEngine
{
	GfxConfiguration config(8, 8, 8, 8, 32, 0, 0, 960, 540, _T("Zeta Engine(Windows"));
	IApplication* g_pApp = static_cast<IApplication*>(new WindowsApplication(config));
	GraphicsManager* g_pGraphicsManager = static_cast<GraphicsManager*>(new D3d12GraphicsManager);
	MemoryManager* g_pMemoryManager = static_cast<MemoryManager*>(new MemoryManager);
}
