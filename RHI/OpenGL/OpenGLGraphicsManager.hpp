#pragma once
#include "GraphicsManager.hpp"

namespace ZetaEngine
{
	class OpenGLGraphicsManager : public GraphicsManager
	{
	public:
		virtual int Initialize() override;
		virtual void Finalize() override;

		virtual void Tick() override;
	private:
	};
}