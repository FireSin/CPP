#include "AMateria.hpp"

AMateria::AMateria(std::string const &type){
	this->_type = type;
}

AMateria::~AMateria(){
}

AMateria::AMateria(const AMateria& other){
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other){
	this->_type = other._type;
	return *this;
}

std::string const &AMateria::getType() const{
	return this->_type;
}

void AMateria::use(ICharacter& target){
	target.use(5, target);
}