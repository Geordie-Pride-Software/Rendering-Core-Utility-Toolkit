#pragma once

#include "RendererAPI.h"

#include "Camera.h"
#include "TileMap.h"

namespace Renderer
{
    class RENDERER_API Raycaster
    {
        private:
            float* depthBuffer;

            int screenWidth;

        public:
            Raycaster();

            ~Raycaster();

            void Initialize(
                int width
            );

            void Render(
                const TileMap& map,
                const Camera& camera,
                int screenHeight
            );

            float GetDepth(
                int x
            ) const;
    };
}