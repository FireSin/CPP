#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>

void	iter(T *addr, unsigned int len, void (*funk)(T &)){
	for (unsigned int i = 0; i < len; i++)
		funk(addr[i]);
}

#endif