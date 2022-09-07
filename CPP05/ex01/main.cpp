#include "Form.hpp"

int main(){
	try
	{
		Form af("a38", 100, 50);
		std::cout << af;
		// Form bf("b38", -100, 50);
		// std::cout << bf;
		Bureaucrat a("Asa", 150);
		Bureaucrat b("Alla", 10);
		af.signForm(b);		
		af.signForm(a);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}