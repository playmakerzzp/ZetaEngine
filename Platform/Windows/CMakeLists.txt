add_executable(ZetaGameEngineD3d12 WindowsApplication.cpp D3d12Application.cpp)
target_link_libraries(ZetaGameEngineD3d12 Common D3dRHI d3d12 dxgi d3dcompiler)

add_executable(ZetaEngineOpenGL 
    WindowsApplication.cpp 
    OpenGLApplication.cpp
    ${PROJECT_SOURCE_DIR}/External/GL/src/glad_wgl.c
    )
target_link_libraries(ZetaEngineOpenGL  Common OpenGLRHI opengl32)
target_include_directories(ZetaEngineOpenGL  PRIVATE "${PROJECT_SOURCE_DIR}/External/GL/include")
