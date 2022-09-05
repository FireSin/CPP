#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->type = "Many types";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	this->type = other.type;
	return *this;
}


WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "Many Wrong sounds" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->type;
}