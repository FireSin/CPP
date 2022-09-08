#include "Intern.hpp"


Intern::Intern(){
}

Intern::~Intern(){
}

Form*	Intern::makeRobo(const std::string &target){
	return new RobotomyRequestForm(target);
}

Form*	Intern::makePres(const std::string &target){
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeShrub(const std::string &target){
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeForm(std::string form, const std::string &target){
	Form*(*pts[])(const std::string &target) = {makePres, makeRobo, makeShrub};
	std::string	lvl[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (int i = 0; i < 3; i++){
		if (lvl[i] == form){
			std::cout << "Intern creates " << form << std::endl;
			return pts[i](target);
		}
	}
	std::cout << "No form with name " << form << std::endl;
	return NULL;
}