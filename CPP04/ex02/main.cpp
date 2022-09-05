#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta[10];
	// Animal a;
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << meta[1]->getType() << std::endl;
	meta[1]->makeSound();
	std::cout << meta[5]->getType() << std::endl;
	meta[5]->makeSound();
	for (int j = 0; j < 10; j++)
		delete meta[j];
	return 0;
}