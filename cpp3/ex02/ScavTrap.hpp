/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 14:23                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef C____SCAVTRAP_HPP
#define C____SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& s);
	ScavTrap&	operator=(const ScavTrap& s);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};

#endif //C____SCAVTRAP_HPP
