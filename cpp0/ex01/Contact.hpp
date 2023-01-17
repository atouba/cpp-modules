/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/15/23, 16:55                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP_MODULES_CONTACT_HPP
#define CPP_MODULES_CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

public:
	void		input_attributes();
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_phone_number();
	std::string get_darkest_secret();
};

#endif //CPP_MODULES_CONTACT_HPP
