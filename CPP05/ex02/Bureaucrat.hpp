#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	void		gradeUp();
	void		gradeDown();

	void	signForm(Form& frm) const;
	void	executeForm(Form const & form);

	class GradeTooHighException: public std::exception{
		const char *what() const throw() {return "Grade Too High";};
	};
	class GradeTooLowException: public std::exception{
		const char *what() const throw() {return "Grade Too Low";};
	};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bur);

#endif