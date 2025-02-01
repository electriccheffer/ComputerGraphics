#ifndef VEC_H__
#define VEC_H__
#include <OpenGL/gl.h>
struct vec2{

	GLfloat x; 
	GLfloat y; 
	vec2();
	vec2(GLfloat x, GLfloat y);  	
	vec2(const vec2& newVector);
};
#endif 
