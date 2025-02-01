#include <OpenGL/gl.h>
#include "../include/vec.h"

vec2::vec2(){

	this->x = 0.0;   
	this->y = 0.0;
}

vec2::vec2(GLfloat x, GLfloat y){
	
	this->x = x; 
	this->y = y; 
	
}

vec2::vec2(const vec2& newVector){

	this->x = newVector.x; 
	this->y = newVector.y; 

}
