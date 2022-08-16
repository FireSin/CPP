#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed az = (a.getPointX() - point.getPointX()) * (b.getPointY() - a.getPointY()) - (b.getPointX() - a.getPointX()) * (a.getPointY() - point.getPointY());
	Fixed bz = (b.getPointX() - point.getPointX()) * (c.getPointY() - b.getPointY()) - (c.getPointX() - b.getPointX()) * (b.getPointY() - point.getPointY());
	Fixed cz = (c.getPointX() - point.getPointX()) * (a.getPointY() - c.getPointY()) - (a.getPointX() - c.getPointX()) * (c.getPointY() - point.getPointY());
	return (az < 0 && bz < 0 && cz < 0) || (az > 0 && bz > 0 && cz > 0);
}