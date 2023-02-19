/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 11:32                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

//#ifndef CPP5_BUREAUCRAT_HPP
//#include "Bureaucrat.hpp"
//#endif

#ifndef CPP5_FORM_HPP
#define CPP5_FORM_HPP


#include <iostream>

class Bureaucrat;

class Form {
private:
	const std::string	_name;
	const int 			_grade_sign;
	const int 			_grade_exec;
	bool				_is_signed;

public:
	class 				GradeTooHighException;
	class 				GradeTooLowException;

	Form();
	Form(const Form& f);
	Form&	operator=(const Form& f);
	~Form();
	Form(std::string name, int grade_sign, int grade_exec);

	std::string	getName() const;
	int 		getGradeSign() const;
	int 		getGradeExec() const;
	bool		getSign() const;

	void	beSigned(Bureaucrat& b);
};

std::ostream&	operator<<(std::ostream& o, Form& f);

#endif //CPP5_FORM_HPP
