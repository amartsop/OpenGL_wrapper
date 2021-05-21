#include <object_handler.h>

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
    // // Generate primitive geometries container
    // std::vector<Geometry*> geometries;

    // //Resize number of primitive geometries
    // geometries.resize(2);

    // // Generate plane primitive geometry
    // Grid2D plane;
    // plane.initialize (10.0f, 10.0f, 2, 5);

    // // Generate 3D grid primitive geometry
    // Grid3D hash;
    // hash.initialize();

    // // Assign plane to primitive geometries
    // geometries.at(0) = &plane;
    // geometries.at(1) = &hash;

    // // Generate objects shader names container
    // std::string plane_shader_name = m_absolute_path + "/share/simpleShader";
    // std::string hash_shader_name = m_absolute_path + "/share/simpleShader";
    // std::vector<std::string> shader_names = {plane_shader_name, hash_shader_name};

    // // Generate objects texture names container
    // glm::vec3 plane_color = glm::vec3(0.82f, 0.8f, 0.9f);
    // glm::vec3 hash_color = glm::vec3(1.0f, 0.0f, 0.0f);
    // std::vector<glm::vec3> colors = {plane_color, hash_color};

    // // Positions
    // glm::vec3 plane_pos = glm::vec3(0.0f, 0.0f, -0.1f);
    // glm::vec3 hash_pos = glm::vec3(0.4f, 0.0f, 0.0f);
    // std::vector<glm::vec3> positions = {plane_pos, hash_pos};

    // // Orientations
    // glm::vec3 plane_euler = glm::vec3(0.0f, 0.0f, 0.0f);
    // glm::vec3 hash_euler = glm::vec3(0.0f, 0.0f, 0.0f);
    // std::vector<glm::vec3> euler = {plane_euler, hash_euler};

    // // Wireframe flags
    // std::vector<bool> wireframe = {false, false};

    // // Resize primitive objects container
    // m_primitive_objects.resize(geometries.size());

    // // Initalize primitive objects
    // for (size_t i = 0; i < 1; i++)
    // {
    //     // Generate primitive object properties
    //     Object::PrimitiveObjProperties pop;
    //     pop.id = i;
    //     pop.pos = positions.at(i);
    //     pop.euler = euler.at(i);
    //     pop.shader_filename = shader_names.at(i);
    //     pop.color = colors.at(i);

    //     pop.geometry = geometries.at(i);
    //     pop.draw_type = GL_DYNAMIC_DRAW;
    //     pop.wireframe = wireframe.at(i);
        
    //     // Assign properties to object
    //     m_primitive_objects.at(i).initialize(pop);
    // }
}

// Generate imported objects
void ObjectHandler::imported_objects_generator(void)
{
    // Generate objects shader names container
    std::string handle_shader_name = m_absolute_path + "/share/simpleShader";
    std::string needle_shader_name = m_absolute_path + "/share/simpleShader";
    std::string prostate_shader_name = m_absolute_path + "/share/simpleShader";
    std::string scene_shader_name = m_absolute_path + "/share/simpleShader";
    std::vector<std::string> shader_names = {handle_shader_name, needle_shader_name,
        prostate_shader_name, scene_shader_name};

    // Generate objects mesh names container
    std::string handle_mesh_name = m_absolute_path + "/objects/handle/handle.obj";
    std::string needle_mesh_name = m_absolute_path + "/objects/needle/needle.obj";
    std::string prostate_mesh_name = m_absolute_path + "/objects/prostate/prostate.obj";
    std::string scene_mesh_name = m_absolute_path + "/objects/scene/checkerboard.obj";
    std::vector<std::string> mesh_names = {handle_mesh_name, needle_mesh_name,
        prostate_mesh_name, scene_mesh_name};

    // Generate objects texture names container
    std::string handle_texture_name = m_absolute_path + "/objects/handle/handle.png";
    std::string needle_texture_name = m_absolute_path + "/objects/needle/needle.png";
    std::string prostate_texture_name = m_absolute_path + "/objects/prostate/prostate.png";
    std::string scene_texture_name = m_absolute_path + "/objects/scene/checkerboard.png";
    std::vector<std::string> texture_names = {handle_texture_name, needle_texture_name, 
        prostate_texture_name, scene_texture_name};

    // Generate objects positions container
    glm::vec3 handle_pos = glm::vec3(0.0f, 0.0f, 0.0f);
    glm::vec3 needle_pos = glm::vec3(7.65e-2f, 0.0f, -7.67e-3f);
    glm::vec3 prostate_pos = glm::vec3(0.5f, 0.0f, 0.0f);
    glm::vec3 scene_pos = glm::vec3(1.5f, 0.0f, 1.5f);
    std::vector<glm::vec3> positions = {handle_pos, needle_pos, prostate_pos,
        scene_pos};

    // Generate objects orientations container
    glm::vec3 handle_euler = glm::vec3(0.0f, 0.0f, 0.0f);
    glm::vec3 needle_euler = glm::vec3(0.0f, 0.0f, 0.0f);
    glm::vec3 prostate_euler = glm::vec3(0.0f, 0.0f, 0.0f);
    glm::vec3 scene_euler = glm::vec3(0.0f, 0.0f, 0.0f);
    std::vector<glm::vec3> euler_angles = {handle_euler, needle_euler, prostate_euler, 
        scene_euler};

    // Generate objects shiness container
    std::vector<float> shininess = {64.0f, 64.0f, 10.0f, 10.0f};

    // Draw type
    std::vector<GLenum> draw_types = {GL_DYNAMIC_DRAW, GL_DYNAMIC_DRAW, 
        GL_DYNAMIC_DRAW, GL_STATIC_DRAW};

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
        iop.draw_type = draw_types.at(i);

        // Assign properties to object
        m_imported_objects.at(i).initialize(iop);
    }
}