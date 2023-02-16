/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/1/23, 16:04                    |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "DiamondTrap.hpp"

int main() {

	DiamondTrap	a("UniCorn");
	DiamondTrap	b("Griffin");

	std::cout <<  std::endl << "/*************************************************/" << std::endl << std::endl;

	a.attack("Griffin");
	b.takeDamage(30);
	b.attack("Griffin");
	a.takeDamage(30);
	b.guardGate();
	a.highFivesGuys();

	a.whoAmI();

	std::cout <<  std::endl << "/*************************************************/" << std::endl << std::endl;
}