#include <GLFW/glfw3.h>
#include <iostream>
#include "../include/GLFWFunctions.hpp"

int main() {
	
	// Initialize GLFW
	if (init() != 0) {
	
		return -1;
	
	}
	GLFWwindow* window = createAWindow(800, 600, "OpenGL Test", nullptr, nullptr);
    
	// Render loop
	while (!glfwWindowShouldClose(window)) {
        	// Clear the screen
        	glClear(GL_COLOR_BUFFER_BIT);

        	// Swap buffers and poll events
        	glfwSwapBuffers(window);
        	glfwPollEvents();
    	}

    	glfwTerminate();
    	return 0;
}
