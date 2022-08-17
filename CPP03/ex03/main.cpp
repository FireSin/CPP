#include "DiamondTrap.hpp"

int main(){
	DiamondTrap a("test");
	a.whoAmI();
	std::cout << a.getEnergyPoints() << std::endl;
	std::cout << a.getHitPoints() << std::endl;
	a.attack("asd");
	return 0;
}