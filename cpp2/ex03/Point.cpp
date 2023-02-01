/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/31/23, 22:26                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point &p) {
	*this = p;
}

Point&	Point::operator=(const Point &p) {
//	_x = p.get_x();
//	_y = p.get_y();
	return *this;
}

Point::~Point() {}

float	Point::get_x() const {
	return _x.toFloat();
}

float	Point::get_y() const {
	return _y.toFloat();
}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

