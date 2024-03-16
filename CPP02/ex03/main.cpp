#include <iostream>
#include "Point.hpp"

int main(void)
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(0, 10);

	Point	p(9.5, 0.01);
	std::cout << "The triangle point a:" << std::endl;
	a.printPoint();
	std::cout << "The triangle point b:" << std::endl;
	b.printPoint();
	std::cout << "The triangle point c:" << std::endl;
	c.printPoint();
	std::cout << "Contains the point p:" << std::endl;
	std::cout << "Point p:" << std::endl;
	p.printPoint();
	if (bsp(a, b, c, p) == true)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return (0);
}
