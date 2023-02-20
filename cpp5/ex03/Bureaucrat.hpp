/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 15:12                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

//#ifndef CPP5_AForm_HPP
//#endif

#ifndef CPP5_BUREAUCRAT_HPP
#define CPP5_BUREAUCRAT_HPP

#include "AForm.hpp"
#include "Form.hpp"

class Bureaucrat {
private:
	 const std::string	_name;
	int 				_grade;

public:
	class GradeTooHighException;
	class GradeTooLowException;

	Bureaucrat();
	Bureaucrat(const Bureaucrat& b);
	Bureaucrat&	operator=(const Bureaucrat& b);
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);

	std::string	getName() const;
	int 		getGrade() const;
	void		incrementGrade();
	void		decrementGrade();

	void	signAForm(AForm& f);
	void	executeForm(Form const& form);
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat& b);

#endif //CPP5_BUREAUCRAT_HPP
