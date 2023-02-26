/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/26/23, 16:19                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Array.tpp"

// Elements must be accessible for reading and writing through the operator[]
// (or just for reading if the instance is const).

int main() {
	const Array<int>	x(1);
	std::cout << x[0];
//	x[0] = 5;
//
//	std::cout << x.size() << std::endl;
//	x[0] = 11;
//	std::cout << x[99] << std::endl;
}