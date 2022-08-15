#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->RawBits = 0;
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	this->RawBits = i << this->bit;
}

Fixed::Fixed(const float i){
	std::cout << "Float constructor called" << std::endl;
	this->RawBits = roundf(i * (1 << this->bit));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
};

int Fixed::getRawBits() const{
	return this->RawBits;
}

void Fixed::setRawBits(int const raw){
	this->RawBits = raw;
}

float Fixed::toFloat() const{return float(this->RawBits) / float(1 << this->bit);}

int Fixed::toInt() const{return this->RawBits >> this->bit;}

Fixed& Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	this->RawBits = other.getRawBits();
	return *this;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fix){
    return out << fix.toFloat();
}