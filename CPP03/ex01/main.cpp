#include "ScavTrap.hpp"

int main(){
	ScavTrap a("test");
	a.attack("123");
	a.beRepaired(10);
	a.beRepaired(10);
	a.attack("123");
	a.attack("123");
	a.guardGate();
	return 0;
}