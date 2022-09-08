#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(){
	// Form *a;
	// Intern irl;
	Bureaucrat b("asd", 100);
	Bureaucrat c = b;
	std::cout << b.getName() << std::endl;
	std::cout << c.getName() << std::endl;
	// a = irl.makeForm("robotomy request", "bender");
	// std::cout << *a;
	// delete a;
	// a = irl.makeForm("presidential pardon", "bender");
	// std::cout << *a;
	// delete a;
	// a = irl.makeForm("robotomy requests", "bender");
	return 0;
}