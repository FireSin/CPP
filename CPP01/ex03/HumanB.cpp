#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string nameHuman){
	this->name = nameHuman;
}

void	HumanB::setWeapon(Weapon &weap){
	this->weapon = &weap;
}

void	HumanB::attack(){
	std::cout << this->name << " attacks with their " << this->weapon->GetType() << std::endl;
}

HumanB::~HumanB()
{
}