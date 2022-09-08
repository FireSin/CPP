#include "Bureaucrat.hpp"
#include "Form.hpp"


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

void	Bureaucrat::signForm(Form& frm) const{
	try
	{
		frm.beSigned(*this);
		std::cout << this->getName() << " signed " << frm.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << frm.getName() << " because ";
		std::cout << e.what() << '\n';
	}
}

void	Bureaucrat::executeForm(Form const & form){
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bur){
	return out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
}