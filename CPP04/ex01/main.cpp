#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta[100];
	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	for (int j = 0; j < 100; j++)
		delete meta[j];
	return 0;
}