#include "Cat.hpp"

Cat::Cat(): Animal(){
	this->type = "Cat";
	this->brainCat = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other){
	*this = other;
}

Cat& Cat::operator=(const Cat& other){
	this->type = other.type;
	this->brainCat = other.brainCat;
	return *this;
}

Cat::~Cat(){
	delete this->brainCat;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "MEOW!" << std::endl;
}

std::string Cat::getType() const{
	return this->type;
}