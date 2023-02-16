/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/1/23, 16:04                    |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "ScavTrap.hpp"

int main() {

	ScavTrap	a("Kornvill");
	ScavTrap	b("Lurker");

	std::cout <<  std::endl << "/*************************************************/" << std::endl << std::endl;

	a.attack("Lurker");
	b.takeDamage(20);
	b.beRepaired(80);
	b.guardGate();

	std::cout <<  std::endl << "/*************************************************/" << std::endl << std::endl;
}