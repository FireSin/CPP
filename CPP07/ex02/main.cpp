#include "Main.hpp"
#include <unistd.h>

int main(){
	Array<int> arr(3);
	std::cout << arr.size() << std::endl;
	int i = 0;
	while(42){
		try
		{
			arr[i] = i;
			std::cout << arr[i] << " ";
		}
		catch(const std::exception& e)
		{
			std::cout << std::endl;
			std::cerr << e.what();
			break;
		}
		i++;
	}
	std::cout << std::endl;
	Array<char> arrc(3);
	std::cout << arrc.size() << std::endl;
	i = 0;
	while(42){
		try
		{
			arrc[i] = 'a';
			std::cout << arrc[i] << " ";
		}
		catch(const std::exception& e)
		{
			std::cout << std::endl;
			std::cerr << e.what();
			break;
		}
		i++;
	}
}