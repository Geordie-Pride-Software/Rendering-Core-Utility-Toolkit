#pragma once

#include "RendererAPI.h"
#include "Camera.h"
#include "Raycaster.h"
#include "Sprite.h"
#include "Texture.h"
#include "TileMap.h"


namespace Renderer
{
    //**************************************************
    // Renderer manager
    //
    // Controls renderer initialization.
    //**************************************************

    class RENDERER_API Renderer
    {

        public:

            static bool Initialize();


            static void Shutdown();



            static void BeginFrame();


            static void EndFrame();

    };

}