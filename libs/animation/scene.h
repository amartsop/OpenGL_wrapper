#pragma once 

#include <iostream>
#include <fstream>

#include <vector>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <filesystem.h>
#include <display.h>
#include <callback_setter.h>
#include <callback_handler.h>
#include <mesh.h>
#include <shader.h>
#include <transform.h>
#include <texture.h>
#include <object_handler.h>


class Scene
{
public:
    Scene();

    // Check if animation is done
    bool is_done(void) { return m_display.is_closed(); }

    // Update scene
    void update(double real_time, double deltaTime);

private:
    // Object handler
    ObjectHandler m_object_handler;

    // Update lighting and camera setup
    void update_setup(void);

private:
    // Filepath
    std::string absolute_path = FileSystem::get_absolute_path();

    /******************* Setup display *****************/
    // Window properties
    const char* window_title = "Transperineal Prostate Biopsy";
    const float background_color[3] = {0.8588f, 0.8413f, 0.7921f}; // RGB

    // Display object
    Display m_display = Display(window_title);
        
    // Window handle
    GLFWwindow* m_window = m_display.get_window_handle();

    /******************* Setup Callback Functions *******************/
    CallbackSetter m_callback_set = CallbackSetter(m_window);
    CallbackHandler m_callback_handler = CallbackHandler(m_window);

    /*********************** Camera ***********************/
    // Camera constants
    const glm::vec3 camera_pos = glm::vec3(0.44f, 0.14f, 0.012f);
    const float camera_fov = 45.0f; const float z_near = 0.01f;
    const float z_far = 1000.0f;

    // Camera object
    Camera m_camera = Camera(m_window, camera_pos, camera_fov,
        m_display.get_window_width() / (float)m_display.get_window_height(),
        z_near, z_far);

    /*********************** Shader ***********************/
    // Shader constants
    const std::string m_scene_shader_name = absolute_path + "/share/simpleShader";

    // Shader object
    Shader m_scene_shader;

    // Initial light position
    glm::vec3 m_lightPos = glm::vec3(0.5f, 0.5f, 0.5f);
};