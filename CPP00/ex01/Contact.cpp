#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string *Contact::getFirstName(){return &FirstName;}

std::string *Contact::getLastName() {return &LastName;}

std::string *Contact::getNickname() {return &Nickname;}

std::string *Contact::getPhoneNumber() {return &PhoneNumber;}

std::string *Contact::getDarkestSecret() {return &DarkestSecret;}



void Contact::setFild(std::string question, std::string *str){
	while (true){
		std::cout << question;
		getline(std::cin, *str);
		if (std::cin.eof() || !(*str).empty())
			break;
	}
}
