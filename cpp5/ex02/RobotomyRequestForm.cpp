/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 23:54                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s) {
	*this = s;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &s) {
	if (this != &s)
		_target = s._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target) {}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	try {
		if (!(executor.getGrade() <= 72 && getSign())) {
			if (executor.getGrade() < 1)
				throw GradeTooHighException();
			throw GradeTooLowException();
		}
	}
	catch (std::exception& e) {
		std::cout << "Error: couldn't execute because " << e.what() <<  " or the form is not signed "\
				<< std::endl;
		return ;
	}
	std::cout << "* MAKING SOME DRILLING NOISES *" << std::endl;
	srand(time(0));
	if (rand() % 2)
		std::cout << _target << " has been SUCCESSFULLY robotomized" << std::endl;
	else
		std::cout << "Robotomy failed :(" << std::endl;
}