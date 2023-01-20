/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 19:16                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Harl.hpp"

int main() {
	Harl	one;
	std::string a = "DEBUG";
	std::string b = "INFO";
	std::string c = "WARNING";
	std::string d = "ERROR";

	one.complain("ERROR");
	one.complain("WARNING");
	one.complain("DEBUG");
	one.complain("INFO");
}