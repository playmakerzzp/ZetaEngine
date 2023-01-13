#include <iostream>
#include "DebugManager.hpp"
#include "GraphicsManager.hpp"
#include "IPhysicsManager.hpp"

using namespace ZetaEngine;
using namespace std;

int DebugManager::Initialize()
{
    return 0;
}

void DebugManager::Finalize()
{

}

void DebugManager::Tick()
{
#ifdef DEBUG
    if(m_bDrawDebugInfo)
    {
        g_pGraphicsManager->ClearDebugBuffers();
        DrawDebugInfo();
        // g_pPhysicsManager->DrawDebugInfo();
    }
#endif
}

void DebugManager::ToggleDebugInfo()
{
#ifdef DEBUG
    m_bDrawDebugInfo = !m_bDrawDebugInfo;
    if(!m_bDrawDebugInfo)
        g_pGraphicsManager->ClearDebugBuffers();
#endif
}

void DebugManager::DrawDebugInfo()
{
#ifdef DEBUG
    // x - axis
    Vector3f from (-1000.0f, 0.0f, 0.0f);
    Vector3f to (1000.0f, 0.0f, 0.0f);
    Vector3f color(1.0f, 0.0f, 0.0f);
    g_pGraphicsManager->DrawLine(from, to, color);

    // y - axis
    from.Set(0.0f, -1000.0f, 0.0f);
    to.Set(0.0f, 1000.0f, 0.0f);
    color.Set(0.0f, 1.0f, 0.0f);
    g_pGraphicsManager->DrawLine(from, to, color);

    // z - axis
    from.Set(0.0f, 0.0f, -1000.0f);
    to.Set(0.0f, 0.0f, 1000.0f);
    color.Set(0.0f, 0.0f, 1.0f);
    g_pGraphicsManager->DrawLine(from, to, color);
#endif
}
