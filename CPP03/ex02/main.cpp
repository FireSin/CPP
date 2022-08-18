#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	ScavTrap a("test");
	FragTrap b("test2");
	FragTrap c = b;
	a.attack("123");
	a.beRepaired(10);
	a.beRepaired(10);
	a.attack("123");
	a.guardGate();
	b.highFivesGuys();
	c.attack("asd");
	return 0;
}