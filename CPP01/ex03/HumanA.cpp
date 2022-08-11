#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string nameHuman, Weapon &weap) : weapon(weap){
	this->name = nameHuman;
	this->weapon = weap;
}

void	HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->weapon.GetType() << std::endl;
}

HumanA::~HumanA()
{
}