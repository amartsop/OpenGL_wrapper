#include "grid3D.h"

void Grid3D::initialize(void)
{
    float wps = 0.1f;
    float hps = 0.1f;
    float dps = 0.1f;

    glm::vec3 p0 = glm::vec3(0.0f, 0.0f, 0.0f);
    glm::vec3 p1 = glm::vec3(0.0f, wps, 0.0f);
    glm::vec3 p2 = glm::vec3(0.0f, wps, hps);
    glm::vec3 p3 = glm::vec3(0.0f, 0.0f, hps);
    glm::vec3 p4 = glm::vec3(dps, wps, 0.0f);
    glm::vec3 p5 = glm::vec3(dps, wps, hps);
    glm::vec3 p6 = glm::vec3(dps, 0.0f, hps);
    glm::vec3 p7 = glm::vec3(dps, 0.0f, 0.0);

    m_vertex_pos.push_back(p0); m_vertex_pos.push_back(p1);
    m_vertex_pos.push_back(p2); m_vertex_pos.push_back(p3);
    m_vertex_pos.push_back(p4); m_vertex_pos.push_back(p5);
    m_vertex_pos.push_back(p6); m_vertex_pos.push_back(p7);


    m_normal_coords.resize(8);

    // Create textrures mapping
    m_texture_coords.resize(m_vertex_pos.size());
        
    // Generate indices
    m_indices = {0, 1, 3, 1, 2, 3, 4, 1, 5, 1, 2, 5, 7, 4, 6, 4, 5, 6, 0, 7, 3, 
        7, 6, 3, 6, 5, 3, 5, 2, 3, 0, 1, 7, 1, 4, 7};
}