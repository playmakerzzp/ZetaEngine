#include "BaseApplication.hpp"
#include <iostream>

using namespace ZetaEngine;

bool ZetaEngine::BaseApplication::m_bQuit = false;

ZetaEngine::BaseApplication::BaseApplication(GfxConfiguration& cfg)
    :m_Config(cfg)
{
}

// Parse command line, read configuration, initialize all sub modules
int ZetaEngine::BaseApplication::Initialize()
{
    int result = 0;

    std::cout << m_Config;

	return result;
}


// Finalize all sub modules and clean up all runtime temporary files.
void ZetaEngine::BaseApplication::Finalize()
{
}


// One cycle of the main loop
void ZetaEngine::BaseApplication::Tick()
{
}

bool ZetaEngine::BaseApplication::IsQuit()
{
	return m_bQuit;
}

