#include "WindowsApplication.hpp"
#include <tchar.h>

using namespace ZetaEngine;

namespace ZetaEngine
{
    GfxConfiguration config(8, 8, 8, 8, 32, 0, 0, 960, 540);
    WindowsApplication  g_App(config);
    IApplication* g_pApp = &g_App;
}

int ZetaEngine::WindowsApplication::Initialize()
{
    int result;

    result = BaseApplication::Initialize();
    
    if (result != 0)
        exit(result);

    // get the HINSTANCE ig the Console Program 
	HINSTANCE hInstance = GetModuleHandle(NULL);

	// the handle for the window, filled by a functionm
	HWND hWnd;
	// this struct holds information for the window class
	WNDCLASSEX wc;

	// clear out the window class for me
	ZeroMemory(&wc, sizeof(WNDCLASSEX));

	// fill in the struct with the needed information
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.lpszClassName = _T("GameEngineFromScratch");

	// register the window class
	RegisterClassEx(&wc);


	// create the window and use the result as the handle
	hWnd = CreateWindowEx(0,
		_T("GameEngineFromSratch"), // name of thw window class
		_T("ZetaEngine"),			// title of the window
		WS_OVERLAPPEDWINDOW,		// window style
		CW_USEDEFAULT,				// x-position of the window
		CW_USEDEFAULT,				// y-position of thw window
		m_Config.screenWidth,		// width of the window
		m_Config.screenHeight,		// height of thw window
		NULL,						// we have no parant window, NULL
		NULL,						// we aren't using meus, NULL
		hInstance,					// application handle
		NULL);						// used with multiple windows, NULL

	// display the window on the screen
	ShowWindow(hWnd, SW_SHOW);

	return result;
}

void ZetaEngine::WindowsApplication::Finalize()
{

}

void ZetaEngine::WindowsApplication::Tick()
{
	// this struct holds Windows event messages
	MSG msg;

	// we use PeekMessage instead of GetMessage here
	// because we should not block the thread at anywhere
	// except the engine execution driver module
	if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
	{
		// translate ketstroke messages into the right format
		TranslateMessage(&msg);

		// send the message to the WindowProc function
		DispatchMessage(&msg);
	}
}

// this is the main message handler for the program
LRESULT CALLBACK ZetaEngine::WindowsApplication::WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	// sort through and find what code to run for the message given
	switch (message)
	{
	case WM_PRINT:
	// we will replace this part with Rendering Module
		{

		}break;
	case WM_DESTROY:
		{
			// close the application entirely
			PostQuitMessage(0);
			BaseApplication::m_bQuit = true;
			return 0;
		}
	}

	// Handle any messages the switch statement didn't
	return DefWindowProc(hWnd, message, wParam, lParam);
}