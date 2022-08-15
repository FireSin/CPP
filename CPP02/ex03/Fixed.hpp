#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					RawBits;
	static const int	bit = 8;
public:
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

	Fixed&	operator=(const Fixed &other);

	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;

	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;

	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	static Fixed&	min(Fixed &a, Fixed &b);	
	static const Fixed&	min(const Fixed &a, const Fixed &b);	
	static Fixed&	max(Fixed &a, Fixed &b);	
	static const Fixed&	max(const Fixed &a, const Fixed &b);	

	Fixed();
	Fixed(const int i);
	Fixed(const float i);
	Fixed(const Fixed &other);
	~Fixed();
};
	std::ostream& operator<<(std::ostream& out, const Fixed& fix);

#endif