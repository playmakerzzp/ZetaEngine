include_directories("/opt/local/include")
link_directories("/opt/local/lib")
find_library(COCOA_LIBRARY Cocoa required)
find_library(OPENGL_LIBRARY OpenGL required)
find_library(CV_LIBRARY CoreVideo required)

# ZetaEngineXcbOpenGL
add_executable(ZetaEngineXcbOpenGL 
        XcbApplication.cpp 
        XcbOpenGLApplication.cpp
	    ${PROJECT_SOURCE_DIR}/External/src/glad/src/glad_glx.c
    )
target_link_libraries(ZetaEngineXcbOpenGL 
        OpenGLRHI 
        Common 
        ${OPENGEX_LIBRARY} 
        ${OPENDDL_LIBRARY} 
        ${XG_LIBRARY} 
        ${ZLIB_LIBRARY}
        xcb 
        X11 
        X11-xcb 
        dl
        )
target_include_directories(ZetaEngineXcbOpenGL PRIVATE "${PROJECT_SOURCE_DIR}/External/src/glad/include")
__add_xg_platform_dependencies(ZetaEngineXcbOpenGL)

# ZetaEngineCocoa
add_executable(ZetaEngineCocoa MACOSX_BUNDLE
        CocoaApplication.mm 
        CocoaApplicationConfig.cpp 
        AppDelegate.m
        WindowDelegate.m
    )
target_link_libraries(ZetaEngineCocoa
        Common 
        ${OPENGEX_LIBRARY} 
        ${OPENDDL_LIBRARY} 
        ${XG_LIBRARY} 
        ${ZLIB_LIBRARY}
        ${COCOA_LIBRARY} 
        )
__add_xg_platform_dependencies(ZetaEngineCocoa)

# ZetaEngineCocoaOpenGL
add_executable(ZetaEngineCocoaOpenGL MACOSX_BUNDLE
        CocoaApplication.mm 
        CocoaOpenGLApplication.mm
        CocoaOpenGLApplicationConfig.cpp
        AppDelegate.m
        WindowDelegate.m
        GLView.mm
    )
target_link_libraries(ZetaEngineCocoaOpenGL 
        OpenGLRHI 
        Common 
        ${OPENGEX_LIBRARY} 
        ${OPENDDL_LIBRARY} 
        ${XG_LIBRARY} 
        ${ZLIB_LIBRARY}
        ${COCOA_LIBRARY} 
        ${OPENGL_LIBRARY}
        dl
        )
target_include_directories(ZetaEngineCocoaOpenGL PRIVATE "${PROJECT_SOURCE_DIR}/External/src/glad/include")
__add_xg_platform_dependencies(ZetaEngineCocoaOpenGL)

