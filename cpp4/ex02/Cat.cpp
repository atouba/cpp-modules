/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 07:18                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat's Default constructor" << std::endl;
	_b = new Brain();
}

Cat::Cat(const Cat& d) {
	std::cout << "Cat's copy constructor" << std::endl;
	*this = d;
}

Cat&	Cat::operator=(const Cat &c) {
	if (this != &c) {
		_type = c._type;
		this->_b = new Brain();
		for (int i = 0; i < 100; i++)
			this->_b->_ideas[i] = c._b->_ideas[i];
	}
	return *this;
}

Cat::~Cat() {
	delete(_b);
	std::cout << "Cat's destructor" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow Meow Meow" << std::endl;
}
