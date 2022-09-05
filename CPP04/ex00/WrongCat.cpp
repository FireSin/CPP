#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other){
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
	this->type = other.type;
	return *this;
}


WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "WRONG MEOW!" << std::endl;
}

std::string WrongCat::getType() const{
	return this->type;
}