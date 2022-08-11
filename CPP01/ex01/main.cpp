#include "Zombie.hpp"

int	main(){
	Zombie*	zombHord = NULL;
	int N = 10;
	zombHord = zombHord->zombieHorde(N, "zomb");
	for (int i = 0; i < N; i++) zombHord[i].announce();
	delete [] zombHord;
	return 0;
}