 #include "Zombie.hpp"

 Zombie*	Zombie::newZombie(std::string name){
	Zombie* Zomb;
	Zomb = new Zombie;
	Zomb->name = name;
	return Zomb;
}