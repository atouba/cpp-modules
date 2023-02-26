/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/24/23, 01:56                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Serializer.hpp"


int main() {
	Data*	a = new Data;
	Serializer	s;

	a->x = 10;
	a->s = "Hello world!";

	uintptr_t	x = s.serialize(a);
	Data*	b = s.deserialize(x);


	std::cout << a->x << std::endl;
	std::cout << a->s << std::endl;
	std::cout << b->x << std::endl;
	std::cout << b->s << std::endl << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	delete(a);
}