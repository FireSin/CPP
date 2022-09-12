#include "iter.hpp"

void	rewrite(int &i){
	i = 5;
}

int	main(){
	int mass[] = {1, 2 , 3, 4, 5};
	for (int i = 0; i < 5; i++){
		std::cout << mass[i];
	}
	std::cout << std::endl;
	iter(mass, 5, rewrite);
	for (int i = 0; i < 5; i++){
		std::cout << mass[i];
	}
	std::cout << std::endl;
	return 0;
}