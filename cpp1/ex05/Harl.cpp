/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 19:17                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Harl.hpp"

void	Harl::debug() {
	std::cout << "Debug comment: I love having extra bacon for my \n"
				"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::error() {
	std::cout << "Error comment: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::info() {
	std::cout << "Info comment: I cannot believe adding extra bacon costs more money. You didn’t put\n"
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning() {
	std::cout << "Warning comment: I think I deserve to have some extra bacon for free. I’ve been coming for\n"
				 "years whereas you started working here since last month." << std::endl;
}

typedef void	(Harl::*func)();

void	Harl::complain(std::string level) {

	func f[4];

	f[0] = &Harl::info;
	f[1] = &Harl::warning;
	f[2] = &Harl::error;
	f[3] = &Harl::debug;
//
//	(f[(int)(level[5]) % 4])();
	(this->*f[(int)(level[4]) % 4])();
//	func[level[5] % 4]();
}