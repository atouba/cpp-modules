/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:54                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete(rrf);

	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Dracaena trifasciata");
	delete(rrf);

	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("presidential pardon", "RUJA IGNATOVA");
	delete(rrf);

	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("unknown form", "anonymous");


}