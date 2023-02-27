#include "ForwardRenderPass.hpp"
#include "GraphicsManager.hpp"
#include "IShaderManager.hpp"

using namespace ZetaEngine;
using namespace std;

void ForwardRenderPass::Draw(Frame& frame)
{
    auto shaderProgram = g_pShaderManager->GetDefaultShaderProgram(DefaultShaderIndex::Forward);

    // Set the color shader as the current shader program ans setthe matrices that it willuse for rendering
    g_pGraphicsManager->UseShaderProgram(shaderProgram);

    g_pGraphicsManager->SetPerFrameConstants(frame.frameContext);

    for (auto dbc : frame.batchContexts)
    {
        g_pGraphicsManager->DrawBatch(*dbc);
    }
}