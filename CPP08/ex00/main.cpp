#include "easyfind.hpp"

int main(){
	std::vector<int> a;
	a.push_back(10);
	a.push_back(11);
	a.push_back(12);
	a.push_back(14);
	std::vector<int>::iterator iter;
	iter = easyfind(a, 10);
	std::cout << *iter << std::endl;

	std::array<int, 4> arr = {1, 97, -100, 5};
	std::array<int, 4>::iterator iter2;
	iter2 = easyfind(arr, 1);
	std::cout << *iter2 << std::endl;
	iter2++;
	std::cout << *iter2 << std::endl;

	try
	{
		iter = easyfind(a, 0);
	}
	catch(const std::exception& e)
	{
		std::cout << "Not found" << '\n';
	}
	return 0;
}