#include "Point.hpp"

Point::Point(): _x(0), _y(0){
}

Point::Point(float x, float y): _x(x), _y(y){
}

Point::Point(const Point &other):_x(other.getPointX()), _y(other.getPointY()){
}

Point::~Point()
{
}

Point& Point::operator=(const Point &other){
	(void)other;
	return *this;
}

Fixed Point::getPointX() const{
	return this->_x;
}

Fixed Point::getPointY() const{
	return this->_y;
}

std::ostream	&operator<<(std::ostream &ostream, Point const &point)
{
	ostream << "x = " << point.getPointX() << ", y = " << point.getPointY();
	return (ostream);
}