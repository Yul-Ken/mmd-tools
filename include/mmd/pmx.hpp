#ifndef __MMD_PMX_ALL
#define __MMD_PMX_ALL

#include "common.hpp"
#include "pmx/header.hpp"
#include "pmx/mesh.hpp"
#include "pmx/texture.hpp"
#include "pmx/material.hpp"

namespace mmd {
    namespace pmx {

        struct MMDAPI Model {
            Header header;
            Mesh mesh;
            Texture textures;
            std::vector<Material> materials;

            void load(Fs *fs);
        };

    } /* pmx */
} /* mmd */

#endif