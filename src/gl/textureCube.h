
#pragma once

#include "texture.h"
#include "tools/skybox.h"
#include "glm/glm.hpp"

class TextureCube : public Texture {
public:
    TextureCube();
    virtual ~TextureCube();

    virtual bool    load(const std::string &_fileName, bool _vFlip = true);
    virtual bool    generate(SkyBox* _skybox, int _width = 512 );

    virtual void    bind();

    glm::vec3       SH[9];
};

