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
	virtual ~Form();

	std::string	getName() const;
	bool		getSigned() const;
	int	getGradeSigned() const;
	int	getGradeExecute() const;

	void beSigned(const Bureaucrat& burger);
	virtual void	execute(const Bureaucrat& executor) const = 0;

	class GradeTooHighException: public std::exception{
		const char *what() const throw() {return "Grade Too High";};
	};
	class GradeTooLowException: public std::exception{
		const char *what() const throw() {return "Grade Too Low";};
	};
	class FormIsAlreadySignedException: public std::exception{
		const char *what() const throw() {return "is already signed";};
	};

	class FormDontSignedException: public std::exception{
		const char *what() const throw() {return "Form don't signed";};
	};
};

std::ostream& operator<<(std::ostream& out, const Form& frm);

#endif