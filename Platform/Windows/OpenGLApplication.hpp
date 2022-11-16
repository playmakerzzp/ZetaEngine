#pragma once
#include "WindowsApplication.hpp"

namespace ZetaEngine
{
	class OpenGLApplication : public WindowsApplication
	{
	public:
		explicit OpenGLApplication(GfxConfiguration& config)
			: WindowsApplication(config) {};

		virtual int Initialize() override;
		virtual void Finalize() override;
		virtual void Tick() override;

	private:
		HDC   m_hDC;
		HGLRC m_RenderContext;
	};
}