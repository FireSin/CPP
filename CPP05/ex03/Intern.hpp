#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	static Form*	makeRobo(const std::string &target);
	static Form*	makePres(const std::string &target);
	static Form*	makeShrub(const std::string &target);
public:
	Intern();
	~Intern();

	Form*	makeForm(std::string form, const std::string &target);
};

#endif