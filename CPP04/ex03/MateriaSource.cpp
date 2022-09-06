#include "MateriaSource.hpp"


MateriaSource::MateriaSource(){
}

MateriaSource::~MateriaSource(){
	int i = 0;
	while (this->_mat[i])
	{
		delete this->_mat[i];
		i++;
	}
}

void MateriaSource::learnMateria(AMateria* nMat){
	for (int i = 0; i < 4; i++)
	{
		if(!this->_mat[i]){
			this->_mat[i] = nMat;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i++)
	{
		if (!this->_mat[i])
			break;
		if(this->_mat[i]->getType() == type)
			return this->_mat[i];
	}
	return 0;
}