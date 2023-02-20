/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:54                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat	x("Error", 144);
//	AForm		y("Error", -999, 8);
	AForm*		F = new ShrubberyCreationForm("Home");

	F->beSignedShrubbery(x);
	F->execute(x);
	delete(F);

	std::cout << std::endl;
	Bureaucrat	y("Gottingham", 50);
	F = new RobotomyRequestForm("Home");
	F->beSignedRobotomy(y);
	F->execute(y);
	delete(F);
	std::cout << std::endl;

	F = new PresidentialPardonForm("Home");
	F->execute(x);
	delete(F);
}