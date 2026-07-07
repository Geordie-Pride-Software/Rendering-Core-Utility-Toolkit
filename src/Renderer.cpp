#include "Renderer.h"

#include <GL/freeglut.h>


namespace Renderer
{

    //**************************************************
    // Initialize renderer
    //**************************************************

    bool Renderer::Initialize()
    {

        glEnable(GL_BLEND);

        glBlendFunc(
            GL_SRC_ALPHA,
            GL_ONE_MINUS_SRC_ALPHA);

        glEnable(GL_TEXTURE_2D);
        return true;
    }

    //**************************************************
    // Shutdown renderer
    //**************************************************

    void Renderer::Shutdown()
    {

    }

    //**************************************************
    // Begin frame
    //**************************************************

    void Renderer::BeginFrame()
    {
        glClear(
            GL_COLOR_BUFFER_BIT |
            GL_DEPTH_BUFFER_BIT
        );
    }

    //**************************************************
    // End frame
    //**************************************************

    void Renderer::EndFrame()
    {

    }

}