// #include <iostream>
//#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a(1, 1);
	Point b(10, 1);
	Point c(10, 10);
	Point	x(5, 2);

	std::cout << bsp(a, b, c, x) << std::endl;
	return 0;
}
