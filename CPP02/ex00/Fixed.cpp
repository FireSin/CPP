#include "Fixed.hpp"

Fixed::Fixed(){
	this->RawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
};
Fixed &Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	this->RawBits = other.getRawBits();
	return *this;
};

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->RawBits;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->RawBits = raw;
}