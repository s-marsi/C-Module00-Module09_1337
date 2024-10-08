#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string.h>
#include <iomanip>
#include <stdlib.h>

class Contact
{
	private :
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public :
		// ------------ GETTERS -----------------------
		std::string	getFisrtName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();

		// -------------------- SETTERS --------------------------

		void	setFisrtName(std::string fName);
		void	setLastName(std::string lName);
		void	setNickName(std::string nName);
		void	setPhoneNumber(std::string pNumber);
		void	setDarkestSecret(std::string dSecret);
};

#endif