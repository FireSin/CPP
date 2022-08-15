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
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;

	Fixed&	operator=(const Fixed &other);
	
	Fixed();
	Fixed(const int i);
	Fixed(const float i);
	Fixed(const Fixed &other);
	~Fixed();
};
	std::ostream& operator<<(std::ostream& out, const Fixed& fix);

#endif