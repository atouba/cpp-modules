/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 09:36                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP5_GRADETOOHIGHEXCEPTION_HPP
#define CPP5_GRADETOOHIGHEXCEPTION_HPP

#include "Bureaucrat.hpp"

class Bureaucrat::GradeTooHighException : public std::exception {
public:
	 const char* what() const throw();
};

#endif //CPP5_GRADETOOHIGHEXCEPTION_HPP
