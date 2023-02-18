/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 07:43                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP4_WRONGCAT_HPP
#define CPP4_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	WrongCat(const WrongCat& d);
	WrongCat&	operator=(const WrongCat& c);
	~WrongCat();

	void	makeSound() const;
};


#endif //CPP4_WRONGCAT_HPP
