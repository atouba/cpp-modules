/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 07:18                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat's Default constructor" << std::endl;
}

Cat::Cat(const Cat& d) {
	std::cout << "Cat's copy constructor" << std::endl;
	*this = d;
}

Cat&	Cat::operator=(const Cat &c) {
	if (this != &c) {
		_type = c._type;
	}
	return *this;
}

Cat::~Cat() {std::cout << "Cat's destructor" << std::endl;}

void	Cat::makeSound() const {
	std::cout << "Meow Meow Meow" << std::endl;
}
