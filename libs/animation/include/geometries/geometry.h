#pragma once

#include <iostream>
#include <vector>

#include <glad/glad.h>

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtx/string_cast.hpp>
#include <GLFW/glfw3.h>


class Geometry
{

public:
    Geometry(){};

    virtual void initialize(void) {};

    // Getters
    std::vector<glm::vec3> get_vertex_positions(void) {return m_vertex_pos;}
    std::vector<glm::vec2> get_texture_coordinates(void) {return m_texture_coords;}
    std::vector<glm::vec3> get_normal_coordinates(void) {return m_normal_coords;}
    std::vector<int> get_indices(void) {return m_indices; }

    unsigned int get_vertices_number(void) {return m_vertex_pos.size();}
    unsigned int get_indices_number(void) {return m_indices.size();}


protected:
    // Geometry position
    std::vector<glm::vec3> m_vertex_pos;
    
    // Geometry texture coordinates
    std::vector<glm::vec2> m_texture_coords;

    // Geometry normal coordinates
    std::vector<glm::vec3>  m_normal_coords;

    // Geometry indices
    std::vector<int> m_indices;
};