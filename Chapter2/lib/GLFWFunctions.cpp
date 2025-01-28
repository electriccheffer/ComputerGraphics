#include "../include/GLFWFunctions.hpp"
#include <GLFW/glfw3.h>
#include <iostream>
#include <stdexcept>

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

void framebuffer_size_callback(GLFWwindow* win, int width, int height) {
    glViewport(0, 0, width, height);
}

	GLFWwindow* createAWindow(int width,int height,const char* title,GLFWmonitor* monitor,GLFWwindow* win){


	GLFWwindow* window = glfwCreateWindow(width,height, title, monitor, win);
    	if (!window) {
        	std::cerr << "Failed to create GLFW window" << std::endl;
        	glfwTerminate();
        	throw std::runtime_error("Failed to create a window.");
	}

	glfwMakeContextCurrent(window);
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	return window;
}

