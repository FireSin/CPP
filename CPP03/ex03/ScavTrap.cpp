#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap constructor" << std::endl;
	this->setDamage(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}