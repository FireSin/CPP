#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor" << std::endl;
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other.name + "_clap_trap"), FragTrap(other.name), ScavTrap(other.name){
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	this->name = other.name;
	this->damage = other.damage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << "Its name " << this->name << ". ClapTrap name " << ClapTrap::name << std::endl;
}