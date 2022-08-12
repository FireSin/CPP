#include "Harl.hpp"

void Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	void (Harl::*pt[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	enum lvl {debag, info, warning, error};
	switch (this->command(level))
	{
	case debag:
		(this->*pt[debag])();
	case info:
		(this->*pt[info])();
	case warning:
		(this->*pt[warning])();
	case error:
		(this->*pt[error])();
		break;
	default:
		std::cout << "Probably complaining about insignificant problems" << std::endl;
		break;
	}
}

int  Harl::command(std::string lvl){
	if (lvl == "debug")
		return 0;
	if (lvl == "info")
		return 1;
	if (lvl == "warning")
		return 2;
	if (lvl == "error")
		return 3;
	return (4);
}

Harl::Harl()
{
}

Harl::~Harl()
{
}