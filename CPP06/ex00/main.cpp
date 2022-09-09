#include "Convert.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cout<<"Please, input only one parameter"<<std::endl;
		return 1;
	}
	// try
	// {
	// 	double f = std::stoi(argv[1]);
	// 	std::cout << f << std::endl;
	// 	int i = static_cast<int>(f);
	// 	std::cout << i << std::endl;
	// 	char c = static_cast<char>(f);
	// 	std::cout << c << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::string str(argv[1]);
	Convert a;
	a.printConvertVal(argv[1]);
	return 0;
}