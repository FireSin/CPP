#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
	Form* a = new ShrubberyCreationForm("A28");
	// Form* a2 = new RobotomyRequestForm("A228");
	Bureaucrat b("Asa", 5);
	b.signForm(*a);
	b.executeForm(*a);
	delete a;
	// delete a2;
	return 0;
}