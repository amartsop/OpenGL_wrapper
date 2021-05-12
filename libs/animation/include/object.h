#pragma once 
#include <iostream>

#include <glad/glad.h>

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtx/string_cast.hpp>

#include "shader.h"
#include "mesh.h"
#include "texture.h"
#include "transform.h"
#include "geometries/geometry.h"

class Object
{

public:
    Object() {};

    // Draw object 
    void draw(bool wireframe=false);

    // Draw object 
    void draw(int color);

    // Remove object
    void remove();
    
public:

    // Set object properties (external mesh import)
    void initialize(unsigned int id, const glm::vec3& pos,
        const glm::vec3& euler, const std::string& shader_filename,
        const std::string& mesh_filename, const std::string& texture_filename, 
        GLenum draw_type=GL_STATIC_DRAW);

    // Set object properties (basic geometry mesh)
    void initialize(unsigned int id, const glm::vec3& pos,
        const glm::vec3& euler, const std::string& shader_filename,
        const std::string& texture_filename, Geometry* geometry,
        GLenum draw_type=GL_STATIC_DRAW);

private:
    // Object ID
    unsigned int m_id = 0;

    // Object position
    glm::vec3 m_pos = glm::vec3(0.0f, 0.0f, 0.0f);
    glm::vec3 m_euler = glm::vec3(0.0f, 0.0f, 0.0f);

    // Object shader 
    Shader m_shader;

    // Object mesh
    Mesh m_mesh;

    // Objec texture
    Texture m_texture;

    // Object transform
    Transform m_transform;
};

