#include "../scene.h"

Scene::Scene()
{
    /******************* Set Callbacks *******************/
    // Set cursor callback
    m_callback_handler.set_cursor_coords((float)m_display.get_window_width() / 2.0f, 
        (float)m_display.get_window_height() / 2.0f);

    // Set camera callback inputs
    m_callback_handler.set_camera(&m_camera);

    // Initialize shaders
    m_scene_shader.initialize(m_scene_shader_name);

    // Initialize object handler
    m_object_handler.initialize();
}

void Scene::update(double real_time, double delta_time)
{
    /**************** Display ****************/
    // Clear display background
    m_display.clear(background_color[0], background_color[1], background_color[2]);

    /**************** Camera ****************/
    // Update camera 
    m_camera.update(delta_time);

    // Bind shader 
    m_scene_shader.bind();

    // Update setup
    update_setup();

    // Update geometries
    m_object_handler.update(real_time);

    // Poll events
    glfwPollEvents();

    // Update display
    m_display.update();
}


// Update lighting and camera setup
void Scene::update_setup(void)
{
    // Camera and light position
    m_scene_shader.set_vec3("viewPos", m_camera.get_camera_position());
    m_scene_shader.set_vec3("light.position", m_lightPos);

    // Light properties
    m_scene_shader.set_vec3("light.ambient", 0.2f, 0.2f, 0.2f); 
    m_scene_shader.set_vec3("light.diffuse", 0.5f, 0.5f, 0.5f);
    m_scene_shader.set_vec3("light.specular", 1.0f, 1.0f, 1.0f);

    // View and projection
    m_scene_shader.set_mat4("projection", m_camera.get_projection());
    m_scene_shader.set_mat4("view", m_camera.get_view());
}