/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 11:32                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "AForm.hpp"
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"

void	check_gradeA(int grade_sign, int grade_exec) throw(std::exception&) {
	if (grade_sign > 150 || grade_exec > 150)
		throw AForm::GradeTooLowException();
	if (grade_sign < 1 || grade_exec < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm() : _is_signed(false), _grade_exec(1), _grade_sign(1) {}

AForm::AForm(const AForm &f): _is_signed(false), _grade_sign(f._grade_sign),\
			_grade_exec(f._grade_exec), _name(f._name) {
	*this = f;
}

AForm&	AForm::operator=(const AForm &f) {
	if (this != &f) {
		_is_signed = f._is_signed;
	}
	return *this;
}

AForm::~AForm() {}

AForm::AForm(std::string name, int grade_sign, int grade_exec): _is_signed(false),\
			_grade_sign(grade_sign), _grade_exec(grade_exec), _name(name) {
	try {
		check_gradeA(grade_sign, grade_exec);
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}

std::string AForm::getName() const {
	return _name;
}

int AForm::getGradeExec() const {
	return _grade_exec;
}

int AForm::getGradeSign() const {
	return _grade_sign;
}

bool	AForm::getSign() const {
	return _is_signed;
}

void	AForm::beSignedShrubbery(Bureaucrat &b) {
	if (b.getGrade() <= 145)
		_is_signed = true;
}

void	AForm::beSignedRobotomy(Bureaucrat &b) {
	if (b.getGrade() <= 72)
		_is_signed = true;
}

void	AForm::beSignedPresidential(Bureaucrat &b) {
	if (b.getGrade() <= 25)
		_is_signed = true;
}

void	AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= getGradeSign() && getGradeSign() >= 1 && getGradeSign() <= 150)
		_is_signed = true;
}

std::ostream&	operator<<(std::ostream& o, AForm& f) {
	o << "AForm's name: " << f.getName() << std::endl <<\
		"grade required to sign it: " << f.getGradeSign() << std::endl <<\
		"grade required to execute it: " << f.getGradeExec() << std::endl << \
		"is it signed: " << f.getSign() << std::endl;
	return o;
}