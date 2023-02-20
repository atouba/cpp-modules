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
	Bureaucrat	x("Error", 10);
//	AForm		y("Error", -999, 8);
	AForm*		F = new ShrubberyCreationForm("Home");
	Form		G("SomeForm", 33, 88);

//	F->beSignedShrubbery(x);
//	F->execute(x);
	x.executeForm(G);
//	delete(F);
//
//	std::cout << std::endl;
//	Bureaucrat	y("Gottingham", 50);
//	F = new RobotomyRequestForm("Home");
//	F->beSignedRobotomy(y);
//	F->execute(y);
//	delete(F);
//	std::cout << std::endl;
//
//	F = new PresidentialPardonForm("Home");
//	F->execute(x);
	delete(F);
}