#include <cstdlib>
#include <iostream>
#include <armadillo>
#include <ostream>
#include <vector>
#include <chrono>
#include <thread>

#include <scene.h>

glm::vec3 calc_handle_position(double time);
glm::vec3 calc_handle_orientation(double time);


int main(int argc, char *argv[])
{
    // Animation
    Scene animation;
    int animation_frequency = 30; // (Hz) Frames per sec
    double animation_period_sec = 1 / animation_frequency; // (s)
    uint animation_period =  1000 * animation_period_sec; // (ms)

    // Clock
    auto previous_time = std::chrono::steady_clock::now();
    double real_time = 0.0;

    /*********************** Render Loop ***********************/
    for(;;)
    {
        // Break animation
        if(animation.is_done()) { break; }

        // Time tracking
        auto current_time = std::chrono::steady_clock::now();

        // Elapsed time
        std::chrono::duration<double> elapsed_time = current_time - previous_time;

        // Real time 
        real_time += elapsed_time.count();

        if(elapsed_time.count() >= animation_period_sec) {

            // Render animation 
            animation.update(real_time, elapsed_time.count());

            // Update time 
            previous_time = current_time;
        }
    }
}


glm::vec3 calc_handle_position(double time)
{
    double fs = 0.1;
    double x = 0.0;
    double y = 0.0;
    double z = 0.1 * sin(2 * M_PI * fs * time);
   return glm::vec3((float)x, (float)y, (float)z);
}


glm::vec3 calc_handle_orientation(double time)
{
    double fs = 0.1;
    double x = 0.0;
    double y = 1.0 * sin(2 * M_PI * fs * time);
    double z = 0.0;
   return glm::vec3((float)x, (float)y, (float)z);
}