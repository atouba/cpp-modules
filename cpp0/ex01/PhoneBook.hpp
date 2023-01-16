/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/15/23, 16:55                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP_MODULES_PHONEBOOK_HPP
#define CPP_MODULES_PHONEBOOK_HPP

//#include "main.hpp"
#include "Contact.hpp"
//#include "PhoneBook.hpp"

class	PhoneBook {
private:
	Contact		contacts[8];
	int			i;
	int 		n_contacts;
public:
	PhoneBook() {i = 0;n_contacts = 0;}
	void	add();
	void	search();
};

#endif //CPP_MODULES_PHONEBOOK_HPP
