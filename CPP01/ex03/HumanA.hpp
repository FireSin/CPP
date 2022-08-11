#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&weapon;
	std::string	name;
public:
	void	attack();
	HumanA(std::string nameHuman, Weapon &weap);
	~HumanA();
};

#endif