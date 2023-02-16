/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/1/23, 16:04                    |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "FragTrap.hpp"

int main() {

	FragTrap	a("UniCorn");
	FragTrap	b("Griffin");
	FragTrap	c("Sphinx");

	std::cout <<  std::endl << "/*************************************************/" << std::endl << std::endl;

	a.attack("Griffin");
	b.takeDamage(30);
	b.attack("Unicorn");
	a.takeDamage(30);
	c.attack("Griffin");
	c.highFivesGuys();

	std::cout <<  std::endl << "/*************************************************/" << std::endl << std::endl;
}