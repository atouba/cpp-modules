/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/24/23, 01:56                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Serializer.hpp"


int main() {
	Data*	a = new Data(10);
	Serializer	s;

	uintptr_t	x = s.serialize(a);
	Data*	b = s.deserialize(x);

	std::cout << a->_x << std::endl;
}