#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();

	void	execute(const Bureaucrat& executor) const;

	class ErrorOpenFileException: public std::exception{
		const char *what() const throw() {return "Can't open or create file";};
	};
};

#endif