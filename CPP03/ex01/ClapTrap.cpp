#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = name;
	this->damage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	this->name = other.name;
	this->damage = other.damage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if(this->energyPoints <= 0)
		std::cout << "Not enough energy" << std::endl;
	else
		std::cout << "The dead do not attack, there is no life" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		this->hitPoints -= (int)amount;
		std::cout << "ClapTrap " << this->name << " take damage " << amount << ". Hit points " << this->hitPoints << std::endl;
	}
	else if(this->energyPoints <= 0)
		std::cout << "Not enough energy" << std::endl;
	else
		std::cout << this->name << " is already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << this->name << " restored " << amount << " hit points. Hit points: "<< this->hitPoints << std::endl;
	}
	else if(this->energyPoints <= 0)
		std::cout << "Not enough energy" << std::endl;
	else
		std::cout << "The dead do not repaired, there is no life" << std::endl;
}