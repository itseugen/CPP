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

	if (crossPBA.toFloat() * sign)
}

// bool bsp(const Point a, const Point b, const Point c, const Point point) {
//     // Calculate vectors representing edges of the triangle
//     float vx0 = b.x - a.x;
//     float vy0 = b.y - a.y;
//     float vx1 = c.x - a.x;
//     float vy1 = c.y - a.y;

//     // Calculate the cross product of the vectors to determine the triangle's normal
//     float crossProduct = vx0 * vy1 - vx1 * vy0;

//     // Determine the sign of the cross product (positive or negative)
//     int sign = (crossProduct >= 0) ? 1 : -1;

//     // Calculate vectors from point to vertices of the triangle
//     float vx2 = point.x - a.x;
//     float vy2 = point.y - a.y;
//     float vx3 = point.x - b.x;
//     float vy3 = point.y - b.y;
//     float vx4 = point.x - c.x;
//     float vy4 = point.y - c.y;

//     // Calculate the cross products of these vectors
//     float crossProduct2 = vx2 * vy3 - vx3 * vy2;
//     float crossProduct3 = vx3 * vy4 - vx4 * vy3;
//     float crossProduct4 = vx4 * vy2 - vx2 * vy4;

//     // Check if the signs of the cross products match the sign of the triangle's normal
//     if (crossProduct2 * sign > 0 && crossProduct3 * sign > 0 && crossProduct4 * sign > 0) {
//         return true; // Point lies inside the triangle
//     } else {
//         return false; // Point does not lie inside the triangle
//     }
// }