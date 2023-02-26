/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/26/23, 16:01                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "iter.hpp"

int main() {
	int	a[5] = {1, 2, 3, 4, 5};
	std::string x[5] = {"touch", "hearing", "sight", "smell", "taste"};
	iter(a, 5, fun);
	std::cout << std::endl;
	iter(x, 5, fun);
}
