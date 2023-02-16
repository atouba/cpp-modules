/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/1/23, 15:12                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hit_points(10), _energy_points(10),\
					  _attack_damage(0) {std::cout << "ClapTrap's Default constructor is called" << std::endl;}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10),\
										_attack_damage(0) {
	std::cout << "ClapTrap's parameterized constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c) {
	*this = c;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &c) {
	if (this != &c) {
		_name = c._name;
		_hit_points = c._hit_points;
		_energy_points = c._energy_points;
		_attack_damage = c._attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap's destructor is called" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (!_energy_points || !_hit_points) {
		std::cout << "\t\tClapTrap can’t do anything if it has no hit points or energy points left." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "\
		<< _attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!_energy_points || !_hit_points) {
		std::cout << "\t\tClapTrap can’t do anything if it has no hit points or energy points left." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " is going through damage, and it'll lose " << amount << " hit points" << std::endl;
	if (amount > _hit_points)
		amount = _hit_points;
	_hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!_energy_points || !_hit_points) {
		std::cout << "\t\tClapTrap can’t do anything if it has no hit points or energy points left." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " is being repaired, gaining " << amount << " hit points back" << std::endl;
	_hit_points += amount;
	_energy_points--;
}