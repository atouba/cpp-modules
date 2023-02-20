/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/20/23, 01:14                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP5_PRESIDENTIALPARDONFORM_HPP
#define CPP5_PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
	std::string	_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& s);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& s);
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);

	void	execute(Bureaucrat const& executor) const;
};

#endif //CPP5_PRESIDENTIALPARDONFORM_HPP
