/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 12:53                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {}

const std::string&	Weapon::getType() {
	const std::string&	ref = _type;
	return ref;
}

void	Weapon::setType(std::string type) {
	_type = type;
}