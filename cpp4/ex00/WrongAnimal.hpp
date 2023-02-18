/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 07:41                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP4_WRONGANIMAL_HPP
#define CPP4_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string	_type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& a);
	WrongAnimal&	operator=(const WrongAnimal& a);
	~WrongAnimal();

	void		makeSound() const;
	std::string	getType() const;
};


#endif //CPP4_WRONGANIMAL_HPP
