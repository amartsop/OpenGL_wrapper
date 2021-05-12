#include "../include/object.h"

// Set object properties (basic geometry mesh)
void Object::initialize(const PrimitiveObjProperties& pop)
{
    // Assign object's id 
    m_id = pop.id;

    // Assign object's initial position and orientation
    m_pos = pop.pos; m_euler = pop.euler;

    // Save shader to member variable
    m_shader.initialize(pop.shader_filename);

    // Check for textrue
    if (pop.texture_filename.empty())
    {
        m_color_flag = true;
        m_color = pop.color;
    }
    else 
    {
        // Generate object's texture
        m_texture.assign(pop.texture_filename);
    }

    // Assign shiness and specular
    m_shininess = pop.shininess;
    m_specular = pop.specular;

    // Generate object's mesh
    m_mesh.assign(pop.geometry, pop.draw_type);
}


// Set object properties (basic geometry mesh)
void Object::initialize(const ImportedObjProperties& iop)
{
    // Assign object's id 
    m_id = iop.id;

    // Assign object's initial position and orientation
    m_pos = iop.pos; m_euler = iop.euler;

    // Save shader to member variable
    m_shader.initialize(iop.shader_filename);

    // Check for textrue
    if (iop.texture_filename.empty())
    {
        m_color_flag = true;
        m_color = iop.color;
    }
    else 
    {
        // Generate object's texture
        m_texture.assign(iop.texture_filename);
    }

    // Assign shiness and specular
    m_shininess = iop.shininess;
    m_specular = iop.specular;

    // Generate object's mesh
    m_mesh.assign(iop.mesh_filename, iop.draw_type);
}


void Object::draw(bool wireframe)
{
    // Handle transform 
    m_transform.setPos(m_pos);
    m_transform.setRot(m_euler);

    // Draw handle
    glm::mat4 model = m_transform.getModel();
    m_shader.set_mat4("model", model);

    // Bind texture and set color
    m_texture.bind(0);
    m_shader.set_bool("monochrome", m_color_flag);
    m_shader.set_vec3("custom_color", m_color);

    // Set material proporties
    m_shader.set_vec3("material.specular", m_specular);
    m_shader.set_float("material.shininess", m_shininess);

    // Check for wireframe 
    GLenum draw_type;
    wireframe ?  (draw_type = GL_LINE) : (draw_type = GL_FILL);
    glPolygonMode(GL_FRONT_AND_BACK, draw_type);

    // Draw mesh
    m_mesh.draw();
}