#include "../include/object_handler.h"

void ObjectHandler::initialize(void)
{
    // Generate primitive objects
    m_primitive_objects.resize(0);
    primitive_objects_generator();

    // Generate imported objects
    m_imported_objects.resize(0);
    imported_objects_generator();
}


// Update all scene objects
void ObjectHandler::update(double real_time)
{
    // Update the number of objects to be rendered (change m_obj_num)

    // Loop through all primitive objects 
    for (size_t i = 0; i < m_primitive_objects.size(); i++)
    {
        // Update objects' trajectories

        // Draw objects
        m_primitive_objects.at(i).draw();
    }

    // Loop through all imported objects 
    for (size_t i = 0; i < m_imported_objects.size(); i++)
    {
        // Update objects' trajectories

        // Draw objects
        m_imported_objects.at(i).draw();
    }
}

// Generate primitive objects
void ObjectHandler::primitive_objects_generator(void)
{
    // Generate geometry
    Geometry *geometry;

    // Generate plane primitive geometry
    Grid2D plane;
    plane.initialize (10.0f, 10.0f, 2, 5);

    // Assign plane to primitive geometries
    geometry = &plane;

    // Generate objects shader names container
    std::string plane_shader_name = m_absolute_path + "/share/simpleShader";
    std::vector<std::string> shader_names = {plane_shader_name};

    // Generate objects texture names container
    std::vector<glm::vec3> plane_color = {glm::vec3(0.82f, 0.9f, 0.97f)};

    // Plane position
    std::vector<glm::vec3> plane_pos = {glm::vec3(0.0f, 0.0f, -0.1f)};

    // Plane euler
    std::vector<glm::vec3> plane_eul = {glm::vec3(0.0f, 0.0f, 0.0f)};

    // Resize primitive objects container
    m_primitive_objects.resize(1);

    // Initalize primitive objects
    for (size_t i = 0; i < m_primitive_objects.size(); i++)
    {
        // Generate primitive object properties
        Object::PrimitiveObjProperties pop;
        pop.id = i;
        pop.pos = plane_pos.at(i);
        pop.euler = plane_eul.at(i);
        pop.shader_filename = shader_names.at(i);
        pop.color = plane_color.at(i);
        pop.geometry = geometry;
        pop.draw_type = GL_DYNAMIC_DRAW;
        
        // Assign properties to object
        m_primitive_objects.at(i).initialize(pop);
    }
}

// Generate imported objects
void ObjectHandler::imported_objects_generator(void)
{
    // Generate objects shader names container
    std::string handle_shader_name = m_absolute_path + "/share/simpleShader";
    std::string needle_shader_name = m_absolute_path + "/share/simpleShader";
    std::vector<std::string> shader_names = {handle_shader_name, needle_shader_name};

    // Generate objects mesh names container
    std::string handle_mesh_name = m_absolute_path + "/objects/handle/handle.obj";
    std::string needle_mesh_name = m_absolute_path + "/objects/needle/needle.obj";
    std::vector<std::string> mesh_names = {handle_mesh_name, needle_mesh_name};

    // Generate objects texture names container
    std::string handle_texture_name = m_absolute_path + "/objects/handle/handle.png";
    std::string needle_texture_name = m_absolute_path + "/objects/needle/needle.png";
    std::vector<std::string> texture_names = {handle_texture_name, needle_texture_name};

    // Generate objects positions container
    glm::vec3 handle_pos = glm::vec3(0.0f, 0.0f, 0.0f);
    glm::vec3 needle_pos = glm::vec3(7.65e-2f, 0.0f, -7.67e-3f);
    std::vector<glm::vec3> positions = {handle_pos, needle_pos};

    // Generate objects orientations container
    glm::vec3 handle_euler = glm::vec3(0.0f, 0.0f, 0.0f);
    glm::vec3 needle_euler = glm::vec3(0.0f, 0.0f, 0.0f);
    std::vector<glm::vec3> euler_angles = {handle_euler, needle_euler};

    // Generate objects shiness container
    std::vector<float> shininess = {64.0f, 10.0f};

    // Resize imported objects container
    m_imported_objects.resize(positions.size());

    // Initalize imported objects
    for (size_t i = 0; i < m_imported_objects.size(); i++)
    {
        Object::ImportedObjProperties iop; 
        iop.id = i;
        iop.pos = positions.at(i);
        iop.euler = euler_angles.at(i);
        iop.shader_filename = shader_names.at(i);
        iop.mesh_filename = mesh_names.at(i);
        iop.texture_filename = texture_names.at(i);
        iop.shininess = shininess.at(i);
        iop.draw_type = GL_DYNAMIC_DRAW;

        // Assign properties to object
        m_imported_objects.at(i).initialize(iop);
    }
}