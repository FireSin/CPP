#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria*	_mat[4];
public:
	MateriaSource();
	~MateriaSource();

	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const &type);
};

#endif