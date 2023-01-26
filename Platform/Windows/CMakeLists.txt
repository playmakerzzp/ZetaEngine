find_package(OpenGL REQUIRED)

add_library(PlatformInterface
                WindowsApplication.cpp
                D3d12Application.cpp
)
target_link_libraries(PlatformInterface
                d2d1
                d3d12
                dxgi
)

add_library(ZetaGameEngineD3d12
                   D3d12ApplicationConfig.cpp
)
target_link_libraries(ZetaGameEngineD3d12
                        Common 
                        D3dRHI 
                        PlatformInterface
)

add_library(PlatformInterfaceOpenGL
                WindowsApplication.cpp
                OpenGLApplication.cpp
                ${PROJECT_SOURCE_DIR}/External/src/glad/src/glad_wgl.c
)
target_link_libraries(PlatformInterfaceOpenGL
                ${OPENGL_LIBRARIES}
)
target_include_directories(PlatformInterfaceOpenGL PRIVATE 
        "${PROJECT_SOURCE_DIR}/External/src/glad/include")

add_library(ZetaGameEngineOpenGL
                OpenGLApplicationConfig.cpp
)
target_link_libraries(ZetaGameEngineOpenGL
                        Common 
                        OpenGLRHI 
                        PlatformInterfaceOpenGL
)
target_include_directories(ZetaGameEngineOpenGL PRIVATE 
        "${PROJECT_SOURCE_DIR}/External/src/glad/include")


