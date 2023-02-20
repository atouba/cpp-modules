/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/20/23, 19:56                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Intern.hpp"
#include "InvalidForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

typedef Form* (Intern::*ptrFunc)(std::string, std::string);

Intern::Intern() {}

Intern::Intern(const Intern &i) {
	*this = i;
}

Intern&	Intern::operator=(const Intern &i) {
	return *this;
}

Intern::~Intern() {}

Form*	Intern::makeForm(std::string name, std::string target) {
	Intern	i;
	ptrFunc	p[4];

	p[0] = &Intern::makePresidentialPardon;
	p[2] = &Intern::makeRobotomyRequest;
	p[3] = &Intern::makeShrubberyCreation;
	p[1] = &Intern::error;

	int	x = ((int)name[0]) % 4;
	return (this->*p[x])(name, target);
}

Form*	Intern::makeShrubberyCreation(std::string name, std::string target) {
	try {
		if (name.compare("shrubbery creation"))
			throw InvalidForm();
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
		return 0;
	}
	std::cout << "Intern creates " << name << std::endl;
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeRobotomyRequest(std::string name, std::string target) {
	try {
		if (name.compare("robotomy request"))
			throw InvalidForm();
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
		return 0;
	}
	std::cout << "Intern creates " << name << std::endl;
	return new RobotomyRequestForm(target);
}

Form*	Intern::makePresidentialPardon(std::string name, std::string target) {
	try {
		if (name.compare("presidential pardon"))
			throw InvalidForm();
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
		return 0;
	}
	std::cout << "Intern creates " << name << std::endl;
	return new PresidentialPardonForm(target);
}

Form*	Intern::error(std::string name, std::string target) {
	(void)name;
	(void)target;
	std::cout << "Error: the name of the form doesn't exist" << std::endl;
	return 0;
}