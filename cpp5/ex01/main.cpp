/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:54                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat	x("Error", 999);
	Form		y("Error", -999, 8);

	std::cout << std::endl;

	Bureaucrat	a("Bob", 1);
	Form		b("Some Form", 2, 10);

	std::cout << b << std::endl;

	b.beSigned(a);

	std::cout << b << std::endl;

	a.signForm(b);
}