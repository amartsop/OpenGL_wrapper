#pragma once

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtx/string_cast.hpp>

#include <iostream>
#include <vector>

#include "filesystem.h"
#include "object.h"
#include "shader.h"
#include "geometries/geometry.h"
#include "geometries/grid2D.h"
#include "geometries/grid3D.h"

class ObjectHandler {

public:
    ObjectHandler(){};

    // Initialize 
    void initialize(void);

    // Update
    void update(double real_time);

private:
    /************************** Imported objects *******************/
    // Imported object container
    std::vector<Object> m_imported_objects;

    /************************** Primitive objects *******************/
    // Primitive object container
    std::vector<Object> m_primitive_objects;

private:
    // Generates the initial objects that will be rendered on the scene
    void objects_generator(void);

    // Generate primitive objects
    void primitive_objects_generator(void);

    // Generate imported objects
    void imported_objects_generator(void);

    // Filepath
    std::string m_absolute_path = FileSystem::get_absolute_path();
};