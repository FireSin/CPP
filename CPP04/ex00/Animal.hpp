#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	virtual void	makeSound() const;
	virtual std::string	getType() const;

	Animal(const Animal& other);
	Animal& operator=(const Animal& other);

	Animal();
	virtual ~Animal();
};

#endif