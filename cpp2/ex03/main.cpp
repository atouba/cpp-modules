// #include <iostream>
//#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a(1, 1);
	Point b(2, 1.5);
	Point c(1, 3);
	Point	x(66, 2);

	std::cout << bsp(a, b, c, x) << std::endl;
	return 0;
}
