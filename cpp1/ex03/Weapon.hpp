/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 12:46                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP1_WEAPON_HPP
#define CPP1_WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string	_type;

public:
	Weapon(std::string type);
	const std::string&	getType();
	void				setType(std::string type);
};

#endif //CPP1_WEAPON_HPP
