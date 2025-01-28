#include <GLFW/glfw3.h>
#include <iostream>
#include "../include/GLFWFunctions.hpp"
#include <stdexcept>

int main() {
	
	// Initialize GLFW
	if (init() != 0) {
	
		return -1;
	
	}
	try{	
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
	catch(const std::runtime_error& e){
		std::cout << "Error: " << e.what() << std::endl; 	
		return -1; 
	} 
}
