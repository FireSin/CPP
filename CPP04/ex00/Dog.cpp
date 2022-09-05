#include "Dog.hpp"

Dog::Dog(): Animal(){
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other){
	*this = other;
}

Dog& Dog::operator=(const Dog& other){
	this->type = other.type;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "WOOF!" << std::endl;
}

std::string Dog::getType() const{
return this->type;
}