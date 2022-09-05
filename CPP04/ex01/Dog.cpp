#include "Dog.hpp"

Dog::Dog(): Animal(){
	this->type = "Dog";
	this->brainDog = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other){
	*this = other;
}

Dog& Dog::operator=(const Dog& other){
	this->type = other.type;
	this->brainDog = other.brainDog;
	return *this;
}

Dog::~Dog(){
	delete this->brainDog;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "WOOF!" << std::endl;
}

std::string Dog::getType() const{
return this->type;
}