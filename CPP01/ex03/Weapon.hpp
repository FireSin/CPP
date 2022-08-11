#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	void	setType(std::string newType);
	const std::string	GetType();
	Weapon();
	Weapon(std::string typeWeapon);
	~Weapon();
};

#endif