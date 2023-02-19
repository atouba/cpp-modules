/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/18/23, 15:12                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Bureaucrat.hpp"
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& b) {
	*this = b;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &b) {
	if (this != &b) {
//		_name = b._name;
		_grade = b._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	try {
		if (grade > 150)
			throw GradeTooLowException();
		if (grade < 1)
			throw GradeTooHighException();
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	_grade = grade;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void	Bureaucrat::incrementGrade() {
	try {
		if (_grade - 1 < 1)
			throw GradeTooHighException();
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return ;
	}
	_grade--;
}

void	Bureaucrat::decrementGrade() {
	try {
		if (_grade + 1 > 150)
			throw GradeTooLowException();
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return ;
	}
	_grade++;
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat& b) {
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return o;
}
