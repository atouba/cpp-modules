/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 07:41                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("---") {std::cout << "WrongAnimal's default constructor" << std::endl;}

WrongAnimal::WrongAnimal(const WrongAnimal &a) {
	*this = a;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &a) {
	if (this != &a) {
		_type = a._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal's destructor" << std::endl;}

std::string WrongAnimal::getType() const {
	return _type;
}

void	WrongAnimal::makeSound() const {std::cout << "WrongAnimal sound" << std::endl;}
