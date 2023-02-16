/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/1/23, 16:04                    |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "ClapTrap.hpp"

int main() {

	ClapTrap	a("one");
	ClapTrap	b("two");

	std::cout <<  std::endl << "/*************************************************/" << std::endl << std::endl;

	a.attack("two");
	b.takeDamage(3);
	b.beRepaired(6);
	b.attack("one");
	a.takeDamage(100);
	a.attack("two");

	std::cout << std::endl << "/*************************************************/" << std::endl << std::endl;

}