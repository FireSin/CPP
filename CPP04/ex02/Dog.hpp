#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
private:
	Brain* brainDog;
public:
	void	makeSound() const;
	std::string	getType() const;

	Dog(const Dog& other);
	Dog& operator=(const Dog& other);

	Dog();
	~Dog();
};

#endif