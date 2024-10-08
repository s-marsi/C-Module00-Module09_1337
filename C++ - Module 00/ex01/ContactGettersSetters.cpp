#include "Contact.hpp"

// ------------ GETTERS -----------------------

std::string	Contact::getFisrtName()
{
	return (firstName);
}

std::string Contact::getLastName()
{
	return (lastName);
}

std::string Contact::getNickName()
{
	return (nickName);
}

std::string Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (darkestSecret);
}

// -------------------- SETTERS --------------------------

void	Contact::setFisrtName(std::string fName)
{
	firstName = fName;
}

void	Contact::setLastName(std::string lName)
{
	lastName = lName;
}

void	Contact::setNickName(std::string nName)
{
	nickName = nName;
}

void	Contact::setPhoneNumber(std::string pNumber)
{
	phoneNumber = pNumber;
}

void	Contact::setDarkestSecret(std::string dSecret)
{
	darkestSecret = dSecret;
}
