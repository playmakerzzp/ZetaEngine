#include "D3d12Application.hpp"
#include <tchar.h>
#include <wingdi.h>
#include <winuser.h>


using namespace ZetaEngine;

void D3d12Application::Tick()
{
	WindowsApplication::Tick();
	g_pGraphicsManager->Clear();
	g_pGraphicsManager->Draw();

	// Present the back buffer to the scene since rendering is complete
	HDC hdc = GetDC(m_hWnd);
	SwapBuffers(hdc);
	ReleaseDC(m_hWnd, hdc);
}
