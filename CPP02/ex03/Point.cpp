#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(float x, float y) : x(x), y(y)
{
}

Point::~Point()
{
}

Point::Point(const Point& p)
{
	if (this != &p)
		*this = p;
}

Point&	Point::operator=(const Point& p)
{
	// if (this != &p)
	// {
	// 	this->x = p.x;
	// 	this->y = p.y;
	// }
	return (*this);
}

float	Point::getX(void) const
{
	return (this->x.toFloat());
}

float	Point::getY(void) const
{
	return (this->y.toFloat());
}
