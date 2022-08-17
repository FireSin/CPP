#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name){
	std::cout << "FragTrap constructor" << std::endl;
	this->setDamage(30);
	this->setEnergyPoints(100);
	this->setHitPoints(100);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap ✋" << std::endl;
}