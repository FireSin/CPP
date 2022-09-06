#include "Character.hpp"

Character::Character(std::string name){
	this->_name = name;
}

Character::~Character()
{
}

std::string const &Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 3; i++)
		if(!this->_inventory[i]){
			this->_inventory[i] = m;
			break;
		}
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if(0 <= idx && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

