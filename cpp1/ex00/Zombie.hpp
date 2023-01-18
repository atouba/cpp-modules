/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/17/23, 15:20                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP_MODULES_ZOMBIE_HPP
#define CPP_MODULES_ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	_name;

public:
	Zombie();
	Zombie(std::string);
	~Zombie();
	void	announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif //CPP_MODULES_ZOMBIE_HPP
