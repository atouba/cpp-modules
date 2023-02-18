/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 21:23                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef C____ANIMAL_HPP
#define C____ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string	_type;

public:
	Animal();
	Animal(const Animal& a);
	Animal&	operator=(const Animal& a);
	virtual ~Animal();

	virtual	void	makeSound() const;
	std::string	getType() const;
};

#endif //C____ANIMAL_HPP
