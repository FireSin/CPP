#include "Form.hpp"

Form::Form(std::string name, int gradeSigned, int gradeExec): _name(name), _gradeSigned(gradeSigned), _gradeExecute(gradeExec)
{
	if (gradeSigned < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (gradeSigned > 150 || gradeExec > 150)
		throw GradeTooLowException();
	this->_signed = false;
}

Form::~Form(){
}

Form::Form(const Form& other): _name(other._name), _gradeSigned(other._gradeSigned), _gradeExecute(other._gradeExecute){
	this->_signed = other._signed;
}

std::string	Form::getName() const{
	return this->_name;
}

bool		Form::getSigned() const{
	return this->_signed;
}

int	Form::getGradeSigned() const{
	return this->_gradeSigned;
}

int	Form::getGradeExecute() const{
	return this->_gradeExecute;
}

void Form::signForm(const Bureaucrat& burger){
	if (burger.getGrade() > this->_gradeSigned){
		std::cout << burger.getName() << " couldn't sign " << this->_name << " because ";
		throw GradeTooLowException();
	}
	std::cout << burger.getName() << " signed " << this->_name << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Form& frm){
	return out << "Name: " << frm.getName() << std::endl << "Signed: " << frm.getSigned() << std::endl << "Grade signed: " << frm.getGradeSigned() << std::endl << "Grade execute: " << frm.getGradeExecute() << std::endl;
}