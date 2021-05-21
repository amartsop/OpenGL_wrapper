#include "geometry.h"

// void Geometry::initialize(void)
// {
//     float length = 0.5f;
//     float width = 0.001f;

//     // Define points
//     m_vertex_pos.push_back(glm::vec3(0.0f, -width/2.0, 0.0f));
//     m_vertex_pos.push_back(glm::vec3(length, -width/2.0, 0.0f));
//     m_vertex_pos.push_back(glm::vec3(length, width/2.0, 0.0f));
//     m_vertex_pos.push_back(glm::vec3(0.0f, width/2.0, 0.0f));

//     // Resize

//     for (size_t i = 0; i < m_vertex_pos.size(); i++)
//     {
//         // Create textrures mapping
//         m_normal_coords.push_back(glm::vec3(0.0f, 0.0f, 1.0f));
//     }

//     // Create textrures mapping
//     m_texture_coords.resize(m_vertex_pos.size());
        
//     // Generate indices
//     m_indices = {0, 1, 2, 0, 2, 3};
// }