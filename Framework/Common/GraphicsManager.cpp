#include <iostream>
#include "GraphicsManager.hpp"
#include "SceneManager.hpp"
#include "cbuffer.h"
#include "IApplication.hpp"

using namespace ZetaEngine;
using namespace std;

int ZetaEngine::GraphicsManager::Initialize()
{
	int result = 0;
	return result;
}

void ZetaEngine::GraphicsManager::Finalize()
{

}

void ZetaEngine::GraphicsManager::Tick()
{

}
void GraphicsManager::WorldRotateX(float radians)
{
	Matrix4X4f rotationMatrix;
	MatrixRotationX(rotationMatrix, radians);
	m_DrawFrameContext.m_worldMatrix = m_DrawFrameContext.m_worldMatrix * rotationMatrix;
}

void GraphicsManager::WorldRotateY(float radians)
{
	Matrix4X4f rotationMatrix;
	MatrixRotationY(rotationMatrix, radians);
	m_DrawFrameContext.m_worldMatrix = m_DrawFrameContext.m_worldMatrix * rotationMatrix;
}

void GraphicsManager::Clear()
{

}

void GraphicsManager::Draw()
{
	
}