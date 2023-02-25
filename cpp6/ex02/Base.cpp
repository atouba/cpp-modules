/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/25/23, 21:14                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base::~Base() {}

Base*	generate() {
	srand(time(0));
	if (rand() % 3 == 0)
		return new A;
	else if (rand() % 3 == 1)
		return new B;
	else
		return new C;
}

void	identify(Base* p) {
	A*	a = dynamic_cast<A*>(p);
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "the type of this object pointed by p is A" << std::endl;
	if (b)
		std::cout << "the type of this object pointed by p is B" << std::endl;
	if (c)
		std::cout << "the type of this object pointed by p is C" << std::endl;
}

void	identify(Base& p) {
//	A*	a = dynamic_cast<A*>(&p);
//	B*	b = dynamic_cast<B*>(&p);
//	C*	c = dynamic_cast<C*>(&p);

	try {
		A&	a = dynamic_cast<A&>(p);
		std::cout << "the type of this object pointed by p is A" << std::endl;
		(void)a;
	}
	catch (std::bad_cast&) {}

	try {
		B&	a = dynamic_cast<B&>(p);
		std::cout << "the type of this object pointed by p is B" << std::endl;
		(void)a;
	}
	catch (std::bad_cast&) {}

	try {
		C&	a = dynamic_cast<C&>(p);
		std::cout << "the type of this object pointed by p is C" << std::endl;
		(void)a;
	}
	catch (std::bad_cast&) {}

//	if (a)
//		std::cout << "the type of this object pointed by p is A" << std::endl;
//	if (b)
//		std::cout << "the type of this object pointed by p is B" << std::endl;
//	if (c)
//		std::cout << "the type of this object pointed by p is C" << std::endl;
}
