#include "BaseApplication.hpp"
#include <iostream>

bool ZetaEngine::BaseApplication::m_bQuit = false;

ZetaEngine::BaseApplication::BaseApplication(GfxConfiguration& cfg)
    :m_Config(cfg)
{

}
int ZetaEngine::BaseApplication::Initialize()
{
    int result = 0;

    std::cout << m_Config;

    return result;
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