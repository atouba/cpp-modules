/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 15:28                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef C____DIAMONDTRAP_HPP
#define C____DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string	_name;

public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& d);
	DiamondTrap&	operator=(const DiamondTrap& d);
	~DiamondTrap();

	void	whoAmI();
	void	attack(const std::string &target);
};

#endif //C____DIAMONDTRAP_HPP
