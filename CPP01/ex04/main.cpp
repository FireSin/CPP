#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char *argv[]){
	std::ofstream	fout;
	std::ifstream	fin;
	std::string		str;
	size_t			pos;

	if (argc != 4){
		std::cout << "Error arguments" << std::endl;
		return 0;
	}
	fout.open(((std::string)argv[1] + ".replace"));
	fin.open(argv[1]);
	if (!fin.is_open() || !fout.is_open()){
		std::cout << "Error open" << std::endl;
		return 0;
	}
	str.assign(std::istreambuf_iterator<char>(fin), std::istreambuf_iterator<char>());
	pos = str.find(argv[2]);
	while (pos != std::string::npos){
		str = str.erase(pos, ((std::string) argv[2]).length());
		str = str.insert(pos, argv[3]);
		pos = str.find(argv[2]);
	}
	fout << str;
	fin.close();
	fout.close();
	return 0;
}