/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:41                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "GradeTooLowException.hpp"

const char*	AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

const char*	Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}
