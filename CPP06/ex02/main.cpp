#include <ctime>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void){
	srand((unsigned)time(0)); 
    int i = (rand()%3)+1;
    switch (i)
	{
	case 1:
		return new A();
	case 2:
		return new B();
	case 3:
		return new C();
	}
	return NULL;
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "It's A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "It's B" << std::endl;
	else if (p)
		std::cout << "It's C" << std::endl;
}

void identify(Base& p){
	try
	{
		Base ptr = dynamic_cast<A&>(p);
		std::cout << "It's A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			Base ptr2 = dynamic_cast<B&>(p);
			std::cout << "It's B" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "It's C" << std::endl;
		}
		
	}
}

int main() 
{
	Base* p = generate();
	identify(p);
	identify(*p);
	delete p;
	return 0;
}