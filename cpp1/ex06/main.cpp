/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 19:16                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Harl.hpp"

int main(int ac, char **av) {
	Harl	one;
	int		index;

	if (ac != 2)
		return 1;

	index = av[1][4] % 4;
	switch (index) {
		case 3:
			one.complain("DEBUG");
			index = 0;
		case 0:
			one.complain("INFO");
			index++;
		case 1:
			one.complain("WARNING");
			index++;
		default:
			one.complain("ERROR");
	}
}