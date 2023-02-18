/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 07:43                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "WrongCat's Default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& d) {
	std::cout << "WrongCat's copy constructor" << std::endl;
	*this = d;
}

WrongCat&	WrongCat::operator=(const WrongCat &c) {
	if (this != &c) {
		_type = c._type;
	}
	return *this;
}

WrongCat::~WrongCat() {std::cout << "WrongCat's destructor" << std::endl;}

void	WrongCat::makeSound() const {
	std::cout << "Meow Meow Meow" << std::endl;
}
