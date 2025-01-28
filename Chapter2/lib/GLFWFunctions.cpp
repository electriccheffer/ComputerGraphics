#include "../include/GLFWFunctions.hpp"
#include <GLFW/glfw3.h>
#include <iostream>

int init(){

	if (!glfwInit()) {
	std::cerr << "Failed to initialize GLFW" << std::endl;
	return -1;
	}

    	// Set OpenGL version (MacOS requires 3.2 Core Profile or higher)
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	
	return 0; 
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}


