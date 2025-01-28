#include <GLFW/glfw3.h>
#ifndef GLFWFUNCTIONS_HPP
#define GLFWFUNCTIONS_HPP
int init(); 
void framebuffer_size_callback(GLFWwindow* window, int width, int height); 
GLFWwindow* createAWindow(int width,int height,const char* title,GLFWmonitor* monitor,GLFWwindow* window);
#endif

