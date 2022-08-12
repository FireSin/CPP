#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					RawBits;
	static const int	bit = 8;
public:
	int getRawBits() const;
	void setRawBits(int const raw);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	Fixed();
	~Fixed();
};

#endif