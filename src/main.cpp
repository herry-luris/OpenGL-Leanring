#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"

void glfwErrorCallback(int error, const char* description) {
    std::cout << "GLFW Error (" << error << "): " << description << std::endl;
}

int main()
{
    glfwSetErrorCallback(glfwErrorCallback);
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif



    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL", NULL, NULL);
    if (!window) {
        std::cout << "Failed to create window";
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);


    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }


    glfwTerminate();
    return 0;
}