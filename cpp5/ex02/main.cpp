/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:54                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat	x("John", 40);

	std::cout << "Testing shrubbery creation" << std::endl;

	AForm*		F = new ShrubberyCreationForm("Home");
	F->execute(x);

	F->beSignedShrubbery(x);
	F->execute(x);
	delete(F);

//	std::cout << std::endl << "------------------------------" << std::endl;

	std::cout << std::endl << "Testing robotomy request" << std::endl;

	F = new RobotomyRequestForm("Sputnik");
	F->execute(x);

	F->beSignedRobotomy(x);
	F->execute(x);
	delete(F);

//	std::cout << std::endl << "------------------------------" << std::endl;

	std::cout << std::endl << "Testing presidential pardon" << std::endl;

	F = new PresidentialPardonForm();
	F->execute(x);


	F->beSignedPresidential(x);
	F->execute(x);
	delete(F);

	std::cout << std::endl << "------------------------------" << std::endl << std::endl;

	Form	a("sophisticatedForm", 13, 37);
	x.executeForm(a);
}