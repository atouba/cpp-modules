/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 21:24                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("---") {std::cout << "AAnimal's default constructor" << std::endl;}

AAnimal::AAnimal(const AAnimal &a) {
	*this = a;
}

AAnimal&	AAnimal::operator=(const AAnimal &a) {
	if (this != &a) {
		_type = a._type;
	}
	return *this;
}

AAnimal::~AAnimal() {std::cout << "AAnimal's destructor" << std::endl;}

std::string AAnimal::getType() const {
	return _type;
}

void	AAnimal::makeSound() const {std::cout << "AAnimal sound" << std::endl;}