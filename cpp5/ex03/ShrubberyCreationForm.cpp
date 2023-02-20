/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 20:44                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) {
	*this = s;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s) {
	if (this != &s)
		_target = s._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target) {}

void	ascii_trees(std::ofstream& file) {
	file << "               ,@@@@@@@,\n"
			"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
			"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
			"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
			"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
			"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
			"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
			"       |o|        | |         | |\n"
			"       |.|        | |         | |\n"
			"jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	try {
		if (!(executor.getGrade() <= 137 && Form::getSign())) {
			if (executor.getGrade() < 1)
				throw Form::GradeTooHighException();
			throw Form::GradeTooLowException();
		}
	}
	catch (std::exception& e) {
		std::cout << "Error: couldn't execute because " << e.what() <<  " or the form is not signed "\
				<< std::endl;
		return ;
	}
	std::ofstream	file(_target + "_shrubbery");
	ascii_trees(file);
}