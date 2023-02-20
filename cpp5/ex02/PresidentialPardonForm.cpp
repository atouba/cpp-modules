/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/20/23, 01:14                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s) {
	*this = s;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &s) {
	if (this != &s)
		_target = s._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target) {}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	try {
		if (!(executor.getGrade() <= 25 && getSign())) {
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
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
