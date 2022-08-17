#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor" << std::endl;
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->damage = FragTrap::damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << "Its name " << this->name << ". ClapTrap name " << ClapTrap::name << std::endl;
}