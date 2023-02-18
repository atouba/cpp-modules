/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 07:05                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog's Default constructor" << std::endl;
	_b = new Brain();
}

Dog::Dog(const Dog& d) {
	std::cout << "Dog's copy constructor" << std::endl;
	*this = d;
}

Dog&	Dog::operator=(const Dog &d) {
	if (this != &d) {
		_type = d._type;
		this->_b = new Brain();
		for (int i = 0; i < 100; i++)
			this->_b->_ideas[i] = d._b->_ideas[i];
	}
	return *this;
}

Dog::~Dog() {
	delete(_b);
	std::cout << "Dog's destructor" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof Woof Woof" << std::endl;
}
