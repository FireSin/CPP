#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include "Contact.hpp"

class   PhoneBook
{
private:
	static int	Index;
	Contact	contacts[8];

	std::string	SetRightLenStr(std::string str);
	void		SearchContact();


public:
	void	Add();
	void	Search();
};

#endif