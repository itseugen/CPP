#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	bax(b.getX() - a.getX());
	Fixed	bay(b.getY() - a.getY());
	Fixed	cax(c.getX() - a.getX());
	Fixed	cay(c.getY() - a.getY());

	Fixed	crossPro((bax * cay) - (cax * bay));
	int sign;

	if (crossPro.toInt() >= 0)
		sign = 1;
	else
		sign = -1;
	Fixed	pax(point.getX() - a.getX());
	Fixed	pay(point.getY() - a.getY());
	Fixed	pbx(point.getX() - b.getX());
	Fixed	pby(point.getY() - b.getY());
	Fixed	pcx(point.getX() - c.getX());
	Fixed	pcy(point.getY() - c.getY());

	Fixed	crossPBA((pax * pby) - (pbx * pay));
	Fixed	crossPBC((pbx * pcy) - (pcx * pby));
	Fixed	crossPAC((pcx * pay) - (pax * pcy));

	if ((crossPBA * sign) > 0 && (crossPBC* sign) > 0 && (crossPAC * sign) > 0)
		return (true);
	else
		return (false);
}
