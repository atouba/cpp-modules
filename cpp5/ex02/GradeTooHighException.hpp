/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:36                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP5_GRADETOOHIGHEXCEPTION_HPP
#define CPP5_GRADETOOHIGHEXCEPTION_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm::GradeTooHighException : public std::exception {
public:
	 const char* what() const throw();
};

class Bureaucrat::GradeTooHighException : public std::exception {
public:
	const char* what() const throw();
};

#endif //CPP5_GRADETOOHIGHEXCEPTION_HPP
