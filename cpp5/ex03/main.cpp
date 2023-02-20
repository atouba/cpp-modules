/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:54                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

void	foo() {
	Intern someRandomIntern;
	Form *rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
//	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	std::cout << rrf->getName() << std::endl;   // ????
	delete(rrf);
//	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
//	delete(rrf);
}

int main() {
	foo();
	// when you push to the intra don't forget to delete sequence_alg.cpp

//	system("leaks maggots");
}