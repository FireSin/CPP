#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

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

	class GradeTooHighException: public std::exception{
		const char *what() const throw() {return "Grade Too High";};
	};
	class GradeTooLowException: public std::exception{
		const char *what() const throw() {return "Grade Too Low";};
	};

	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bur);

#endif