#ifndef CLAVTRAP_HPP
#define CLAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	void guardGate();

	ScavTrap(std::string name);
	~ScavTrap();
};

#endif