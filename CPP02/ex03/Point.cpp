#include "Point.hpp"

void	Point::setPoint(float i){
	this->x.setRawBits(1);
}

void	Point::getPoint(){
	this->x.getRawBits();
	this->y.getRawBits();
}

Point::Point()
{
}

Point::~Point()
{
}