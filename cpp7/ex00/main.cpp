/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/26/23, 00:55                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "whatever.hpp"
#include <vector>

std::ostream&	operator<<(std::ostream&o, std::vector<int>& a) {
	o << a[0] << "  " << a[1] << std::endl;
	return o;
}

int main() {
	int a = 5, b = 7;
	std::string c = "one", d = "two";
//
//	swap(a, b);
//	std::cout << "a: " << a << std::endl << "b: " << b << std::endl;
//
//	std::cout << std::endl;
//
//	swap(c, d);
//	std::cout << "c: " << c << std::endl << "d: " << d << std::endl;
//
//	std::cout << std::endl;
//
//	std::vector<int>	e, f;
//	e.push_back(1);
//	e.push_back(2);
//
//	f.push_back(10);
//	f.push_back(11);
//
//	swap(e, f);
//	std::cout << "e: " << e << std::endl << "f: " << f << std::endl;


	std::cout << min<int>(a, b) << std::endl;
	std::cout << min<std::string>(c, d) << std::endl;

	std::cout << std::endl;

	std::cout << max<int>(a, b) << std::endl;
	std::cout << max<std::string>(c, d) << std::endl;
}