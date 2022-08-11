#include "Zombie.hpp"

Zombie::Zombie (void){};

Zombie::~Zombie( void ){
	std::cout << this->name << " destructor" << std::endl;
}

void	Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
