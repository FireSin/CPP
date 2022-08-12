#include "Harl.hpp"

int	main(int argc, char *argv[]){
	Harl	test;

	if (argc == 2)
		test.complain(argv[1]);
	else
		std::cout << "Probably complaining about insignificant problems" << std::endl;
	return 0;
}