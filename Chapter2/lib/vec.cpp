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

bool vec2::operator==(const vec2& otherVector)const{
	
	if(this->x != otherVector.x){
		return false; 
	}
	if(this->y != otherVector.y){
		return false; 
	}
	return true; 

}


bool vec2::operator!=(const vec2& otherVector)const{

	if(*this == otherVector){
	
		return false; 
	}
	return true; 

	
}


vec2 vec2::operator+(const vec2& otherVector)const{

	GLfloat xResult = this->x + otherVector.x; 
	GLfloat yResult = this->y + otherVector.y; 
	vec2 additionResult(xResult,yResult); 
	return additionResult; 
}

vec2 vec2::operator-()const{

	GLfloat newX = -this->x;
	GLfloat newY = -this->y; 
	return vec2(newX,newY);

}

vec2 vec2::operator-(const vec2& otherVector)const{
	
	vec2 negatedOtherVector = -otherVector;	
	vec2 subtractionResult = *this + negatedOtherVector; 
	return subtractionResult; 
	
}

vec2 vec2::operator*(const GLfloat scalar)const{

	GLfloat scaledX = this->x * scalar; 
	GLfloat scaledY = this->y * scalar; 
	vec2 scalarResult(scaledX,scaledY); 
	return scalarResult; 
}
