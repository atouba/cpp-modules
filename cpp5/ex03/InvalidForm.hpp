/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/20/23, 20:54                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP5_INVALIDFORM_HPP
#define CPP5_INVALIDFORM_HPP

#include "Intern.hpp"

class Intern::InvalidForm : public std::exception {
public:
	const char * what() const _NOEXCEPT;
};


#endif //CPP5_INVALIDFORM_HPP
