#include "Fixed.hpp"

Fixed::Fixed(){
	this->RawBits = 0;
}

Fixed::Fixed(const int i){
	this->RawBits = i << this->bit;
}

Fixed::Fixed(const float i){
	this->RawBits = roundf(i * (1 << this->bit));
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &other){
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
	this->RawBits = other.getRawBits();
	return *this;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fix){
    return out << fix.toFloat();
}

bool Fixed::operator==(const Fixed &other) const{
	return this->RawBits == other.RawBits;
}

bool	Fixed::operator!=(const Fixed &other) const{
	return !(*this == other);
}
bool	Fixed::operator>(const Fixed &other) const{
	return this->RawBits > other.RawBits;
}
bool	Fixed::operator<(const Fixed &other) const{
	return this->RawBits < other.RawBits;
}
bool	Fixed::operator>=(const Fixed &other) const{
	return this->RawBits >= other.RawBits;
}
bool	Fixed::operator<=(const Fixed &other) const{
	return this->RawBits <= other.RawBits;
}

Fixed	Fixed::operator+(const Fixed &other) const{
	Fixed tmp;
	tmp.RawBits = this->RawBits + other.RawBits;
	return tmp;
}

Fixed	Fixed::operator-(const Fixed &other) const{
	Fixed tmp;
	tmp.RawBits = this->RawBits - other.RawBits;
	return tmp;
}

Fixed	Fixed::operator*(const Fixed &other) const{
	Fixed tmp;
	tmp.RawBits = this->getRawBits() * other.toFloat();
	return tmp;
}

Fixed	Fixed::operator/(const Fixed &other) const{
	Fixed tmp;
	tmp.RawBits = this->getRawBits() / other.toFloat();
	return tmp;
}

Fixed	Fixed::operator++(){
	this->RawBits++;
	return *this;
}
Fixed	Fixed::operator++(int){
	Fixed tmp(*this);
	this->RawBits++;
	return tmp;
}
Fixed	Fixed::operator--(){
	this->RawBits--;
	return *this;
}
Fixed	Fixed::operator--(int){
	Fixed tmp(*this);
	this->RawBits++;
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	if (a < b)
		return a;
	return b;
};	
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
};	
const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	if (a > b)
		return a;
	return b;
};