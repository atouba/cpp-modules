/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 21:23                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef C____AAnimal_HPP
#define C____AAnimal_HPP

#include <iostream>

class AAnimal {
protected:
	std::string	_type;

public:
	AAnimal();
	AAnimal(const AAnimal& a);
	AAnimal&	operator=(const AAnimal& a);
	virtual ~AAnimal();

	virtual	void	makeSound() const = 0;
	std::string	getType() const;
};

#endif //C____AAnimal_HPP
