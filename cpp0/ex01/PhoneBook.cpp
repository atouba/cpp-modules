/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/15/23, 16:55                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "PhoneBook.hpp"

void	PhoneBook::add() {
	i %= 8;
	std::cin >> contacts[i]._first_name;
	std::cin >> contacts[i]._last_name;
	std::cin >> contacts[i]._nickname;
	std::cin >> contacts[i]._phone_number;
	std::cin >> contacts[i]._darkest_secret;
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
		for (int i = 0; i < 10 - str.length(); i++)
			std::cout << " ";
		std::cout << str;
	}
	std::cout << "|";
}

void	display_contact(Contact contact, int i) {
	std::cout << "|         " << i << "|";
	display_string(contact._first_name);
	display_string(contact._last_name);
	display_string(contact._nickname);
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
	if (std::cin.fail() || entry > 8 || entry < 0) {
		std::cout << "Index out of range or wrong" << std::endl;
		std::cin.clear();
	}
	else {
		std::cout << "first name: " << contacts[entry]._first_name << std::endl;
		std::cout << "last name: " << contacts[entry]._last_name << std::endl;
		std::cout << "nickname: " << contacts[entry]._nickname << std::endl;
		std::cout << "phone number: " << contacts[entry]._phone_number << std::endl;
		std::cout << "darkest secret: " << contacts[entry]._darkest_secret << std::endl;
	}
}
