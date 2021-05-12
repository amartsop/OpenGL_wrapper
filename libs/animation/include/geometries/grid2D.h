#pragma once

#include "geometry.h"


class Grid2D : public Geometry
{

public:
    Grid2D():Geometry() { }

    void initialize(float width, float height, int width_segments,
        int height_segments);
};