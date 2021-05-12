#include "../include/object.h"

void Object::initialize(unsigned int id, const glm::vec3& pos,
    const glm::vec3& euler, const std::string& shader_filename,
    const std::string& mesh_filename, const std::string& texture_filename, 
    GLenum draw_type)
{
    // Assign object's id 
    m_id = id;

    // Assign object's initial position and orientation
    m_pos = pos; m_euler = euler;

    // Save shader to member variable
    m_shader.initialize(shader_filename);

    // Generate object's mesh
    m_mesh.assign(mesh_filename, draw_type);

    // Generate object's texture
    m_texture.assign(texture_filename);
}


// Set object properties (basic geometry mesh)
void Object::initialize(unsigned int id, const glm::vec3& pos,
    const glm::vec3& euler, const std::string& shader_filename,
    const std::string& texture_filename, Geometry* geometry,
    GLenum draw_type)
{
    // Assign object's id 
    m_id = id;

    // Assign object's initial position and orientation
    m_pos = pos; m_euler = euler;

    // Save shader to member variable
    m_shader.initialize(shader_filename);

    // Generate object's mesh
    m_mesh.assign(geometry, draw_type);

    // Generate object's texture
    m_texture.assign(texture_filename);
}


void Object::draw(bool wireframe)
{
    // Handle transform 
    m_transform.setPos(m_pos);
    m_transform.setRot(m_euler);

    // Draw handle
    glm::mat4 model = m_transform.getModel();
    m_shader.set_mat4("model", model);

    // Bind texture 
    m_texture.bind(0);

    m_shader.set_bool("monochrome", 0);

    // Check for wireframe 
    GLenum draw_type;
    wireframe ?  (draw_type = GL_LINE) : (draw_type = GL_FILL);
    glPolygonMode(GL_FRONT_AND_BACK, draw_type);

    // Draw mesh
    m_mesh.draw();
}


void Object::draw(int color)
{
    // Handle transform 
    m_transform.setPos(m_pos);
    m_transform.setRot(m_euler);

    // Draw handle
    glm::mat4 model = m_transform.getModel();
    m_shader.set_mat4("model", model);

    // Bind texture 
    m_texture.bind(0);

    m_shader.set_bool("monochrome", 1);

    // Draw mesh
    m_mesh.draw();
}