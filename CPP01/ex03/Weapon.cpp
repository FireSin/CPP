#include "Weapon.hpp"

void	Weapon::setType(std::string newType){
	this->type = newType;
}

const std::string	Weapon::GetType(){
	return this->type;
}

Weapon::Weapon()
{
}

Weapon::Weapon(std::string typeWeapon){
	this->type = typeWeapon;
}

Weapon::~Weapon()
{
}