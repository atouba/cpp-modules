/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 14:23                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap's default constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string& name) {
	std::cout << "ScavTrap's parametrized constructor" << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &s) {
	*this = s;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& s) {
	if (this != &s) {
		_name = s._name;
		_hit_points = s._hit_points;
		_energy_points = s._energy_points;
		_attack_damage = s._attack_damage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {std::cout << "ScavTrap's destructor" << std::endl;}

void	ScavTrap::attack(const std::string &target) {
	if (!_energy_points || !_hit_points) {
		std::cout << "\t\tScavTrap can’t do anything if it has no hit points or energy points left." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "\
		<< _attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}