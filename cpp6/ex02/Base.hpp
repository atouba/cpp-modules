/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/25/23, 21:14                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP6_BASE_HPP
#define CPP6_BASE_HPP

#include <iostream>

class Base {
public:
	virtual ~Base();
};

Base*	generate();
void	identify(Base* p);
void	identify(Base& p);

#endif //CPP6_BASE_HPP
