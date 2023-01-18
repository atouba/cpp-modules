/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 12:48                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP1_HUMANA_HPP
#define CPP1_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	Weapon&		_weapon;
	std::string	_name;

public:
	HumanA(std::string name, Weapon& weapon);
	void	attack();
};

#endif //CPP1_HUMANA_HPP
