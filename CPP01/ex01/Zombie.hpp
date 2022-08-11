#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	void	announce();
	Zombie*	zombieHorde( int N, std::string name );

	Zombie( void );
	~Zombie( void );
};

#endif