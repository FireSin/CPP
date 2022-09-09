#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>

class Convert
{
private:
	void	convertToInt(double val);
	void	convertToChar(double val);
	void	convertToFloat(double val);
	double	convertToDouble(const char* input);
	bool	nanVal(const char* input);
	bool	infVal(const char* input);
public:
	Convert();
	~Convert();


	void	printConvertVal(const char* input);

	class CantConvert: public std::exception{
		const char *what() const throw() {return "Can't convert this";};
	};
};

#endif