#include <iostream>
#include <string>


struct Data
{
	std::string name;
};

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	uintptr_t raw;
	Data ptr;
	Data *ptr2 = NULL;
	raw = serialize(&ptr);
	ptr2 = deserialize(raw);
	if (ptr2 == &ptr)
		std::cout << "DONE" << std::endl;
	return 0;
}