/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/1/23, 16:04                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "ClapTrap.hpp"

int main() {
	ClapTrap	a("one");
	ClapTrap	b("two");

	a.attack("two");
	b.attack(a.get_name());
	a.takeDamage(500);
	a.beRepaired(7);
}