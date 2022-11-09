#pragma once

#include "IRuntimeModule.hpp"

namespace ZetaEngine
{
	class GraphicsManager : implements IRuntimeModule
	{
		public:
			virtual ~GraphicsManager() override {}

			virtual int Initialize() override;
			virtual void Finalize() override;

			virtual void Tick() override;
	};

	extern GraphicsManager* g_pGraphicsManager;
}