#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename Type>
void	swap(Type &a, Type &b){
	Type temp = a;
	a = b;
	b = temp;
}

template<typename Type>
Type	min(Type a, Type b){
	return a < b ? a : b;
}

template<typename Type>
Type	max(Type a, Type b){
	return a > b ? a : b;
}

#endif