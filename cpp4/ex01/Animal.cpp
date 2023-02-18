/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 21:24                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Animal.hpp"

Animal::Animal(): _type("---") {std::cout << "Animal's default constructor" << std::endl;}

Animal::Animal(const Animal &a) {
	*this = a;
}

Animal&	Animal::operator=(const Animal &a) {
	if (this != &a) {
		_type = a._type;
	}
	return *this;
}

Animal::~Animal() {std::cout << "Animal's destructor" << std::endl;}

std::string Animal::getType() const {
	return _type;
}

void	Animal::makeSound() const {std::cout << "Animal sound" << std::endl;}