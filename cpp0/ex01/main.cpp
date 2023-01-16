/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/15/23, 16:56                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

//#include "main.hpp"
#include "PhoneBook.hpp"

int main() {
	PhoneBook	one;
	std::string command;
// when the index to search is out of range
	std::cin >> command;
	while (command.compare("EXIT")) {
		if (!command.compare("ADD"))
			one.add();
		else if (!command.compare("SEARCH"))
			one.search();
		std::cin >> command;
	}
//	if (command.compare("EXIT") == 0)
//		std::cout << "Equal\n";
//	if (command.compare("EXIT"))
//		std::cout << "Not equal\n";

}