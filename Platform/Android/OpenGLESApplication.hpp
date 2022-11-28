#pragma once
#include "AndroidApplication.hpp"
#include <EGL/egl.h>

namespace ZetaEngine {
    class OpenGLESApplication : public AndroidApplication
    {
        public:
            using AndroidApplication::AndroidApplication;
            virtual int Initialize();
            virtual void Finalize();

        protected:
            EGLSurface m_Surface;
            EGLContext m_Context;
            EGLDisplay m_Display;
            EGLint m_Width, m_Height;
    };
}

