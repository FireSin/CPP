#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string name; 
	int			hitPoints;
	int			energyPoints;
	int			damage;
public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setHitPoints(int hp);
	void setEnergyPoints(int ep);
	void setDamage(int dmg);

	int getHitPoints();
	int getEnergyPoints();

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();
};

#endif