#include <windows.h>
#include <windowsx.h>
#include "BaseApplication.hpp"

namespace ZetaEngine
{
	class WindowsApplication : public BaseApplication
	{
	public:
		WindowsApplication(GfxConfiguration& config)
			:BaseApplication(config) {};

		virtual int Initialize() override;
		virtual void Finalize() override;
		virtual void Tick() override;

		static LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	};
}