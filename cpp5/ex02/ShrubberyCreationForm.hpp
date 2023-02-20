/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 20:44                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP5_SHRUBBERYCREATIONFORM_HPP
#define CPP5_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
	std::string	_target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& s);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& s);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);

	 void	execute(Bureaucrat const& executor) const;
};


#endif //CPP5_SHRUBBERYCREATIONFORM_HPP
