/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 07:05                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP4_CAT_HPP
#define CPP4_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& d);
	Cat&	operator=(const Cat& c);
	~Cat();

	void	makeSound() const;
};

#endif //CPP4_CAT_HPP