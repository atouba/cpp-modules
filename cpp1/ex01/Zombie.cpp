/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/17/23, 15:25                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Zombie.hpp"

Zombie::Zombie() {std::cout << "constructed" << std::endl;}

Zombie::Zombie(std::string name): _name(name)  {std::cout << "constructed" << std::endl;}

Zombie::~Zombie() {std::cout << _name << " is destroyed" << std::endl;}

void	Zombie::announce() {std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;}

void	Zombie::init(std::string name) {_name = name;}

Zombie* newZombie( std::string name ) {
	Zombie*	zmb = new Zombie(name);
	zmb->announce();
	return zmb;
}

void randomChump( std::string name ) {
	Zombie	zmb(name);
	zmb.announce();
}