#include "Span.hpp"

int main()
{
	try
	{
		
		Span sp = Span(5);
		// Span sp = Span(50000);
		// for (size_t i = 0; i < 50000; i++)
		// {
		// 	sp.addNumber(i*2);
		// }
		sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(20);
		// sp.addNumber(10);
		std::vector<int> vec;
		vec.push_back(0);
		vec.push_back(2);
		vec.push_back(123);
		vec.push_back(3);
		// vec.push_back(-4);
		sp.addRangeNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}