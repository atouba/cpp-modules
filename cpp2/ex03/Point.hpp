/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/31/23, 22:26                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef C____POINT_HPP
#define C____POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	const Fixed	_x;
	const Fixed	_y;

public:
	Point();
	Point(const Point& p);
	Point&	operator=(const Point& p);
	~Point();

//	Fixed&	get_x() const;
//	Fixed&	get_y() const;

	Point(const float x, const float y);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //C____POINT_HPP
