#include "Cat.hpp"

Cat::Cat(): Animal(){
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other){
	*this = other;
}

Cat& Cat::operator=(const Cat& other){
	this->type = other.type;
	return *this;
}


Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "MEOW!" << std::endl;
}

std::string Cat::getType() const{
	return this->type;
}