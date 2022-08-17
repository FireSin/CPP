#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	ScavTrap a("test");
	FragTrap b("test2");
	a.attack("123");
	a.beRepaired(10);
	a.beRepaired(10);
	while (a.getEnergyPoints() > 0)
		a.attack("123");
	a.attack("123");
	a.guardGate();
	b.highFivesGuys();
	return 0;
}