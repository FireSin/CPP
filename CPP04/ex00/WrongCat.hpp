#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	void	makeSound() const;
	std::string	getType() const;

	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);

	WrongCat();
	~WrongCat();
};

#endif