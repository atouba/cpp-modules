/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/31/23, 22:26                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Point.hpp"

const float	abs_n(const float n) {
	if (n > 0)
		return n;
	return -n;
}

float	triangle_area(const Point & i, const Point & j, const Point& k) {
	const float	ij_x = abs_n((float)i.get_x() - (float)j.get_x());
	const float	ij_y = abs_n(i.get_y() - j.get_y());
	const float	ik_x = abs_n(i.get_x() - k.get_x());
	const float	ik_y = abs_n(i.get_y() - k.get_y());

	return abs_n((float)(ij_x * ik_y - ij_y * ik_x));
}

bool bsp(const Point & a, const Point & b, const Point & c, const Point & point) {
	float	area, area1, area2, area3;

	area = triangle_area(a, b, c);
	area1 = triangle_area(a, b, point);
	area2 = triangle_area(a, c, point);
	area3 = triangle_area(b, c, point);

	if (area1 == 0 || area2 == 0 || area3 == 0)
		return false;
	return (area == area1 + area2 + area3);
}