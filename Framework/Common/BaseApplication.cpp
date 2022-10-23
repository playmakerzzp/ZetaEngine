#include "BaseApplication.hpp"
#include <iostream>

bool ZetaEngine::BaseApplication::m_bQuit = false;

ZetaEngine::BaseApplication::BaseApplication(GfxConfiguration& cfg)
    :m_Config(cfg)
{

}
int ZetaEngine::BaseApplication::Initialize()
{
    std::cout << m_Config;
    return 0;
}

void ZetaEngine::BaseApplication::Finalize()
{

}

void ZetaEngine::BaseApplication::Tick()
{

}

bool ZetaEngine::BaseApplication::IsQuit()
{
    return m_bQuit;
}