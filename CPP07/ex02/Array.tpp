#include "Main.hpp"

template<typename T>
Array<T>::Array(): _elems(NULL), _size(0){}

template<typename T>
Array<T>::Array(unsigned int n){
	this->_elems = new T[n];
	this->_size = n;
}

template<typename T>
Array<T>::Array(Array& other){
	*this = other;
}

template<typename T>
T& Array<T>::operator[](unsigned int n){
	if (n >= this->_size)
		throw OutOfRange();
	return this->_elems[n];
}

template<typename T>
Array<T>& Array<T>::operator=(Array& other){
	if (other._size > 0){
		this->_elems = new T[other._size];
		for (int i = 0; i < other._size; i++)
			this->_elems[i] = other._elems[i];
	}
	this->_size = other._size;
	return *this;
}


template<typename T>
unsigned int	Array<T>::size() const{
	return this->_size;
}

template<typename T>
Array<T>::~Array()
{
	if (this->_size > 0)
		delete[] this->_elems;
}
