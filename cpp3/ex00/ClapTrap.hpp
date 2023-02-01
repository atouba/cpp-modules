/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/1/23, 15:08                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef C____CLAPTRAP_HPP
#define C____CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& c);
	ClapTrap&	operator=(const ClapTrap& c);
	~ClapTrap();

	std::string	get_name() const;
	int			get_hit_points() const;
	int			get_energy_points() const;
	int			get_attack_damage() const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif //C____CLAPTRAP_HPP
