#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete(i);
	delete(j);
	delete(meta);
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* w = new WrongCat();
	std::cout << wmeta->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;
	wmeta->makeSound();
	w->makeSound();
	delete(w);
	delete(wmeta);
	return 0;
}