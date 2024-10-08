#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"
#define MAX_CONTACT 8
#define   BLACK "\033[30m"  
#define     RED "\033[31m"  
#define   GREEN "\033[32m"
#define  YELLOW "\033[33m"
#define    BLUE "\033[34m"
#define   WHITE "\033[37m"
#define DEFAULT "\033[0m"

std::string	truncateText(std::string text);
bool	is_integer(std::string	number);
bool	is_only_alpha(std::string	str);
bool	is_valid_phone_number(std::string	number);

class PhoneBook
{
	private :
    	Contact contacts[MAX_CONTACT];
		static int	index;
		static int	num_contact;
	public :
		PhoneBook()
		{
			index = 0;
		}
		int getIndex()
		{
			return index;
		}
		void setIndex()
		{
			index++;
		}
		void ADD(std::string  firstName, std::string  lastName, std::string  nickName, std::string  phoneNumber, std::string  darkestSecret);
		void SEARCH();
		void EXIT();
};


#endif