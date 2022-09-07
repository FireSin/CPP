#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat(){
}

std::string	Bureaucrat::getName() const{
	return this->_name;
}

int	Bureaucrat::getGrade() const{
	return this->_grade;
}

void	Bureaucrat::gradeUp(){
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::gradeDown(){
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade++;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other){
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
	this->_grade = other._grade;
	(std::string)this->_name = (std::string)other._name;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bur){
	return out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
}