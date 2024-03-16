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

Point::Point(const Point& p) : x(p.x), y(p.y)
{
	if (this != &p)
		*this = p;
}

Point& Point::operator=(const Point& p)
{
	(void)p;
	return *this;
}

float	Point::getX(void) const
{
	return (this->x.toFloat());
}

float	Point::getY(void) const
{
	return (this->y.toFloat());
}

void	Point::printPoint(void)
{
	std::cout << "x: " << getX() << "; y: " << getY() << std::endl;
}
