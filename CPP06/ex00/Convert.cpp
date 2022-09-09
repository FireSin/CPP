#include "Convert.hpp"
#include <limits>


Convert::Convert(){
}

void	Convert::convertToInt(double val){
	std:: cout << "int: ";
	if (val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max())
		std::cout << "out of range" << std::endl;
	else if (val != val)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(val) << std::endl;
}

void	Convert::convertToChar(double val){
	std::cout << "char: ";
	if (val >= 32 && val < 127){
		std::cout << static_cast<char>(val) << std::endl;
	}
	else if (val >= 0 && val <= std::numeric_limits<char>::max())
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::convertToFloat(double val){
	std::cout << "float: ";
	if (val < std::numeric_limits<float>::min() && val > std::numeric_limits<float>::max()){
		std::cout << "out of range" << std::endl;
	}
	else{
		std::cout << static_cast<float>(val);
		if (val - static_cast<int>(val) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

double	Convert::convertToDouble(const char* input){
	return std::stod(input);
}

void	Convert::printConvertVal(const char* input){
	double val;
	try
	{
		val = this->convertToDouble(input);
	}
	catch(const std::exception& e)
	{
		std::string s(input);
		if (s.length() < 2)
			val = (double)input[0];
		else {
			std::cerr << e.what() << '\n';
			return ;
		}
	}
	this->convertToChar(val);
	this->convertToInt(val);
	this->convertToFloat(val);
	std::cout << "double: " << val;
	if (val - static_cast<int>(val) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

Convert::~Convert()
{
}
