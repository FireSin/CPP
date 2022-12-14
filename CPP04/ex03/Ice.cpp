#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){
}

Ice::~Ice(){
}

Ice::Ice(const Ice& other): AMateria("ice"){
	*this = other;
}

Ice& Ice::operator=(const Ice& other){
	this->_type = other._type;
	return *this;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const{
	return(new Ice());
}