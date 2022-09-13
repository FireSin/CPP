#ifndef MUTANTSRACK_HPP
#define MUTANTSRACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template<class T>
class MutantStack: public std::stack<T>, public std::vector<T>
{
private:
	/* data */
public:
	MutantStack();
	~MutantStack();
};

#endif