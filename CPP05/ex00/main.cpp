#include "Bureaucrat.hpp"

int main(){
	try
	{
		Bureaucrat a("Asa", 150);
		std::cout << a << std::endl;
		a.gradeUp();
		std::cout << a << std::endl;
		a.gradeDown();
		std::cout << a << std::endl;
		a.gradeDown();
		std::cout << a << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}