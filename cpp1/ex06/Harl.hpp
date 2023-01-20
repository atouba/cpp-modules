/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 19:16                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP1_HARL_HPP
#define CPP1_HARL_HPP

#include <iostream>

class Harl {
private:
	void	debug();
	void	info();
	void	warning();
	void	error();

public:
	void	complain(std::string);
};

#endif //CPP1_HARL_HPP
