/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 12:52                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP1_HUMANB_HPP
#define CPP1_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	Weapon*		_weapon;
	std::string	_name;

public:
	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon& weapon);
};

#endif //CPP1_HUMANB_HPP
