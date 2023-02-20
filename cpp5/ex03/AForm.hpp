/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 11:32                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

//#ifndef CPP5_BUREAUCRAT_HPP
//#include "Bureaucrat.hpp"
//#endif

#ifndef CPP5_AForm_HPP
#define CPP5_AForm_HPP


#include <iostream>
#include <fstream>

class Bureaucrat;

class AForm {
private:
	const std::string	_name;
	const int 			_grade_sign;
	const int 			_grade_exec;
	bool				_is_signed;

public:
	class 				GradeTooHighException;
	class 				GradeTooLowException;

	AForm();
	AForm(const AForm& f);
	AForm&	operator=(const AForm& f);
	virtual ~AForm();
	AForm(std::string name, int grade_sign, int grade_exec);

	std::string	getName() const;
	int 		getGradeSign() const;
	int 		getGradeExec() const;
	bool		getSign() const;

	void	beSigned(Bureaucrat& b);
	void	beSignedShrubbery(Bureaucrat& b);
	void	beSignedRobotomy(Bureaucrat& b);
	void	beSignedPresidential(Bureaucrat& b);

	virtual void	execute(Bureaucrat const& executor) const = 0;

};

std::ostream&	operator<<(std::ostream& o, AForm& f);

#endif //CPP5_AForm_HPP
