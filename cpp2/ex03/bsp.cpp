/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/31/23, 22:26                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Point.hpp"

const int	abs(const int n) {
	if (n > 0)
		return n;
	return -n;
}

float	triangle_area(Point const i, Point const j, Point k) {
	const int	ij_x = abs(i.get_x() - j.get_x());
	const int	ij_y = abs(i.get_y() - j.get_y());
	const int	ik_x = abs(i.get_x() - k.get_x());
	const int	ik_y = abs(i.get_y() - k.get_y());

	return (float)(ij_x * ik_y - ij_y * ik_x) / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float	area, area1, area2, area3;

	area = triangle_area(a, b, c);
	area1 = triangle_area(a, b, point);
	area2 = triangle_area(a, c, point);
	area3 = triangle_area(b, c, point);

	return (area == area1 + area2 + area3);
}