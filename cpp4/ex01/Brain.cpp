/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 08:27                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Brain.hpp"

Brain::Brain() {std::cout << "Brain's default constructor" << std::endl;}

Brain::Brain(const Brain& b) {
	std::cout << "Brain's copy constructor" << std::endl;
	*this = b;
}

Brain&	Brain::operator=(const Brain &b) {
	if (this != &b) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = b._ideas[i];
	}
	return *this;
}

Brain::~Brain() {std::cout << "Brain's destructor" << std::endl;}
