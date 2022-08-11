#include "Zombie.hpp"

int	main(){
	Zombie	Zombi;
	Zombi.randomChump("heap");
	Zombie* Zombi2 = Zombi.newZombie("stack");
	Zombi2->announce();
	delete(Zombi2);
	return 0;
}