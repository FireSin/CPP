#include "Character.hpp"

Character::Character(std::string name){
	this->_name = name;
}

Character::~Character()
{
}

Character::Character(const Character& other){
	*this = other;
}

Character& Character::operator=(const Character& other){
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = other._inventory[i];
	this->_name = other._name;	
	return *this;
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

