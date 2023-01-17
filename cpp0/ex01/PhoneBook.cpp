/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/15/23, 16:55                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "PhoneBook.hpp"

void	PhoneBook::add() {
	i %= 8;
	contacts[i].input_attributes();
	i++;
	if (n_contacts != 8)
		n_contacts = i;
}

void	display_string(std::string str) {
	if (str.length() > 10) {
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else {
		std::cout << std::setw(10) << str;
	}
	std::cout << "|";
}

void	display_contact(Contact contact, int i) {
	std::cout << "|" << std::setw(10) << i << "|";
	display_string(contact.get_first_name());
	display_string(contact.get_last_name());
	display_string(contact.get_nickname());
	std::cout << std::endl;
}

void	PhoneBook::search() {
	int entry;

	if (n_contacts == 0) {
		std::cout << "There is no contact" << std::endl;
		return ;
	}
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int j = 0; j < n_contacts; j++) {
		display_contact(contacts[j], j);
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	std::cin >> entry;
	if (std::cin.fail() || entry >= n_contacts || entry < 0) {
		std::cout << "Index out of range or wrong" << std::endl;
		std::cin.clear();
	}
	else {
		std::cout << "first name: " << contacts[entry].get_first_name() << std::endl;
		std::cout << "last name: " << contacts[entry].get_last_name() << std::endl;
		std::cout << "nickname: " << contacts[entry].get_nickname() << std::endl;
		std::cout << "phone number: " << contacts[entry].get_phone_number() << std::endl;
		std::cout << "darkest secret: " << contacts[entry].get_darkest_secret() << std::endl;
	}
}
