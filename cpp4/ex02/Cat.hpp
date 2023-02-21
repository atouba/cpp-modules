/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 07:05                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP4_CAT_HPP
#define CPP4_CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
	Brain*	_b;
public:
	Cat();
	Cat(const Cat& d);
	Cat&	operator=(const Cat& c);
	virtual ~Cat();

	void	makeSound() const;
};

#endif //CPP4_CAT_HPP
