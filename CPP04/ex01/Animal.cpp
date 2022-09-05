#include "Animal.hpp"

Animal::Animal(){
	this->type = "Many types";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other){
	*this = other;
}

Animal& Animal::operator=(const Animal& other){
	this->type = other.type;
	return *this;
}


Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const{
	std::cout << "Many sounds" << std::endl;
}

std::string Animal::getType() const{
	return this->type;
}