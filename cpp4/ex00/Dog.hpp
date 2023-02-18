/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/17/23                          |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& d);
	Dog&	operator=(const Dog& d);
	~Dog();

	void	makeSound() const;
};

#endif
