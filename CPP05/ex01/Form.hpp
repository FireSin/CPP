#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeSigned;
	const int			_gradeExecute;
public:
	Form(std::string name, int gradeSigned, int gradeExec);
	~Form();

	std::string	getName() const;
	bool		getSigned() const;
	int	getGradeSigned() const;
	int	getGradeExecute() const;

	void beSigned(const Bureaucrat& burger);

	class GradeTooHighException: public std::exception{
		const char *what() const throw() {return "Grade Too High";};
	};
	class GradeTooLowException: public std::exception{
		const char *what() const throw() {return "Grade Too Low";};
	};
	class FormIsAlreadySignedException: public std::exception{
		const char *what() const throw() {return "is already signed";};
	};
};

std::ostream& operator<<(std::ostream& out, const Form& frm);

#endif