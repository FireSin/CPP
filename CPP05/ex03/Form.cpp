#include "Form.hpp"

Form::Form(std::string name, int gradeSigned, int gradeExec):_name(name), _gradeSigned(gradeSigned), _gradeExecute(gradeExec)
{
	if (gradeSigned < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (gradeSigned > 150 || gradeExec > 150)
		throw GradeTooLowException();
	this->_signed = false;
}

Form::~Form(){
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

void Form::beSigned(const Bureaucrat& burger){
	if (burger.getGrade() > this->_gradeSigned)
		throw GradeTooLowException();
	if (this->_signed)
		throw FormIsAlreadySignedException();
	this->_signed = true;	
}

std::ostream& operator<<(std::ostream& out, const Form& frm){
		return out << "Name: " << frm.getName() << std::endl << "Signed: " << frm.getSigned() << std::endl << "Grade signed: " << frm.getGradeSigned() << std::endl << "Grade execute: " << frm.getGradeExecute() << std::endl;
}