/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 08:27                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP4_BRAIN_HPP
#define CPP4_BRAIN_HPP

#include <iostream>

class Brain {
public:
	std::string	_ideas[100];
	Brain();
	Brain(const Brain& b);
	Brain&	operator=(const Brain& b);
	~Brain();
};


#endif //CPP4_BRAIN_HPP
