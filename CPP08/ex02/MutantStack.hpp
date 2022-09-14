#ifndef MUTANTSRACK_HPP
#define MUTANTSRACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

template<class T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack(): std::stack<T>(){};
	MutantStack(const MutantStack &other){*this = other;}
	MutantStack& operator=(const MutantStack &other){std::stack<T>::operator=(other); return *this;}
	~MutantStack(){};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin(){return this->c.begin();}
	iterator	end(){return this->c.end();}
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator	rbegin(){return this->c.rbegin();}
	reverse_iterator	rend(){return this->c.rend();}
};

#endif