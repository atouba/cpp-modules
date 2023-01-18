/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/17/23, 15:32                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Zombie.hpp"

int main() {
	Zombie*	a = zombieHorde(5, "Crunj");
	for (int i = 0; i < 5; i++)
		a[i].announce();
	system("leaks Moar_brainz");
	delete [] a;
}