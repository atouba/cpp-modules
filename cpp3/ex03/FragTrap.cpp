/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 14:56                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap's default constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const std::string& name) {
	std::cout << "FragTrap's parametrized constructor" << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &f) {
	*this = f;
}

FragTrap&	FragTrap::operator=(const FragTrap& f) {
	if (this != &f) {
		_name = f._name;
		_hit_points = f._hit_points;
		_energy_points = f._energy_points;
		_attack_damage = f._attack_damage;
	}
	return *this;
}

FragTrap::~FragTrap() {std::cout << "FragTrap's destructor" << std::endl;}

void	FragTrap::attack(const std::string &target) {
	if (!_energy_points || !_hit_points) {
		std::cout << "\t\tFragTrap can’t do anything if it has no hit points or energy points left." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing "\
		<< _attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

void	FragTrap::highFivesGuys() {
	std::cout << _name << " request HIGH FIVES" << std::endl;
}