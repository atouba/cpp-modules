/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/15/23, 15:46                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include <iostream>
#include <cctype>

int main(int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; av[i]; i++) {
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
		}
		std::cout << std::endl;
	}

}