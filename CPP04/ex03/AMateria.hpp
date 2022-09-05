#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
protected:
	std::string _type;
public:
	std::string& const getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	AMateria(std::string& const type);
	~AMateria();
};

#endif