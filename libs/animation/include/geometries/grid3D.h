#pragma once

#include "geometry.h"


class Grid3D : public Geometry
{

public:
    Grid3D():Geometry() { }

    void initialize(void);
};