#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	void use(ICharacter& target);
	AMateria* clone() const;

	Cure(const Cure& other);
	Cure& operator=(const Cure& other);

	Cure();
	~Cure();
};

#endif