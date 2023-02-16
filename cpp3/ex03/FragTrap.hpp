/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 14:56                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef C____FRAGTRAP_HPP
#define C____FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& f);
	FragTrap&	operator=(const FragTrap& f);
	~FragTrap();

	void	attack(const std::string& target);
	void	highFivesGuys();
};

#endif //C____FRAGTRAP_HPP
