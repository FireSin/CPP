#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	std::vector<int> _mas;
public:
	Span(unsigned int n);
	Span(const Span& other);
	Span&	operator=(const Span& other);
	~Span();

	void	addNumber(int i);
	void	addRangeNumber(std::vector<int>::iterator iStart, std::vector<int>::iterator iEnd);
	int		shortestSpan();
	int		longestSpan();

	class SpanFull: public std::exception{
		const char* what() const throw() {return "No space to add new element(s)";}
	};

	class SpanEmpty: public std::exception{
		const char* what() const throw() {return "Span is empty or only one element";}
	};
};

#endif