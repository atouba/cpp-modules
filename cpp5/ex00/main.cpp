/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:54                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat	a("Bob", 1);
	Bureaucrat	b("Sam", 149);
	Bureaucrat	c("Jhon", -8);

	std::cout << std::endl << a;
	a.incrementGrade();
	std::cout << a;
	a.decrementGrade();
	std::cout << a;

	std::cout << std::endl << b;
	b.decrementGrade();
	b.decrementGrade();
	std::cout << b;
	b.incrementGrade();
	std::cout << b;
}