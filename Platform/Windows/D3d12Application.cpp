#include <tchar.h>
#include "D3d12Application.hpp"
#include "D3d/D3d12GraphicsManager.hpp"

using namespace ZetaEngine;

void D3d12Application::Tick()
{
    WindowsApplication::Tick();
    g_pGraphicsManager->Clear();
    g_pGraphicsManager->Draw();
    
    // Present the back buffer to the screen since rendering is complete.
    HDC hdc = GetDC(m_hWnd);
    SwapBuffers(hdc);
	ReleaseDC(m_hWnd, hdc);
}

