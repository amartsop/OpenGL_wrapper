#include "grid2D.h"

void Grid2D::initialize(float width, float height, int width_segments,
    int height_segments)
{
    // Height per segment
    float hps = height / height_segments;

    // Width per segment
    float wps = width / width_segments;

    float x_coord, y_coord;

    // Create vertex points
    for (int i = 0; i < height_segments + 1; i++)
    {
        y_coord = i * hps;

        for (int j = 0; j < width_segments + 1; j++)
        {
            x_coord = j * wps;

            m_vertex_pos.push_back(glm::vec3(x_coord - (width/2.0),
                y_coord - (height/2.0), 0.0f));
            m_normal_coords.push_back(glm::vec3(0.0f, 0.0f, 1.0f));
        }
    }

    // Create textrures mapping
    m_texture_coords.resize(m_vertex_pos.size());

    // Loop through segments
    for (int i = 0; i < height_segments; i++)
    {
        for (int j = 0; j < width_segments; j++)
        {
            // Lower indices 
            int i0 = i * (width_segments + 1) + j;
            int i1 = i * (width_segments + 1) + (j + 1);

            // Upper indices
            int i2 = (i+1) * (width_segments + 1) + j;
            int i3 = (i+1) * (width_segments + 1) + (j + 1);

            // Assign indices
            m_indices.push_back(i0); m_indices.push_back(i1); m_indices.push_back(i2);
            m_indices.push_back(i1); m_indices.push_back(i2); m_indices.push_back(i3);
        }
    }
}