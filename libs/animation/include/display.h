#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>


class Display
{
    public:

        Display(const char* title, int width=1920, int height=1080);

        void clear(float r=0.0f, float g=0.0f, float b=0.0f, float a=1.0f) const;

        bool is_closed() const;

        void update(void); 


        // Getters
        GLFWwindow* get_window_handle(void) const { return m_window; }

        int get_window_width() const { return m_width; }
        int get_window_height() const { return m_height; }

        // Setters 
        void set_status(const bool& close) { m_is_closed = close; }

        virtual ~Display();

    private:

        // Window handle
        GLFWwindow* m_window;

        // // Context handle
        // SDL_GLContext m_glContext;

        // Window state
        bool m_is_closed;

        // Window settings
        int m_width, m_height;

        /****************** Callback functions ********************************/
        // Change window size callback
        static void frame_buffer_size_callback(GLFWwindow* window, int width,
            int height);
};
