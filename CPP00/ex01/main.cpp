#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	book;

	std::string	cmd;
	while (std::cout << "Set command: " && getline(std::cin, cmd) && cmd != "EXIT" && cmd != "exit")
	{
		if (cmd == "ADD" || cmd == "add")
			book.Add();
		if (cmd == "SEARCH" || cmd == "search")
			book.Search();
	}
	return (0);
}