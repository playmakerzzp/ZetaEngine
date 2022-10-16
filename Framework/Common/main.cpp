#include <stdio.h>
#include "IApplication.hpp"

namespace ZetaEngine
{
    extern IApplication* g_pApp;
}

int main(int argc, char** argv)
{
    int ret;
    if ((ret = ZetaEngine::g_pApp->Initialize()) != 0)
    {
        printf("App Initialize failed, will exit now");
        return ret;
    }

    while (!ZetaEngine::g_pApp->IsQuit())
    {
        ZetaEngine::g_pApp->Tick();
    }

    ZetaEngine::g_pApp->Finalize();

    return 0;
}