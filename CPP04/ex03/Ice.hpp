#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	void use(ICharacter& target);
	AMateria* clone() const;

	Ice(const Ice& other);
	Ice& operator=(const Ice& other);

	Ice();
	~Ice();
};

#endif