#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "Main.hpp"

template<typename T>

class Array
{
private:
	T* _elems;
	unsigned int _size;
public:
	Array();
	Array(unsigned int n);
	Array(Array& other);
	Array& operator=(Array& other);
	T& operator[](unsigned int n);
	~Array();

	unsigned int	size() const;

	class OutOfRange: public std::exception{
		const char* what() const throw() {return "Out of range";}
	};
	
};

#endif