#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>

class Contact
{
private:
	static int	Index;
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

public:
	std::string *getFirstName();
	std::string *getLastName();
	std::string *getNickname();
	std::string *getPhoneNumber();
	std::string *getDarkestSecret();

	void setFild(std::string question, std::string *str);
};

#endif