/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 15:40                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/
 
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap's default constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(const std::string& name) {
	std::cout << "DiamondTrap's parametrized constructor" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &f) {
	*this = f;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& f) {
	if (this != &f) {
		_name = f._name;
		_hit_points = f._hit_points;
		_energy_points = f._energy_points;
		_attack_damage = f._attack_damage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {std::cout << "DiamondTrap's destructor" << std::endl;}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap's name: " << this->_name << "\t\tClapTrap's name: " << ClapTrap::_name << std::endl;
}