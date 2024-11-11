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

bool	get_input(std::string  msg, std::string*  input);
void	print_header();
std::string	truncateText(std::string text);
class	PhoneBook
{
	Contact	contacts[MAX_CONTACT];
	int	contact_number;
	int	contact_index;

	public:
		PhoneBook();
		void	ADD();
		void	SEARCH();
		void	EXIT();
};


#endif