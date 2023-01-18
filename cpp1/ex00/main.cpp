/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/17/23, 15:32                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Zombie.hpp"

int main() {
	Zombie	a("Monster");
	Zombie*	b = newZombie("Venom");
	randomChump("Lurker");
	delete(b);
}