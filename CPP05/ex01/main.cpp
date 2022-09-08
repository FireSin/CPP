#include "Form.hpp"

int main(){
	Form af("a38", 100, 50);
	std::cout << af;
	Bureaucrat a("Asa", 150);
	Bureaucrat b("Alla", 10);
	a.signForm(af);
	b.signForm(af);
	b.signForm(af);
	return 0;
}