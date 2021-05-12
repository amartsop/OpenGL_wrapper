#include "geometry.h"

// void Geometry::initialize(void)
// {
//     float height = 10.0f;
//     float width = 10.0f;

//     int height_segements = 1;
//     int width_segements = 1;

//     // Height per segment
//     float hps = height / height_segements;

//     // Width per segment
//     float wps = width / width_segements;

//     float x_coord, y_coord;

//     // Create vertex points
//     for (int i = 0; i < height_segements + 1; i++)
//     {
//         y_coord = i * hps;

//         for (int j = 0; j < width_segements + 1; j++)
//         {
//             x_coord = j * wps;

//             m_vertex_pos.push_back(glm::vec3(x_coord - (width/2.0),
//                 y_coord - (height/2.0), 0.0f));
//             m_normal_coords.push_back(glm::vec3(0.0f, 0.0f, 1.0f));

//         }
//     }

//     // Create textrures mapping
//     m_texture_coords.resize(m_vertex_pos.size());


//     // Loop through segments
//     for (int i = 0; i < height_segements; i++)
//     {
//         for (int j = 0; j < width_segements; j++)
//         {
//             // Lower indices 
//             int i0 = i * (width_segements + 1) + j;
//             int i1 = i * (width_segements + 1) + (j + 1);

//             // Upper indices
//             int i2 = (i+1) * (width_segements + 1) + j;
//             int i3 = (i+1) * (width_segements + 1) + (j + 1);

//             // Assign indices
//             m_indices.push_back(i0); m_indices.push_back(i1); m_indices.push_back(i2);
//             m_indices.push_back(i1); m_indices.push_back(i2); m_indices.push_back(i3);
//         }
//     }
// }





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