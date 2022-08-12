#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
private:
	int  command(std::string lvl);
	void debug();
	void info();
	void warning();
	void error();
public:
	void complain(std::string level);
	Harl();
	~Harl();
};

#endif