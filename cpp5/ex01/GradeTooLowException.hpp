/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:41                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP5_GRADETOOLOWEXCEPTION_HPP
#define CPP5_GRADETOOLOWEXCEPTION_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Form::GradeTooLowException : public std::exception {
public:
	const char*	what() const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception {
public:
	const char*	what() const throw();
};

#endif //CPP5_GRADETOOLOWEXCEPTION_HPP
