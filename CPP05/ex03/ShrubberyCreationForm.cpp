#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
	std::ofstream	fout;

	if (!this->getSigned())
		throw FormDontSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	fout.open((this->getName() + "_shrubbery"));
	if (!fout.is_open())
		throw ErrorOpenFileException();
	fout<<"ASCII Tree is here";
	fout.close();	
}