#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Fixed	getPointX() const;
	Fixed	getPointY() const;

	Point();
	Point(float x, float y);
	Point(const Point &other);
	~Point();
	Point&	operator=(const Point &other);
	bool	operator>=(const Point &other) const;
};

std::ostream	&operator<<(std::ostream &ostream, Point const &point);

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif