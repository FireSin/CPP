#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->_mas.reserve(n);
}

Span::Span(const Span& other){
	this->_mas = other._mas;
}

Span&	Span::operator=(const Span& other){
	this->_mas = other._mas;
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int i){
	if (this->_mas.size() == this->_mas.capacity())
		throw SpanFull();
	this->_mas.push_back(i);
}

int		Span::shortestSpan(){
	if (this->_mas.size() < 2)
		throw SpanEmpty();
	int sh = this->longestSpan();
	std::vector<int> tmp = this->_mas;
	sort(tmp.begin(), tmp.end());
	for (std::vector<int>::iterator i = tmp.begin(); i < tmp.end() - 1; i++)
	{
		if (i + 1 != tmp.end() && sh > abs(*i - *(i + 1))){
			sh = abs(*i - *(i + 1));
		}
	}
	return sh;
}

int		Span::longestSpan(){
	if (this->_mas.size() < 2)
		throw SpanEmpty();
	return *std::max_element(this->_mas.begin(), this->_mas.end()) - *std::min_element(this->_mas.begin(), this->_mas.end());
}

void	Span::addRangeNumber(std::vector<int>::iterator iStart, std::vector<int>::iterator iEnd){
	if (this->_mas.size() == this->_mas.capacity() || this->_mas.size() + std::distance(iStart, iEnd) > this->_mas.capacity())
		throw SpanFull();
	this->_mas.insert(this->_mas.end(), iStart, iEnd);
}
