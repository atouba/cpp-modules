/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/17/23                          |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef DOG_HPP
#define DOG_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal {
private:
	Brain*	_b;
public:
	Dog();
	Dog(const Dog& d);
	Dog&	operator=(const Dog& d);
	virtual ~Dog();

	void	makeSound() const;
};

#endif
