#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	void	makeSound() const;
	std::string	getType() const;

	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);

	WrongAnimal();
	virtual ~WrongAnimal();
};

#endif