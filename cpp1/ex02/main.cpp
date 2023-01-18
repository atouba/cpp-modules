/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 12:05                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include <iostream>

int main() {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "memory address of the string variable: " << &str << std::endl;
	std::cout << "memory address held by stringPTR:      " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF:      " << &stringREF << std::endl << std::endl;

	std::cout << "value of the string variable:       " << str << std::endl;
	std::cout << "value pointed to by stringPTR:      " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF:      " << stringREF << std::endl;
}