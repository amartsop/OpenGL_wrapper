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
    void draw();

    // Remove object
    void remove();

public:

    // Primitive object properties
    struct  PrimitiveObjProperties{
        // Identifier
        unsigned int id;

        // Object position
        glm::vec3 pos;

        // Object orientation
        glm::vec3 euler;

        // Object color
        glm::vec3 color;

        // Material shininess 
        float shininess = 64.0f;

        // Material shininess 
        glm::vec3 specular = glm::vec3(0.5f, 0.5f, 0.5f);

        // Wireframe flag 
        bool wireframe = false;

        // Shader filename
        std::string shader_filename;

        // Texture filename
        std::string texture_filename;

        // Geometry
        Geometry* geometry;

        // Draw type
        GLenum draw_type;
    };


    // Imported object properties
    struct ImportedObjProperties{

        // Identifier
        unsigned int id;

        // Object position
        glm::vec3 pos;

        // Object orientation
        glm::vec3 euler;

        // Object color
        glm::vec3 color=glm::vec3({0.0f, 0.0f, 0.0f});

        // Material shininess 
        float shininess = 64.0f;

        // Material shininess 
        glm::vec3 specular = glm::vec3(0.5f, 0.5f, 0.5f);

        // Wireframe flag 
        bool wireframe = false;

        // Shader filename
        std::string shader_filename;

        // Texture filename
        std::string texture_filename;

        // Geometry
        std::string mesh_filename;

        // Draw type
        GLenum draw_type;
    };

public:
    // Set object properties (basic geometry mesh)
    void initialize(const PrimitiveObjProperties& pop);

    // Set object properties (basic geometry mesh)
    void initialize(const ImportedObjProperties& pop);

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

    // Object texture
    Texture m_texture;

    // Object transform
    Transform m_transform;

    // Custom color flag
    bool m_color_flag = false;

    // Custom color
    glm::vec3 m_color;

    // Material shininess 
    float m_shininess;

    // Material shininess 
    glm::vec3 m_specular;

    // Wireframe flag
    bool m_wireframe_flag;
};

