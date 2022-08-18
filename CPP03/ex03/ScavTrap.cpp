#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap constructor" << std::endl;
	this->damage = 20;
	this->energyPoints = 50;
	this->hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap(other.name){
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	this->name = other.name;
	this->damage = other.damage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if(this->energyPoints <= 0)
		std::cout << "Not enough energy" << std::endl;
	else
		std::cout << "The dead do not attack, there is no life" << std::endl;
}