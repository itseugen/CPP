#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	bax(b.getX() - a.getX());
	Fixed	bay(b.getY() - a.getY());
	Fixed	cax(c.getX() - a.getX());
	Fixed	cay(c.getY() - a.getY());

	Fixed	crossPro((bax.toFloat() * cay.toFloat()) - (cax.toFloat() * bay.toFloat()));
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

	Fixed	crossPBA((pax.toFloat() * pby.toFloat()) - (pbx.toFloat() * pay.toFloat()));
	Fixed	crossPBC((pbx.toFloat() * pcy.toFloat()) - (pcx.toFloat() * pby.toFloat()));
	Fixed	crossPAC((pcx.toFloat() * pay.toFloat()) - (pax.toFloat() * pcy.toFloat()));

	if ((crossPBA.toFloat() * sign) > 0 && (crossPBC.toFloat() * sign) > 0 && (crossPAC.toFloat() * sign) > 0)
		return (true);
	else
		return (false);
}
