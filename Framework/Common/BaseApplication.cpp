#include "BaseApplication.hpp"

int ZetaEngine::BaseApplication::Initialize()
{
    m_bQuit = false;

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