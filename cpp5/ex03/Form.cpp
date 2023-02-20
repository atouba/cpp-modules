/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/19/23, 11:32                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Form.hpp"
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"

void	check_grade(int grade_sign, int grade_exec) throw(std::exception&) {
	if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
}

Form::Form() : _is_signed(false), _grade_exec(1), _grade_sign(1) {}

Form::Form(const Form &f): _is_signed(false), _grade_sign(f._grade_sign),\
			_grade_exec(f._grade_exec), _name(f._name) {
	*this = f;
}

Form&	Form::operator=(const Form &f) {
	if (this != &f) {
		_is_signed = f._is_signed;
	}
	return *this;
}

Form::~Form() {}

Form::Form(std::string name, int grade_sign, int grade_exec): _is_signed(false),\
			_grade_sign(grade_sign), _grade_exec(grade_exec), _name(name) {
	try {
		check_grade(grade_sign, grade_exec);
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}

std::string Form::getName() const {
	return _name;
}

int Form::getGradeExec() const {
	return _grade_exec;
}

int Form::getGradeSign() const {
	return _grade_sign;
}

bool	Form::getSign() const {
	return _is_signed;
}

void	Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= getGradeSign() && getGradeSign() >= 1 && getGradeSign() <= 150)
		_is_signed = true;
}

std::ostream&	operator<<(std::ostream& o, Form& f) {
	o << "Form's name: " << f.getName() << std::endl <<\
		"grade required to sign it: " << f.getGradeSign() << std::endl <<\
		"grade required to execute it: " << f.getGradeExec() << std::endl << \
		"is it signed: " << f.getSign() << std::endl;
	return o;
}