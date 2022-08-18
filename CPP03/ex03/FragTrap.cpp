#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name){
	std::cout << "FragTrap constructor" << std::endl;
	this->damage = 30;
	this->energyPoints = 100;
	this->hitPoints = 100;
}

FragTrap::FragTrap(const FragTrap& other):ClapTrap(other.name){
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	this->name = other.name;
	this->damage = other.damage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap ✋" << std::endl;
}