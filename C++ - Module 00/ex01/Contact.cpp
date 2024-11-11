#include "Contact.hpp"

std::string Contact::getFirstName()
{
	return firstName;
}
std::string Contact::getLastName()
{
	return lastName;
}
std::string Contact::getNickName()
{
	return nickName;
}
std::string Contact::getPhoneNumber()
{
	return phoneNumber;
}
std::string Contact::getDarkestSecret()
{
	return darkestSecret;
}

void Contact::setFirstName(std::string value)
{
	firstName = value;
}

void Contact::setLastName(std::string value)
{
	lastName = value;
}

void Contact::setNickName(std::string value)
{
	nickName = value;
}

void Contact::setPhoneNumber(std::string value)
{
	phoneNumber = value;
}

void Contact::setDarkestSecret(std::string value)
{
	darkestSecret = value;
}
