#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	void highFivesGuys(void);

	FragTrap(std::string name);
	~FragTrap();
};

#endif