#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(float x, float y);
	Point(const Point& p);
	Point& operator=(const Point &p);
	~Point();
private:
	const Fixed	x;
	const Fixed	y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif /*POINT_HPP*/