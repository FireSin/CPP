#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
private:
	Brain* brainCat;
public:
	void	makeSound() const;
	std::string	getType() const;

	Cat(const Cat& other);
	Cat& operator=(const Cat& other);

	Cat();
	~Cat();
};

#endif