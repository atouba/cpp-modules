/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 11:31                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie*	zmbs = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zmbs[i].init(name);
	}
	return zmbs;
}