#include <iostream>
#include <string>
#include <fstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	PhoneBook::Index = 0;

void	PhoneBook::Add()
{
	contacts[Index].setFild("Input first name: ", contacts[Index].getFirstName());
	contacts[Index].setFild("Input last name: ", contacts[Index].getLastName());
	contacts[Index].setFild("Input nickname: ", contacts[Index].getNickname());
	contacts[Index].setFild("Input phone number: ", contacts[Index].getPhoneNumber());
	contacts[Index].setFild("Input darkest secret: ", contacts[Index].getDarkestSecret());
	Index++;
	if (Index == 8)
		Index = 0;
}

std::string	PhoneBook::SetRightLenStr(std::string str){
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	for (int n = str.length(); n < 10 && n > 0; n++)
		str = " " + str;
	return(str);
}

void	PhoneBook::SearchContact()
{
	std::string	sch;
	std::cout << "Set index: " && getline(std::cin, sch);
	if (sch.length() > 1 || sch.empty()){
		std::cout << "Incorrect index" << std::endl;
		return;
	}
	int i;
	i = atoi(sch.c_str());
	if (i < 1 || i > 8 || *contacts[i - 1].getFirstName() == ""){
		std::cout << "Incorrect index" << std::endl;
		return ;
	}
	std::cout << std::endl << "First Name: " << *contacts[i - 1].getFirstName() << std::endl;
	std::cout << "Last Name: " << *contacts[i - 1].getLastName() << std::endl;
	std::cout << "Nickname: " << *contacts[i - 1].getNickname() << std::endl;
	std::cout << "Phone number: " << *contacts[i - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << *contacts[i - 1].getDarkestSecret() << std::endl << std::endl;
}

void	PhoneBook::Search()
{
	if ((*contacts[0].getFirstName()).empty()){
		std::cout << "PhoneBook is empty" << std::endl;
		return;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  index   |first name| last name| nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int n = 0; n < 8 && *contacts[n].getFirstName() != ""; n++){
		std::cout << "|         " << n + 1;
		std::cout << "|" << SetRightLenStr(*contacts[n].getFirstName());
		std::cout << "|" << SetRightLenStr(*contacts[n].getLastName());
		std::cout << "|" << SetRightLenStr(*contacts[n].getNickname()) << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	SearchContact();
}
