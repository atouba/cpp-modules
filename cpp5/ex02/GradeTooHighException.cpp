/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:36                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "GradeTooHighException.hpp"

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade is Too High";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is Too High";
}
