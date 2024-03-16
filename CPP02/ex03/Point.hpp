#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point
{
public:
	Point();
	Point(float x, float y);
	Point(const Point& p);
	Point& operator=(const Point &p);
	~Point();
	float	getX(void) const;
	float	getY(void) const;
	void	printPoint(void);
private:
	const Fixed	x;
	const Fixed	y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif /*POINT_HPP*/