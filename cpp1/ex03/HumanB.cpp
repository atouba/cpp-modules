/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 13:00                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(0){}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

void	HumanB::attack() {std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;}

