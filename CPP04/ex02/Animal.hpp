#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string	type;
public:
	virtual void	makeSound() const = 0;
	virtual std::string	getType() const = 0;

	Animal(const Animal& other);
	Animal& operator=(const Animal& other);

	Animal();
	virtual ~Animal();
};

#endif