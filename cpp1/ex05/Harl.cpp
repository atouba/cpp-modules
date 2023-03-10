/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 19:17                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Harl.hpp"

void	Harl::debug() {
	std::cout << "Debug comment:\t\tI love having extra bacon for my \n\t\t\t"
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::error() {
	std::cout << "Error comment:\t\tThis is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::info() {
	std::cout << "Info comment:\t\tI cannot believe adding extra bacon costs more money. You didn’t put\n\t\t\t"
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning() {
	std::cout << "Warning comment:\tI think I deserve to have some extra bacon for free. I’ve been coming for\n\t\t\t"
				 "years whereas you started working here since last month." << std::endl << std::endl;
}

typedef void	(Harl::*func)();

void	Harl::complain(std::string level) {

	func f[4];

	f[0] = &Harl::info;
	f[1] = &Harl::warning;
	f[2] = &Harl::error;
	f[3] = &Harl::debug;

	(this->*f[(int)(level[4]) % 4])();
}