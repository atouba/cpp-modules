/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 21:24                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "A_Animal.hpp"

A_Animal::A_Animal(): _type("---") {std::cout << "A_Animal's default constructor" << std::endl;}

A_Animal::A_Animal(const A_Animal &a) {
	*this = a;
}

A_Animal&	A_Animal::operator=(const A_Animal &a) {
	if (this != &a) {
		_type = a._type;
	}
	return *this;
}

A_Animal::~A_Animal() {std::cout << "A_Animal's destructor" << std::endl;}

std::string A_Animal::getType() const {
	return _type;
}

void	A_Animal::makeSound() const {std::cout << "A_Animal sound" << std::endl;}