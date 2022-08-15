#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	void	setPoint(float i);
	void	getPoint();
	Point();
	~Point();
};

#endif