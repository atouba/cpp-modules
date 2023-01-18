/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 12:58                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {
}

void	HumanA::attack() {std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;}
