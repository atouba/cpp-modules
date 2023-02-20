/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/20/23, 19:56                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP5_INTERN_HPP
#define CPP5_INTERN_HPP

#include "Form.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern& i);
	Intern&	operator=(const Intern& i);
	~Intern();

	class	InvalidForm;
	Form*	makeForm(std::string name, std::string target);
	Form*	makeShrubberyCreation(std::string name, std::string target);
	Form*	makeRobotomyRequest(std::string name, std::string target);
	Form*	makePresidentialPardon(std::string name, std::string target);
	Form*	error(std::string name, std::string target);
};


#endif //CPP5_INTERN_HPP
