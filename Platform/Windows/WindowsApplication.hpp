#pragma once

#include <Windows.h>
#include <windowsx.h>
#include "BaseApplication.hpp"

namespace ZetaEngine
{
	class WindowsApplication : public BaseApplication
	{
	public:
		WindowsApplication(GfxConfiguration& config)
			:BaseApplication(config)
		{};

		virtual int Initialize() override;
		virtual void Finalize() override;

		virtual void Tick();

		static LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

		inline HWND GetMainWindow() { return m_hWnd; }

	private:
		HWND m_hWnd;
	};
}