/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 23:54                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP5_ROBOTOMYREQUESTFORM_HPP
#define CPP5_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
private:
	std::string	_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& s);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& s);
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);

	void	execute(Bureaucrat const& executor) const;
};


#endif //CPP5_ROBOTOMYREQUESTFORM_HPP
