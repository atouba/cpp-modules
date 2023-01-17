/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/17/23, 17:36                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Contact.hpp"

void	Contact::input_attributes() {
	std::cin >> _first_name;
	std::cin >> _last_name;
	std::cin >> _nickname;
	std::cin >> _phone_number;
	std::cin >> _darkest_secret;
}

std::string Contact::get_first_name() {return _first_name;}

std::string Contact::get_last_name() {return _last_name;}

std::string Contact::get_nickname() {return _nickname;}

std::string Contact::get_phone_number() {return _phone_number;}

std::string Contact::get_darkest_secret() {return _darkest_secret;}
